/*
 * XREFs of MxInsertEnclaveBootPages @ 0x140D0350C
 * Callers:
 *     MxCreateDescriptorPfns @ 0x140CFBB94 (MxCreateDescriptorPfns.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiSetPageTablePfnBuddy @ 0x1402A4030 (MiSetPageTablePfnBuddy.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     MiDetermineNewPfnHeatState @ 0x1404911B4 (MiDetermineNewPfnHeatState.c)
 *     MiGetEnclavePageList @ 0x1404D7A44 (MiGetEnclavePageList.c)
 *     MiCreateInitialPfns @ 0x1406EBD50 (MiCreateInitialPfns.c)
 */

unsigned __int64 __fastcall MxInsertEnclaveBootPages(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  ULONG_PTR v3; // rdi
  unsigned int v6; // eax
  int v7; // eax
  __m128i *v8; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // r14
  ULONG_PTR v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  ULONG_PTR v14; // rdi
  __m128i *v15; // r15
  __m128i *v16; // rbx
  __int64 EnclavePageList; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __m128i v20; // [rsp+20h] [rbp-30h] BYREF
  __int128 v21; // [rsp+30h] [rbp-20h]
  __int64 v22; // [rsp+40h] [rbp-10h]
  __int64 v23; // [rsp+48h] [rbp-8h]

  v3 = BugCheckParameter2;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0x400000LL;
  v23 = 0x40000000000000LL;
  v6 = MiPageToNode(BugCheckParameter2);
  v7 = MiDetermineNewPfnHeatState(0, 3u, qword_140E37E50 + 56320LL * v6);
  MiUpdatePageFileHighInPte(0LL, v7 != 0 ? 0xFFFFFFFD : 0);
  *(_QWORD *)&v21 = MiMakeDemandZeroPte(4);
  MiSetPfnContainingFrame((__int64)&v20, 0x3FFFFFFFFELL);
  MiSetPageTablePfnBuddy((__int64)&v20, 0x10000000001uLL, 1);
  MiSetPfnIdentity((__int64)&v20, 1u);
  if ( a3 == 33 )
  {
    *((_QWORD *)&v21 + 1) &= 0xC000000000000000uLL;
    LODWORD(v22) = v22 & 0xFFFF0000;
    LODWORD(v22) = v22 & 0xFFF8FFFF | 0x50000;
    BYTE3(v22) |= 0x10u;
    v20.m128i_i64[1] = -8LL;
  }
  else
  {
    MiSetPfnContainingFrame((__int64)&v20, 0x3FFFFFFFFELL);
    *((_QWORD *)&v21 + 1) = *((_QWORD *)&v21 + 1) & 0xC000000000000000uLL | 1;
    LODWORD(v22) = v22 & 0xFFFF0000 | 2;
    LODWORD(v22) = v22 & 0xFFF8FFFF | 0x60000;
    v20.m128i_i64[1] = 0xFFFFF68000000000uLL;
    _InterlockedAdd64(&qword_140E3DA00, a2);
  }
  v8 = (__m128i *)(48 * v3 - 0x220000000000LL);
  result = MiCreateInitialPfns(v8, a2, &v20);
  if ( a3 == 33 )
  {
    v10 = v3 + a2 - 1;
    if ( v3 <= v10 )
    {
      v11 = v3 - 1;
      v3 += a2;
      v12 = a2;
      do
      {
        v8->m128i_i64[0] = (v11 + 2) ^ (v8->m128i_i64[0] ^ (v11 + 2)) & 0xFFFFFF0000000000uLL;
        v13 = v11 ^ (v11 ^ v8[1].m128i_i64[1]) & 0xFFFFFF0000000000uLL;
        ++v11;
        v8[1].m128i_i64[1] = v13;
        v8 += 3;
        --v12;
      }
      while ( v12 );
    }
    v14 = v3 - a2;
    v15 = v8 - 3;
    v16 = &v8[-3 * a2];
    EnclavePageList = MiGetEnclavePageList((__int64)&MiSystemPartition, v14);
    v18 = EnclavePageList;
    if ( a2 == 1 )
      _InterlockedIncrement64((volatile signed __int64 *)(EnclavePageList + 16));
    else
      _InterlockedAdd64((volatile signed __int64 *)(EnclavePageList + 16), a2);
    v19 = *(_QWORD *)(EnclavePageList + 8);
    if ( v19 == 0x3FFFFFFFFFLL )
      *(_QWORD *)EnclavePageList = v14;
    else
      *(_QWORD *)(48 * v19 - 0x220000000000LL) = v14 ^ (v14 ^ *(_QWORD *)(48 * v19 - 0x220000000000LL)) & 0xFFFFFF0000000000uLL;
    v16[1].m128i_i64[1] = v19 ^ (v19 ^ v16[1].m128i_i64[1]) & 0xFFFFFF0000000000uLL;
    result = v15->m128i_i64[0] & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    v15->m128i_i64[0] = result;
    *(_QWORD *)(v18 + 8) = v10;
  }
  return result;
}
