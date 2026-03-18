/*
 * XREFs of ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x140032470
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x140032CC4 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140034EC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14005976C (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 * Callees:
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x14001A020 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 */

void __fastcall VidSchiSetNextFlipEarliestIdealTime(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        struct VIDSCH_FLIP_QUEUE *a3,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a4)
{
  __int64 v4; // rsi
  __int64 v6; // r8
  __int64 v8; // rax
  unsigned __int64 CurrentVSyncPeriodQpc; // rax

  v4 = *((_QWORD *)a4 + 164);
  v6 = 0xFFFFFFFFLL;
  v8 = *((_QWORD *)a1 + a2 + 431);
  if ( *(_DWORD *)(v8 + 3192) == -1 )
  {
    if ( *((_DWORD *)a4 + 289) == -1 )
      CurrentVSyncPeriodQpc = 0LL;
    else
      CurrentVSyncPeriodQpc = *(_QWORD *)(v8 + 83112);
  }
  else
  {
    LOBYTE(v6) = 1;
    CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(a1, a2, v6);
  }
  *((_QWORD *)a3 + 13) = v4 + CurrentVSyncPeriodQpc * *((unsigned int *)a4 + 268);
}
