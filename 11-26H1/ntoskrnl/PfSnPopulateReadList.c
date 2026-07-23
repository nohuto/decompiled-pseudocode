/*
 * XREFs of PfSnPopulateReadList @ 0x14098A100
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     wcsncmp @ 0x14053A620 (wcsncmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     NtCreateEvent @ 0x1408F5E80 (NtCreateEvent.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     PfSnGetSectionObject @ 0x14098A718 (PfSnGetSectionObject.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x14098B194 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpOpenHandleClose @ 0x14098B268 (PfpOpenHandleClose.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnPopulateReadList(__int64 a1)
{
  __int64 v1; // r14
  char v2; // r12
  _QWORD *v3; // r15
  __int64 v4; // rax
  _KPROCESS *v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // eax
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned int *v10; // rax
  int v11; // esi
  int v12; // ebx
  char *v13; // rdx
  char *v14; // r13
  char *v15; // r10
  unsigned int v16; // ebx
  unsigned __int32 v17; // edi
  __int64 v18; // rcx
  char *v19; // r14
  unsigned int v20; // edx
  unsigned int v21; // eax
  bool v22; // zf
  __int64 *v23; // r15
  __int64 *v24; // rdi
  const wchar_t *v25; // rsi
  __int64 v26; // rdi
  int v27; // eax
  __int64 Pool2; // rax
  int v29; // r12d
  __int64 v30; // r11
  BOOL v31; // r10d
  unsigned int v32; // r9d
  int v33; // edi
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned int v36; // eax
  __int64 v37; // rcx
  unsigned int v38; // edx
  int v39; // ecx
  int v40; // eax
  bool v41; // [rsp+58h] [rbp-B0h]
  char v42; // [rsp+59h] [rbp-AFh] BYREF
  __int64 v43; // [rsp+60h] [rbp-A8h]
  int v44[2]; // [rsp+68h] [rbp-A0h]
  __int64 v45; // [rsp+70h] [rbp-98h]
  __int64 v46; // [rsp+78h] [rbp-90h]
  _QWORD *v47; // [rsp+80h] [rbp-88h]
  char *v48; // [rsp+88h] [rbp-80h]
  char *i; // [rsp+90h] [rbp-78h]
  __int64 v50; // [rsp+98h] [rbp-70h]
  int v51; // [rsp+A0h] [rbp-68h]
  HANDLE EventHandle; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-50h]
  __int64 v55; // [rsp+C8h] [rbp-40h]
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-38h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-28h] BYREF
  _OWORD v58[3]; // [rsp+110h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  *(&ObjectAttributes.Length + 1) = 0;
  v2 = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(v58, 0, sizeof(v58));
  v45 = a1;
  v3 = 0LL;
  DestinationString = 0LL;
  v4 = *(_QWORD *)(v1 + 8);
  EventHandle = 0LL;
  v5 = *(_KPROCESS **)(v1 + 16);
  v50 = v1;
  v43 = v4;
  v47 = 0LL;
  v42 = 0;
  KiStackAttachProcess(v5, 0, (__int64)v58);
  _interlockedbittestandset((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 0x19u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v7 >= 0 )
  {
    v8 = v43;
    v9 = v45;
    v53 = 0LL;
    v10 = *(unsigned int **)v43;
    v11 = *(_DWORD *)(v45 + 40);
    v12 = *(_DWORD *)(v43 + 100) & 7 | 8;
    v44[1] = v11;
    v13 = (char *)v10 + v10[21];
    v14 = (char *)v10 + v10[23];
    v15 = (char *)v10 + v10[25];
    v55 = *(_QWORD *)(v43 + 64);
    v54 = *(_QWORD *)(v43 + 72);
    LODWORD(v10) = *(_DWORD *)(v43 + 96) & 7;
    v48 = v13;
    v16 = (unsigned int)v10 | (8 * v12);
    for ( i = v15; ; v15 = i )
    {
      while ( 1 )
      {
        v17 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
        v44[0] = v17;
        if ( v17 >= *(_DWORD *)(v1 + 32) )
          goto LABEL_45;
        v18 = v17;
        v19 = &v13[32 * v17];
        v46 = v17;
        v20 = *((_DWORD *)v19 + 5);
        if ( (v20 & 1) == 0 )
          break;
LABEL_11:
        if ( v2 )
        {
          v26 = *(_QWORD *)(v8 + 56) + 56 * v18;
          v27 = *(_DWORD *)(v26 + 48);
          if ( (v27 & 1) != 0 )
          {
            ObfDereferenceObject(*(PVOID *)(v26 + 32));
            *(_DWORD *)(v26 + 48) &= ~1u;
            v27 = *(_DWORD *)(v26 + 48);
            *(_QWORD *)(v26 + 32) = 0LL;
          }
          if ( (v27 & 2) != 0 )
          {
            ObfDereferenceObject(*(PVOID *)(v26 + 40));
            *(_DWORD *)(v26 + 48) &= ~2u;
            v27 = *(_DWORD *)(v26 + 48);
            *(_QWORD *)(v26 + 40) = 0LL;
          }
          if ( (v27 & 4) != 0 )
          {
            PfpOpenHandleClose(v26, *(_QWORD *)(v43 + 8));
            *(_OWORD *)v26 = 0LL;
            *(_OWORD *)(v26 + 16) = 0LL;
            *(_QWORD *)(v26 + 24) |= 0x200000000uLL;
            *(_DWORD *)(v26 + 48) &= ~4u;
          }
          v2 = 0;
          v42 = 0;
        }
        v1 = v50;
        v8 = v43;
        v9 = v45;
        v13 = v48;
        v15 = i;
        if ( v3 )
        {
          ExFreePoolWithTag(v3, 0);
          v3 = 0LL;
          v47 = 0LL;
          goto LABEL_21;
        }
      }
      v21 = v20 >> 8;
      v51 = *(_DWORD *)(v9 + 44) & 1;
      v41 = 0;
      if ( v51 )
        break;
      v38 = v20 >> 1;
      v22 = !_BitScanForward((unsigned int *)&v39, v21 & 0x7F);
      if ( v22 )
        LOBYTE(v39) = 7;
      v40 = v11 & (1 << v39);
      v41 = v40 != 0;
      if ( ((unsigned __int8)v11 & (unsigned __int8)v38 & 0x7F) == 0 )
      {
        v41 = v40 != 0;
        v22 = v40 == 0;
LABEL_7:
        if ( v22 )
        {
          v18 = v17;
          goto LABEL_11;
        }
      }
      v23 = (__int64 *)(v8 + 40);
      v24 = *(__int64 **)(v8 + 40);
      v25 = (const wchar_t *)&v15[*((unsigned int *)v19 + 3)];
      while ( 1 )
      {
        if ( v24 == v23 )
        {
          v3 = v47;
          v11 = v44[1];
          v8 = v43;
          v18 = v46;
          goto LABEL_11;
        }
        if ( !wcsncmp(v25, (const wchar_t *)v24[2], *((unsigned int *)v24 + 6)) && v25[*((unsigned int *)v24 + 6)] == 92 )
          break;
        v24 = (__int64 *)*v24;
      }
      Pool2 = ExAllocatePool2(0x40uLL);
      v47 = (_QWORD *)Pool2;
      v3 = (_QWORD *)Pool2;
      if ( !Pool2 )
      {
        v7 = -1073741670;
        v1 = v50;
        goto LABEL_44;
      }
      v29 = v51;
      *(_DWORD *)(Pool2 + 12) = v51;
      *(_QWORD *)Pool2 = 0LL;
      *(_DWORD *)(Pool2 + 8) = 0;
      RtlInitUnicodeString(&DestinationString, &v25[*((unsigned int *)v24 + 6) + 1]);
      v11 = v44[1];
      if ( (int)PfSnGetSectionObject(
                  v43,
                  (int)v24,
                  (int)&DestinationString,
                  (int)v19,
                  v44[1],
                  v44[0],
                  v29,
                  EventHandle,
                  (__int64)&v53,
                  (__int64)&v42) < 0 )
        goto LABEL_57;
      v30 = v53;
      v31 = 1;
      v32 = 0;
      if ( v41 )
      {
        v32 = 1;
        v3[(unsigned int)(*((_DWORD *)v3 + 2))++ + 2] = 0LL;
        v31 = *(_QWORD *)(*(_QWORD *)(v30 + 40) + 16LL) != 0LL;
      }
      v33 = 0;
      v34 = *(int *)v19;
      v35 = (int)v34 + *((_DWORD *)v19 + 1);
      if ( v34 < v35 )
      {
        while ( 2 )
        {
          v36 = *(_DWORD *)&v14[8 * v34 + 4];
          if ( (v36 & 1) == 0 )
          {
            if ( (v36 & 8) != 0 && !v31 )
              goto LABEL_34;
            if ( _bittest(&v11, (v36 >> 4) & 7) )
            {
              if ( v29 )
              {
                if ( (v36 & 2) != 0 )
                  goto LABEL_34;
              }
              else if ( (v36 & 4) != 0 )
              {
LABEL_34:
                if ( *(_DWORD *)&v14[8 * v34] || !v41 )
                {
                  v3[(unsigned int)(*((_DWORD *)v3 + 2))++ + 2] = (unsigned __int64)*(unsigned int *)&v14[8 * v34] << 9;
                  ++v32;
                }
                else
                {
                  v33 = 1;
                }
              }
            }
          }
          if ( ++v34 >= v35 )
            break;
          continue;
        }
      }
      if ( *((_DWORD *)v3 + 2) == 1 && v41 && v31 && !v33 )
      {
LABEL_57:
        v2 = v42;
        v8 = v43;
        v18 = v46;
        goto LABEL_11;
      }
      v1 = v50;
      v3[2] |= v16;
      *v3 = v30;
      v37 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 24), 1u);
      *(_QWORD *)(v55 + 8 * v37) = v3;
      v3 = 0LL;
      v47 = 0LL;
      _InterlockedAdd((volatile signed __int32 *)(v1 + 36), v32);
      v2 = v42;
      if ( v42 )
      {
        v2 = 0;
        v42 = 0;
        *(_DWORD *)(v54 + 4 * v37) = v44[0];
      }
      else
      {
        *(_DWORD *)(v54 + 4 * v37) = -1;
      }
LABEL_21:
      v8 = v43;
      v9 = v45;
      v13 = v48;
    }
    v22 = ((unsigned __int8)v11 & BYTE1(v20) & 0x7F) == 0;
    goto LABEL_7;
  }
LABEL_44:
  *(_DWORD *)(v1 + 40) = v7;
LABEL_45:
  if ( EventHandle )
    NtClose(EventHandle);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  _interlockedbittestandreset((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 0x19u);
  KiUnstackDetachProcess((__int64)v58, 0);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v1);
}
