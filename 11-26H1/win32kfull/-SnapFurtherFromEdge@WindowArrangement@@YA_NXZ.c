/*
 * XREFs of ?SnapFurtherFromEdge@WindowArrangement@@YA_NXZ @ 0x140261A34
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall WindowArrangement::SnapFurtherFromEdge(WindowArrangement *this, __int64 a2)
{
  char *v2; // rbx
  __int64 UserSessionState; // rax
  _DWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+2Ch] [rbp-Ch] BYREF

  v5[0] = 0;
  v2 = (char *)v5;
  v5[1] = 1;
  v5[2] = 2;
  while ( v2 != &v6 )
  {
    UserSessionState = W32GetUserSessionState(this, a2);
    this = (WindowArrangement *)*(int *)v2;
    if ( *((_BYTE *)this + *(_QWORD *)(UserSessionState + 63432)) <= 1u )
      return 0;
    v2 += 4;
  }
  return 1;
}
