/*
 * XREFs of _GetMagnificationInputTransform @ 0x14021EACC
 * Callers:
 *     MagGetLensContextInformation @ 0x140231FF0 (MagGetLensContextInformation.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetMagnificationInputTransform(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _OWORD *v4; // rcx
  __int128 v5; // xmm1
  __int64 result; // rax

  v3 = *((_QWORD *)PtiCurrent(a1, a2) + 62);
  v4 = *(_OWORD **)(v3 + 224);
  if ( !v4 )
    return 0LL;
  *(_OWORD *)a1 = *v4;
  v5 = *(_OWORD *)(*(_QWORD *)(v3 + 224) + 16LL);
  *(_DWORD *)(a1 + 32) = 0;
  result = 1LL;
  *(_OWORD *)(a1 + 16) = v5;
  return result;
}
