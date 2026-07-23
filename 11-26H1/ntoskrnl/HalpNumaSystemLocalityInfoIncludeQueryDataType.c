/*
 * XREFs of HalpNumaSystemLocalityInfoIncludeQueryDataType @ 0x140595184
 * Callers:
 *     HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo @ 0x140594900 (HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpNumaSystemLocalityInfoIncludeQueryDataType(__int64 a1, int a2)
{
  char v2; // r8
  char *v3; // rax
  char v4; // cl

  v2 = 0;
  if ( a2 == 6 )
    return 1;
  v3 = (char *)(a1 + 9);
  switch ( a2 )
  {
    case 4:
      v4 = *v3;
      if ( !*v3 || v4 == 1 || v4 == 2 )
        return 1;
      break;
    case 5:
      if ( *v3 == 3 || (unsigned __int8)(*v3 - 4) <= 1u )
        return 1;
      v3 = (char *)(a1 + 9);
      break;
    case 0:
      if ( (unsigned __int8)*v3 < 2u )
        return 1;
      goto LABEL_8;
  }
  if ( a2 == 1 )
  {
    if ( *v3 == 3 || *v3 == 4 )
      return 1;
    goto LABEL_19;
  }
LABEL_8:
  if ( a2 == 2 )
  {
    if ( *v3 && *v3 != 2 )
      return v2;
    return 1;
  }
LABEL_19:
  if ( a2 == 3 && (*v3 == 3 || *v3 == 1) )
    return 1;
  return v2;
}
