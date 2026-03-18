/*
 * XREFs of ??$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z @ 0x14000C41C
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002EE8 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140004C40 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text@Internal@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14000C534 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text.c)
 *     ??1?$MakeAllocator@VHotKeyCallback@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14000C55C (--1-$MakeAllocator@VHotKeyCallback@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text@Internal@UI@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14000CAD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwne.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14000CCDC (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ @ 0x14000D1A0 (-RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140010010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotKeyCallback,HotKeyCallback,>(
        volatile signed __int64 **a1)
{
  void *v2; // rax
  volatile signed __int64 *v3; // rbx
  int v4; // edi
  struct Microsoft::WRL::Details::ModuleBase *v5; // rcx
  volatile int *v6; // rdx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v2;
  v3 = (volatile signed __int64 *)v2;
  if ( v2 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::Text::IHotKeyClientOwner>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::Text::IHotKeyClientOwner>(v2);
    *v3 = (volatile signed __int64)&Microsoft::WRL::RuntimeClass<Windows::UI::Internal::Text::IHotKeyClientOwner>::`vftable'{for `Windows::UI::Internal::Text::IHotKeyClientOwner'};
    v5 = Microsoft::WRL::Details::ModuleBase::module_;
    *((_QWORD *)v3 + 1) = &Microsoft::WRL::RuntimeClass<Windows::UI::Internal::Text::IHotKeyClientOwner>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
    if ( v5 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v5 + 8LL))(v5);
    v10 = 0LL;
    *v3 = (volatile signed __int64)&HotKeyCallback::`vftable'{for `Windows::UI::Internal::Text::IHotKeyClientOwner'};
    *((_QWORD *)v3 + 1) = &Microsoft::WRL::RuntimeClass<Windows::UI::Internal::Text::IHotKeyClientOwner>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
    *((_QWORD *)v3 + 4) = 0LL;
    *((_QWORD *)v3 + 5) = 0LL;
    v4 = HotKeyCallback::RuntimeClassInitialize((HotKeyCallback *)v3);
    if ( v4 >= 0 )
    {
      v7 = *((_QWORD *)v3 + 3);
      while ( v7 >= 0 )
      {
        if ( (_DWORD)v7 != 0x7FFFFFFF )
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange64(v3 + 3, v7 + 1, v7);
          if ( v8 != v7 )
            continue;
        }
        goto LABEL_13;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v7 + 16), v6);
LABEL_13:
      *a1 = v3;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::Text::IHotKeyClientOwner>::Release(v3);
      v4 = 0;
    }
    else
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::Text::IHotKeyClientOwner>::Release(v3);
    }
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<HotKeyCallback>::~MakeAllocator<HotKeyCallback>(&v10);
  return (unsigned int)v4;
}
