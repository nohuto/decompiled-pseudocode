/*
 * XREFs of HalpIommuGetPageTableType @ 0x140590198
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x14058F814 (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuConstructReservedPageTable @ 0x140BF1C40 (HalpIommuConstructReservedPageTable.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1404BEF80 (HalpGetCpuInfo.c)
 */

__int64 __fastcall HalpIommuGetPageTableType(char a1, int *a2)
{
  int v4; // ebx
  unsigned __int8 v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v6 = 0;
  if ( HalpGetCpuInfo(0LL, 0LL, 0LL, &v6) )
  {
    if ( v6 == 2 )
    {
      LOBYTE(v4) = a1 != 0;
LABEL_6:
      *a2 = v4;
      return 0LL;
    }
    if ( v6 == 1 )
    {
      v4 = 3 - (a1 != 0);
      goto LABEL_6;
    }
  }
  return 3221225659LL;
}
