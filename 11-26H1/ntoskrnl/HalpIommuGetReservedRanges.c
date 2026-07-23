/*
 * XREFs of HalpIommuGetReservedRanges @ 0x140590208
 * Callers:
 *     HalpDmaGetReservedRegionsForTranslateDomain @ 0x14058D2D4 (HalpDmaGetReservedRegionsForTranslateDomain.c)
 * Callees:
 *     IidAreIdsStrictlyEqual @ 0x14071E4B4 (IidAreIdsStrictlyEqual.c)
 */

__int64 __fastcall HalpIommuGetReservedRanges(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  ULONG_PTR *v3; // r11
  unsigned int *v7; // rdi
  unsigned int v8; // ebp
  __int64 i; // rbx
  __int64 v10; // rsi

  v3 = (ULONG_PTR *)HalpIommuList;
  *a2 = 0;
  *a3 = 0LL;
  while ( v3 != &HalpIommuList )
  {
    v7 = (unsigned int *)v3[66];
    if ( v7 )
    {
      v8 = *v7;
      for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
      {
        v10 = *(_QWORD *)&v7[2 * i + 2];
        if ( (unsigned __int8)IidAreIdsStrictlyEqual(*(_QWORD *)v10, a1) )
        {
          *a2 = *(_DWORD *)(v10 + 32);
          *a3 = v10 + 40;
          break;
        }
      }
    }
    v3 = (ULONG_PTR *)*v3;
  }
  return 0LL;
}
