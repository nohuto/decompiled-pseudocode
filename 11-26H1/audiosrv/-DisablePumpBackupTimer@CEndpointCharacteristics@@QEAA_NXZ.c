/*
 * XREFs of ?DisablePumpBackupTimer@CEndpointCharacteristics@@QEAA_NXZ @ 0x1800B03E4
 * Callers:
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800FB254 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1800DEFA0 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CEndpointCharacteristics::DisablePumpBackupTimer(CEndpointCharacteristics *this)
{
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]
  __int16 v5; // [rsp+50h] [rbp+8h]

  if ( !*((_BYTE *)this + 8297) )
  {
    *(_OWORD *)pvar = 0LL;
    v4 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
           *((_QWORD *)this + 9),
           &PKEY_AudioPump_DisableBackupTimer,
           pvar) < 0
      || LOWORD(pvar[0]) != 11
      || (v5 = 257, LOWORD(pvar[1]) != 0xFFFF) )
    {
      v5 = 256;
    }
    *((_WORD *)this + 4148) = v5;
    PropVariantClear(pvar);
  }
  if ( !*((_BYTE *)this + 8297) )
    std::_Throw_bad_optional_access();
  return *((_BYTE *)this + 8296);
}
