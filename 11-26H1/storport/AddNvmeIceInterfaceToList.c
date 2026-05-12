/*
 * XREFs of AddNvmeIceInterfaceToList @ 0x14007067C
 * Callers:
 *     RegisterForNvmeIceInterfaceCallback @ 0x140187A60 (RegisterForNvmeIceInterfaceCallback.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaDuplicateUnicodeString @ 0x14005A7A0 (RaDuplicateUnicodeString.c)
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     WPP_SF_q @ 0x14005C1C0 (WPP_SF_q.c)
 *     FreeNvmeIceEntry @ 0x140070BA0 (FreeNvmeIceEntry.c)
 *     RaidConvertCryptoCapabilitiesToInternal @ 0x140071578 (RaidConvertCryptoCapabilitiesToInternal.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AddNvmeIceInterfaceToList(PCUNICODE_STRING SourceString, _QWORD *a2, _QWORD *a3)
{
  unsigned __int16 *v3; // r15
  _QWORD *v4; // rbx
  char *Pool; // r13
  const UNICODE_STRING *v8; // rdi
  PDEVICE_OBJECT v9; // rcx
  unsigned __int16 v10; // dx
  _QWORD *v11; // r9
  __int64 (__fastcall *v12)(__int64, _QWORD, unsigned int *); // rax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // edi
  PDEVICE_OBJECT v16; // rcx
  unsigned __int16 v17; // dx
  void *v18; // rcx
  void *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned __int16 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int i; // edx
  _QWORD *v26; // rax
  PVOID *j; // r14
  _QWORD *v28; // rax
  unsigned __int16 *v30; // [rsp+20h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-18h] BYREF
  unsigned int v33; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  Pool = 0LL;
  v30 = 0LL;
  v8 = SourceString;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a3 )
    {
      v12 = (__int64 (__fastcall *)(__int64, _QWORD, unsigned int *))a3[16];
      if ( !v12 || !a3[15] || !a3[5] )
      {
        v9 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          goto LABEL_58;
        }
        v10 = 10;
        v11 = a3;
        goto LABEL_57;
      }
      v13 = a3[1];
      v33 = 0;
      v14 = v12(v13, 0LL, &v33);
      v15 = v14;
      if ( v14 >= 0 || v14 == -1056964604 )
      {
        Pool = (char *)RaidAllocatePool(64LL, v33, 1917018450LL, 0LL);
        if ( !Pool )
          goto LABEL_29;
        v15 = ((__int64 (__fastcall *)(_QWORD, char *, unsigned int *))a3[16])(a3[1], Pool, &v33);
        if ( v15 >= 0 )
        {
          v15 = RaidConvertCryptoCapabilitiesToInternal(&v30, Pool + 8, Pool);
          if ( v15 < 0 )
          {
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            {
              WPP_SF_d(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                0xDu,
                (__int64)&WPP_3e90584d844638fb9af1dc8f10a5e4f5_Traceguids,
                v15);
            }
            v3 = v30;
            goto LABEL_21;
          }
          v3 = v30;
          v8 = SourceString;
          goto LABEL_42;
        }
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          goto LABEL_21;
        }
        v17 = 12;
      }
      else
      {
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          goto LABEL_21;
        }
        v17 = 11;
      }
      WPP_SF_d((__int64)v16->AttachedDevice, v17, (__int64)&WPP_3e90584d844638fb9af1dc8f10a5e4f5_Traceguids, v15);
      goto LABEL_21;
    }
  }
  else if ( !a2 || !a2[4] || !a2[5] || !a2[6] )
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_58;
    }
    v10 = 14;
    v11 = a2;
LABEL_57:
    WPP_SF_q(
      (__int64)v9->AttachedDevice,
      v10,
      (__int64)&WPP_3e90584d844638fb9af1dc8f10a5e4f5_Traceguids,
      v11,
      v30,
      LockHandle.LockQueue.Next,
      LockHandle.LockQueue.Lock,
      *(_QWORD *)&LockHandle.OldIrql);
LABEL_58:
    v15 = -1073741811;
    goto LABEL_21;
  }
LABEL_42:
  v20 = RaidAllocatePool(64LL, 112LL, 1917018450LL, 0LL);
  v4 = (_QWORD *)v20;
  if ( !v20 )
    goto LABEL_29;
  v15 = RaDuplicateUnicodeString((PUNICODE_STRING)(v20 + 24), v8, v21, 0LL);
  if ( v15 < 0 )
    goto LABEL_21;
  v4[5] = a2;
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_50;
  v4[13] = v3;
  v22 = v3;
  v4[6] = a3;
  v3 = 0LL;
  LODWORD(v22) = *v22;
  *((_BYTE *)v4 + 64) &= ~1u;
  *((_DWORD *)v4 + 14) = (_DWORD)v22;
  v23 = *((unsigned int *)v4 + 14);
  *((_DWORD *)v4 + 20) = 0;
  *((_DWORD *)v4 + 21) = 0;
  v4[11] = 0LL;
  if ( (unsigned __int64)(72 * v23) > 0xFFFFFFFF )
  {
    v15 = -1073741675;
    goto LABEL_21;
  }
  v24 = RaidAllocatePool(64LL, (unsigned int)(72 * v23), 1917018450LL, 0LL);
  v4[9] = v24;
  if ( !v24 )
  {
LABEL_29:
    v15 = -1073741670;
    goto LABEL_21;
  }
  for ( i = 0; i < *((_DWORD *)v4 + 14); ++i )
    *(_DWORD *)(v4[9] + 72LL * i) = i;
  v15 = 0;
LABEL_50:
  *((_BYTE *)v4 + 96) = 0;
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v4[1] = v4;
    *v4 = v4;
    v26 = (_QWORD *)qword_1401731D8;
    if ( *(PVOID **)qword_1401731D8 == &NvmeIceList )
    {
      *v4 = &NvmeIceList;
      v4[1] = v26;
      *v26 = v4;
      qword_1401731D8 = (__int64)v4;
      v4 = 0LL;
      goto LABEL_21;
    }
    goto LABEL_67;
  }
  KeAcquireInStackQueuedSpinLock(&NvmeIceListSpinLock, &LockHandle);
  for ( j = (PVOID *)NvmeIceList; j != &NvmeIceList; j = (PVOID *)*j )
  {
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v4 + 3), (PCUNICODE_STRING)(j + 3), 1u) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v15 = 0;
      goto LABEL_21;
    }
  }
  v4[1] = v4;
  *v4 = v4;
  *((_DWORD *)v4 + 4) = 1;
  v28 = (_QWORD *)qword_1401731D8;
  if ( *(PVOID **)qword_1401731D8 != &NvmeIceList )
LABEL_67:
    __fastfail(3u);
  *v4 = &NvmeIceList;
  v4[1] = v28;
  *v28 = v4;
  qword_1401731D8 = (__int64)v4;
  v4 = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_21:
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( Pool )
      ExFreePoolWithTag(Pool, 0x72436152u);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x72436152u);
    if ( v4 )
      FreeNvmeIceEntry(v4);
  }
  else if ( v4 )
  {
    v18 = (void *)v4[4];
    if ( v18 )
      ExFreePoolWithTag(v18, 0x53446152u);
    v19 = (void *)v4[13];
    if ( v19 )
      ExFreePoolWithTag(v19, 0x72436152u);
    ExFreePoolWithTag(v4, 0x72436152u);
  }
  return (unsigned int)v15;
}
