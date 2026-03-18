/*
 * XREFs of GetPromotablePointerIdForThreadOld @ 0x14028E978
 * Callers:
 *     ?xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1402A92F4 (-xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPromotablePointerIdForThreadOld(__int64 a1, __int64 a2)
{
  struct tagTHREADINPUTPOINTERLIST *v2; // rdi
  struct tagTHREADINPUTPOINTERLIST *i; // rbx
  unsigned __int16 v4; // si
  __int64 UserSessionState; // rax
  unsigned __int64 ThreadPointerData; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct tagTHREADINPUTPOINTERLIST *)(a1 + 1208);
  for ( i = *(struct tagTHREADINPUTPOINTERLIST **)(a1 + 1208); ; i = *(struct tagTHREADINPUTPOINTERLIST **)i )
  {
    if ( i == v2 )
      return 0LL;
    v4 = *((_WORD *)i + 8);
    v10 = 0;
    UserSessionState = W32GetUserSessionState(a1, a2);
    ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                          *(CTouchProcessor **)(UserSessionState + 3256),
                          v2,
                          v4,
                          &v10,
                          0LL,
                          0LL);
    v7 = ThreadPointerData;
    if ( v10 != 5 )
    {
      if ( ThreadPointerData )
      {
        v8 = W32GetUserSessionState(a1, a2);
        if ( CTouchProcessor::IsPointerPrimaryInContact(*(CTouchProcessor **)(v8 + 3256), v7) )
          break;
      }
    }
  }
  return v4;
}
