/*
 * XREFs of ?UpdatePMPStreamingEffectsOverride@CAudioStream@@AEAAXU_GUID@@H@Z @ 0x1800D61BC
 * Callers:
 *     ?SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z @ 0x1800D54F8 (-SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z.c)
 * Callees:
 *     ??4?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180064A68 (--4-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator@UAudioEffectState@CProcess.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@UAudioEffectState@CProcessingModeParameters@@@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAPEAUAudioEffectState@CProcessingModeParameters@@QEAU23@$$QEAU23@@Z @ 0x1800D3E58 (--$_Emplace_reallocate@UAudioEffectState@CProcessingModeParameters@@@-$vector@UAudioEffectState@.c)
 */

void __fastcall CAudioStream::UpdatePMPStreamingEffectsOverride(CAudioStream *this, struct _GUID *a2, int a3)
{
  char **v5; // rbx
  __int64 v6; // rdx
  __int64 i; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm0
  const char *v10; // r9
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (char **)((char *)this + 576);
  v6 = *((_QWORD *)this + 73);
  for ( i = *((_QWORD *)this + 72); i != v6; i += 20LL )
  {
    v8 = *(_QWORD *)i - *(_QWORD *)&a2->Data1;
    if ( *(_QWORD *)i == *(_QWORD *)&a2->Data1 )
      v8 = *(_QWORD *)(i + 8) - *(_QWORD *)a2->Data4;
    if ( !v8 )
    {
      *(_DWORD *)(i + 16) = a3;
      goto LABEL_10;
    }
  }
  v9 = (__int128)*a2;
  v11 = (__int128)*a2;
  v12 = a3;
  if ( (char *)v6 == v5[2] )
  {
    try
    {
      std::vector<CProcessingModeParameters::AudioEffectState>::_Emplace_reallocate<CProcessingModeParameters::AudioEffectState>(
        v5,
        v6,
        &v11);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x7B1,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        v10);
      return;
    }
  }
  else
  {
    *(_OWORD *)v6 = v9;
    *(_DWORD *)(v6 + 16) = a3;
    v5[1] += 20;
  }
LABEL_10:
  std::vector<CProcessingModeParameters::AudioEffectState>::operator=((char **)(*((_QWORD *)this + 77) + 56LL), v5);
}
