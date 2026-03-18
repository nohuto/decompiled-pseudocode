/*
 * XREFs of ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1401EFF20
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1402487D0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x14024EC50 (NtUserSetWindowPos.c)
 * Callees:
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14003364C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ScaleDpiValueWithSubpixel @ 0x14028441C (ScaleDpiValueWithSubpixel.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall TransformSWPCoords(struct tagWND *a1, int *a2, int *a3, int *a4, int *a5, char a6)
{
  int *v7; // rbx
  __int64 v10; // rdx
  int v11; // r9d
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  INT v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned __int16 v20; // di
  unsigned __int16 v21; // ax
  INT v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  unsigned __int16 v26; // r14
  unsigned __int16 v27; // si
  INT v28; // eax
  int *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r10
  int *v33; // [rsp+20h] [rbp-30h] BYREF
  INT *v34; // [rsp+28h] [rbp-28h]
  int *v35; // [rsp+30h] [rbp-20h] BYREF
  int v36; // [rsp+38h] [rbp-18h]
  int v37; // [rsp+3Ch] [rbp-14h]

  v33 = a4;
  v7 = a3;
  v35 = a3;
  v34 = a5;
  if ( !IsTopLevelWindow((__int64)a1) )
  {
    if ( v11 != 3 )
    {
      v23 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL), v10);
      if ( v23 )
      {
        v24 = *((_QWORD *)a1 + 5);
        v25 = v23 + 40;
        v26 = (*(_DWORD *)(v24 + 288) >> 8) & 0x1FF;
        if ( !v26 )
          v26 = *(_WORD *)(*(_QWORD *)v25 + 60LL);
        v27 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v24) >> 8) & 0x1FF;
        if ( !v27 )
          v27 = *(_WORD *)(*(_QWORD *)v25 + 60LL);
        if ( (a6 & 2) == 0 )
        {
          *a2 = EngMulDiv(*a2, v26, v27);
          *v35 = EngMulDiv(*v35, v26, v27);
        }
        if ( (a6 & 1) == 0 )
        {
          if ( !IsChildWindowDpiBoundary(a1) )
          {
            *v33 = EngMulDiv(*v33, v26, v27);
            v7 = v34;
            v28 = EngMulDiv(*v34, v26, v27);
LABEL_25:
            *v7 = v28;
            return;
          }
          v29 = v33;
          *((_DWORD *)a1 + 58) = 0;
          *((_DWORD *)a1 + 59) = 0;
          ScaleDpiValueWithSubpixel(v29, (char *)a1 + 232, v26, v27);
          ScaleDpiValueWithSubpixel(v34, v32, v30, v31);
        }
      }
    }
    return;
  }
  if ( !v11 )
  {
    v12 = *v7;
    LODWORD(v35) = *a2;
    v36 = *a4 + (_DWORD)v35;
    v13 = v12 + *a5;
    HIDWORD(v35) = v12;
    v37 = v13;
    TransformRectBetweenCoordinateSpaces(&v35, &v35, a1, 0LL);
    v14 = HIDWORD(v35);
    v15 = v36 - (_DWORD)v35;
    *a2 = (int)v35;
    *v7 = v14;
    *a4 = v15;
    v16 = v37 - v14;
LABEL_14:
    *a5 = v16;
    return;
  }
  if ( (a6 & 2) == 0 )
  {
    LODWORD(v33) = *a2;
    HIDWORD(v33) = *v7;
    TransformPointBetweenCoordinateSpaces(&v33, &v33, a1, 0LL);
    *a2 = (int)v33;
    v28 = HIDWORD(v33);
    goto LABEL_25;
  }
  if ( (a6 & 1) == 0 )
  {
    v17 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL), v10);
    if ( v17 )
    {
      v18 = *((_QWORD *)a1 + 5);
      v19 = v17 + 40;
      v20 = (*(_DWORD *)(v18 + 288) >> 8) & 0x1FF;
      if ( !v20 )
        v20 = *(_WORD *)(*(_QWORD *)v19 + 60LL);
      v21 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v18) >> 8) & 0x1FF;
      if ( !v21 )
        v21 = *(_WORD *)(*(_QWORD *)v19 + 60LL);
      v22 = v21;
      *a4 = EngMulDiv(*a4, v20, v21);
      v16 = EngMulDiv(*a5, v20, v22);
      goto LABEL_14;
    }
  }
}
