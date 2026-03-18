/*
 * XREFs of _ScrollDC @ 0x1401569D0
 * Callers:
 *     NtUserScrollDC @ 0x140156860 (NtUserScrollDC.c)
 * Callees:
 *     UnionRect @ 0x1401524B8 (UnionRect.c)
 *     SpbCheckRect @ 0x1401566D4 (SpbCheckRect.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x140156C38 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     FastWindowFromDC @ 0x140157F0C (FastWindowFromDC.c)
 */

_BOOL8 __fastcall ScrollDC(HDC a1, int a2, int a3, struct tagRECT *a4, struct tagRECT *a5, HRGN a6, struct tagRECT *a7)
{
  HRGN v8; // rdi
  struct tagWND *v12; // rax
  struct tagWND *v13; // rbx
  BOOL v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // ecx
  int v25; // r9d
  struct tagRECT v26; // xmm0
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // [rsp+50h] [rbp-30h] BYREF
  int v34[4]; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT v35; // [rsp+68h] [rbp-18h] BYREF

  v33 = 0;
  v8 = 0LL;
  v12 = (struct tagWND *)FastWindowFromDC();
  v13 = v12;
  if ( v12 )
  {
    v8 = *(HRGN *)(*((_QWORD *)v12 + 5) + 136LL);
    if ( v8 == (HRGN)1 )
      v8 = 0LL;
  }
  v14 = InternalScrollDC(v12, a1, a2, a3, a4, a5, v8, a6, a7, 1) != 0;
  UserSessionState = W32GetUserSessionState(v16, v15);
  GreLockVisRgnSharedOrExclusive(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL), 0LL, &v33);
  if ( v13 )
  {
    v19 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 56968);
    if ( *(_QWORD *)(v19 + 40) )
    {
      v23 = *((_QWORD *)v13 + 5);
      if ( a4 )
      {
        v24 = *(_DWORD *)(v23 + 104);
        v25 = *(_DWORD *)(v23 + 108);
        v26 = *a4;
        v27 = _mm_cvtsi128_si32(*(__m128i *)a4);
        v34[2] = v24 + *(_QWORD *)&a4->right;
        v34[3] = v25 + v26.bottom;
        v34[0] = v24 + v27;
        v34[1] = v25 + v26.top;
        v35.left = a2 + v24 + v27;
        v35.right = v24 + v26.right + a2;
        v35.bottom = v25 + v26.bottom + a3;
        v35.top = v25 + v26.top + a3;
        UnionRect(&v35, &v35.left, v34);
      }
      else
      {
        v35 = *(struct tagRECT *)(v23 + 104);
      }
      if ( v33 )
      {
        v28 = W32GetUserSessionState(v19, v18);
        GreUnlockVisRgnShared(*(_QWORD *)(*(_QWORD *)(v28 + 56968) + 48LL));
      }
      else
      {
        v31 = W32GetUserSessionState(v19, v18);
        GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v31 + 56968) + 48LL));
      }
      v32 = W32GetUserSessionState(v30, v29);
      GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v32 + 56968) + 48LL));
      v33 = 0;
      SpbCheckRect(v13, &v35, 0);
    }
  }
  if ( v33 )
  {
    v20 = W32GetUserSessionState(v19, v18);
    GreUnlockVisRgnShared(*(_QWORD *)(*(_QWORD *)(v20 + 56968) + 48LL));
  }
  else
  {
    v22 = W32GetUserSessionState(v19, v18);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v22 + 56968) + 48LL));
  }
  return v14;
}
