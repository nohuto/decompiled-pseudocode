/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180050CB8
 * Callers:
 *     ?add_VisibilityChanged@CControlCenterExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180050C60 (-add_VisibilityChanged@CControlCenterExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAUIBaseE.c)
 *     ?add_VisibilityChanged@CToastCenterExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18022F040 (-add_VisibilityChanged@CToastCenterExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAUIBaseExp.c)
 *     ?add_VisibilityChanged@CActionCenterExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1802AC1F0 (-add_VisibilityChanged@CActionCenterExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAUIBaseEx.c)
 *     ?add_VirtualDesktopDataSourceChanged@VirtualDesktopDataSource@@UEAAJPEAU?$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopDataSourceChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1804801F0 (-add_VirtualDesktopDataSourceChanged@VirtualDesktopDataSource@@UEAAJPEAU-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180050500 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180050A48 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x1800520AC (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
        __int64 a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  RTL_SRWLOCK *v4; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v16; // rax
  Microsoft::WRL::Details::EventTargetArray *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  void **v21; // r14
  struct IUnknown **i; // rsi
  __int64 v23[7]; // [rsp+20h] [rbp-38h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v24; // [rsp+60h] [rbp+8h] BYREF
  volatile signed __int32 *v25; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = (RTL_SRWLOCK *)(a1 + 16);
  v25 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v9 = *(_QWORD **)a1;
  v24 = 0LL;
  if ( v9 )
    v10 = ((__int64)(v9[3] - v9[2]) >> 3) + 1;
  else
    v10 = 1LL;
  v23[0] = v10;
  v12 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v24,
          v23);
  if ( v12 >= 0 )
  {
    v16 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      v21 = (void **)v16[4];
      for ( i = (struct IUnknown **)v16[2]; i != (struct IUnknown **)v16[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v24, *i, *v21);
        v16 = *(_QWORD **)a1;
        ++v21;
      }
    }
    v17 = v24;
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v17, a2, a3);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v25, (char *)a1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
      (volatile signed __int32 **)a1,
      (char *)&v24);
    if ( a1 != -8 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 8));
    if ( v24 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v24,
        v18,
        v19,
        v20);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v25 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v25,
        v18,
        v19,
        v20);
    return 0LL;
  }
  else
  {
    if ( v24 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v24,
        v11,
        v13,
        v14);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return (unsigned int)v12;
  }
}
