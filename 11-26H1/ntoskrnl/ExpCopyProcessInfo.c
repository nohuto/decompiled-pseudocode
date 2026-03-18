/*
 * XREFs of ExpCopyProcessInfo @ 0x140968E30
 * Callers:
 *     ExpGetProcessInformation @ 0x14096767C (ExpGetProcessInformation.c)
 *     ExProcessCounterSetCallback @ 0x140969300 (ExProcessCounterSetCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeQueryValuesThread @ 0x1402BAA70 (KeQueryValuesThread.c)
 *     ExfAcquireRundownProtection @ 0x1402F05D0 (ExfAcquireRundownProtection.c)
 */

__int64 __fastcall ExpCopyProcessInfo(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 *v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // r14
  void *v9; // rdx
  LegacyAutoBoost *v10; // rbx
  _QWORD *v11; // r13
  _QWORD *v12; // r15
  __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdx
  signed __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int64 v22; // rtt
  unsigned int *v23; // r10
  unsigned int *v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v34; // [rsp+20h] [rbp-88h]
  __int64 v35; // [rsp+28h] [rbp-80h]
  __int64 v36; // [rsp+30h] [rbp-78h]
  __int64 v37; // [rsp+38h] [rbp-70h]
  __int64 v38; // [rsp+40h] [rbp-68h]
  struct _KTHREAD *v39; // [rsp+48h] [rbp-60h]
  __int128 v40; // [rsp+50h] [rbp-58h] BYREF
  __int128 v41; // [rsp+60h] [rbp-48h]

  CurrentThread = KeGetCurrentThread();
  v5 = (signed __int64 *)(a2 + 1504);
  v39 = CurrentThread;
  v6 = a2;
  v7 = a1;
  --CurrentThread->KernelApcDisable;
  v40 = 0LL;
  v41 = 0LL;
  v10 = (LegacyAutoBoost *)KeAbPreAcquire(a2 + 1504, 0LL, 0LL, (struct _KLOCK_ENTRIES *)a4);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, 0, v10, (struct _KTHREAD *)v5);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = (_QWORD *)(v6 + 880);
  v34 = *(_QWORD *)(v6 + 312);
  v35 = *(_QWORD *)(v6 + 320);
  v36 = *(_QWORD *)(v6 + 328);
  v37 = *(_QWORD *)(v6 + 376);
  v38 = *(_QWORD *)(v6 + 384);
  *(_QWORD *)(a4 + 24) = *(_QWORD *)(v6 + 288);
  *(_QWORD *)(a4 + 32) = *(_QWORD *)(v6 + 296);
  *(_QWORD *)(a4 + 40) = *(_QWORD *)(v6 + 928);
  *(_QWORD *)(a4 + 48) = *(_QWORD *)(v6 + 936);
  *(_QWORD *)(a4 + 56) = *(_QWORD *)(v6 + 944);
  *(_QWORD *)(a4 + 64) = *(_QWORD *)(v6 + 952);
  *(_QWORD *)(a4 + 72) = *(_QWORD *)(v6 + 960);
  *(_QWORD *)(a4 + 80) = *(_QWORD *)(v6 + 968);
  v12 = *(_QWORD **)(v6 + 880);
  if ( v12 != (_QWORD *)(v6 + 880) )
  {
    v13 = v34;
    v14 = v35;
    v15 = v36;
    v16 = v37;
    do
    {
      v13 += *((unsigned int *)v12 - 187);
      v14 += *((unsigned int *)v12 - 167);
      KeQueryValuesThread((__int64)(v12 - 175), (__int64)&v40);
      v15 += DWORD1(v40);
      *(_QWORD *)(a4 + 24) += *(v12 - 166);
      *(_QWORD *)(a4 + 32) += *((unsigned int *)v12 - 265);
      *(_QWORD *)(a4 + 40) += *(v12 - 63);
      *(_QWORD *)(a4 + 48) += *(v12 - 62);
      *(_QWORD *)(a4 + 56) += *(v12 - 61);
      *(_QWORD *)(a4 + 64) += *(v12 - 60);
      *(_QWORD *)(a4 + 72) += *(v12 - 59);
      v17 = *((_QWORD *)&v41 + 1) + v38;
      *(_QWORD *)(a4 + 80) += *(v12 - 58);
      v12 = (_QWORD *)*v12;
      v16 += v41;
      v38 = v17;
    }
    while ( v12 != v11 );
    v37 = v16;
    v6 = a2;
    v36 = v15;
    CurrentThread = v39;
    v35 = v14;
    v7 = a1;
    v34 = v13;
    v5 = (signed __int64 *)(a2 + 1504);
  }
  v18 = 0LL;
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v19, v20);
  v21 = (unsigned int)KeMaximumIncrement;
  *(_QWORD *)a4 = v34 * (unsigned int)KeMaximumIncrement;
  *(_QWORD *)(a4 + 8) = v35 * (unsigned int)v21;
  *(_QWORD *)(a4 + 16) = v36 * (unsigned int)v21;
  *(_QWORD *)(a4 + 88) = v37 * (unsigned int)v21;
  *(_QWORD *)(a4 + 96) = v38 * v21;
  _m_prefetchw((const void *)(v6 + 488));
  v22 = *(_QWORD *)(v6 + 488) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v22 == _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 488), v22 + 2, v22)
    || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v6 + 488)) )
  {
    v23 = *(unsigned int **)(v6 + 768);
    if ( v23 )
    {
      v24 = v23 + 16;
      v25 = 0LL;
      v26 = (unsigned __int64)&v23[16 * (unsigned __int64)(unsigned int)ExpFreeListCount + 16];
      if ( (unsigned __int64)(v23 + 16) < v26 )
      {
        do
        {
          v25 += (int)v24[6];
          v24 += 16;
        }
        while ( (unsigned __int64)v24 < v26 );
      }
      if ( v25 >= 0 )
        v18 = v25;
      if ( v18 > 0xFFFFFFFFLL )
        v18 = 0xFFFFFFFFLL;
      v27 = (unsigned __int64)*v23 >> 2;
      if ( v18 > (__int64)((255 * v27) >> 8) )
        v18 = (255 * v27) >> 8;
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v6 + 488));
  }
  *(_DWORD *)(v7 + 96) = v18;
  *(_QWORD *)(v7 + 32) = *(_QWORD *)(v6 + 504);
  *(_DWORD *)(v7 + 72) = *(char *)(v6 + 144);
  *(_QWORD *)(v7 + 80) = *(_QWORD *)(v6 + 464);
  *(_QWORD *)(v7 + 88) = *(_QWORD *)(v6 + 720);
  *(_DWORD *)(v7 + 20) = *(_DWORD *)(v6 + 1496);
  *(_QWORD *)(v7 + 112) = *(_QWORD *)(v6 + 544);
  *(_QWORD *)(v7 + 120) = *(_QWORD *)(v6 + 552);
  *(_DWORD *)(v7 + 128) = *(_DWORD *)(v6 + 1028);
  *(_DWORD *)(v7 + 16) = *(_DWORD *)(v6 + 1192);
  *(_QWORD *)(v7 + 136) = *(_QWORD *)(v6 + 1032) << 12;
  v28 = *(_QWORD *)(v6 + 1168) << 12;
  v29 = *(_QWORD *)(v6 + 1160) << 12;
  *(_QWORD *)(v7 + 144) = v29;
  if ( v28 >= v29 )
    v28 = v29;
  *(_QWORD *)(v7 + 8) = v28;
  v30 = *(_QWORD *)(v6 + 520);
  *(_QWORD *)(v7 + 152) = *(_QWORD *)(v6 + 536);
  *(_QWORD *)(v7 + 160) = v30;
  v31 = *(_QWORD *)(v6 + 512);
  *(_QWORD *)(v7 + 168) = *(_QWORD *)(v6 + 528);
  *(_QWORD *)(v7 + 176) = v31;
  v32 = *(_QWORD *)(v6 + 984) << 12;
  *(_QWORD *)(v7 + 184) = v32;
  *(_QWORD *)(v7 + 192) = *(_QWORD *)(v6 + 992) << 12;
  *(_QWORD *)(v7 + 200) = v32;
  *(_QWORD *)(v7 + 24) = *(_QWORD *)(a4 + 24);
  *(_QWORD *)(v7 + 40) = *(_QWORD *)(a4 + 8);
  *(_QWORD *)(v7 + 48) = *(_QWORD *)a4;
  *(_QWORD *)(v7 + 208) = *(_QWORD *)(a4 + 40);
  *(_QWORD *)(v7 + 216) = *(_QWORD *)(a4 + 48);
  *(_QWORD *)(v7 + 224) = *(_QWORD *)(a4 + 56);
  *(_QWORD *)(v7 + 232) = *(_QWORD *)(a4 + 64);
  *(_QWORD *)(v7 + 240) = *(_QWORD *)(a4 + 72);
  *(_QWORD *)(v7 + 248) = *(_QWORD *)(a4 + 80);
  if ( a3 )
    *(_QWORD *)(v7 + 104) = *(_QWORD *)(v6 + 464);
  return 0LL;
}
