/*
 * XREFs of ??$_Copy_memmove_n@PEAUAudioEffectState@CProcessingModeParameters@@PEAU12@@std@@YAPEAUAudioEffectState@CProcessingModeParameters@@PEAU12@_K0@Z @ 0x1800AE254
 * Callers:
 *     ?SetProcessingModeParameters@CAudioStream@@QEAAJPEAVCProcessingModeParameters@@@Z @ 0x18002B0D4 (-SetProcessingModeParameters@CAudioStream@@QEAAJPEAVCProcessingModeParameters@@@Z.c)
 *     ?Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z @ 0x18002B264 (-Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z.c)
 *     ??4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z @ 0x180053CD4 (--4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??4?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180064A68 (--4-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator@UAudioEffectState@CProcess.c)
 * Callees:
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove_n<CProcessingModeParameters::AudioEffectState *,CProcessingModeParameters::AudioEffectState *>(
        void *Src,
        __int64 a2,
        void *a3)
{
  __int64 v4; // rbx

  v4 = 20 * a2;
  memmove_0(a3, Src, 20 * a2);
  return (__int64)a3 + v4;
}
