/*
 * XREFs of BiStringFromGUID @ 0x1409A48E8
 * Callers:
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14089A658 (BiUpdateObjectReferenceInEfiEntry.c)
 *     BiConvertElementToRegistryData @ 0x1409A3524 (BiConvertElementToRegistryData.c)
 *     BiCreateObject @ 0x1409A3A50 (BiCreateObject.c)
 *     BcdGetElementDataWithFlags @ 0x1409A5B60 (BcdGetElementDataWithFlags.c)
 *     BcdOpenObject @ 0x1409A64B8 (BcdOpenObject.c)
 * Callees:
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 */

__int64 __fastcall BiStringFromGUID(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  int v5; // [rsp+20h] [rbp-68h]
  int v6; // [rsp+28h] [rbp-60h]
  int v7; // [rsp+30h] [rbp-58h]
  int v8; // [rsp+38h] [rbp-50h]
  int v9; // [rsp+40h] [rbp-48h]
  int v10; // [rsp+48h] [rbp-40h]
  int v11; // [rsp+50h] [rbp-38h]
  int v12; // [rsp+58h] [rbp-30h]
  int v13; // [rsp+60h] [rbp-28h]
  int v14; // [rsp+68h] [rbp-20h]

  v3 = *(unsigned __int16 *)(a2 + 2);
  if ( (unsigned int)v3 < 0x4E )
    return 3221225507LL;
  *(_WORD *)a2 = 76;
  v14 = *((unsigned __int8 *)a1 + 15);
  v13 = *((unsigned __int8 *)a1 + 14);
  v12 = *((unsigned __int8 *)a1 + 13);
  v11 = *((unsigned __int8 *)a1 + 12);
  v10 = *((unsigned __int8 *)a1 + 11);
  v9 = *((unsigned __int8 *)a1 + 10);
  v8 = *((unsigned __int8 *)a1 + 9);
  v7 = *((unsigned __int8 *)a1 + 8);
  v6 = *((unsigned __int16 *)a1 + 3);
  v5 = *((unsigned __int16 *)a1 + 2);
  swprintf_s(
    *(wchar_t **)(a2 + 8),
    v3 >> 1,
    L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    *a1,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  return 0LL;
}
