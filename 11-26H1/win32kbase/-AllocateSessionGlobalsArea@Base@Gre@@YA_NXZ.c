/*
 * XREFs of ?AllocateSessionGlobalsArea@Base@Gre@@YA_NXZ @ 0x140183208
 * Callers:
 *     InitializeGre @ 0x1402F3768 (InitializeGre.c)
 * Callees:
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 */

bool __fastcall Gre::Base::AllocateSessionGlobalsArea(Gre::Base *this)
{
  __int64 SessionState; // rbx
  __int64 v2; // r8
  __int64 v3; // r9
  _OWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  _OWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  const char *v12; // r8
  __int128 v13; // xmm0
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rax
  __int128 v17; // xmm1
  _OWORD *v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm1

  SessionState = W32GetSessionState(this);
  v4 = (_OWORD *)PALLOCMEM(5792LL, 826754887LL, v2, v3);
  *(_QWORD *)(SessionState + 88) = v4;
  if ( v4 )
  {
    v6 = W32GetSessionState(v5);
    v7 = &unk_140271EC0;
    v8 = 3LL;
    v9 = *(_QWORD *)(v6 + 88);
    v10 = (_OWORD *)(v9 + 672);
    do
    {
      *v10 = *v7;
      v10[1] = v7[1];
      v10[2] = v7[2];
      v10[3] = v7[3];
      v10[4] = v7[4];
      v10[5] = v7[5];
      v10[6] = v7[6];
      v10 += 8;
      v11 = v7[7];
      v7 += 8;
      *(v10 - 1) = v11;
      --v8;
    }
    while ( v8 );
    v12 = "COSP";
    *v10 = *v7;
    v10[1] = v7[1];
    v10[2] = v7[2];
    v10[3] = v7[3];
    v13 = v7[4];
    *(_DWORD *)(v9 + 3776) = 3;
    v14 = v9 + 2336;
    *(_DWORD *)(v9 + 1328) = 1;
    v15 = 4LL;
    v10[4] = v13;
    *(_DWORD *)(v9 + 1332) = 1;
    *(_DWORD *)(v9 + 1336) = 1;
    *(_DWORD *)(v9 + 1340) = 1;
    *(_DWORD *)(v9 + 1360) = -1;
    *(_OWORD *)(v9 + 3780) = xmmword_140271E20;
    *(_OWORD *)(v9 + 3796) = xmmword_140271E30;
    *(_OWORD *)(v9 + 3812) = xmmword_140271E40;
    *(_OWORD *)(v9 + 3828) = xmmword_140271E50;
    *(_OWORD *)(v9 + 3844) = xmmword_140271E60;
    *(_DWORD *)(v9 + 3860) = 0xFFFFFF;
    v16 = 4LL;
    do
    {
      *(_OWORD *)v14 = *(_OWORD *)v12;
      *(_OWORD *)(v14 + 16) = *((_OWORD *)v12 + 1);
      *(_OWORD *)(v14 + 32) = *((_OWORD *)v12 + 2);
      *(_OWORD *)(v14 + 48) = *((_OWORD *)v12 + 3);
      *(_OWORD *)(v14 + 64) = *((_OWORD *)v12 + 4);
      *(_OWORD *)(v14 + 80) = *((_OWORD *)v12 + 5);
      *(_OWORD *)(v14 + 96) = *((_OWORD *)v12 + 6);
      v14 += 128LL;
      v17 = *((_OWORD *)v12 + 7);
      v12 += 128;
      *(_OWORD *)(v14 - 16) = v17;
      --v16;
    }
    while ( v16 );
    *(_OWORD *)v14 = *(_OWORD *)v12;
    *(_OWORD *)(v14 + 16) = *((_OWORD *)v12 + 1);
    *(_OWORD *)(v14 + 32) = *((_OWORD *)v12 + 2);
    *(_OWORD *)(v14 + 48) = *((_OWORD *)v12 + 3);
    *(_QWORD *)(v14 + 64) = *((_QWORD *)v12 + 8);
    *(_DWORD *)(v14 + 72) = *((_DWORD *)v12 + 18);
    v4 = (_OWORD *)(v9 + 3160);
    v18 = &gxsadrvfnMulti;
    *(_DWORD *)(v9 + 2924) = 1;
    do
    {
      *v4 = *v18;
      v4[1] = v18[1];
      v4[2] = v18[2];
      v4[3] = v18[3];
      v4[4] = v18[4];
      v4[5] = v18[5];
      v4[6] = v18[6];
      v4 += 8;
      v19 = v18[7];
      v18 += 8;
      *(v4 - 1) = v19;
      --v15;
    }
    while ( v15 );
    *v4 = *v18;
    v20 = v18[1];
    *(_DWORD *)(v9 + 3704) = 6;
    *(_QWORD *)(v9 + 3712) = 0LL;
    v4[1] = v20;
    *(_DWORD *)(v9 + 4232) = 1;
    LOBYTE(v4) = 1;
    *(_OWORD *)(v9 + 32) = *(_OWORD *)&gxsReferenceTrackerCountedTypes;
    *(_OWORD *)(v9 + 48) = xmmword_140271E90;
    *(_OWORD *)(v9 + 64) = xmmword_140271EA0;
    *(_OWORD *)(v9 + 80) = xmmword_140271EB0;
    *(_QWORD *)(v9 + 4344) = v9 + 4272;
    *(_DWORD *)(v9 + 4356) = 4096;
    *(_DWORD *)(v9 + 4368) = 0;
    *(_QWORD *)(v9 + 5780) = 0LL;
  }
  return (char)v4;
}
