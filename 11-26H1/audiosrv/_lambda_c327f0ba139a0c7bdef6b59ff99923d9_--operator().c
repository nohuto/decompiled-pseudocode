/*
 * XREFs of _lambda_c327f0ba139a0c7bdef6b59ff99923d9_::operator() @ 0x1800FA1B8
 * Callers:
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800FB254 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall lambda_c327f0ba139a0c7bdef6b59ff99923d9_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _BYTE *result; // rax
  __int64 v5; // rcx

  if ( **(_DWORD **)a1 != 1 )
  {
    if ( **(_BYTE **)(a1 + 8) )
    {
      v2 = **(_QWORD **)(a1 + 16);
      *(GUID *)(v2 + 16LL * (unsigned int)(*(_DWORD *)(v2 + 96))++ + 216) = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
    }
    if ( **(_BYTE **)(a1 + 24) || **(_BYTE **)(a1 + 32) )
    {
      v3 = **(_QWORD **)(a1 + 16);
      *(GUID *)(v3 + 16LL * (unsigned int)(*(_DWORD *)(v3 + 96))++ + 216) = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
    }
  }
  result = *(_BYTE **)(a1 + 40);
  if ( *result )
  {
    v5 = **(_QWORD **)(a1 + 16);
    result = (_BYTE *)(2LL * *(unsigned int *)(v5 + 96));
    *(GUID *)(v5 + 16LL * (unsigned int)(*(_DWORD *)(v5 + 96))++ + 216) = GUID_0fa53099_5317_46af_9376_9a04a4b550f9;
  }
  return result;
}
