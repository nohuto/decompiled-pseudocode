/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VTriageData@@U?$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@QEAA@XZ @ 0x140093148
 * Callers:
 *     ndisRegisterMiniportTriageData @ 0x14009480C (ndisRegisterMiniportTriageData.c)
 *     ndisRegisterFilterTriageData @ 0x14009A5D0 (ndisRegisterFilterTriageData.c)
 *     ndisRegisterFilterDriverTriageData @ 0x14009CB5C (ndisRegisterFilterDriverTriageData.c)
 *     ndisRegisterProtocolTriageData @ 0x1400BB718 (ndisRegisterProtocolTriageData.c)
 * Callees:
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x140078DC0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 */

void __fastcall wil::details::out_param_t<wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>>::~out_param_t<wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(*(void ***)a1, *(void **)(a1 + 8));
}
