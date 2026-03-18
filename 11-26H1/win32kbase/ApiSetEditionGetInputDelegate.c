/*
 * XREFs of ApiSetEditionGetInputDelegate @ 0x14010A470
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140108F24 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x14010BAD8 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x140214E4C (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 * Callees:
 *     EditionGetInputDelegate @ 0x14010AAA8 (EditionGetInputDelegate.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionGetInputDelegate(_OWORD *a1)
{
  __int64 v2; // rbx
  __int64 (*v3)(void); // rax
  int v4; // eax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _OWORD v11[7]; // [rsp+20h] [rbp-78h] BYREF

  v2 = 0LL;
  v3 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5728LL);
  if ( v3 )
    v4 = v3();
  else
    v4 = -1073741637;
  if ( v4 >= 0 )
  {
    v5 = a1[1];
    v11[0] = *a1;
    v11[2] = a1[2];
    v6 = a1[4];
    v11[1] = v5;
    v7 = a1[3];
    v11[4] = v6;
    v8 = a1[6];
    v11[3] = v7;
    v9 = a1[5];
    v11[6] = v8;
    v11[5] = v9;
    return EditionGetInputDelegate(v11);
  }
  return v2;
}
