/*
 * XREFs of ?AreDockTargetActiveForSnapMoveSize@WindowArrangement@@YA_NXZ @ 0x14021700C
 * Callers:
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1402507C4 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall WindowArrangement::AreDockTargetActiveForSnapMoveSize(WindowArrangement *this, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = 0;
  v4 = *(_QWORD *)(W32GetUserSessionState(this, a2) + 63448);
  if ( *(_BYTE *)(v4 + 1) )
    return *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 63448) + 5LL) != 0;
  return v2;
}
