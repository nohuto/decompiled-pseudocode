/*
 * XREFs of ?AllocateSessionGlobalsArea@Base@Gre@@YA_NXZ @ 0x140146C0C
 * Callers:
 *     InitializeGre @ 0x1402EC79C (InitializeGre.c)
 * Callees:
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 */

bool __fastcall Gre::Base::AllocateSessionGlobalsArea(Gre::Base *this)
{
  __int64 SessionState; // rbx
  _OWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  _OWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  const char *v10; // r8
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rax
  __int128 v15; // xmm1
  _OWORD *v16; // rcx
  __int128 v17; // xmm1
  __int128 v18; // xmm1

  SessionState = W32GetSessionState(this);
  v2 = (_OWORD *)PALLOCMEM(5760LL, 826754887LL);
  *(_QWORD *)(SessionState + 88) = v2;
  if ( v2 )
  {
    v4 = W32GetSessionState(v3);
    v5 = &unk_140268B00;
    v6 = 3LL;
    v7 = *(_QWORD *)(v4 + 88);
    v8 = (_OWORD *)(v7 + 584);
    do
    {
      *v8 = *v5;
      v8[1] = v5[1];
      v8[2] = v5[2];
      v8[3] = v5[3];
      v8[4] = v5[4];
      v8[5] = v5[5];
      v8[6] = v5[6];
      v8 += 8;
      v9 = v5[7];
      v5 += 8;
      *(v8 - 1) = v9;
      --v6;
    }
    while ( v6 );
    v10 = "COSP";
    *v8 = *v5;
    v8[1] = v5[1];
    v8[2] = v5[2];
    v8[3] = v5[3];
    v11 = v5[4];
    *(_DWORD *)(v7 + 1272) = -1;
    v12 = v7 + 2248;
    *(_DWORD *)(v7 + 3672) = 3;
    v13 = 4LL;
    v8[4] = v11;
    *(_DWORD *)(v7 + 1240) = 1;
    *(_DWORD *)(v7 + 1244) = 1;
    *(_DWORD *)(v7 + 1248) = 1;
    *(_DWORD *)(v7 + 1252) = 1;
    *(_OWORD *)(v7 + 3676) = xmmword_140268F50;
    *(_OWORD *)(v7 + 3692) = xmmword_140268F60;
    *(_OWORD *)(v7 + 3708) = xmmword_140268F70;
    *(_OWORD *)(v7 + 3724) = xmmword_140268F80;
    *(_OWORD *)(v7 + 3740) = xmmword_140268F90;
    *(_DWORD *)(v7 + 3756) = 0xFFFFFF;
    v14 = 4LL;
    do
    {
      *(_OWORD *)v12 = *(_OWORD *)v10;
      *(_OWORD *)(v12 + 16) = *((_OWORD *)v10 + 1);
      *(_OWORD *)(v12 + 32) = *((_OWORD *)v10 + 2);
      *(_OWORD *)(v12 + 48) = *((_OWORD *)v10 + 3);
      *(_OWORD *)(v12 + 64) = *((_OWORD *)v10 + 4);
      *(_OWORD *)(v12 + 80) = *((_OWORD *)v10 + 5);
      *(_OWORD *)(v12 + 96) = *((_OWORD *)v10 + 6);
      v12 += 128LL;
      v15 = *((_OWORD *)v10 + 7);
      v10 += 128;
      *(_OWORD *)(v12 - 16) = v15;
      --v14;
    }
    while ( v14 );
    *(_OWORD *)v12 = *(_OWORD *)v10;
    *(_OWORD *)(v12 + 16) = *((_OWORD *)v10 + 1);
    *(_OWORD *)(v12 + 32) = *((_OWORD *)v10 + 2);
    *(_OWORD *)(v12 + 48) = *((_OWORD *)v10 + 3);
    *(_QWORD *)(v12 + 64) = *((_QWORD *)v10 + 8);
    *(_DWORD *)(v12 + 72) = *((_DWORD *)v10 + 18);
    v2 = (_OWORD *)(v7 + 3080);
    v16 = &gxsadrvfnMulti;
    *(_DWORD *)(v7 + 2848) = 1;
    do
    {
      *v2 = *v16;
      v2[1] = v16[1];
      v2[2] = v16[2];
      v2[3] = v16[3];
      v2[4] = v16[4];
      v2[5] = v16[5];
      v2[6] = v16[6];
      v2 += 8;
      v17 = v16[7];
      v16 += 8;
      *(v2 - 1) = v17;
      --v13;
    }
    while ( v13 );
    *v2 = *v16;
    v18 = v16[1];
    *(_QWORD *)(v7 + 3632) = 0LL;
    *(_DWORD *)(v7 + 3624) = 6;
    v2[1] = v18;
    *(_DWORD *)(v7 + 4128) = 1;
    LOBYTE(v2) = 1;
    *(_OWORD *)(v7 + 5696) = *(_OWORD *)&gxsReferenceTrackerCountedTypes;
    *(_OWORD *)(v7 + 5712) = xmmword_140268F30;
    *(_DWORD *)(v7 + 4256) = 0;
    *(_QWORD *)(v7 + 4232) = v7 + 4168;
    *(_OWORD *)(v7 + 5728) = xmmword_140268F40;
    *(_DWORD *)(v7 + 4244) = 4096;
    *(_QWORD *)(v7 + 5744) = 0LL;
    *(_DWORD *)(v7 + 5752) = 0;
  }
  return (char)v2;
}
