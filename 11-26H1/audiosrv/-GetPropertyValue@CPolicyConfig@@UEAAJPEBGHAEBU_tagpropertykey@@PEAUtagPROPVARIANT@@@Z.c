/*
 * XREFs of ?GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18001C350
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetPropertyValue(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        const struct _tagpropertykey *a4,
        struct tagPROPVARIANT *a5)
{
  struct tagPROPVARIANT *v7; // rdi
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+28h] [rbp-8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF

  v12 = 0LL;
  if ( !a2 || (v7 = a5) == 0LL )
  {
    v8 = -2147467261;
    goto LABEL_4;
  }
  v8 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         a2,
         &v12);
  if ( v8 < 0 )
  {
LABEL_4:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyValue", 1442, v8);
    goto LABEL_17;
  }
  v13 = 0LL;
  if ( a3 )
  {
    v11 = 0LL;
    if ( !v12
      || ((**(void (__fastcall ***)(__int64, GUID *, __int64 *))v12)(
            v12,
            &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
            &v11),
          !v11) )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
      v8 = 0;
      goto LABEL_11;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 40LL))(v11, 0LL, &v13);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, 0LL, &v13);
  }
  if ( v8 < 0 )
  {
    AudSrvTraceLoggingErrorHelper("TryGetDevicePropertyStore", 1332, v8);
LABEL_25:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyStoreProperty", 2059, v8);
    v9 = v13;
    goto LABEL_14;
  }
LABEL_11:
  v9 = v13;
  if ( v13 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v13 + 40LL))(
           v13,
           a4,
           v7);
    v9 = v13;
  }
  else
  {
    *(_OWORD *)&v7->vt = 0LL;
    v7->bstrblobVal.pData = 0LL;
  }
  if ( v8 < 0 )
    goto LABEL_25;
LABEL_14:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v8 < 0 )
    goto LABEL_4;
LABEL_17:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v8;
}
