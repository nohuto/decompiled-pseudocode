/*
 * XREFs of ApiSetSetManipulationInputTargetTransform @ 0x1401975D4
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x14018900C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     SetManipulationInputTargetTransform @ 0x14011DAF4 (SetManipulationInputTargetTransform.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetSetManipulationInputTargetTransform(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v9; // ebx
  __int64 (*v10)(void); // rax
  int v11; // eax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  _OWORD v18[7]; // [rsp+30h] [rbp-78h] BYREF

  v9 = 0;
  v10 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6328LL);
  if ( v10 )
    v11 = v10();
  else
    v11 = -1073741637;
  if ( v11 >= 0 )
  {
    v12 = a1[1];
    v18[0] = *a1;
    v18[2] = a1[2];
    v13 = a1[4];
    v18[1] = v12;
    v14 = a1[3];
    v18[4] = v13;
    v15 = a1[6];
    v18[3] = v14;
    v16 = a1[5];
    v18[6] = v15;
    v18[5] = v16;
    return (unsigned int)SetManipulationInputTargetTransform(v18, a2, a3, a4, a5);
  }
  return v9;
}
