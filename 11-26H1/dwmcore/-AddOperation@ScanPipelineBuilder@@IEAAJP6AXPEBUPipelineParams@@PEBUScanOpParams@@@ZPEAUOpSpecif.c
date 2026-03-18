/*
 * XREFs of ?AddOperation@ScanPipelineBuilder@@IEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@IPEAPEAUPipelineItem@@@Z @ 0x1802B4F58
 * Callers:
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x1802B4E50 (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x180104D20 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 */

__int64 __fastcall ScanPipelineBuilder::AddOperation(
        ScanPipelineBuilder *this,
        void (*a2)(const struct PipelineParams *, const struct ScanOpParams *),
        struct OpSpecificData *a3,
        int a4,
        struct PipelineItem **a5)
{
  int v7; // eax
  unsigned int v8; // edi

  v7 = DynArrayImpl<0>::AddMultiple(*(_QWORD *)this + 8LL, 0x30u, 1, a5);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x342u, 0LL);
  }
  else
  {
    *(_QWORD *)*a5 = a2;
    *((_QWORD *)*a5 + 4) = 0LL;
    *((_DWORD *)*a5 + 10) = a4;
  }
  return v8;
}
