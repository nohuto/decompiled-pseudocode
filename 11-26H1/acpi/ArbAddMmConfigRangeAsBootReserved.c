/*
 * XREFs of ArbAddMmConfigRangeAsBootReserved @ 0x1400BEF6C
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1400ADD90 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     RtlAddRange_0 @ 0x140055D43 (RtlAddRange_0.c)
 */

__int64 __fastcall ArbAddMmConfigRangeAsBootReserved(__int64 a1, struct _RTL_RANGE_LIST *a2)
{
  NTSTATUS v2; // r9d
  char *i; // rbx
  int v7; // eax
  int v8; // ecx

  v2 = 0;
  if ( !ArbMmConfigRange )
    return 0LL;
  for ( i = (char *)ArbMmConfigRange + 8;
        i < (char *)ArbMmConfigRange + 32 * *((unsigned int *)ArbMmConfigRange + 1) + 8;
        i += 32 )
  {
    v7 = (unsigned __int8)i[1];
    v8 = *(_DWORD *)(a1 + 32);
    if ( v7 == v8 || (_BYTE)v7 == 7 && v8 == 3 )
    {
      v2 = RtlAddRange_0(a2, *((_QWORD *)i + 2), *((_QWORD *)i + 3), 1u, 1u, 0LL, 0LL);
      if ( v2 < 0 )
        break;
    }
  }
  return (unsigned int)v2;
}
