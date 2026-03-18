/*
 * XREFs of CiConfigTaskPolicy @ 0x140011240
 * Callers:
 *     CiConfigInitializeFromRegistry @ 0x1400112E0 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiConfigTaskPolicy(__int64 a1)
{
  unsigned __int8 v1; // r8
  bool v2; // zf
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 3) & 0xFE;
  v2 = CiSystemResponsiveness == 100;
  *(_BYTE *)(a1 + 3) = v1;
  if ( v2 )
  {
    *(_BYTE *)a1 = *(_BYTE *)(a1 + 1) + CiSchedulingCategoryPriorityMap[((unsigned __int64)v1 >> 4) & 7];
    goto LABEL_7;
  }
  if ( (v1 & 0x70) == 0x30 )
  {
    *(_BYTE *)a1 = 24;
  }
  else
  {
    *(_BYTE *)a1 = *(_BYTE *)(a1 + 1) + CiSchedulingCategoryPriorityMap[((unsigned __int64)v1 >> 4) & 7];
    if ( (v1 & 0x70) != 0x20 )
      goto LABEL_7;
  }
  *(_BYTE *)(a1 + 3) = v1 | 1;
LABEL_7:
  result = qword_14000A330;
  v2 = (qword_14000A330 & *(_QWORD *)(a1 + 32)) == 0;
  *(_QWORD *)(a1 + 32) &= qword_14000A330;
  if ( v2 )
  {
    result = qword_14000A330;
    *(_QWORD *)(a1 + 32) = qword_14000A330;
  }
  return result;
}
