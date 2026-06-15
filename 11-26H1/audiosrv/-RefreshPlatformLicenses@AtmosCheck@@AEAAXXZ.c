/*
 * XREFs of ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x1800AF1F4
 * Callers:
 *     _lambda_0b797c3ec2b40741812a9b93d57ea05e_::operator() @ 0x180037B94 (_lambda_0b797c3ec2b40741812a9b93d57ea05e_--operator().c)
 *     _lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::operator() @ 0x180155450 (_lambda_f5f4f75dc837a2f22584ae1b4b94d09e_--operator().c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x180156DC8 (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180007B80 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180065358 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EV_ea_180065358.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180068A54 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800B5998 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ??0?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x1800B98C4 (--0-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??1?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x1800B98E0 (--1-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??A?$unique_any_array_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAAEAU_GUID@@_K@Z @ 0x1800D439C (--A-$unique_any_array_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@Ue.c)
 *     ??$size_address@I@?$unique_any_array_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA?AU?$size_address_ptr@I@01@XZ @ 0x180154644 (--$size_address@I@-$unique_any_array_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@.c)
 *     ??1?$size_address_ptr@I@?$unique_any_array_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x180154C10 (--1-$size_address_ptr@I@-$unique_any_array_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AtmosCheck::RefreshPlatformLicenses(AtmosCheck *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // rax
  int PlatformSpatialLicenseOverrides; // edi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edx
  char *v12; // r8
  _BYTE *v13; // r9
  char *v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // rdi
  int i; // r11d
  __int64 v18; // r14
  _QWORD *v19; // rax
  __int64 v20; // r10
  int v21; // r11d
  __int64 v22; // rcx
  __int64 v23; // rdx
  char *v24; // rcx
  _BYTE v25[8]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-28h]
  _QWORD v27[2]; // [rsp+40h] [rbp-20h] BYREF
  char v28; // [rsp+50h] [rbp-10h] BYREF

  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(this, a2, a3, a4) )
  {
    wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(v25);
    v6 = wil::unique_any_array_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::size_address<unsigned int>(
           v25,
           v27,
           v5);
    PlatformSpatialLicenseOverrides = TryGetPlatformSpatialLicenseOverrides(v6 + 8, v25, 0LL);
    wil::unique_any_array_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::size_address_ptr<unsigned int>::~size_address_ptr<unsigned int>(v27);
    if ( PlatformSpatialLicenseOverrides < 0 )
    {
      if ( PlatformSpatialLicenseOverrides != -2147467263 && (unsigned int)CallbackContext > 2 )
      {
        LODWORD(v27[0]) = PlatformSpatialLicenseOverrides;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          v8,
          byte_1801AED81,
          v9,
          v10,
          (__int64)v27);
      }
    }
    else
    {
      if ( (unsigned int)CallbackContext > 5 )
      {
        v27[0] = v26;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
          v8,
          (__int64)&unk_1801AEB28,
          v9,
          v10,
          (__int64)v27);
      }
      v11 = 0;
      v12 = &v28;
      v13 = (char *)this + 273;
      v14 = (char *)this + 273;
      do
      {
        *v12 = *v14;
        *v14 = 0;
        ++v11;
        ++v12;
        v14 += 56;
      }
      while ( v11 < 7 );
      v15 = 0;
      if ( v26 )
      {
        v16 = 0LL;
        do
        {
          for ( i = 0; ; i = v21 + 1 )
          {
            v18 = i;
            if ( (unsigned __int64)i >= 7 )
              break;
            v19 = (_QWORD *)wil::unique_any_array_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                              v25,
                              v16);
            v22 = *(_QWORD *)((char *)this + 56 * v18 + 276) - *v19;
            if ( !v22 )
              v22 = *(_QWORD *)((char *)this + 56 * v18 + 284) - v19[1];
            if ( !v22 )
            {
              *((_BYTE *)this + 56 * v20 + 273) = 1;
              break;
            }
          }
          v16 = ++v15;
        }
        while ( v15 < v26 );
      }
      v23 = 0LL;
      v24 = &v28;
      while ( *v13 == *v24 )
      {
        v23 = (unsigned int)(v23 + 1);
        v13 += 56;
        ++v24;
        if ( (unsigned int)v23 >= 7 )
          goto LABEL_28;
      }
      if ( *((_QWORD *)this + 5) )
      {
        if ( (unsigned int)CallbackContext > 5 )
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            (__int64)v24,
            byte_1801AE938);
        (***((void (__fastcall ****)(_QWORD, __int64))this + 5))(*((_QWORD *)this + 5), v23);
      }
    }
LABEL_28:
    wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(v25);
  }
}
