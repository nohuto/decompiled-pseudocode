/*
 * XREFs of MiAcquireScrubProtection @ 0x14071093C
 * Callers:
 *     MiScrubLargePage @ 0x14071116C (MiScrubLargePage.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 *     MiWriteLargePte @ 0x1402A0630 (MiWriteLargePte.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033E850 (MiMakeProtectionPfnCompatible.c)
 *     MiBeginPageAccessor @ 0x1403CED40 (MiBeginPageAccessor.c)
 */

__int64 __fastcall MiAcquireScrubProtection(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // r12d
  unsigned __int64 v4; // r14
  __int64 v5; // rbx
  __int64 result; // rax
  int ProtectionPfnCompatible; // esi
  unsigned __int64 UltraMapping; // r15
  unsigned int v9; // esi
  unsigned __int64 v10; // rbx
  unsigned __int64 *v11; // rbx
  unsigned __int64 ValidPte; // rax
  unsigned __int64 *v13; // r9
  __int64 v14; // [rsp+50h] [rbp+8h]

  v1 = *(unsigned int *)(a1 + 12);
  v2 = *(_DWORD *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  v14 = MiPageSizes[v1];
  if ( v2 == 1 )
    v5 = *(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * ((v4 >> 18) & 0x3FFFFF);
  else
    v5 = 48 * v4 - 0x220000000000LL;
  result = MiBeginPageAccessor(a1 + 40, v1, v5, v2);
  if ( (_DWORD)result )
  {
    ProtectionPfnCompatible = 4;
    UltraMapping = MiGetUltraMapping(*(_QWORD *)(a1 + 32) + 32 * v1, (unsigned int)v1, MiPageSizes[v1], 4);
    *(_QWORD *)(a1 + 80) = UltraMapping;
    *(_QWORD *)(a1 + 88) = UltraMapping + (v14 << 12) - 1;
    if ( !v2 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v5);
    v9 = ProtectionPfnCompatible | 0xA0000000;
    if ( (unsigned int)v1 > 1 )
    {
      v11 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      *(_QWORD *)(a1 + 72) = v11;
      ValidPte = MiMakeValidPte((unsigned __int64)v11, v4, v9);
      v13 = &v11[v14];
      while ( v11 < v13 )
      {
        *v11 = ValidPte;
        ValidPte = (ValidPte + 4096) ^ ((ValidPte + 4096) ^ ValidPte) & 0xFFF0000000000FFFuLL;
        ++v11;
      }
      v10 = (unsigned __int64)&v11[-v14];
    }
    else
    {
      v10 = MiWriteLargePte(UltraMapping, v4, v1, v9 | 0x4000000);
      *(_QWORD *)(a1 + 72) = v10;
    }
    *(_QWORD *)(a1 + 120) = v10;
    result = 1LL;
    *(_QWORD *)(a1 + 128) = a1 + 64;
    *(_QWORD *)(a1 + 112) = UltraMapping;
  }
  return result;
}
