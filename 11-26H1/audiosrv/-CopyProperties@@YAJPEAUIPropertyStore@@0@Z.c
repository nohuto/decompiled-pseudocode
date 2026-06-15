/*
 * XREFs of ?CopyProperties@@YAJPEAUIPropertyStore@@0@Z @ 0x180160908
 * Callers:
 *     ?CopyAudioSystemEffectsProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0W4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@@Z @ 0x180160548 (-CopyAudioSystemEffectsProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0W4__MIDL___MIDL_itf.c)
 *     ?CopyContextProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z @ 0x180160774 (-CopyContextProperties@@YAJPEAUIAudioSystemEffectsPropertyStore@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CopyProperties(struct IPropertyStore *a1, struct IPropertyStore *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int i; // edi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // [rsp+20h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  int v15; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v11 = 0;
  v14 = 0LL;
  v15 = 0;
  v4 = ((__int64 (__fastcall *)(struct IPropertyStore *, unsigned int *))a2->lpVtbl->GetCount)(a2, &v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    for ( i = 0; i < v11; ++i )
    {
      *(_OWORD *)pvar = 0LL;
      v13 = 0LL;
      v8 = ((__int64 (__fastcall *)(struct IPropertyStore *, _QWORD, __int128 *))a2->lpVtbl->GetAt)(a2, i, &v14);
      if ( v8 < 0 )
      {
        v5 = v8;
        goto LABEL_14;
      }
      v9 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, PROPVARIANT *))a2->lpVtbl->GetValue)(
             a2,
             &v14,
             pvar);
      v5 = v9;
      if ( v9 < 0 )
      {
        v10 = 797LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)v9);
LABEL_14:
        PropVariantClear(pvar);
        return v5;
      }
      v9 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, PROPVARIANT *))a1->lpVtbl->SetValue)(
             a1,
             &v14,
             pvar);
      v5 = v9;
      if ( v9 < 0 )
      {
        v10 = 800LL;
        goto LABEL_12;
      }
      PropVariantClear(pvar);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x313,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
