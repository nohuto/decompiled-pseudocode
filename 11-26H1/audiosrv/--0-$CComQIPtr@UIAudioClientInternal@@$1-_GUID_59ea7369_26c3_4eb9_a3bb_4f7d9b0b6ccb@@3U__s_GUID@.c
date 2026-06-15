/*
 * XREFs of ??0?$CComQIPtr@UIAudioClientInternal@@$1?_GUID_59ea7369_26c3_4eb9_a3bb_4f7d9b0b6ccb@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180120CEC
 * Callers:
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x18005F424 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAudioClientInternal,&__s_GUID const _GUID_59ea7369_26c3_4eb9_a3bb_4f7d9b0b6ccb>::CComQIPtr<IAudioClientInternal,&__s_GUID const _GUID_59ea7369_26c3_4eb9_a3bb_4f7d9b0b6ccb>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_59ea7369_26c3_4eb9_a3bb_4f7d9b0b6ccb, a1);
  return a1;
}
