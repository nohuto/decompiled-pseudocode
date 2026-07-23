/*
 * XREFs of MiFillGapPtes @ 0x140CFFA10
 * Callers:
 *     <none>
 * Callees:
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402ED680 (MiIncreaseUsedPtesInPfn.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 */

__int64 __fastcall MiFillGapPtes(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  int v8; // r8d
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rbx
  unsigned __int64 v13; // [rsp+30h] [rbp+8h]

  if ( (*a2 & 1) != 0 )
  {
    if ( a3 )
      return (*a2 >> 7) & 1;
  }
  else
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL * a3);
    v7 = (unsigned __int64)a2;
    v8 = a3 != 0 ? -1476395004 : 536870913;
    if ( a3 )
      v7 = 0LL;
    ValidPte = MiMakeValidPte(v7, v6, v8);
    v10 = ValidPte;
    if ( (MiFlags & 0x8000000) == 0 && ((unsigned __int8)(1 << a3) & (unsigned __int8)byte_140E2D809) != 0 )
      v10 = ValidPte & 0xFFFFFFFFFFFFFFDFuLL;
    v13 = v10;
    v11 = 0;
    if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v11 = MiSanitizeShadowPxe();
      v10 = v13;
    }
    *a2 = v10;
    if ( v11 )
      MiWritePteShadow();
    v12 = 48 * MiGetContainingPageTable((ULONG_PTR)a2) - 0x220000000000LL;
    MiIncreaseUsedPtesInPfn(v12, 1);
    *(_QWORD *)(v12 + 24) = (*(_QWORD *)(v12 + 24) + 1LL) ^ (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) + 1LL)) & 0xC000000000000000uLL;
  }
  return 0LL;
}
