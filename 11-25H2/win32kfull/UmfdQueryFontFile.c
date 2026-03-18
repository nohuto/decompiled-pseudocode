/*
 * XREFs of UmfdQueryFontFile @ 0x140109450
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x140109CBC (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0QueryFontFileRequest@@QEAA@_KKKPEAK@Z @ 0x14010A314 (--0QueryFontFileRequest@@QEAA@_KKKPEAK@Z.c)
 */

__int64 __fastcall UmfdQueryFontFile(unsigned __int64 a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  int v4; // eax
  unsigned int v5; // ecx
  _BYTE v7[40]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+58h] [rbp-30h]
  unsigned int v9; // [rsp+70h] [rbp-18h]

  QueryFontFileRequest::QueryFontFileRequest((QueryFontFileRequest *)v7, a1, a2, a3, a4);
  v4 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(v8 + 20), v7);
  v5 = v9;
  if ( v4 < 0 )
    return (unsigned int)-1;
  return v5;
}
