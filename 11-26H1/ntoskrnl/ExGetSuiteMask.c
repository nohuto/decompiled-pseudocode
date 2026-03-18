/*
 * XREFs of ExGetSuiteMask @ 0x1408369AC
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x1407EF83C (PspSiloInitializeUserSharedData.c)
 *     ExpInitSystemPhase0 @ 0x140CE40C0 (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlGetProductInfo @ 0x14061E210 (RtlGetProductInfo.c)
 *     ExpGetProductInfoSuiteTypeMap @ 0x140836B18 (ExpGetProductInfoSuiteTypeMap.c)
 *     ExpParseSuiteMask @ 0x140836B60 (ExpParseSuiteMask.c)
 */

__int64 __fastcall ExGetSuiteMask(__int64 a1, char a2)
{
  int v3; // ebx
  int v4; // eax
  int *v5; // rdx
  __int64 v6; // r8
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  ULONG ReturnedProductType; // [rsp+58h] [rbp+10h] BYREF

  ReturnedProductType = 0;
  v8 = 0LL;
  v3 = ExpParseSuiteMask();
  if ( RtlGetProductInfo(6u, 0, 0, 0, &ReturnedProductType) && ReturnedProductType != -1412584499 )
  {
    v4 = 0;
    v5 = &dword_140BDD334;
    v6 = 51LL;
    do
    {
      if ( *(v5 - 1) != ReturnedProductType )
        v4 |= *v5;
      v5 += 3;
      --v6;
    }
    while ( v6 );
    v3 &= ~v4;
    if ( (unsigned __int8)ExpGetProductInfoSuiteTypeMap(ReturnedProductType, &v8) )
      v3 |= HIDWORD(v8);
  }
  return v3 | (1 << (a2 != 0 ? 17 : 8)) | 0x10u;
}
