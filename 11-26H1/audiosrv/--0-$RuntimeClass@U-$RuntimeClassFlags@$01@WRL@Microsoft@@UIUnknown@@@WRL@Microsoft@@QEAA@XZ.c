/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18007A818
 * Callers:
 *     ??0CEndpointStore@@QEAA@XZ @ 0x18007A740 (--0CEndpointStore@@QEAA@XZ.c)
 *     ??0CAudioPumpDspResourceTracker@@QEAA@XZ @ 0x1800C1430 (--0CAudioPumpDspResourceTracker@@QEAA@XZ.c)
 *     ??0ResourceGroupInstance@@QEAA@_KAEAVEndpointInfo@@PEBGK@Z @ 0x1800F0700 (--0ResourceGroupInstance@@QEAA@_KAEAVEndpointInfo@@PEBGK@Z.c)
 *     ??$MakeAndInitialize@VDialogSession@@V1@PEAUIAudioProcess@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVDialogSession@@$$QEAPEAUIAudioProcess@@AEAPEBG@Z @ 0x180102A04 (--$MakeAndInitialize@VDialogSession@@V1@PEAUIAudioProcess@@AEAPEBG@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180041278 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(
        _QWORD *a1)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient>((__int64)a1);
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
