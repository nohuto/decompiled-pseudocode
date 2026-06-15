/*
 * XREFs of ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Z @ 0x18014E508
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18013C178 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180041278 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z @ 0x18014EAAC (-RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CHybridPropertyStore,IPropertyStore,IMMDevice * &,unsigned int &,_tagpropertykey const * &>(
        _QWORD *a1,
        struct IMMDevice **a2,
        unsigned int *a3,
        const struct _tagpropertykey **a4)
{
  char *v8; // rax
  char *v9; // rbx
  int v10; // edi
  __int64 v11; // rax
  char *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (char *)operator new[](0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  v13 = v8;
  if ( v8 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient>((__int64)v8);
    *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPropertyStore>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v9 = &CHybridPropertyStore::`vftable';
    *((_QWORD *)v9 + 2) = 0LL;
    *((_QWORD *)v9 + 3) = 0LL;
    *((_QWORD *)v9 + 4) = 0LL;
    *((_QWORD *)v9 + 5) = 0LL;
    *((_QWORD *)v9 + 6) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v9 + 56), 0, 0);
    v13 = 0LL;
    v10 = CHybridPropertyStore::RuntimeClassInitialize((CHybridPropertyStore *)v9, *a2, *a3, *a4);
    v11 = *(_QWORD *)v9;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(char *, GUID *, _QWORD *))v11)(
              v9,
              &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
              a1);
      (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    else
    {
      (*(void (__fastcall **)(char *))(v11 + 16))(v9);
    }
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>((void **)&v13);
  return (unsigned int)v10;
}
