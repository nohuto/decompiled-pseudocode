/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180050814
 * Callers:
 *     ??$InvokeDelegates@V_lambda_721e5e573830a3eafdff38e0e874721f_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_721e5e573830a3eafdff38e0e874721f_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x180368F10 (--$InvokeDelegates@V_lambda_721e5e573830a3eafdff38e0e874721f_@@U-$ITypedEventHandler@PEAVCortana.c)
 *     ?remove_NotifyRelaunch@CortanaSharedExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180371720 (-remove_NotifyRelaunch@CortanaSharedExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_NotifyRelaunch@SearchAppExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x18039D980 (-remove_NotifyRelaunch@SearchAppExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_NotifyRelaunch@UndockedSearchAppExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x1803B4190 (-remove_NotifyRelaunch@UndockedSearchAppExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180050A48 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180052794 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x1800527D4 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Foundation::Rect>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // rbp
  RTL_SRWLOCK v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  RTL_SRWLOCK v9; // r13
  struct IUnknown **v10; // rax
  Microsoft::WRL::Details::EventTargetArray *v11; // r15
  unsigned __int64 v12; // r13
  _QWORD *v13; // rax
  _QWORD *v14; // r12
  volatile int *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r14d
  struct IUnknown **v19; // r14
  void **v20; // r12
  bool v22; // cl
  RTL_SRWLOCK v23; // rcx
  char v24; // [rsp+20h] [rbp-38h] BYREF
  char v25; // [rsp+60h] [rbp+8h]

  v2 = a1 + 2;
  v5.Ptr = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  v9.Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
  v10 = (struct IUnknown **)*((_QWORD *)v9.Ptr + 2);
  v11 = 0LL;
  v25 = 0;
  v12 = ((__int64)(*((_QWORD *)v9.Ptr + 3) - (_QWORD)v10) >> 3) - 1;
  if ( !v12 )
  {
    v22 = *v10 == a2;
LABEL_21:
    if ( v22 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      if ( &v24 != (char *)a1 )
      {
        v5.Ptr = a1->Ptr;
        a1->Ptr = 0LL;
      }
      v23.Ptr = a1->Ptr;
      a1->Ptr = v11;
      if ( v23.Ptr )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
          v23.Ptr,
          v6,
          v7,
          v8);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      goto LABEL_10;
    }
LABEL_8:
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v11,
        v6,
        v7,
        v8);
LABEL_10:
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    if ( v5.Ptr )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v5.Ptr,
        v6,
        v7,
        v8);
    return 0LL;
  }
  v13 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v13;
  if ( v13 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(v13);
    v14[2] = 0LL;
    v14[3] = 0LL;
    v14[4] = 0LL;
    *v14 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
    v18 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
            (Microsoft::WRL::Details::EventTargetArray *)v14,
            v12);
    if ( v18 >= 0 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v14 + 12), v15);
      v18 = 0;
      v11 = (Microsoft::WRL::Details::EventTargetArray *)v14;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      v14,
      v15,
      v16,
      v17);
    if ( v18 >= 0 )
    {
      v19 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
      v20 = (void **)*((_QWORD *)a1->Ptr + 4);
      if ( v19 != *((struct IUnknown ***)a1->Ptr + 3) )
      {
        v22 = 0;
        while ( 1 )
        {
          if ( v22 || a2 != *v19 )
          {
            if ( !v12 )
              goto LABEL_21;
            Microsoft::WRL::Details::EventTargetArray::AddTail(v11, *v19, *v20);
            v22 = v25;
            ++v20;
            --v12;
          }
          else
          {
            v22 = 1;
            v25 = 1;
          }
          if ( ++v19 == *((struct IUnknown ***)a1->Ptr + 3) )
            goto LABEL_21;
        }
      }
      goto LABEL_8;
    }
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v11,
        v6,
        v7,
        v8);
  }
  else
  {
    v18 = -2147024882;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return (unsigned int)v18;
}
