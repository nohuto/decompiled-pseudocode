/*
 * XREFs of IommupPasidDeviceDelete @ 0x14058AC50
 * Callers:
 *     IommupDeviceDisablePasidTaggedDma @ 0x140785058 (IommupDeviceDisablePasidTaggedDma.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x14078518C (IommupDeviceEnablePasidTaggedDma.c)
 *     IommuPasidDeviceDelete @ 0x140789C50 (IommuPasidDeviceDelete.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     IommuFreeLibraryContext @ 0x14059EB3C (IommuFreeLibraryContext.c)
 *     ExpFreeAsid @ 0x1406D5704 (ExpFreeAsid.c)
 */

__int64 __fastcall IommupPasidDeviceDelete(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // ebp
  unsigned __int64 *v7; // rdi
  AutoBoost *v8; // rax
  volatile unsigned __int8 *v9; // rdx
  AutoBoost *v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx

  v4 = 0;
  if ( *(_QWORD *)(a1 + 24) )
    return 3221227272LL;
  v7 = (unsigned __int64 *)(*(_QWORD *)(a1 + 16) + 368LL);
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)v7, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v9) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v10 + 33), v9, 1);
    }
    else
    {
      *((_BYTE *)v10 + 10) = 1;
    }
  }
  v11 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v12 = *(_QWORD **)(a1 + 8), *v12 != a1) )
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((unsigned __int64)v7);
  if ( !HalpHvIommu )
  {
    v4 = IommuFreeLibraryContext(*(_QWORD *)(a1 + 56));
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  v13 = *(unsigned int *)(a1 + 48);
  if ( (_DWORD)v13 )
    ExpFreeAsid((unsigned int)(v13 - 1), 0LL);
  HalpMmAllocCtxFree(v13, a1);
  return v4;
}
