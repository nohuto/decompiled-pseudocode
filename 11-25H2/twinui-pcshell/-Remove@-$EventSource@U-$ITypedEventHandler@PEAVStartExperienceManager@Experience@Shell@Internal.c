/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180051DBC
 * Callers:
 *     ??$InvokeDelegates@V_lambda_d6aa439010436c493593067787cb4742_@@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_d6aa439010436c493593067787cb4742_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1801AEBE0 (--$InvokeDelegates@V_lambda_d6aa439010436c493593067787cb4742_@@U-$ITypedEventHandler@PEAVStartEx.c)
 *     ?remove_NotifyFocus@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180221C20 (-remove_NotifyFocus@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_SetForegroundFailed@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180221C70 (-remove_SetForegroundFailed@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_DismissRequested@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180227DC0 (-remove_DismissRequested@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_Hidden@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x18022A340 (-remove_Hidden@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ??$InvokeDelegates@V_lambda_935b208d2dc4ddd225967dd1ee56400c_@@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_935b208d2dc4ddd225967dd1ee56400c_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x18037ECA4 (--$InvokeDelegates@V_lambda_935b208d2dc4ddd225967dd1ee56400c_@@U-$ITypedEventHandler@PEAVStartEx.c)
 *     ?remove_Destroyed@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180384E80 (-remove_Destroyed@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?remove_ExitTransitionToCortanaCompleted@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180384EC0 (-remove_ExitTransitionToCortanaCompleted@CStartExperienceManager@@UEAAJUEventRegistrationToken@@.c)
 *     ?remove_Shown@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x180384F00 (-remove_Shown@CStartExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180052794 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x1800527D4 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  PVOID v4; // rbx
  RTL_SRWLOCK *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *Ptr; // rax
  _QWORD *v10; // rsi
  _QWORD *v11; // rcx
  bool v12; // r13
  unsigned __int64 v13; // rbp
  _QWORD *v14; // rax
  _QWORD *v15; // r15
  volatile int *v16; // rdx
  int v17; // ebp
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rcx
  __int64 *v21; // r15
  PVOID v23; // rcx
  unsigned __int64 v24; // r12
  __int64 v25; // rbp
  _QWORD *v26; // rax
  __int64 v27; // rcx
  char v28; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v29; // [rsp+70h] [rbp+8h]
  unsigned __int64 v30; // [rsp+80h] [rbp+18h]
  _QWORD *v31; // [rsp+80h] [rbp+18h]
  __int64 v32; // [rsp+88h] [rbp+20h]

  v4 = 0LL;
  v5 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    return 0LL;
  }
  v10 = 0LL;
  v11 = (_QWORD *)Ptr[2];
  v12 = 0;
  v13 = ((__int64)(Ptr[3] - (_QWORD)v11) >> 3) - 1;
  v30 = v13;
  if ( (__int64)(Ptr[3] - (_QWORD)v11) >> 3 == 1 )
  {
    v12 = *v11 == a2;
    goto LABEL_22;
  }
  v14 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v14;
  if ( !v14 )
  {
    v17 = -2147024882;
LABEL_40:
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    return (unsigned int)v17;
  }
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(v14);
  *v15 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  v15[2] = 0LL;
  v15[3] = 0LL;
  v15[4] = 0LL;
  v17 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
          (Microsoft::WRL::Details::EventTargetArray *)v15,
          v13);
  if ( v17 >= 0 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v15 + 12), v16);
    v10 = v15;
    v17 = 0;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
    v15,
    v16,
    v18,
    v19);
  if ( v17 < 0 )
  {
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v10,
        v6,
        v7,
        v8);
    goto LABEL_40;
  }
  v20 = (_QWORD *)*((_QWORD *)a1->Ptr + 4);
  v29 = v20;
  v21 = (__int64 *)*((_QWORD *)a1->Ptr + 2);
  if ( v21 == *((__int64 **)a1->Ptr + 3) )
  {
LABEL_8:
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v10,
        v6,
        v7,
        v8);
    goto LABEL_10;
  }
  v24 = v30;
  while ( !v12 && a2 == *v21 )
  {
    v12 = 1;
LABEL_20:
    if ( ++v21 == *((__int64 **)a1->Ptr + 3) )
      goto LABEL_21;
  }
  if ( v24 )
  {
    v32 = *v20;
    v25 = *v21;
    v26 = (_QWORD *)v10[3];
    v31 = v26;
    if ( *v26 != *v21 )
    {
      if ( v25 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
        v26 = v31;
      }
      v27 = *v26;
      *v26 = v25;
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v6 = v32;
    *(_QWORD *)(v10[4] + 8 * ((__int64)(v10[3] - v10[2]) >> 3)) = v32;
    v10[3] += 8LL;
    v20 = ++v29;
    --v24;
    goto LABEL_20;
  }
LABEL_21:
  v5 = a1 + 2;
LABEL_22:
  if ( !v12 )
    goto LABEL_8;
  AcquireSRWLockExclusive(a1 + 1);
  v4 = 0LL;
  if ( &v28 != (char *)a1 )
  {
    v4 = a1->Ptr;
    a1->Ptr = 0LL;
  }
  v23 = a1->Ptr;
  a1->Ptr = v10;
  if ( v23 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      v23,
      v6,
      v7,
      v8);
  if ( a1 != (RTL_SRWLOCK *)-8LL )
    ReleaseSRWLockExclusive(a1 + 1);
LABEL_10:
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      v4,
      v6,
      v7,
      v8);
  return 0LL;
}
