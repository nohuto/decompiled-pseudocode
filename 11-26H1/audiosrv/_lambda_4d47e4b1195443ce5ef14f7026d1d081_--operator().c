/*
 * XREFs of _lambda_4d47e4b1195443ce5ef14f7026d1d081_::operator() @ 0x1800F9C54
 * Callers:
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800FB254 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall lambda_4d47e4b1195443ce5ef14f7026d1d081_::operator()(__int64 a1, char a2)
{
  unsigned int v2; // r9d
  __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  if ( !**(_DWORD **)a1 )
    return 0LL;
  while ( 1 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_DWORD *)(*(_QWORD *)v5 + 96LL);
    if ( v6 > 0x1F )
      break;
    *(_DWORD *)(*(_QWORD *)v5 + 80LL) |= 1 << v6;
    *(_DWORD *)(**(_QWORD **)(a1 + 8) + 84LL) = *(_DWORD *)(**(_QWORD **)(a1 + 8) + 96LL);
    if ( a2 )
      *(_DWORD *)(**(_QWORD **)(a1 + 8) + 88LL) = *(_DWORD *)(**(_QWORD **)(a1 + 8) + 96LL);
    v7 = v2++;
    v8 = **(_QWORD **)(a1 + 8);
    *(_OWORD *)(v8 + 16LL * (unsigned int)(*(_DWORD *)(v8 + 96))++ + 216) = *(_OWORD *)(**(_QWORD **)(a1 + 16) + 16 * v7);
    if ( v2 >= **(_DWORD **)a1 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA4D,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)0x887C0073LL);
  return 2289827955LL;
}
