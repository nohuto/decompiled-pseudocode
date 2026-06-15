/*
 * XREFs of ?GetAvailableConnectorCount@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAI@Z @ 0x180139268
 * Callers:
 *     ?UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x18007BF48 (-UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::GetAvailableConnectorCount(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        unsigned int *a3)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int v11; // esi
  int v13[2]; // [rsp+30h] [rbp-29h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v15; // [rsp+48h] [rbp-11h]
  PROPVARIANT *v16; // [rsp+50h] [rbp-9h]
  char v17; // [rsp+58h] [rbp-1h]
  _DWORD v18[6]; // [rsp+60h] [rbp+7h] BYREF
  _DWORD v19[6]; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *(_QWORD *)v13 = 0LL;
  v5 = (__int64 *)*((_QWORD *)this + 5);
  v6 = *v5;
  *(_QWORD *)v13 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, GUID *, __int64))(v6 + 24))(
         v5,
         &GUID_eddce3e4_f3c1_453a_b461_223563cbd886,
         1LL) < 0 )
  {
    *a3 = 1;
    goto LABEL_16;
  }
  v18[0] = -1702713381;
  v18[1] = 1102331579;
  v18[2] = -1223116157;
  v18[3] = -65530063;
  v18[4] = 1;
  *(_OWORD *)pvar = 0LL;
  v15 = 0LL;
  v16 = pvar;
  v17 = 1;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         v18,
         pvar);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 7613LL;
LABEL_12:
    v10 = (unsigned int)v7;
    goto LABEL_13;
  }
  if ( LOWORD(pvar[0]) == 19 )
  {
    v11 = (unsigned int)pvar[1];
    PropVariantClear(pvar);
    v19[0] = 590439624;
    v19[1] = 1283267372;
    v19[2] = 1907779772;
    v19[3] = 1730509416;
    v19[4] = 1;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
           *((_QWORD *)this + 9),
           v19,
           pvar);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 7619LL;
      goto LABEL_12;
    }
    if ( LOWORD(pvar[0]) != 31 )
    {
      v8 = -2147418113;
      v10 = 2147549183LL;
      v9 = 7620LL;
      goto LABEL_13;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, PROPVARIANT, _QWORD, unsigned int *))(**(_QWORD **)v13 + 24LL))(
           *(_QWORD *)v13,
           pvar[1],
           v11,
           a3);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 7623LL;
      goto LABEL_12;
    }
    PropVariantClear(pvar);
LABEL_16:
    v8 = 0;
    goto LABEL_17;
  }
  v8 = -2147418113;
  v10 = 2147549183LL;
  v9 = 7614LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v10);
  PropVariantClear(pvar);
LABEL_17:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v13);
  return v8;
}
