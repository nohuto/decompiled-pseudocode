/*
 * XREFs of ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x140271D54
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1401554B0 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     GetMonitorRect @ 0x140091000 (GetMonitorRect.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall PreventInterMonitorBlts(struct tagCVR *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 i; // r14
  __int128 v5; // xmm0
  __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  __int128 v9; // kr00_16
  unsigned int v10; // r13d
  unsigned int v11; // r15d
  unsigned int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 UserSessionState; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int128 v35; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v36[16]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v37; // [rsp+58h] [rbp-19h] BYREF
  __int128 v38; // [rsp+68h] [rbp-9h] BYREF
  __int64 v39; // [rsp+78h] [rbp+7h] BYREF
  __int64 v40; // [rsp+80h] [rbp+Fh]
  __int128 v41; // [rsp+88h] [rbp+17h] BYREF

  v37 = 0LL;
  v41 = 0LL;
  v38 = 0LL;
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 56)) )
  {
    v2 = *((unsigned int *)a1 + 18);
    v3 = *((unsigned int *)a1 + 19);
    LODWORD(v39) = *((_DWORD *)a1 + 14) - v2;
    LODWORD(v40) = *((_DWORD *)a1 + 16) - v2;
    HIDWORD(v39) = *((_DWORD *)a1 + 15) - v3;
    HIDWORD(v40) = *((_DWORD *)a1 + 17) - v3;
    for ( i = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v2, v3) + 56968) + 112LL); i; i = *(_QWORD *)(i + 56) )
    {
      v5 = *(_OWORD *)GetMonitorRect((__int64)v36, i);
      v6 = *(_QWORD *)(i + 40);
      v35 = v5;
      if ( (*(_DWORD *)(v6 + 24) & 1) != 0 && (unsigned int)IntersectRect(&v41, (int *)&v39, (int *)&v35) )
      {
        v7 = *((_DWORD *)a1 + 18);
        v8 = *((_DWORD *)a1 + 19);
        v9 = v41;
        v10 = v8 + DWORD1(v41);
        v11 = v41 + v7;
        DWORD1(v37) = v8 + DWORD1(v41);
        v12 = DWORD2(v41) + v7;
        LODWORD(v37) = v41 + v7;
        DWORD2(v37) = DWORD2(v41) + v7;
        HIDWORD(v37) = v8 + HIDWORD(v41);
        IntersectRect(&v38, (int *)&v37, (int *)&v35);
        v17 = v38 - v37;
        if ( (_QWORD)v38 == (_QWORD)v37 )
          v17 = *((_QWORD *)&v38 + 1) - *((_QWORD *)&v37 + 1);
        if ( v17 )
        {
          if ( !*((_QWORD *)a1 + 15) )
            *((_QWORD *)a1 + 15) = CreateEmptyRgn(v14, v13, v15, v16);
          UserSessionState = W32GetUserSessionState(v14, v13);
          GreSetRectRgn(*(_QWORD *)(UserSessionState + 63376), v11, v10, v12, HIDWORD(v37));
          v22 = W32GetUserSessionState(v21, v20);
          GreSetRectRgn(*(_QWORD *)(v22 + 43064), (unsigned int)v38, DWORD1(v38), DWORD2(v38), HIDWORD(v38));
          v25 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 43064);
          v28 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 63376);
          v31 = W32GetUserSessionState(v30, v29);
          GreCombineRgn(*(_QWORD *)(v31 + 63376), v28, v25, 4LL);
          v34 = W32GetUserSessionState(v33, v32);
          GreCombineRgn(*((_QWORD *)a1 + 15), *((_QWORD *)a1 + 15), *(_QWORD *)(v34 + 63376), 2LL);
        }
        else
        {
          v18 = v9 - v39;
          if ( (_QWORD)v9 == v39 )
            v18 = *((_QWORD *)&v9 + 1) - v40;
          if ( !v18 )
            return;
        }
      }
    }
  }
}
