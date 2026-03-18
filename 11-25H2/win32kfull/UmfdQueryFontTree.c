/*
 * XREFs of UmfdQueryFontTree @ 0x1401094A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0QueryFontTreeRequest@@QEAA@PEAUDHPDEV__@@_KKKPEA_K@Z @ 0x140109528 (--0QueryFontTreeRequest@@QEAA@PEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x140109CBC (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     UmfdDrvFreeInternal @ 0x14010ACF8 (UmfdDrvFreeInternal.c)
 */

__int64 __fastcall UmfdQueryFontTree(
        struct DHPDEV__ *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  __int64 result; // rax
  _BYTE v6[48]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v7; // [rsp+60h] [rbp-38h]
  _QWORD *v8; // [rsp+70h] [rbp-28h]
  __int64 v9; // [rsp+78h] [rbp-20h]
  __int64 v10; // [rsp+88h] [rbp-10h]

  *a5 = 0LL;
  QueryFontTreeRequest::QueryFontTreeRequest((QueryFontTreeRequest *)v6, a1, a2, a3, a4, a5);
  if ( (int)UmfdClientSendAndWaitForCompletion(*(unsigned int *)(v7 + 20), v6) < 0 )
    return 0LL;
  result = v9;
  if ( !v9 )
  {
    if ( v10 )
      UmfdDrvFreeInternal(v10, *v8, *(unsigned int *)(v7 + 20));
    return 0LL;
  }
  return result;
}
