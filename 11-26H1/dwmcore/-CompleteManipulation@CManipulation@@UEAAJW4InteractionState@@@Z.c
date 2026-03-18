/*
 * XREFs of ?CompleteManipulation@CManipulation@@UEAAJW4InteractionState@@@Z @ 0x180108CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x1801090D8 (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801092C8 (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 */

__int64 __fastcall CManipulation::CompleteManipulation(__int64 a1)
{
  bool v1; // dl
  CManipulation *v2; // rcx
  __int64 v3; // r8
  const struct D2DVector3 *v4; // r9
  int v5; // r10d

  CManipulation::_UpdateCaptureState((CManipulation *)(a1 - 80), 0);
  if ( *(_DWORD *)(v3 + 164) != v5 )
  {
    *(_DWORD *)(v3 + 164) = v5;
    *(_QWORD *)(v3 + 20) = v4;
    *(_DWORD *)(v3 + 28) = (_DWORD)v4;
    *(_DWORD *)(v3 + 44) = 1065353216;
    *(_DWORD *)(v3 + 48) = 1065353216;
    *(_DWORD *)(v3 + 52) = 1065353216;
    LODWORD(v4) = CManipulation::_SendUpdateToRenderThread(v2, v1, 0LL, v4);
  }
  return (unsigned int)v4;
}
