/*
 * XREFs of ?ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z @ 0x1402CBFAC
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x140135DBC (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_BOOL8 __fastcall ValidateDoubleClick(const struct tagTAP_INFO *a1, unsigned int a2, int a3, int a4)
{
  int v4; // ebx
  __int64 v5; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  __int16 v12; // r9
  __int64 v13; // rcx
  _BOOL8 result; // rax

  v4 = 0;
  v5 = a2;
  result = 0;
  if ( *((_WORD *)a1 + 4) )
  {
    if ( *(struct tagTHREADINFO **)a1 == PtiCurrent((__int64)a1) && *((_DWORD *)a1 + 5) == a3 )
    {
      LOBYTE(v4) = a4 != 0;
      if ( (*((_DWORD *)a1 + 6) != 0) == v4 )
      {
        UserSessionState = W32GetUserSessionState(v10, v9);
        v12 = *((_WORD *)a1 + 4);
        if ( v12 == *(_WORD *)(UserSessionState + 24 * v5 + 16416) )
          return 1;
        v13 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v13 < 5 && v12 == *(_WORD *)(UserSessionState + 24 * v13 + 16416) )
          return 1;
      }
    }
  }
  return result;
}
