/*
 * XREFs of ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1403C171C
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::QueryNodeMetadata(DXGADAPTER *this, __int64 a2, struct _DXGK_NODEMETADATA *a3)
{
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v4; // rdx
  DXGADAPTER *v5; // rcx
  __int64 v6; // r8
  unsigned __int16 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 result; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx

  NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
  if ( (unsigned int)v4 >= NumDifferentPhysicalAdapters )
  {
    v14 = DXGADAPTER::GetNumDifferentPhysicalAdapters(v5);
    WdLogSingleEntry3(3LL, v16, v15, v14);
    WdLogGlobalForLineNumber = 10991;
    return 3221225485LL;
  }
  v8 = *((_QWORD *)v5 + 379);
  v9 = 352 * v4;
  v10 = *(unsigned __int16 *)(v9 + v8);
  if ( v7 >= (unsigned __int16)v10 )
  {
    WdLogSingleEntry3(3LL, v5, v7, v10);
    WdLogGlobalForLineNumber = 11001;
    return 3221225485LL;
  }
  v11 = *(_QWORD *)(v9 + v8 + 32);
  if ( v11 )
  {
    v12 = 74LL * v7;
    *(_OWORD *)v6 = *(_OWORD *)(v12 + v11);
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(v12 + v11 + 16);
    *(_OWORD *)(v6 + 32) = *(_OWORD *)(v12 + v11 + 32);
    *(_OWORD *)(v6 + 48) = *(_OWORD *)(v12 + v11 + 48);
    *(_QWORD *)(v6 + 64) = *(_QWORD *)(v12 + v11 + 64);
    *(_WORD *)(v6 + 72) = *(_WORD *)(v12 + v11 + 72);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 11007;
  }
  return result;
}
