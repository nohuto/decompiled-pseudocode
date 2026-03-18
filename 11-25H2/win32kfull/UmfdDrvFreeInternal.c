/*
 * XREFs of UmfdDrvFreeInternal @ 0x14010ACF8
 * Callers:
 *     UmfdQueryFontTree @ 0x1401094A0 (UmfdQueryFontTree.c)
 *     UmfdQueryFont @ 0x140109720 (UmfdQueryFont.c)
 *     UmfdDrvFree @ 0x14010AD60 (UmfdDrvFree.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x140109CBC (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x14010A208 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 */

__int64 __fastcall UmfdDrvFreeInternal(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // r8
  _QWORD v8[9]; // [rsp+20h] [rbp-48h] BYREF

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v8, 9);
  v8[5] = a1;
  v8[0] = &FreeRequest::`vftable';
  v8[6] = a2;
  return UmfdClientSendAndWaitForCompletion(a3, (__int64)v8, v6);
}
