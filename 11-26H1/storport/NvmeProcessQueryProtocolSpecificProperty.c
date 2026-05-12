/*
 * XREFs of NvmeProcessQueryProtocolSpecificProperty @ 0x14009005C
 * Callers:
 *     NvmeCommonGetStorageProtocolSpecificProperty @ 0x14011F36C (NvmeCommonGetStorageProtocolSpecificProperty.c)
 * Callees:
 *     NvmeProtocolSpecificRequestGetData @ 0x1400901DC (NvmeProtocolSpecificRequestGetData.c)
 *     NvmeQueryProtocolInfoFeatureData @ 0x140120B58 (NvmeQueryProtocolInfoFeatureData.c)
 *     NvmeQueryProtocolInfoIdentifyData @ 0x14012113C (NvmeQueryProtocolInfoIdentifyData.c)
 *     NvmeQueryProtocolInfoLogPageData @ 0x140121494 (NvmeQueryProtocolInfoLogPageData.c)
 */

__int64 __fastcall NvmeProcessQueryProtocolSpecificProperty(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdi
  void *v7; // rbx
  __int64 result; // rax
  char v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v10 = 0LL;
  *a3 = 1;
  if ( *(_DWORD *)v3 == 1314278989 )
  {
    v6 = v3;
    v7 = *(void **)(v3 + 16);
  }
  else
  {
    if ( *(_DWORD *)v3 != 1314275652 )
      return 3221225485LL;
    v7 = *(void **)(v3 + 1152);
    v6 = 0LL;
    if ( !v7 )
      return 3221225485LL;
  }
  result = NvmeProtocolSpecificRequestGetData(a2, 0LL, &v10, &v9);
  if ( (int)result < 0 )
    return result;
  switch ( *(_DWORD *)(v10 + 4) )
  {
    case 1:
      return NvmeQueryProtocolInfoIdentifyData(v7);
    case 2:
      return NvmeQueryProtocolInfoLogPageData(v7);
    case 3:
      return NvmeQueryProtocolInfoFeatureData(v7, v6, a2, a3);
    case 4:
      return NvmeQueryProtocolInfoLogPageData(v7);
    case 5:
      return NvmeQueryProtocolInfoFeatureData(v7, v6, a2, a3);
  }
  return 3221225485LL;
}
