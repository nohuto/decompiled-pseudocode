/*
 * XREFs of ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800A96D0
 * Callers:
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800A9624 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CInputSinkStruct@@QEAA@XZ @ 0x1800A8FCC (--0CInputSinkStruct@@QEAA@XZ.c)
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800A91AC (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800A97B4 (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInteraction::UpdateInputSink(CInteraction *this, void *a2)
{
  unsigned int v2; // ebx
  CInputSinkStruct **v3; // rdi
  CInputSinkStruct *v6; // rax
  CInputSinkStruct *v7; // rax
  int v8; // eax
  unsigned int v9; // esi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CInputSinkStruct **)((char *)this + 112);
  if ( a2 )
  {
    v6 = *v3;
    if ( *v3 )
      goto LABEL_7;
    v7 = (CInputSinkStruct *)DefaultHeap::AllocClear(0x70uLL);
    if ( !v7 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    v6 = CInputSinkStruct::CInputSinkStruct(v7);
    *v3 = v6;
    if ( v6 )
    {
LABEL_7:
      v8 = CInputSinkStruct::ReplaceInputHandle(v6, a2);
      v9 = v8;
      if ( v8 >= 0 )
        return (unsigned int)v8;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x305u, 0LL);
      v2 = v9;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x301u, 0LL);
      NtCloseCompositionInputSink(a2);
      v2 = -2147024882;
    }
  }
  SAFE_DELETE<CInputSinkStruct>(v3);
  return v2;
}
