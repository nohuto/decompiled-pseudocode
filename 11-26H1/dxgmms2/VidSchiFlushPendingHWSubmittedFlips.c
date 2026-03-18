/*
 * XREFs of VidSchiFlushPendingHWSubmittedFlips @ 0x14003DB20
 * Callers:
 *     VidSchiSuspendFlipQueues @ 0x140106C98 (VidSchiSuspendFlipQueues.c)
 * Callees:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14001CCCC (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x14003A3E4 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1400471AC (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x140116D6C (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchiFlushPendingHWSubmittedFlips(struct _VIDSCH_GLOBAL *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  bool v8; // zf
  __int64 v9; // r8
  _QWORD v10[20]; // [rsp+38h] [rbp-49h] BYREF

  v3 = a2 + 3248;
  if ( *(_DWORD *)(a2 + 3248) )
  {
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[4]) |= 0x10u;
    v8 = *((_BYTE *)a1 + 67) == 0;
    LODWORD(v10[2]) = 3;
    v10[5] = v3;
    if ( !v8 )
    {
      DXGADAPTER::IncrementVSyncWaiter(*((DXGADAPTER **)a1 + 2), a3);
      VidSchiSetInterruptTargetPresentId(a1, a3, 0, 0LL, 1, 0);
    }
    VidSchiWaitFlushCompletion(a1, v10, 23LL);
    if ( *((_BYTE *)a1 + 67) )
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)a1 + 2), a3, v9);
  }
  result = *(unsigned int *)(a2 + 3244);
  if ( (_DWORD)result )
  {
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[4]) |= 0x10u;
    LODWORD(v10[2]) = 1;
    v10[5] = a2 + 3244;
    return VidSchiWaitFlushCompletion(a1, v10, 23LL);
  }
  return result;
}
