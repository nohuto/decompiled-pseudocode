/*
 * XREFs of ?Invoke@CAudioSessionVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18007DFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionVolumeChanged::Invoke(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx

  LOBYTE(a4) = *(_BYTE *)(a1 + 20);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)*a2 + 40LL))(
         *a2,
         (*(_QWORD *)(a1 + 8) + 8LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 8) >> 64),
         *(_QWORD *)(a1 + 24),
         a4,
         *(_QWORD *)(a1 + 24));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(a2);
  return v5;
}
