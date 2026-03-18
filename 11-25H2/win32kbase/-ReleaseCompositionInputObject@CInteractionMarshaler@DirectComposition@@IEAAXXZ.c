/*
 * XREFs of ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x140066900
 * Callers:
 *     ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x140066820 (-ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x140068A1C (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 * Callees:
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x140064FD0 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x140065DD0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?AssociateWithVisual@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEBX@Z @ 0x140066A30 (-AssociateWithVisual@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEBX@Z.c)
 */

void __fastcall DirectComposition::CInteractionMarshaler::ReleaseCompositionInputObject(
        DirectComposition::CInteractionMarshaler *this)
{
  const struct CompositionInputObject *v1; // rsi
  CInputSink *v3; // rdi
  CInputSink *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (const struct CompositionInputObject *)*((_QWORD *)this + 33);
  if ( v1 )
  {
    v4 = 0LL;
    if ( (int)CompositionInputObject::LockForWrite((char *)v1, &v4) >= 0 )
    {
      v3 = v4;
      if ( *((_QWORD *)v4 + 10) )
        *((_QWORD *)v4 + 10) = 0LL;
      InputTraceLogging::InputSink::AssociateWithVisual(v1, 0LL);
      CInputSink::UnlockAndRelease(v3);
    }
    ObfDereferenceObject(*((PVOID *)this + 33));
    *((_QWORD *)this + 33) = 0LL;
  }
}
