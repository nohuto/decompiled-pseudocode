/*
 * XREFs of ?FlushDevicesForTermination@DXGPROCESSVM@@QEAAXXZ @ 0x1401F5F88
 * Callers:
 *     ?FlushDevicesForTermination@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401F608C (-FlushDevicesForTermination@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x140055254 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1403A35A8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 */

void __fastcall DXGPROCESSVM::FlushDevicesForTermination(DXGPROCESSVM *this)
{
  char *v2; // rsi
  _QWORD *v3; // r14
  struct DXGADAPTER *v4; // rbx
  __int64 Current; // rax
  __int64 v6; // rdi
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = (char *)this + 216;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v3 = (_QWORD *)*((_QWORD *)this + 40);
  v7[0] = (char *)this + 320;
  while ( 1 )
  {
    v7[1] = v3;
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v7);
    v6 = Current;
    if ( !Current )
      break;
    v4 = *(struct DXGADAPTER **)(*(_QWORD *)(Current + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v8, v4, 1);
    if ( *((_DWORD *)v4 + 50) == 1 && *(_DWORD *)(v6 + 608) == 1 )
      DXGDEVICE::FlushScheduler(v6, 4LL, 4294967293LL, 0LL);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v8);
    v3 = (_QWORD *)*v3;
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
