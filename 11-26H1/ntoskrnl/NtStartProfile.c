/*
 * XREFs of NtStartProfile @ 0x14084B8E0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MmSizeOfMdl @ 0x140481EB0 (MmSizeOfMdl.c)
 *     KeStartProfile @ 0x1405F5C68 (KeStartProfile.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtStartProfile(HANDLE ProfileHandle)
{
  KPROCESSOR_MODE PreviousMode; // di
  NTSTATUS result; // eax
  unsigned int *v3; // rbx
  NTSTATUS started; // edi
  __int64 Pool2; // rax
  _DWORD *v6; // rsi
  __int64 v7; // rdx
  struct _MDL *v8; // r14
  __int64 v9; // r9
  PVOID v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  PVOID v14; // rax
  unsigned int v15; // r10d
  unsigned int v16; // r9d
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(ProfileHandle, 1u, ExProfileObjectType, PreviousMode, &Object, 0LL);
  v3 = (unsigned int *)Object;
  if ( result >= 0 )
  {
    KeWaitForSingleObject(&WheapConfigTableLock.WaitBlockFill11[96], Executive, 0, 0, 0LL);
    if ( *((_QWORD *)v3 + 6) )
    {
      started = -1073741640;
    }
    else if ( ExpCurrentProfileUsage == KeQueryActiveProcessorCountEx(0xFFFFu) << 13 )
    {
      started = -1073741613;
    }
    else
    {
      MmSizeOfMdl(*((PVOID *)v3 + 3), v3[8]);
      Pool2 = ExAllocatePool2(0x40uLL);
      v6 = (_DWORD *)Pool2;
      if ( Pool2 )
      {
        v7 = *((_QWORD *)v3 + 3);
        v8 = (struct _MDL *)(Pool2 + 616);
        v9 = v3[8];
        *((_QWORD *)v3 + 7) = Pool2 + 616;
        *((_QWORD *)v3 + 5) = Pool2;
        *(_QWORD *)(Pool2 + 648) = v7 & 0xFFFFFFFFFFFFF000uLL;
        *(_QWORD *)(Pool2 + 616) = 0LL;
        *(_WORD *)(Pool2 + 626) = 0;
        *(_DWORD *)(Pool2 + 656) = v9;
        *(_DWORD *)(Pool2 + 660) = v7 & 0xFFF;
        *(_WORD *)(Pool2 + 624) = 8 * ((((unsigned __int64)(v7 & 0xFFF) + v9 + 4095) >> 12) + 6);
        started = MmProbeAndLockPagesEx(Pool2 + 616, PreviousMode & 1 | 2LL);
        if ( started >= 0 )
        {
          v10 = MmMapLockedPagesSpecifyCache(*((PMDL *)v3 + 7), 0, MmCached, 0LL, 0, 0x40000010u);
          if ( !v10 )
          {
            KeReleaseMutex((PRKMUTEX)&WheapConfigTableLock.WaitBlockFill11[96], 0);
            MmUnlockPages(v8);
            ExFreePoolWithTag(v6, 0);
            started = -1073741670;
            goto LABEL_20;
          }
          v11 = *((_QWORD *)v3 + 2);
          v12 = *((_QWORD *)v3 + 1);
          v13 = v3[9];
          v14 = *(PVOID *)v3;
          v15 = v3[17];
          v16 = v3[16];
          *v6 = 40370199;
          *((_QWORD *)v6 + 3) = v14;
          *((_QWORD *)v6 + 5) = v12 + v11;
          *((_QWORD *)v6 + 4) = v12;
          v6[12] = v13 - 2;
          *((_QWORD *)v6 + 7) = v10;
          *((_BYTE *)v6 + 610) = 0;
          v6[16] = v16;
          *((_WORD *)v6 + 304) = v15;
          *((_QWORD *)v6 + 9) = 2097153LL;
          memset_0(v6 + 20, 0, 0x100uLL);
          if ( v3 == (unsigned int *)-72LL
            || !(unsigned int)RtlAndAffinityEx(
                                (unsigned __int16 *)v3 + 36,
                                (unsigned __int16 *)&stru_140FC11F0.WaitRegister.Flags,
                                (__int64)(v6 + 18)) )
          {
            RtlpCopyAffinityEx(
              (struct _KAFFINITY_EX *)(v6 + 18),
              *((_WORD *)v6 + 37),
              (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
          }
          started = KeStartProfile((ULONG_PTR)v6);
          if ( started >= 0 )
          {
            *((_QWORD *)v3 + 6) = v10;
            ++ExpCurrentProfileUsage;
            KeReleaseMutex((PRKMUTEX)&WheapConfigTableLock.WaitBlockFill11[96], 0);
            started = 0;
            goto LABEL_20;
          }
          KeReleaseMutex((PRKMUTEX)&WheapConfigTableLock.WaitBlockFill11[96], 0);
          MmUnlockPages(v8);
        }
        else
        {
          KeReleaseMutex((PRKMUTEX)&WheapConfigTableLock.WaitBlockFill11[96], 0);
        }
        ExFreePoolWithTag(v6, 0);
        goto LABEL_20;
      }
      started = -1073741670;
    }
    KeReleaseMutex((PRKMUTEX)&WheapConfigTableLock.WaitBlockFill11[96], 0);
LABEL_20:
    ObfDereferenceObject(v3);
    return started;
  }
  return result;
}
