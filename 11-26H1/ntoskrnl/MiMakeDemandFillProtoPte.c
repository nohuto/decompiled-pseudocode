/*
 * XREFs of MiMakeDemandFillProtoPte @ 0x1404BF540
 * Callers:
 *     MiInitializePrototypePtes @ 0x140988FE0 (MiInitializePrototypePtes.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiMakeDemandFillProtoPte(unsigned __int64 a1)
{
  __int16 v1; // r8
  unsigned __int64 v2; // rdx
  __int64 v3; // rax

  v1 = a1;
  v2 = a1;
  if ( !a1 )
    v2 = MiMakeDemandZeroPte(4) & 0xFFFFFFFFFFFFFC1FuLL;
  v3 = v2 | 0x400;
  if ( (v1 & 0x400) != 0 )
    v3 = v2;
  return v3 | 0x400000000000000LL;
}
