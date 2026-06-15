/*
 * XREFs of ??$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationManager@@@Z @ 0x1800456AC
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x180047388 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180004A60 (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180008500 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001B8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??0CApplicationManager@@QEAA@XZ @ 0x18002D6E8 (--0CApplicationManager@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18003D1B0 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationManager,CApplicationManager,>(
        volatile signed __int32 **a1)
{
  void *v2; // rax
  int v3; // edi
  CApplicationManager *v4; // rax
  volatile signed __int32 *v5; // rbx
  volatile int *v6; // rdx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new[](0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v2;
  if ( v2 )
  {
    v4 = CApplicationManager::CApplicationManager((CApplicationManager *)v2);
    v8 = 0LL;
    v5 = (volatile signed __int32 *)v4;
    v3 = CApplicationManager::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      if ( v5 )
      {
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v5 + 3), v6);
        *a1 = v5;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
      }
      else
      {
        *a1 = 0LL;
      }
      v3 = 0;
    }
    else if ( v5 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
    }
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v8);
  return (unsigned int)v3;
}
