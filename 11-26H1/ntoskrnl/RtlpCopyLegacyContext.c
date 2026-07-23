/*
 * XREFs of RtlpCopyLegacyContext @ 0x14042EB90
 * Callers:
 *     RtlCopyContext @ 0x140A4D9B0 (RtlCopyContext.c)
 * Callees:
 *     RtlpCopyLegacyContextArm @ 0x14061DB60 (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x14061DCC4 (RtlpCopyLegacyContextArm64.c)
 */

void __fastcall RtlpCopyLegacyContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 *v4; // rcx
  __int64 v5; // r10
  __int128 *v6; // rax
  __int128 v7; // xmm0
  __int128 *v8; // rdx
  __int64 v9; // rax
  __int128 *v10; // r9
  __int128 v11; // xmm0

  if ( (a3 & 0x10000) != 0 )
  {
    *(_DWORD *)a2 = a3 & 0x67FFFFFF;
    if ( (a1 & 1) == 0 )
    {
      if ( (a3 & 0x40000000) != 0 )
        *(_DWORD *)a2 = *(_DWORD *)a4 ^ (a3 ^ *(_DWORD *)a4) & 0x67FFFFFF;
      if ( (a3 & 0x10001) == 0x10001 )
      {
        *(_DWORD *)(a2 + 180) = *(_DWORD *)(a4 + 180);
        *(_DWORD *)(a2 + 184) = *(_DWORD *)(a4 + 184);
        *(_DWORD *)(a2 + 188) = *(_DWORD *)(a4 + 188);
        *(_DWORD *)(a2 + 192) = *(_DWORD *)(a4 + 192);
        *(_DWORD *)(a2 + 196) = *(_DWORD *)(a4 + 196);
        *(_DWORD *)(a2 + 200) = *(_DWORD *)(a4 + 200);
      }
      if ( (a3 & 0x10002) == 0x10002 )
      {
        *(_DWORD *)(a2 + 156) = *(_DWORD *)(a4 + 156);
        *(_DWORD *)(a2 + 160) = *(_DWORD *)(a4 + 160);
        *(_DWORD *)(a2 + 164) = *(_DWORD *)(a4 + 164);
        *(_DWORD *)(a2 + 172) = *(_DWORD *)(a4 + 172);
        *(_DWORD *)(a2 + 168) = *(_DWORD *)(a4 + 168);
        *(_DWORD *)(a2 + 176) = *(_DWORD *)(a4 + 176);
      }
      if ( (a3 & 0x10004) == 0x10004 )
      {
        *(_DWORD *)(a2 + 140) = *(_DWORD *)(a4 + 140);
        *(_DWORD *)(a2 + 144) = *(_DWORD *)(a4 + 144);
        *(_DWORD *)(a2 + 148) = *(_DWORD *)(a4 + 148);
        *(_DWORD *)(a2 + 152) = *(_DWORD *)(a4 + 152);
      }
      if ( (a3 & 0x10008) == 0x10008 )
      {
        *(_OWORD *)(a2 + 28) = *(_OWORD *)(a4 + 28);
        *(_OWORD *)(a2 + 44) = *(_OWORD *)(a4 + 44);
        *(_OWORD *)(a2 + 60) = *(_OWORD *)(a4 + 60);
        *(_OWORD *)(a2 + 76) = *(_OWORD *)(a4 + 76);
        *(_OWORD *)(a2 + 92) = *(_OWORD *)(a4 + 92);
        *(_OWORD *)(a2 + 108) = *(_OWORD *)(a4 + 108);
        *(_OWORD *)(a2 + 124) = *(_OWORD *)(a4 + 124);
      }
      if ( (a3 & 0x10010) == 0x10010 )
      {
        *(_DWORD *)(a2 + 4) = *(_DWORD *)(a4 + 4);
        *(_DWORD *)(a2 + 8) = *(_DWORD *)(a4 + 8);
        *(_DWORD *)(a2 + 12) = *(_DWORD *)(a4 + 12);
        *(_DWORD *)(a2 + 16) = *(_DWORD *)(a4 + 16);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(a4 + 20);
        *(_DWORD *)(a2 + 24) = *(_DWORD *)(a4 + 24);
      }
      if ( (a3 & 0x10020) == 0x10020 )
      {
        v8 = (__int128 *)(a2 + 204);
        v9 = 2LL;
        v10 = (__int128 *)(a4 + 204);
        do
        {
          v8 += 8;
          v11 = *v10;
          v10 += 8;
          *(v8 - 8) = v11;
          *(v8 - 7) = *(v10 - 7);
          *(v8 - 6) = *(v10 - 6);
          *(v8 - 5) = *(v10 - 5);
          *(v8 - 4) = *(v10 - 4);
          *(v8 - 3) = *(v10 - 3);
          *(v8 - 2) = *(v10 - 2);
          *(v8 - 1) = *(v10 - 1);
          --v9;
        }
        while ( v9 );
        *v8 = *v10;
        v8[1] = v10[1];
      }
    }
  }
  else if ( (a3 & 0x100000) != 0 )
  {
    *(_DWORD *)(a2 + 48) = a3 & 0x67FFFFFF;
    if ( (a1 & 1) == 0 )
    {
      if ( (a3 & 0x40000000) != 0 )
        *(_DWORD *)(a2 + 48) = *(_DWORD *)(a4 + 48) ^ (a3 ^ *(_DWORD *)(a4 + 48)) & 0x67FFFFFF;
      if ( (a3 & 0x100001) == 0x100001 )
      {
        *(_QWORD *)(a2 + 248) = *(_QWORD *)(a4 + 248);
        *(_WORD *)(a2 + 56) = *(_WORD *)(a4 + 56);
        *(_WORD *)(a2 + 66) = *(_WORD *)(a4 + 66);
        *(_QWORD *)(a2 + 152) = *(_QWORD *)(a4 + 152);
        *(_DWORD *)(a2 + 68) = *(_DWORD *)(a4 + 68);
      }
      if ( (a3 & 0x100002) == 0x100002 )
      {
        *(_OWORD *)(a2 + 120) = *(_OWORD *)(a4 + 120);
        *(_OWORD *)(a2 + 136) = *(_OWORD *)(a4 + 136);
        *(_OWORD *)(a2 + 160) = *(_OWORD *)(a4 + 160);
        *(_OWORD *)(a2 + 176) = *(_OWORD *)(a4 + 176);
        *(_OWORD *)(a2 + 192) = *(_OWORD *)(a4 + 192);
        *(_OWORD *)(a2 + 208) = *(_OWORD *)(a4 + 208);
        *(_OWORD *)(a2 + 224) = *(_OWORD *)(a4 + 224);
        *(_QWORD *)(a2 + 240) = *(_QWORD *)(a4 + 240);
      }
      if ( (a3 & 0x100004) == 0x100004 )
      {
        *(_WORD *)(a2 + 64) = *(_WORD *)(a4 + 64);
        *(_WORD *)(a2 + 62) = *(_WORD *)(a4 + 62);
        *(_WORD *)(a2 + 60) = *(_WORD *)(a4 + 60);
        *(_WORD *)(a2 + 58) = *(_WORD *)(a4 + 58);
      }
      if ( (a3 & 0x100008) == 0x100008 )
      {
        v4 = (__int128 *)(a4 + 256);
        *(_DWORD *)(a2 + 52) = *(_DWORD *)(a4 + 52);
        v5 = 3LL;
        v6 = (__int128 *)(a2 + 256);
        do
        {
          v6 += 8;
          v7 = *v4;
          v4 += 8;
          *(v6 - 8) = v7;
          *(v6 - 7) = *(v4 - 7);
          *(v6 - 6) = *(v4 - 6);
          *(v6 - 5) = *(v4 - 5);
          *(v6 - 4) = *(v4 - 4);
          *(v6 - 3) = *(v4 - 3);
          *(v6 - 2) = *(v4 - 2);
          *(v6 - 1) = *(v4 - 1);
          --v5;
        }
        while ( v5 );
        *v6 = *v4;
        v6[1] = v4[1];
      }
      if ( (a3 & 0x100010) == 0x100010 )
      {
        *(_OWORD *)(a2 + 72) = *(_OWORD *)(a4 + 72);
        *(_OWORD *)(a2 + 88) = *(_OWORD *)(a4 + 88);
        *(_OWORD *)(a2 + 104) = *(_OWORD *)(a4 + 104);
        *(_OWORD *)(a2 + 1200) = *(_OWORD *)(a4 + 1200);
        *(_OWORD *)(a2 + 1216) = *(_OWORD *)(a4 + 1216);
      }
    }
  }
  else if ( (a3 & 0x200000) != 0 )
  {
    RtlpCopyLegacyContextArm(a1, a2, a3, a4);
  }
  else if ( (a3 & 0x400000) != 0 )
  {
    RtlpCopyLegacyContextArm64(a1, a2, a3, a4);
  }
}
