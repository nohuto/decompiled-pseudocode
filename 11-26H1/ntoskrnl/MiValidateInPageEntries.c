/*
 * XREFs of MiValidateInPageEntries @ 0x14038E1C0
 * Callers:
 *     MiValidateInPage @ 0x14038DF04 (MiValidateInPage.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033E850 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiInPageGapPage @ 0x14038E580 (MiInPageGapPage.c)
 *     MiApplyDebuggerPatches @ 0x14038E5A8 (MiApplyDebuggerPatches.c)
 *     MiMarkPfnVerified @ 0x14038E794 (MiMarkPfnVerified.c)
 *     MiGetSessionIdForVa @ 0x14038FF58 (MiGetSessionIdForVa.c)
 *     MiRelocateImagePfn @ 0x14099FA2C (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x140B0676C (MiValidateImagePfn.c)
 */

__int64 __fastcall MiValidateInPageEntries(__int64 *a1)
{
  __int64 v2; // rdi
  ULONG_PTR v3; // rbx
  __int64 v4; // r8
  __int64 *v5; // rsi
  __int64 v6; // r15
  unsigned __int64 v7; // rax
  __int64 v8; // rbp
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // r11
  int v14; // eax
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r12
  int v17; // eax
  __int64 v18; // rbx
  int ProtectionPfnCompatible; // eax
  char v21; // [rsp+20h] [rbp-88h]
  char v22[4]; // [rsp+28h] [rbp-80h]
  unsigned __int64 v23; // [rsp+50h] [rbp-58h]
  unsigned int v24; // [rsp+B0h] [rbp+8h]
  __int64 v25; // [rsp+B8h] [rbp+10h]
  ULONG_PTR v26; // [rsp+C0h] [rbp+18h]
  __int64 *v27; // [rsp+C8h] [rbp+20h]

  v2 = *a1;
  v25 = a1[1];
  v3 = *(_QWORD *)a1[3];
  v26 = v3;
  v24 = 0;
  MiGetSessionIdForVa(*(_QWORD *)(*a1 + 232));
  v5 = (__int64 *)(v4 + 48);
  v6 = 0LL;
  v7 = v4 + 48 + 8LL * *((unsigned int *)a1 + 5);
  v23 = v7;
  while ( (unsigned __int64)v5 < v7 )
  {
    v8 = 48 * *v5 - 0x220000000000LL;
    v9 = v8 == qword_140E36170;
    *((_DWORD *)a1 + 16) ^= ((unsigned __int8)*((_DWORD *)a1 + 16) ^ (unsigned __int8)(4 * *((_DWORD *)a1 + 16))) & 0x20;
    if ( v9 || (unsigned int)MiInPageGapPage(v8, 0xFFFFDE0000000000uLL) )
      goto LABEL_16;
    v14 = *((_DWORD *)a1 + 16);
    if ( (v14 & 0x80u) != 0 )
    {
      MiMarkPfnVerified(v10, *((unsigned int *)a1 + 13), v11, v12);
LABEL_7:
      v11 = v25;
      v13 = 0x7FFFFFFFF8LL;
      v12 = 0xFFFFF68000000000uLL;
      goto LABEL_8;
    }
    if ( (v14 & 2) != 0 )
    {
      v17 = MiValidateImagePfn(v3, v21, *((_DWORD *)a1 + 12), *v5, 0, 1);
      if ( v17 >= 0 )
        goto LABEL_7;
      if ( v17 == -1073741670 )
      {
        *(_DWORD *)(v2 + 80) = -1073741670;
        return v24;
      }
      v24 = -1073740748;
      if ( (a1[8] & 5) != 5 )
        goto LABEL_7;
      v13 = 0x7FFFFFFFF8LL;
      v11 = v25;
      v12 = 0xFFFFF68000000000uLL;
      if ( (MiFlags & 0x8000) != 0 )
        *((_DWORD *)a1 + 16) |= 0x20u;
    }
LABEL_8:
    if ( (a1[8] & 0x30) == 0 )
      goto LABEL_16;
    v15 = 0LL;
    v16 = 0LL;
    if ( (*(_BYTE *)(v11 + 10) & 1) == 0 )
      goto LABEL_10;
    v15 = *(_QWORD *)(v11 + 24) + (v6 >> 3 << 12);
    v27 = (__int64 *)((v13 & (v15 >> 9)) + v12);
    v18 = *v27;
    if ( (*v27 & 0x42) != 0 )
      goto LABEL_24;
    v16 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, 1u, v11, v12);
    if ( !v16 )
    {
      v9 = (MiFlags & 0x400) == 0;
      *v27 = v18 | 0x842;
      if ( v9 )
        MiFlushSingleTbEntry(v15, 2LL);
LABEL_24:
      v3 = v26;
      goto LABEL_10;
    }
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v8);
    *(_QWORD *)v16 = MiMakeValidPte(v16, *v5, ProtectionPfnCompatible | 0xA0000000);
    v3 = v26;
    v15 = (__int64)(v16 << 25) >> 16;
LABEL_10:
    if ( (a1[8] & 0x20) != 0
      && (int)MiRelocateImagePfn(v3, v15, *(_DWORD *)(v2 + 216), *v5, 0LL, *(_DWORD *)v22, 33) < 0 )
    {
      *(_DWORD *)(v2 + 80) = -1073741670;
      if ( v16 )
        MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, (unsigned __int64 *)v16, 1u);
      return v24;
    }
    if ( (a1[8] & 0x10) != 0 )
    {
      v21 = 0;
      MiApplyDebuggerPatches(v3, v15, *(unsigned int *)(v2 + 216), *v5);
    }
    if ( v16 )
      MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, (unsigned __int64 *)v16, 1u);
LABEL_16:
    *(_QWORD *)(v2 + 96) += 4096LL;
    ++v5;
    v7 = v23;
    v6 += 8LL;
    ++*(_DWORD *)(v2 + 216);
  }
  return v24;
}
