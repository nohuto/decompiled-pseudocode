/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180050E48
 * Callers:
 *     ?add_DismissRequested@CStartExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180050750 (-add_DismissRequested@CStartExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVStartExperience.c)
 *     ?Add@?$AgileEventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1801E07D4 (-Add@-$AgileEventSource@U-$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@Composa.c)
 *     ?add_Shown@CStartExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1802193E0 (-add_Shown@CStartExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVStartExperienceManager@Exp.c)
 *     ?add_NotifyFocus@CStartExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180219480 (-add_NotifyFocus@CStartExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVStartExperienceManag.c)
 *     ?add_Destroyed@CStartExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180233D70 (-add_Destroyed@CStartExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVStartExperienceManager.c)
 *     ?add_SetForegroundFailed@CStartExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1802AC250 (-add_SetForegroundFailed@CStartExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVStartExperie.c)
 *     ?add_ExitTransitionToCortanaCompleted@CStartExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1802B0360 (-add_ExitTransitionToCortanaCompleted@CStartExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEA.c)
 *     ?add_Hidden@CStartExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180384580 (-add_Hidden@CStartExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVStartExperienceManager@Ex.c)
 * Callees:
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180050A48 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x1800520AC (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  RTL_SRWLOCK *v4; // rdi
  _QWORD *Ptr; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v16; // rax
  Microsoft::WRL::Details::EventTargetArray *v17; // r14
  void **v18; // r15
  struct IUnknown **i; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rsi
  RTL_SRWLOCK v24; // rcx
  char v25; // [rsp+20h] [rbp-48h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v26; // [rsp+70h] [rbp+8h] BYREF
  __int64 v27; // [rsp+88h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v26 = 0LL;
  if ( Ptr )
    v10 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) + 1;
  else
    v10 = 1LL;
  v27 = v10;
  v12 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v26,
          &v27);
  if ( v12 >= 0 )
  {
    v16 = a1->Ptr;
    v17 = v26;
    if ( a1->Ptr )
    {
      v18 = (void **)v16[4];
      for ( i = (struct IUnknown **)v16[2]; i != (struct IUnknown **)v16[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v17, *i, *v18);
        v16 = a1->Ptr;
        ++v18;
      }
    }
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v17, a2, a3);
    AcquireSRWLockExclusive(a1 + 1);
    v23 = 0LL;
    if ( &v25 != (char *)a1 )
    {
      v23 = a1->Ptr;
      a1->Ptr = 0LL;
    }
    v24.Ptr = a1->Ptr;
    a1->Ptr = v17;
    if ( v24.Ptr )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v24.Ptr,
        v20,
        v21,
        v22);
    if ( a1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(a1 + 1);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v23 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v23,
        v20,
        v21,
        v22);
    return 0LL;
  }
  else
  {
    if ( v26 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v26,
        v11,
        v13,
        v14);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return (unsigned int)v12;
  }
}
