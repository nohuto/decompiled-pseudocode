/*
 * XREFs of ??0CGlobalComposition@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x18020E2D8
 * Callers:
 *     ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVCConnection@@PEAPEAVCComposition@@@Z @ 0x18020E22C (-Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVCConnection@@PEAPEAVCComposition@@@Z.c)
 * Callees:
 *     ?SetCompositionCapabilities@CComposition@@QEAAXAEBUCOMPOSITION_CAPABILITY_INFO@@@Z @ 0x180131EB0 (-SetCompositionCapabilities@CComposition@@QEAAXAEBUCOMPOSITION_CAPABILITY_INFO@@@Z.c)
 *     ??0CComposition@@IEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x18020D338 (--0CComposition@@IEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 */

CGlobalComposition *__fastcall CGlobalComposition::CGlobalComposition(
        CGlobalComposition *this,
        struct CTransport *a2,
        struct CConnection *a3)
{
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+24h] [rbp-24h]
  __int64 v8; // [rsp+2Ch] [rbp-1Ch]

  CComposition::CComposition(this, a2, a3);
  *(_QWORD *)this = &CGlobalComposition::`vftable';
  *((_QWORD *)this + 815) = 0LL;
  *((_QWORD *)this + 816) = 0LL;
  *((_QWORD *)this + 817) = 0LL;
  if ( *((_QWORD *)a2 + 3) )
  {
    v8 = 1LL;
    v6 = 37632;
    v7 = 37632LL;
    CComposition::SetCompositionCapabilities(this, (const struct COMPOSITION_CAPABILITY_INFO *)&v6);
  }
  return this;
}
