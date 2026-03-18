/*
 * XREFs of MNCreateAnimationBitmap @ 0x1402B593C
 * Callers:
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 * Callees:
 *     GreCreateCompatibleBitmapEx @ 0x14007C0C0 (GreCreateCompatibleBitmapEx.c)
 */

__int64 __fastcall MNCreateAnimationBitmap(__int64 a1, __int64 a2, int a3)
{
  int v4; // edi
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx

  v4 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  result = (__int64)GreCreateCompatibleBitmapEx(
                      *(HDC *)(*(_QWORD *)(UserSessionState + 56968) + 64LL),
                      v4,
                      a3,
                      0,
                      0LL,
                      0LL);
  v10 = result;
  if ( result )
  {
    if ( a1 == W32GetUserSessionState(v9, v8) + 65888 )
      GreSetBitmapOwner(v10, 0LL);
    GreSelectBitmap(*(_QWORD *)(a1 + 136), v10);
    result = 1LL;
    *(_QWORD *)(a1 + 128) = v10;
  }
  return result;
}
