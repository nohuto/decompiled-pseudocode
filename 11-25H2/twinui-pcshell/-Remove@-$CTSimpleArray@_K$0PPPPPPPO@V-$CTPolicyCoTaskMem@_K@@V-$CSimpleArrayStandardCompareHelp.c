/*
 * XREFs of ?Remove@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJAEB_KPEA_K@Z @ 0x180139DD0
 * Callers:
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x180139C18 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 * Callees:
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

__int64 __fastcall CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::Remove(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // r9
  unsigned int v3; // edi
  unsigned __int64 i; // r8
  _QWORD *v6; // rcx

  v2 = a1[1];
  v3 = 0;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= v2 )
      return (unsigned int)-2147319765;
    v6 = (_QWORD *)(*a1 + 8 * i);
    if ( *v6 == *a2 )
      break;
  }
  if ( i != v2 - 1 )
    memmove_0(v6, v6 + 1, 8 * (v2 - i) - 8);
  --a1[1];
  return v3;
}
