/*
 * XREFs of ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x140035350
 * Callers:
 *     _lambda_4d219c55c1944bedc25da37a83fa6654_::operator() @ 0x1401CC30C (_lambda_4d219c55c1944bedc25da37a83fa6654_--operator().c)
 *     _lambda_9212365dda97cb37a6803fd149b753fd_::operator() @ 0x1401CC574 (_lambda_9212365dda97cb37a6803fd149b753fd_--operator().c)
 *     _lambda_eeea5582e93711493668b9eafd12873f_::operator() @ 0x1401CC7CC (_lambda_eeea5582e93711493668b9eafd12873f_--operator().c)
 *     _lambda_ef85c4d3ba2b9aeb28478c22401d75d8_::operator() @ 0x1401CD050 (_lambda_ef85c4d3ba2b9aeb28478c22401d75d8_--operator().c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1403FA85C (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyNW(char *a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  signed __int64 v6; // r8
  unsigned __int16 v7; // ax
  unsigned __int16 *v8; // rax
  __int64 result; // rax

  v4 = a4 >> 1;
  if ( v4 > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    *(_WORD *)a1 = 0;
  }
  else
  {
    v5 = 260LL;
    v6 = a3 - a1;
    do
    {
      if ( !(v5 + v4 - 260) )
        break;
      v7 = *(_WORD *)&a1[v6];
      if ( !v7 )
        break;
      *(_WORD *)a1 = v7;
      a1 += 2;
      --v5;
    }
    while ( v5 );
    v8 = (unsigned __int16 *)(a1 - 2);
    if ( v5 )
      v8 = (unsigned __int16 *)a1;
    *v8 = 0;
    result = 2147483653LL;
    if ( v5 )
      return 0LL;
  }
  return result;
}
