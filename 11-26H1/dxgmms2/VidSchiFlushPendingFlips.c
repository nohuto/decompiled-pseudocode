/*
 * XREFs of VidSchiFlushPendingFlips @ 0x14012747C
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1400051E8 (VidSchiSetFlipDevice.c)
 * Callees:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14001CCCC (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x14003A3E4 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1400471AC (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x140116D6C (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchiFlushPendingFlips(struct _VIDSCH_GLOBAL *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  bool v7; // zf
  __int64 v8; // r8
  __int64 result; // rax
  _QWORD v10[20]; // [rsp+38h] [rbp-59h] BYREF

  v3 = a2 + 3240;
  if ( *(_DWORD *)(a2 + 3240) )
  {
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[4]) |= 0x10u;
    v7 = *((_BYTE *)a1 + 67) == 0;
    LODWORD(v10[2]) = 3;
    v10[5] = v3;
    if ( !v7 )
    {
      DXGADAPTER::IncrementVSyncWaiter(*((DXGADAPTER **)a1 + 2), a3);
      VidSchiSetInterruptTargetPresentId(a1, a3, 0, 0LL, 1, 0);
    }
    VidSchiWaitFlushCompletion((__int64)a1, (__int64)v10, 0x17u);
    if ( *((_BYTE *)a1 + 67) )
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)a1 + 2), a3, v8);
  }
  result = *(unsigned int *)(a2 + 3244);
  if ( (_DWORD)result && !*((_BYTE *)a1 + 3256) )
  {
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[4]) |= 0x10u;
    LODWORD(v10[2]) = 1;
    v10[5] = a2 + 3244;
    result = VidSchiWaitFlushCompletion((__int64)a1, (__int64)v10, 0x17u);
  }
  if ( *((_QWORD *)a1 + 475) )
  {
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[4]) |= 0x80u;
    LODWORD(v10[2]) = 7;
    v10[5] = (char *)a1 + 3800;
    return VidSchiWaitFlushCompletion((__int64)a1, (__int64)v10, 0x17u);
  }
  return result;
}
