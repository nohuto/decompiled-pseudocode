/*
 * XREFs of NvmeProcessSetProtocolSpecificProperty @ 0x140090138
 * Callers:
 *     NvmeCommonSetStorageProtocolSpecificProperty @ 0x14011F4C4 (NvmeCommonSetStorageProtocolSpecificProperty.c)
 * Callees:
 *     NvmeProtocolSpecificRequestGetData @ 0x1400901DC (NvmeProtocolSpecificRequestGetData.c)
 *     NvmeSetProtocolInfoFeatureData @ 0x140122774 (NvmeSetProtocolInfoFeatureData.c)
 */

__int64 __fastcall NvmeProcessSetProtocolSpecificProperty(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 result; // rax
  int v9; // ecx
  char v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v11 = 0LL;
  *a3 = 1;
  if ( *(_DWORD *)v3 == 1314278989 )
  {
    v6 = *(_QWORD *)(v3 + 16);
    v7 = v3;
  }
  else
  {
    if ( *(_DWORD *)v3 != 1314275652 )
      return 3221225485LL;
    v6 = *(_QWORD *)(v3 + 1152);
    v7 = 0LL;
    if ( !v6 )
      return 3221225485LL;
  }
  result = NvmeProtocolSpecificRequestGetData(a2, 0LL, &v11, &v10);
  if ( (int)result < 0 )
    return result;
  v9 = *(_DWORD *)(v11 + 4);
  if ( v9 == 3 || v9 == 5 )
    return NvmeSetProtocolInfoFeatureData(v6, v7, a2, a3);
  return 3221225485LL;
}
