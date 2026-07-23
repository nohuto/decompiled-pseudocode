/*
 * XREFs of RtlpWow64CtxFromAmd64 @ 0x140A660D0
 * Callers:
 *     PspWow64GetContextThread @ 0x140A2AB08 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x140B81920 (PspWow64SetContextThread.c)
 * Callees:
 *     RtlpCopyXStateChunk @ 0x14040C07C (RtlpCopyXStateChunk.c)
 *     RtlFxToFnFrame @ 0x140436710 (RtlFxToFnFrame.c)
 */

__int64 __fastcall RtlpWow64CtxFromAmd64(int a1, _DWORD *a2, int *a3)
{
  int v3; // edi
  unsigned int v4; // r14d
  int v5; // ebx
  bool v9; // r9
  unsigned __int16 *v10; // rdx
  _OWORD *v11; // rax
  unsigned __int16 *v12; // rcx
  __int64 v13; // r8
  __int128 v14; // xmm0
  unsigned int v15; // eax
  __int64 result; // rax

  v3 = a2[12];
  v4 = 0;
  v5 = *a3;
  if ( (v3 & 0x100001) == 1048577 && (a1 & 0x10001) == 65537 )
  {
    v5 |= 0x10001u;
    a3[45] = a2[40];
    a3[47] = 35;
    a3[46] = a2[62];
    a3[50] = 43;
    a3[49] = a2[38];
    a3[48] = a2[17];
  }
  if ( (v3 & 0x100002) == 1048578 && (a1 & 0x10002) == 65538 )
  {
    v5 |= 0x10002u;
    a3[39] = a2[44];
    a3[40] = a2[42];
    a3[41] = a2[36];
    a3[42] = a2[34];
    a3[43] = a2[32];
    a3[44] = a2[30];
  }
  if ( (v3 & 0x100004) == 1048580 && (a1 & 0x10004) == 65540 )
  {
    a3[35] = 43;
    v5 |= 0x10004u;
    a3[37] = 43;
    a3[38] = 43;
    a3[36] = 83;
  }
  v9 = (v3 & 0x100008) == 1048584;
  v10 = (unsigned __int16 *)(a2 + 64);
  if ( (a1 & 0x10020) == 65568 && v9 )
  {
    v11 = a3 + 51;
    v12 = v10;
    v13 = 2LL;
    do
    {
      v11 += 8;
      v14 = *(_OWORD *)v12;
      v12 += 64;
      *(v11 - 8) = v14;
      *(v11 - 7) = *((_OWORD *)v12 - 7);
      *(v11 - 6) = *((_OWORD *)v12 - 6);
      *(v11 - 5) = *((_OWORD *)v12 - 5);
      *(v11 - 4) = *((_OWORD *)v12 - 4);
      *(v11 - 3) = *((_OWORD *)v12 - 3);
      *(v11 - 2) = *((_OWORD *)v12 - 2);
      *(v11 - 1) = *((_OWORD *)v12 - 1);
      --v13;
    }
    while ( v13 );
    v5 |= 0x10020u;
    *v11 = *(_OWORD *)v12;
    v11[1] = *((_OWORD *)v12 + 1);
  }
  if ( (a1 & 0x10008) == 65544 && v9 )
  {
    a3[34] = 0;
    RtlFxToFnFrame((__int64)(a3 + 7), v10);
    v5 |= 0x10008u;
  }
  if ( (a1 & 0x10010) == 65552 && (v3 & 0x100010) == 1048592 )
  {
    if ( (a2[28] & 0x355LL) != 0 )
    {
      a3[1] = a2[18];
      a3[2] = a2[20];
      a3[3] = a2[22];
      a3[4] = a2[24];
      a3[5] = a2[26];
      v15 = a2[28] & 0xFFFF0155;
    }
    else
    {
      *(_QWORD *)(a3 + 1) = 0LL;
      v15 = 0;
      *(_QWORD *)(a3 + 3) = 0LL;
      a3[5] = 0;
    }
    a3[6] = v15;
    v5 |= 0x10010u;
  }
  if ( (a1 & v5 & 0x10040) == 65600 && (v3 & 0x100040) == 1048640 )
    v4 = RtlpCopyXStateChunk(0, (__int64)(a3 + 179), (__int64)(a3 + 179), (__int64)(a2 + 308), (__int64)(a2 + 308));
  result = v4;
  if ( (a1 & 0x40000000) != 0 )
    v5 = v3 ^ (v3 ^ v5) & 0x67FFFFFF;
  *a3 = v5;
  return result;
}
