/*
 * XREFs of VidSchiWaitForDrainFlipQueue @ 0x14011AC68
 * Callers:
 *     VidSchiDrainFlipQueue @ 0x14011AC40 (VidSchiDrainFlipQueue.c)
 * Callees:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14001CCCC (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     VidSchiIsMmIoFlipPending @ 0x14002FD20 (VidSchiIsMmIoFlipPending.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x14003A3E4 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1400471AC (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400EA1E8 (VidSchWaitForCompletionEvent.c)
 */

char __fastcall VidSchiWaitForDrainFlipQueue(struct _VIDSCH_GLOBAL *a1)
{
  char result; // al
  DXGADAPTER **v3; // rdi
  __int64 v4; // r8
  _DWORD v5[40]; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v6; // [rsp+F0h] [rbp+8h] BYREF

  memset(v5, 0, sizeof(v5));
  v5[4] = 3;
  v5[5] = 1;
  *((_QWORD *)a1 + 237) = MEMORY[0xFFFFF78000000320];
  KeResetEvent((PRKEVENT)((char *)a1 + 1856));
  v6 = 0;
  result = VidSchiIsMmIoFlipPending((__int64)a1, &v6);
  if ( result )
  {
    v3 = (DXGADAPTER **)((char *)a1 + 16);
    do
    {
      if ( *((_BYTE *)a1 + 67) )
      {
        v3 = (DXGADAPTER **)((char *)a1 + 16);
        DXGADAPTER::IncrementVSyncWaiter(*((DXGADAPTER **)a1 + 2), v6);
        VidSchiSetInterruptTargetPresentId(a1, v6, 0, 0LL, 1, 0);
      }
      VidSchiProfilePerformanceTick(16LL, (__int64)a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      VidSchWaitForCompletionEvent((__int64)a1, (__int64)v5, 0xFFFFFFFFLL);
      VidSchiProfilePerformanceTick(17LL, (__int64)a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( *((_BYTE *)a1 + 67) )
        DXGADAPTER::DecrementVSyncWaiter(*v3, v6, v4);
      else
        v3 = (DXGADAPTER **)((char *)a1 + 16);
      v6 = 0;
      result = VidSchiIsMmIoFlipPending((__int64)a1, &v6);
    }
    while ( result );
  }
  return result;
}
