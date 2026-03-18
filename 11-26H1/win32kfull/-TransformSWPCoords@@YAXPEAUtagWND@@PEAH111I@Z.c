/*
 * XREFs of ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x140220848
 * Callers:
 *     NtUserSetWindowPos @ 0x14025CDA0 (NtUserSetWindowPos.c)
 *     NtUserDeferWindowPosAndBand @ 0x1402B0DD0 (NtUserDeferWindowPosAndBand.c)
 * Callees:
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14002EDBC (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     ScaleDpiValueWithSubpixel @ 0x1402A1F04 (ScaleDpiValueWithSubpixel.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall TransformSWPCoords(struct tagWND *a1, int *a2, int *a3, int *a4, int *a5, char a6)
{
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int16 v14; // r15
  unsigned __int16 v15; // r14
  INT *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned __int16 v20; // di
  unsigned __int16 v21; // ax
  INT v22; // ebx
  INT v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r10
  int v32; // [rsp+20h] [rbp-38h] BYREF
  int v33; // [rsp+24h] [rbp-34h]
  int *v34; // [rsp+28h] [rbp-30h]
  int *v35; // [rsp+30h] [rbp-28h]
  int *v36; // [rsp+38h] [rbp-20h] BYREF
  int v37; // [rsp+40h] [rbp-18h]
  int v38; // [rsp+44h] [rbp-14h]

  v36 = a3;
  v32 = a6 & 2;
  v34 = a2;
  v35 = a5;
  if ( IsTopLevelWindow((__int64)a1) )
  {
    if ( v10 )
    {
      if ( (a6 & 1) != 0 )
        return;
      v17 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
      if ( !v17 )
        return;
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
      v23 = EngMulDiv(*a5, v20, v22);
    }
    else
    {
      v24 = *a2;
      v25 = *a3;
      if ( (a6 & 1) != 0 )
      {
        v32 = *a2;
        v33 = v25;
        TransformPointBetweenCoordinateSpaces(&v32, &v32, a1, 0LL);
        *a2 = v32;
        *a3 = v33;
        return;
      }
      LODWORD(v36) = *a2;
      v37 = *a4 + v24;
      v26 = v25 + *a5;
      HIDWORD(v36) = v25;
      v38 = v26;
      TransformRectBetweenCoordinateSpaces(&v36, &v36, a1, 0LL);
      v27 = HIDWORD(v36);
      v28 = v37 - (_DWORD)v36;
      *a2 = (int)v36;
      *a3 = v27;
      *a4 = v28;
      v23 = v38 - v27;
    }
    *a5 = v23;
    return;
  }
  if ( !v10 || (a6 & 1) == 0 )
  {
    v11 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    if ( v11 )
    {
      v12 = *((_QWORD *)a1 + 5);
      v13 = v11 + 40;
      v14 = (*(_DWORD *)(v12 + 288) >> 8) & 0x1FF;
      if ( !v14 )
        v14 = *(_WORD *)(*(_QWORD *)v13 + 60LL);
      v15 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v12) >> 8) & 0x1FF;
      if ( !v15 )
        v15 = *(_WORD *)(*(_QWORD *)v13 + 60LL);
      if ( !v32 )
      {
        v16 = v36;
        *v34 = EngMulDiv(*v34, v14, v15);
        *v16 = EngMulDiv(*v16, v14, v15);
      }
      if ( (a6 & 1) == 0 )
      {
        if ( IsChildWindowDpiBoundary(a1) )
        {
          *((_DWORD *)a1 + 58) = 0;
          *((_DWORD *)a1 + 59) = 0;
          ScaleDpiValueWithSubpixel(a4, (char *)a1 + 232, v14, v15);
          ScaleDpiValueWithSubpixel(v35, v31, v29, v30);
        }
        else
        {
          *a4 = EngMulDiv(*a4, v14, v15);
          *v35 = EngMulDiv(*v35, v14, v15);
        }
      }
    }
  }
}
