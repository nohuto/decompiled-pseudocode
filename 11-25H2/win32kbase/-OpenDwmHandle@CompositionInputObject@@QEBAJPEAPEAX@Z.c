/*
 * XREFs of ?OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z @ 0x1400577E0
 * Callers:
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140056BDC (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     OpenDwmHandle @ 0x1400579D4 (OpenDwmHandle.c)
 *     ?Duplicate@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAX1_N@Z @ 0x140057C30 (-Duplicate@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAX1_N@Z.c)
 */

__int64 __fastcall CompositionInputObject::OpenDwmHandle(CompositionInputObject *this, void **a2)
{
  void *v4; // rdx
  int v5; // ebx
  bool v6; // r9
  int v8; // [rsp+20h] [rbp-18h]

  v5 = OpenDwmHandle(this, ExCompositionObjectType, 3u, v8, a2);
  if ( v5 >= 0 )
    InputTraceLogging::InputSink::Duplicate(this, v4, *a2, v6);
  return (unsigned int)v5;
}
