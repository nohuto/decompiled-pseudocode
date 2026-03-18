/*
 * XREFs of MagInputTransform @ 0x140165624
 * Callers:
 *     ApplyMagInputTransform @ 0x140165340 (ApplyMagInputTransform.c)
 *     AddMagnificationOutputTransform @ 0x1401653D0 (AddMagnificationOutputTransform.c)
 *     EditionMagnificationMousePosition @ 0x1401654C0 (EditionMagnificationMousePosition.c)
 *     TransformForInputMagnification @ 0x140165510 (TransformForInputMagnification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MagInputTransform(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = 0LL;
  if ( *(_QWORD *)(UserSessionState + 19144) )
    return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(0LL, v3) + 19144) + 224LL);
  return v4;
}
