/*
 * XREFs of ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x140055EB0
 * Callers:
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x140056790 (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::CInteractionMarshaler(
        DirectComposition::CInteractionMarshaler *this)
{
  __int64 v1; // rcx

  DirectComposition::CResourceMarshaler::CResourceMarshaler(this, 65LL);
  *(_QWORD *)v1 = &DirectComposition::CInteractionMarshaler::`vftable';
  *(_DWORD *)(v1 + 64) = 0;
  *(_QWORD *)(v1 + 56) = v1;
  *(_QWORD *)(v1 + 72) = 0LL;
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_QWORD *)(v1 + 96) = 0LL;
  *(_QWORD *)(v1 + 104) = 0LL;
  *(_QWORD *)(v1 + 120) = 0LL;
  *(_QWORD *)(v1 + 128) = 0LL;
  *(_QWORD *)(v1 + 160) = v1;
  *(_DWORD *)(v1 + 168) = 1;
  *(_QWORD *)(v1 + 176) = 0LL;
  *(_QWORD *)(v1 + 184) = 0LL;
  *(_QWORD *)(v1 + 200) = 0LL;
  *(_QWORD *)(v1 + 208) = 0LL;
  *(_QWORD *)(v1 + 224) = 0LL;
  *(_QWORD *)(v1 + 232) = 0LL;
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_QWORD *)(v1 + 288) = 0LL;
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_QWORD *)(v1 + 304) = 0LL;
  return v1;
}
