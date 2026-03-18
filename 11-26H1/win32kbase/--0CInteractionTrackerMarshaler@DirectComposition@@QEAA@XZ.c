/*
 * XREFs of ??0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ @ 0x140189BEC
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CInteractionTrackerBaseMarshaler@DirectComposition@@QEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1401C5864 (--0CInteractionTrackerBaseMarshaler@DirectComposition@@QEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::CInteractionTrackerMarshaler(
        DirectComposition::CInteractionTrackerMarshaler *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  DirectComposition::CInteractionTrackerBaseMarshaler::CInteractionTrackerBaseMarshaler(this, 66LL);
  *(_QWORD *)v1 = &DirectComposition::CInteractionTrackerMarshaler::`vftable';
  *(_BYTE *)(v1 + 392) = 1;
  *(_QWORD *)(v1 + 416) = 12LL;
  *(_DWORD *)(v1 + 16) |= 0x1DFFFF80u;
  *(_DWORD *)(v1 + 168) = 1065353216;
  *(_DWORD *)(v1 + 180) = 1065353216;
  *(_DWORD *)(v1 + 172) = 1065353216;
  *(_DWORD *)(v1 + 176) = 1065353216;
  *(_DWORD *)(v1 + 160) = 1064514355;
  *(_DWORD *)(v1 + 164) = 1064514355;
  result = v1;
  *(_DWORD *)(v1 + 64) = 0;
  *(_DWORD *)(v1 + 200) = 1065101558;
  return result;
}
