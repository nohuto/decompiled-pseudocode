/*
 * XREFs of ??4CBspPreComputeHelper@@QEAAAEAV0@$$QEAV0@@Z @ 0x18022CAB4
 * Callers:
 *     ??4CPreComputeSubTreeContext@@QEAAAEAV0@$$QEAV0@@Z @ 0x18022CD88 (--4CPreComputeSubTreeContext@@QEAAAEAV0@$$QEAV0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBspPreComputeHelper::operator=(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r8
  _QWORD *v4; // r8
  _QWORD *v5; // r8
  _QWORD *v6; // r8
  _QWORD *v7; // r8
  _QWORD *v8; // r8
  _QWORD *v9; // r8
  _QWORD *v10; // r8
  _QWORD *v11; // r8

  if ( a1 != a2 )
  {
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  v2 = (_QWORD *)(a2 + 24);
  if ( a1 + 24 != a2 + 24 )
  {
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
    *(_QWORD *)(a1 + 24) = *v2;
    *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
    *(_QWORD *)(a2 + 32) = 0LL;
    *v2 = 0LL;
    *(_QWORD *)(a2 + 40) = 0LL;
  }
  v3 = (_QWORD *)(a2 + 48);
  if ( a1 + 48 != a2 + 48 )
  {
    *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 60);
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
    *(_QWORD *)(a1 + 48) = *v3;
    *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 68);
    *(_QWORD *)(a2 + 56) = 0LL;
    *v3 = 0LL;
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  v4 = (_QWORD *)(a2 + 72);
  if ( a1 + 72 != a2 + 72 )
  {
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 80);
    *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 84);
    *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
    *(_QWORD *)(a1 + 72) = *v4;
    *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 92);
    *(_QWORD *)(a2 + 80) = 0LL;
    *v4 = 0LL;
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  v5 = (_QWORD *)(a2 + 96);
  if ( a1 + 96 != a2 + 96 )
  {
    *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 104);
    *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 108);
    *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 112);
    *(_QWORD *)(a1 + 96) = *v5;
    *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 116);
    *(_QWORD *)(a2 + 104) = 0LL;
    *v5 = 0LL;
    *(_QWORD *)(a2 + 112) = 0LL;
  }
  v6 = (_QWORD *)(a2 + 120);
  if ( a1 + 120 != a2 + 120 )
  {
    *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
    *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
    *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
    *(_QWORD *)(a1 + 120) = *v6;
    *(_DWORD *)(a1 + 140) = *(_DWORD *)(a2 + 140);
    *(_QWORD *)(a2 + 128) = 0LL;
    *v6 = 0LL;
    *(_QWORD *)(a2 + 136) = 0LL;
  }
  v7 = (_QWORD *)(a2 + 144);
  if ( a1 + 144 != a2 + 144 )
  {
    *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 152);
    *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 156);
    *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 160);
    *(_QWORD *)(a1 + 144) = *v7;
    *(_DWORD *)(a1 + 164) = *(_DWORD *)(a2 + 164);
    *(_QWORD *)(a2 + 152) = 0LL;
    *v7 = 0LL;
    *(_QWORD *)(a2 + 160) = 0LL;
  }
  v8 = (_QWORD *)(a2 + 168);
  if ( a1 + 168 != a2 + 168 )
  {
    *(_DWORD *)(a1 + 176) = *(_DWORD *)(a2 + 176);
    *(_DWORD *)(a1 + 180) = *(_DWORD *)(a2 + 180);
    *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 184);
    *(_QWORD *)(a1 + 168) = *v8;
    *(_DWORD *)(a1 + 188) = *(_DWORD *)(a2 + 188);
    *(_QWORD *)(a2 + 176) = 0LL;
    *v8 = 0LL;
    *(_QWORD *)(a2 + 184) = 0LL;
  }
  v9 = (_QWORD *)(a2 + 192);
  if ( a1 + 192 != a2 + 192 )
  {
    *(_DWORD *)(a1 + 200) = *(_DWORD *)(a2 + 200);
    *(_DWORD *)(a1 + 204) = *(_DWORD *)(a2 + 204);
    *(_DWORD *)(a1 + 208) = *(_DWORD *)(a2 + 208);
    *(_QWORD *)(a1 + 192) = *v9;
    *(_DWORD *)(a1 + 212) = *(_DWORD *)(a2 + 212);
    *(_QWORD *)(a2 + 200) = 0LL;
    *v9 = 0LL;
    *(_QWORD *)(a2 + 208) = 0LL;
  }
  v10 = (_QWORD *)(a2 + 216);
  if ( a1 + 216 != a2 + 216 )
  {
    *(_DWORD *)(a1 + 224) = *(_DWORD *)(a2 + 224);
    *(_DWORD *)(a1 + 228) = *(_DWORD *)(a2 + 228);
    *(_DWORD *)(a1 + 232) = *(_DWORD *)(a2 + 232);
    *(_QWORD *)(a1 + 216) = *v10;
    *(_DWORD *)(a1 + 236) = *(_DWORD *)(a2 + 236);
    *(_QWORD *)(a2 + 224) = 0LL;
    *v10 = 0LL;
    *(_QWORD *)(a2 + 232) = 0LL;
  }
  v11 = (_QWORD *)(a2 + 240);
  if ( a1 + 240 != a2 + 240 )
  {
    *(_DWORD *)(a1 + 248) = *(_DWORD *)(a2 + 248);
    *(_DWORD *)(a1 + 252) = *(_DWORD *)(a2 + 252);
    *(_DWORD *)(a1 + 256) = *(_DWORD *)(a2 + 256);
    *(_QWORD *)(a1 + 240) = *v11;
    *(_DWORD *)(a1 + 260) = *(_DWORD *)(a2 + 260);
    *(_QWORD *)(a2 + 248) = 0LL;
    *v11 = 0LL;
    *(_QWORD *)(a2 + 256) = 0LL;
  }
  *(_DWORD *)(a1 + 264) = *(_DWORD *)(a2 + 264);
  return a1;
}
