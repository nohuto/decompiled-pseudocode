/*
 * XREFs of ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x14018FCF0
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     DpiGetPnpRegistryKeyName @ 0x140391730 (DpiGetPnpRegistryKeyName.c)
 */

__int64 __fastcall DxgkReadPnPRegistryPath(DXGADAPTER *a1, unsigned int a2, int a3, void *a4, __int64 a5)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned int v10; // edx
  __int64 ULongFromUser; // rdi
  int PnpRegistryKeyName; // eax
  unsigned int v14; // ebx
  void **v15; // rsi
  unsigned int v16; // ebx
  unsigned __int16 *v17; // [rsp+28h] [rbp-10h] BYREF

  v6 = a3;
  v7 = a2;
  NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(a1);
  if ( v10 >= NumDifferentPhysicalAdapters )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2567;
    return 3221225485LL;
  }
  ULongFromUser = (unsigned int)RtlReadULongFromUser(a5);
  v17 = 0LL;
  PnpRegistryKeyName = DpiGetPnpRegistryKeyName(
                         *(_QWORD *)(352 * v7 + *((_QWORD *)a1 + 379) + 8),
                         (unsigned int)v6,
                         &v17);
  v14 = PnpRegistryKeyName;
  if ( PnpRegistryKeyName < 0 )
  {
    WdLogSingleEntry2(3LL, v6, PnpRegistryKeyName);
    WdLogGlobalForLineNumber = 2591;
    return v14;
  }
  v15 = (void **)v17;
  v16 = (*v17 >> 1) + 1;
  RtlWriteULongToUser(a5, v16);
  if ( a4 )
  {
    if ( (unsigned int)ULongFromUser < v16 )
    {
      WdLogSingleEntry2(3LL, ULongFromUser, v16);
      WdLogGlobalForLineNumber = 2622;
      return 3221225507LL;
    }
    RtlCopyToUser(a4, v15[1], 2LL * v16);
  }
  return 0LL;
}
