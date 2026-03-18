/*
 * XREFs of ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x140177194
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x140030E90 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall SmartRectInRegion(HRGN a1, struct tagRECT *a2)
{
  int RgnBox; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  LONG left; // edx
  LONG v8; // ecx
  LONG right; // eax
  LONG top; // edx
  LONG v11; // ecx
  LONG bottom; // eax
  __int64 v14; // rax
  bool v15; // zf
  __int64 UserSessionState; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int128 v28; // [rsp+20h] [rbp-20h] BYREF

  v28 = 0LL;
  if ( !(unsigned int)GreRectInRegion(a1, a2) )
    return 0LL;
  RgnBox = GreGetRgnBox(a1, &v28);
  if ( !RgnBox )
    return 3LL;
  if ( RgnBox == 2 )
  {
    left = v28;
    v8 = DWORD2(v28);
    if ( (int)v28 <= a2->left )
      left = a2->left;
    right = a2->right;
    LODWORD(v28) = left;
    if ( SDWORD2(v28) >= right )
      v8 = right;
    DWORD2(v28) = v8;
    if ( left >= v8 )
      return 0LL;
    top = DWORD1(v28);
    v11 = HIDWORD(v28);
    if ( SDWORD1(v28) <= a2->top )
      top = a2->top;
    bottom = a2->bottom;
    DWORD1(v28) = top;
    if ( SHIDWORD(v28) >= bottom )
      v11 = bottom;
    HIDWORD(v28) = v11;
    if ( top >= v11 )
      return 0LL;
    v14 = *(_QWORD *)&a2->left - v28;
    if ( *(_QWORD *)&a2->left == (_QWORD)v28 )
      v14 = *(_QWORD *)&a2->right - *((_QWORD *)&v28 + 1);
    v15 = v14 == 0;
    goto LABEL_18;
  }
  UserSessionState = W32GetUserSessionState(v6, v5);
  SetRectRgnIndirect(*(_QWORD *)(UserSessionState + 63376), a2);
  v19 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 63376);
  v22 = W32GetUserSessionState(v21, v20);
  v23 = GreCombineRgn(*(_QWORD *)(v22 + 63376), v19, a1, 1LL) - 1;
  if ( !v23 )
    return 0LL;
  if ( v23 != 1 )
    return 1LL;
  v26 = W32GetUserSessionState(v25, v24);
  if ( !(unsigned int)GreGetRgnBox(*(_QWORD *)(v26 + 63376), &v28) )
    return 3LL;
  v27 = *(_QWORD *)&a2->left - v28;
  if ( *(_QWORD *)&a2->left == (_QWORD)v28 )
    v27 = *(_QWORD *)&a2->right - *((_QWORD *)&v28 + 1);
  v15 = v27 == 0;
LABEL_18:
  if ( !v15 )
    return 1LL;
  return 2LL;
}
