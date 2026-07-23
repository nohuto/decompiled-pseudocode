/*
 * XREFs of RtlpCopyExtendedContext @ 0x14040BA10
 * Callers:
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x14043ED48 (KiInitializeUserApc.c)
 *     RtlCopyExtendedContext @ 0x14061DB30 (RtlCopyExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x1409E9164 (RtlpWriteExtendedContext.c)
 *     RtlpReadExtendedContext @ 0x1409EAB30 (RtlpReadExtendedContext.c)
 * Callees:
 *     RtlpCopyXStateChunk @ 0x14040C07C (RtlpCopyXStateChunk.c)
 *     RtlpCopyKernelCetChunk @ 0x140534E68 (RtlpCopyKernelCetChunk.c)
 *     RtlpCopyLegacyContextArm @ 0x14061DB60 (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x14061DCC4 (RtlpCopyLegacyContextArm64.c)
 */

__int64 __fastcall RtlpCopyExtendedContext(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  int v11; // r11d
  char v12; // si
  unsigned int v13; // r12d
  bool v14; // cl
  __int64 v15; // r8
  __int64 result; // rax
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r9
  __int128 *v23; // rcx
  __int128 *v24; // rax
  __int128 v25; // xmm0
  __int128 *v26; // rdx
  __int64 v27; // rax
  __int128 *v28; // r9
  __int128 v29; // xmm0
  int v30; // eax

  v11 = a4 & 0x10000;
  if ( (!v11 || (a4 & 0x27FEFF80) != 0)
    && (a4 & 0x7FFFF20) != 0x100000
    && ((a4 & 0x200000) == 0 || (a4 & 0x7DFFFF0) != 0)
    && (a4 & 0x7FFFF00) != 0x400000 )
  {
    return 3221225485LL;
  }
  v12 = 1;
  v13 = 0;
  v14 = 0;
  v15 = 3LL;
  if ( (a4 & 0x400020) != 0x400020 )
    v14 = (a4 & 0x10040) != 65600 && (a4 & 0x100040) != 1048640;
  if ( !v14 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      return 3221225659LL;
    v12 = 3;
  }
  if ( (a4 & 0x100080) == 0x100080 )
  {
    if ( !(_BYTE)KiKernelCetEnabled )
      return 3221225659LL;
    v12 |= 4u;
  }
  v17 = a2;
  if ( a3 )
    v17 = a3;
  v18 = a5;
  if ( a6 )
    v18 = a6;
  v19 = *(int *)(v17 + 8);
  v20 = *(int *)(v18 + 8);
  if ( (_DWORD)v19 != (_DWORD)v20 || *(_DWORD *)(v17 + 12) < *(_DWORD *)(v18 + 12) )
    return 3221225485LL;
  v21 = a2 + v19;
  v22 = v20 + a5;
  if ( v11 )
  {
    *(_DWORD *)v21 = a4 & 0x67FFFFFF;
    if ( (a1 & 1) == 0 )
    {
      if ( (a4 & 0x40000000) != 0 )
        *(_DWORD *)v21 = *(_DWORD *)v22 ^ (a4 ^ *(_DWORD *)v22) & 0x67FFFFFF;
      if ( (a4 & 0x10001) == 0x10001 )
      {
        *(_DWORD *)(v21 + 180) = *(_DWORD *)(v22 + 180);
        *(_DWORD *)(v21 + 184) = *(_DWORD *)(v22 + 184);
        *(_DWORD *)(v21 + 188) = *(_DWORD *)(v22 + 188);
        *(_DWORD *)(v21 + 192) = *(_DWORD *)(v22 + 192);
        *(_DWORD *)(v21 + 196) = *(_DWORD *)(v22 + 196);
        *(_DWORD *)(v21 + 200) = *(_DWORD *)(v22 + 200);
      }
      if ( (a4 & 0x10002) == 0x10002 )
      {
        *(_DWORD *)(v21 + 156) = *(_DWORD *)(v22 + 156);
        *(_DWORD *)(v21 + 160) = *(_DWORD *)(v22 + 160);
        *(_DWORD *)(v21 + 164) = *(_DWORD *)(v22 + 164);
        *(_DWORD *)(v21 + 172) = *(_DWORD *)(v22 + 172);
        *(_DWORD *)(v21 + 168) = *(_DWORD *)(v22 + 168);
        *(_DWORD *)(v21 + 176) = *(_DWORD *)(v22 + 176);
      }
      if ( (a4 & 0x10004) == 0x10004 )
      {
        *(_DWORD *)(v21 + 140) = *(_DWORD *)(v22 + 140);
        *(_DWORD *)(v21 + 144) = *(_DWORD *)(v22 + 144);
        *(_DWORD *)(v21 + 148) = *(_DWORD *)(v22 + 148);
        *(_DWORD *)(v21 + 152) = *(_DWORD *)(v22 + 152);
      }
      if ( (a4 & 0x10008) == 0x10008 )
      {
        *(_OWORD *)(v21 + 28) = *(_OWORD *)(v22 + 28);
        *(_OWORD *)(v21 + 44) = *(_OWORD *)(v22 + 44);
        *(_OWORD *)(v21 + 60) = *(_OWORD *)(v22 + 60);
        *(_OWORD *)(v21 + 76) = *(_OWORD *)(v22 + 76);
        *(_OWORD *)(v21 + 92) = *(_OWORD *)(v22 + 92);
        *(_OWORD *)(v21 + 108) = *(_OWORD *)(v22 + 108);
        *(_OWORD *)(v21 + 124) = *(_OWORD *)(v22 + 124);
      }
      if ( (a4 & 0x10010) == 0x10010 )
      {
        *(_DWORD *)(v21 + 4) = *(_DWORD *)(v22 + 4);
        *(_DWORD *)(v21 + 8) = *(_DWORD *)(v22 + 8);
        *(_DWORD *)(v21 + 12) = *(_DWORD *)(v22 + 12);
        *(_DWORD *)(v21 + 16) = *(_DWORD *)(v22 + 16);
        *(_DWORD *)(v21 + 20) = *(_DWORD *)(v22 + 20);
        *(_DWORD *)(v21 + 24) = *(_DWORD *)(v22 + 24);
      }
      if ( (a4 & 0x10020) == 0x10020 )
      {
        v26 = (__int128 *)(v21 + 204);
        v27 = 2LL;
        v28 = (__int128 *)(v22 + 204);
        do
        {
          v26 += 8;
          v29 = *v28;
          v28 += 8;
          *(v26 - 8) = v29;
          *(v26 - 7) = *(v28 - 7);
          *(v26 - 6) = *(v28 - 6);
          *(v26 - 5) = *(v28 - 5);
          *(v26 - 4) = *(v28 - 4);
          *(v26 - 3) = *(v28 - 3);
          *(v26 - 2) = *(v28 - 2);
          *(v26 - 1) = *(v28 - 1);
          --v27;
        }
        while ( v27 );
        *v26 = *v28;
        v26[1] = v28[1];
      }
    }
  }
  else if ( (a4 & 0x100000) != 0 )
  {
    *(_DWORD *)(v21 + 48) = a4 & 0x67FFFFFF;
    if ( (a1 & 1) == 0 )
    {
      if ( (a4 & 0x40000000) != 0 )
        *(_DWORD *)(v21 + 48) = *(_DWORD *)(v22 + 48) ^ (a4 ^ *(_DWORD *)(v22 + 48)) & 0x67FFFFFF;
      if ( (a4 & 0x100001) == 0x100001 )
      {
        *(_QWORD *)(v21 + 248) = *(_QWORD *)(v22 + 248);
        *(_WORD *)(v21 + 56) = *(_WORD *)(v22 + 56);
        *(_WORD *)(v21 + 66) = *(_WORD *)(v22 + 66);
        *(_QWORD *)(v21 + 152) = *(_QWORD *)(v22 + 152);
        *(_DWORD *)(v21 + 68) = *(_DWORD *)(v22 + 68);
      }
      if ( (a4 & 0x100002) == 0x100002 )
      {
        *(_OWORD *)(v21 + 120) = *(_OWORD *)(v22 + 120);
        *(_OWORD *)(v21 + 136) = *(_OWORD *)(v22 + 136);
        *(_OWORD *)(v21 + 160) = *(_OWORD *)(v22 + 160);
        *(_OWORD *)(v21 + 176) = *(_OWORD *)(v22 + 176);
        *(_OWORD *)(v21 + 192) = *(_OWORD *)(v22 + 192);
        *(_OWORD *)(v21 + 208) = *(_OWORD *)(v22 + 208);
        *(_OWORD *)(v21 + 224) = *(_OWORD *)(v22 + 224);
        *(_QWORD *)(v21 + 240) = *(_QWORD *)(v22 + 240);
      }
      if ( (a4 & 0x100004) == 0x100004 )
      {
        *(_WORD *)(v21 + 64) = *(_WORD *)(v22 + 64);
        *(_WORD *)(v21 + 62) = *(_WORD *)(v22 + 62);
        *(_WORD *)(v21 + 60) = *(_WORD *)(v22 + 60);
        *(_WORD *)(v21 + 58) = *(_WORD *)(v22 + 58);
      }
      if ( (a4 & 0x100008) == 0x100008 )
      {
        v23 = (__int128 *)(v22 + 256);
        *(_DWORD *)(v21 + 52) = *(_DWORD *)(v22 + 52);
        v24 = (__int128 *)(v21 + 256);
        do
        {
          v24 += 8;
          v25 = *v23;
          v23 += 8;
          *(v24 - 8) = v25;
          *(v24 - 7) = *(v23 - 7);
          *(v24 - 6) = *(v23 - 6);
          *(v24 - 5) = *(v23 - 5);
          *(v24 - 4) = *(v23 - 4);
          *(v24 - 3) = *(v23 - 3);
          *(v24 - 2) = *(v23 - 2);
          *(v24 - 1) = *(v23 - 1);
          --v15;
        }
        while ( v15 );
        *v24 = *v23;
        v24[1] = v23[1];
      }
      if ( (a4 & 0x100010) == 0x100010 )
      {
        *(_OWORD *)(v21 + 72) = *(_OWORD *)(v22 + 72);
        *(_OWORD *)(v21 + 88) = *(_OWORD *)(v22 + 88);
        *(_OWORD *)(v21 + 104) = *(_OWORD *)(v22 + 104);
        *(_OWORD *)(v21 + 1200) = *(_OWORD *)(v22 + 1200);
        *(_OWORD *)(v21 + 1216) = *(_OWORD *)(v22 + 1216);
      }
    }
  }
  else if ( (a4 & 0x200000) != 0 )
  {
    RtlpCopyLegacyContextArm(a1, v21, a4, v22);
  }
  else if ( (a4 & 0x400000) != 0 )
  {
    RtlpCopyLegacyContextArm64(a1, v21, a4, v22);
  }
  if ( (v12 & 2) == 0 || (result = RtlpCopyXStateChunk(a1, a2, v17, a5, v18), (int)result >= 0) )
  {
    if ( (v12 & 4) != 0 )
    {
      v30 = RtlpCopyKernelCetChunk(a1, a2, v17, a5, v18);
      if ( v30 < 0 )
        return (unsigned int)v30;
      return v13;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
