/*
 * XREFs of ?ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ @ 0x1802B54D8
 * Callers:
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x1802B4A2C (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddBufferReference@ScanPipelineBuilder@@IEAAJPEAPEBXW4BufferLocation@@@Z @ 0x1802B4D1C (-AddBufferReference@ScanPipelineBuilder@@IEAAJPEAPEBXW4BufferLocation@@@Z.c)
 */

__int64 __fastcall ScanPipelineBuilder::ConvertDestBufferReferences(ScanPipelineBuilder *this)
{
  int v1; // ebp
  unsigned int v2; // edi
  int v4; // r14d
  __int64 i; // rbx
  int v7; // eax

  v1 = *((_DWORD *)this + 5);
  v2 = 0;
  if ( v1 )
  {
    v4 = *(_DWORD *)(*(_QWORD *)this + 32LL);
    for ( i = *(_QWORD *)(*(_QWORD *)this + 8LL) + 8LL; v4--; i += 48LL )
    {
      if ( *(_DWORD *)(i + 32) == v1 )
      {
        v7 = ScanPipelineBuilder::AddBufferReference(this, (_QWORD *)i, 1);
        v2 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x2C9u, 0LL);
          return v2;
        }
      }
    }
  }
  return v2;
}
