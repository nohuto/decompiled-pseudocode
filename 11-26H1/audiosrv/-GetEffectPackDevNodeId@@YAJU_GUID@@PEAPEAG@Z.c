/*
 * XREFs of ?GetEffectPackDevNodeId@@YAJU_GUID@@PEAPEAG@Z @ 0x180131D44
 * Callers:
 *     ?CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x18014ABF4 (-CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV-$shared_ptr@$$CBUE.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800402CC (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?GetEffectPackRegistryPath@@YAJU_GUID@@_KPEAG@Z @ 0x1801322E8 (-GetEffectPackRegistryPath@@YAJU_GUID@@_KPEAG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetEffectPackDevNodeId(struct _GUID *a1, unsigned __int16 **a2)
{
  int EffectPackRegistryPath; // eax
  unsigned int v4; // ebx
  int RegistryPropertyStore; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v12[2]; // [rsp+20h] [rbp-E0h] BYREF
  PROPVARIANT pvar[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h]
  struct _GUID v15; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v16[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  *a2 = 0LL;
  v15 = *a1;
  EffectPackRegistryPath = GetEffectPackRegistryPath(&v15, (unsigned __int64)a2, v16);
  v4 = EffectPackRegistryPath;
  if ( EffectPackRegistryPath >= 0 )
  {
    *(_QWORD *)v12 = 0LL;
    RegistryPropertyStore = MMDeviceCreateRegistryPropertyStore(v16, 131097LL, v12);
    v4 = RegistryPropertyStore;
    if ( RegistryPropertyStore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
        (const char *)(unsigned int)RegistryPropertyStore);
LABEL_14:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v12);
      return v4;
    }
    *(_OWORD *)pvar = 0LL;
    v14 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)v12 + 40LL))(
           *(_QWORD *)v12,
           &PKEY_FX_ObjectId,
           pvar);
    v4 = v6;
    if ( v6 >= 0 )
    {
      if ( LOWORD(pvar[0]) != 31 )
      {
        v4 = -2147467259;
        v10 = 2147500037LL;
        v9 = 29LL;
        goto LABEL_8;
      }
      v6 = _AllocString<CTCoAllocPolicy>(v8, v7, (const wchar_t *)pvar[1], a2);
      v4 = v6;
      if ( v6 >= 0 )
      {
        PropVariantClear(pvar);
        v4 = 0;
        goto LABEL_14;
      }
      v9 = 30LL;
    }
    else
    {
      v9 = 28LL;
    }
    v10 = (unsigned int)v6;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
      (const char *)v10);
    PropVariantClear(pvar);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16,
    (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
    (const char *)(unsigned int)EffectPackRegistryPath);
  return v4;
}
