/*
 * XREFs of ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1402995D0
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x14001AA44 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetMonitorRect @ 0x140030144 (GetMonitorRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 */

void __fastcall PreventInterMonitorBlts(struct tagCVR *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 i; // r14
  __m128i v5; // xmm0
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
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 UserSessionState; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int128 v34; // [rsp+38h] [rbp-29h] BYREF
  __int128 v35; // [rsp+48h] [rbp-19h] BYREF
  __int64 v36; // [rsp+58h] [rbp-9h] BYREF
  __int64 v37; // [rsp+60h] [rbp-1h]
  __int128 v38; // [rsp+68h] [rbp+7h] BYREF
  __m128i v39; // [rsp+78h] [rbp+17h] BYREF
  __m128i v40; // [rsp+88h] [rbp+27h] BYREF

  v34 = 0LL;
  v38 = 0LL;
  v35 = 0LL;
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 56)) )
  {
    v2 = *((unsigned int *)a1 + 18);
    v3 = *((unsigned int *)a1 + 19);
    LODWORD(v36) = *((_DWORD *)a1 + 14) - v2;
    LODWORD(v37) = *((_DWORD *)a1 + 16) - v2;
    HIDWORD(v36) = *((_DWORD *)a1 + 15) - v3;
    HIDWORD(v37) = *((_DWORD *)a1 + 17) - v3;
    for ( i = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v2, v3) + 56968) + 104LL); i; i = *(_QWORD *)(i + 56) )
    {
      v5 = *GetMonitorRect(&v40, i);
      v6 = *(_QWORD *)(i + 40);
      v39 = v5;
      if ( (*(_DWORD *)(v6 + 24) & 1) != 0 && (unsigned int)IntersectRect(&v38, (int *)&v36, v39.m128i_i32) )
      {
        v7 = *((_DWORD *)a1 + 18);
        v8 = *((_DWORD *)a1 + 19);
        v9 = v38;
        v10 = v8 + DWORD1(v38);
        v11 = v7 + v38;
        DWORD1(v34) = v8 + DWORD1(v38);
        v12 = v7 + DWORD2(v38);
        LODWORD(v34) = v7 + v38;
        DWORD2(v34) = v7 + DWORD2(v38);
        HIDWORD(v34) = v8 + HIDWORD(v38);
        IntersectRect(&v35, (int *)&v34, v39.m128i_i32);
        v16 = v35 - v34;
        if ( (_QWORD)v35 == (_QWORD)v34 )
          v16 = *((_QWORD *)&v35 + 1) - *((_QWORD *)&v34 + 1);
        if ( v16 )
        {
          if ( !*((_QWORD *)a1 + 15) )
            *((_QWORD *)a1 + 15) = CreateEmptyRgn(v14, v13, v15);
          UserSessionState = W32GetUserSessionState(v14, v13);
          GreSetRectRgn(*(_QWORD *)(UserSessionState + 63360), v11, v10, v12, HIDWORD(v34));
          v21 = W32GetUserSessionState(v20, v19);
          GreSetRectRgn(*(_QWORD *)(v21 + 43088), (unsigned int)v35, DWORD1(v35), DWORD2(v35), HIDWORD(v35));
          v24 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 43088);
          v27 = *(_QWORD *)(W32GetUserSessionState(v26, v25) + 63360);
          v30 = W32GetUserSessionState(v29, v28);
          GreCombineRgn(*(_QWORD *)(v30 + 63360), v27, v24, 4LL);
          v33 = W32GetUserSessionState(v32, v31);
          GreCombineRgn(*((_QWORD *)a1 + 15), *((_QWORD *)a1 + 15), *(_QWORD *)(v33 + 63360), 2LL);
        }
        else
        {
          v17 = v9 - v36;
          if ( (_QWORD)v9 == v36 )
            v17 = *((_QWORD *)&v9 + 1) - v37;
          if ( !v17 )
            return;
        }
      }
    }
  }
}
