/*
 * XREFs of CmOpenKey @ 0x140937170
 * Callers:
 *     CmOpenKeyForBugCheckRecovery @ 0x140854980 (CmOpenKeyForBugCheckRecovery.c)
 *     NtOpenKey @ 0x140936550 (NtOpenKey.c)
 *     NtOpenKeyEx @ 0x140936630 (NtOpenKeyEx.c)
 *     NtOpenKeyTransactedEx @ 0x140936740 (NtOpenKeyTransactedEx.c)
 *     CmOpenKeyCallout @ 0x140937130 (CmOpenKeyCallout.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140480350 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     CmpFreeParseContext @ 0x1409376D0 (CmpFreeParseContext.c)
 *     CmpAllocateParseContext @ 0x140938880 (CmpAllocateParseContext.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmOpenKey(HANDLE *a1, __int64 a2, __int64 a3, int a4, __int64 a5, unsigned __int8 a6)
{
  int v8; // r15d
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // r13
  struct _PRIVILEGE_SET *v10; // rbx
  char v11; // r14
  unsigned int v12; // r15d
  char v13; // si
  _QWORD *v14; // r12
  unsigned int ULongFromUser; // edi
  __int128 v16; // xmm0
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // edi
  unsigned __int16 v20; // di
  void *v21; // r12
  HANDLE v22; // rcx
  __int64 ParseContext; // rax
  POBJECT_TYPE *v24; // rdi
  struct _LIST_ENTRY *CurrentSilo; // rax
  HANDLE v26; // rcx
  __int64 v28; // rcx
  NTSTATUS v29; // eax
  PVOID Object; // [rsp+48h] [rbp-190h] BYREF
  HANDLE Handle[2]; // [rsp+50h] [rbp-188h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-178h] BYREF
  struct _PRIVILEGE_SET *v33; // [rsp+70h] [rbp-168h]
  int v34; // [rsp+78h] [rbp-160h]
  int v35; // [rsp+7Ch] [rbp-15Ch]
  HANDLE *v36; // [rsp+88h] [rbp-150h]
  __int128 v37; // [rsp+90h] [rbp-148h]
  __int64 v38; // [rsp+A0h] [rbp-138h]
  __int128 v39; // [rsp+B0h] [rbp-128h]
  __int64 v40; // [rsp+C0h] [rbp-118h]
  __int128 v41; // [rsp+D0h] [rbp-108h]
  HANDLE v42[2]; // [rsp+E0h] [rbp-F8h] BYREF
  __int128 v43; // [rsp+F0h] [rbp-E8h]
  __int128 v44; // [rsp+100h] [rbp-D8h]
  HANDLE v45; // [rsp+110h] [rbp-C8h]
  __int128 v46; // [rsp+120h] [rbp-B8h]
  _OWORD v47[2]; // [rsp+130h] [rbp-A8h] BYREF
  _BYTE v48[64]; // [rsp+150h] [rbp-88h] BYREF

  v35 = a4;
  v40 = a3;
  v8 = a2;
  v36 = a1;
  Handle[0] = 0LL;
  *(_OWORD *)v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  *(_OWORD *)Src = 0LL;
  TransientPoolWithQuota = 0LL;
  v33 = 0LL;
  v10 = 0LL;
  memset(v47, 0, sizeof(v47));
  v38 = 0LL;
  v11 = 0;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)v47, 0x20000uLL, a3);
    v11 = 1;
  }
  v34 = v8 & 0x300;
  v12 = v8 & 0xFFFFFCFF;
  v13 = CmpAcquireShutdownRundown(a1, a2);
  if ( !v13 )
  {
    v19 = -1073741431;
    goto LABEL_48;
  }
  if ( (a4 & 0x1C) != a4 )
  {
    v19 = -1073741582;
    goto LABEL_48;
  }
  if ( a6 )
  {
    RtlWriteULong64ToUser(v36, 0LL);
    if ( (a3 & 3) != 0 )
      goto LABEL_7;
    RtlCopyFromUser(v42, (void *)a3, 0x30uLL);
  }
  else
  {
    RtlCopyVolatileMemory(v42, (const void *)a3, 0x30uLL);
  }
  if ( !(_QWORD)v43 )
  {
    v19 = -1073741819;
    goto LABEL_48;
  }
  v14 = (_QWORD *)(v43 + 8);
  if ( a6 )
  {
    ULongFromUser = RtlReadULongFromUser((unsigned int *)v43);
    *(_QWORD *)&v41 = ULongFromUser;
    *((_QWORD *)&v41 + 1) = RtlReadULong64FromUser(v14);
    v16 = v41;
  }
  else
  {
    v37 = 0LL;
    ULongFromUser = *(_DWORD *)v43;
    LODWORD(v37) = *(_DWORD *)v43;
    *((_QWORD *)&v37 + 1) = *v14;
    v16 = v37;
  }
  v46 = v16;
  v17 = ULongFromUser;
  v18 = ULongFromUser;
  v37 = v16;
  LOWORD(v39) = v16;
  DWORD1(v39) = DWORD1(v16);
  *((_QWORD *)&v39 + 1) = *((_QWORD *)&v16 + 1);
  WORD1(v39) = v16;
  if ( !(_WORD)ULongFromUser )
  {
    *((_QWORD *)&v39 + 1) = 0LL;
    v18 = 0LL;
  }
  if ( (v18 & 1) != 0 )
  {
    v19 = -1073741811;
  }
  else
  {
    *(_OWORD *)Src = v39;
    v19 = 0;
  }
  if ( v19 >= 0 )
  {
    if ( v11 )
    {
      v20 = (unsigned __int16)Src[0];
      if ( LOWORD(Src[0]) )
      {
        if ( a6 )
        {
          v21 = Src[1];
LABEL_21:
          if ( LOWORD(Src[0]) <= 0x40u )
          {
            TransientPoolWithQuota = (struct _PRIVILEGE_SET *)v48;
            v33 = (struct _PRIVILEGE_SET *)v48;
          }
          else
          {
            TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota();
            v33 = TransientPoolWithQuota;
            if ( !TransientPoolWithQuota )
            {
              v19 = -1073741670;
              goto LABEL_48;
            }
            v21 = Src[1];
            v20 = (unsigned __int16)Src[0];
          }
          if ( a6 && v20 && ((unsigned __int8)v21 & 1) != 0 )
LABEL_7:
            ExRaiseDatatypeMisalignment();
          if ( a6 )
            RtlCopyFromUser(TransientPoolWithQuota, v21, v20);
          else
            RtlCopyVolatileMemory(TransientPoolWithQuota, v21, v20);
          Src[1] = TransientPoolWithQuota;
          goto LABEL_41;
        }
        if ( CmpFreezeListLock.CycleTime )
        {
          v21 = Src[1];
          if ( MmIsUserAddress((unsigned __int64)Src[1]) )
            goto LABEL_21;
        }
      }
    }
LABEL_41:
    *(_QWORD *)&v43 = Src;
    v22 = v42[1];
    v45 = v42[1];
    if ( CmpTraceRoutine )
    {
      if ( v42[1] )
      {
        Object = 0LL;
        v29 = ObReferenceObjectByHandle(
                v42[1],
                0,
                (POBJECT_TYPE)CmKeyObjectType,
                KeGetCurrentThread()->PreviousMode,
                &Object,
                0LL);
        if ( v29 >= 0 )
        {
          v38 = *((_QWORD *)Object + 1);
          ObfDereferenceObject(Object);
        }
      }
    }
    ParseContext = CmpAllocateParseContext(v22, v18, v17);
    v10 = (struct _PRIVILEGE_SET *)ParseContext;
    Object = (PVOID)ParseContext;
    if ( ParseContext )
    {
      *(_DWORD *)(ParseContext + 28) = v34;
      *(_QWORD *)(ParseContext + 72) = a5;
      *(_DWORD *)(ParseContext + 24) = v35;
      v24 = CmKeyObjectType;
      CurrentSilo = PsGetCurrentSilo();
      v19 = ObOpenObjectByNameEx(v40, (__int64)v24, a6, 0LL, v12, (__int64)v10, (__int64)CurrentSilo, Handle);
      if ( v19 >= 0 )
      {
        if ( a6 )
          RtlWriteULong64ToUser(v36, (__int64)Handle[0]);
        else
          *v36 = Handle[0];
        Handle[0] = 0LL;
      }
    }
    else
    {
      v19 = -1073741670;
    }
  }
LABEL_48:
  if ( v11 && CmpTraceRoutine )
  {
    v28 = v38;
    LOBYTE(v28) = 11;
    guard_dispatch_icall_no_overrides(v28, (__int64)v47);
  }
  v26 = Handle[0];
  if ( Handle[0] )
    NtClose(Handle[0]);
  if ( TransientPoolWithQuota && TransientPoolWithQuota != (struct _PRIVILEGE_SET *)v48 )
    CmSiFreeMemory(TransientPoolWithQuota);
  if ( v10 )
    CmpFreeParseContext(v10);
  if ( v13 )
    CmpReleaseShutdownRundown(v26);
  return (unsigned int)v19;
}
