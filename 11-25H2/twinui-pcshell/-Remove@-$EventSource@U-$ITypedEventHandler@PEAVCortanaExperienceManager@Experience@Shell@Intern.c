/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@UWindowId@UI@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18004FD60
 * Callers:
 *     ?remove_WindowChanged@UndockedSearchAppExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x18004FD20 (-remove_WindowChanged@UndockedSearchAppExperienceManager@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ??$InvokeDelegates@V_lambda_bc798bc91d3352a764cb262da2d2d108_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@UWindowId@UI@5@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_bc798bc91d3352a764cb262da2d2d108_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@UWindowId@UI@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x18039E748 (--$InvokeDelegates@V_lambda_bc798bc91d3352a764cb262da2d2d108_@@U-$ITypedEventHandler@PEAVCortana.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180050500 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180050A48 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180052794 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x1800527D4 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::UI::WindowId>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // rbp
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *Ptr; // r13
  struct IUnknown **v10; // rax
  Microsoft::WRL::Details::EventTargetArray *v11; // rbx
  __int64 v12; // r13
  unsigned __int64 v13; // r13
  _QWORD *v14; // rax
  _QWORD *v15; // r15
  volatile int *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r14d
  struct IUnknown **v20; // r14
  void **v21; // r15
  bool v22; // cl
  _QWORD *v24; // [rsp+20h] [rbp-48h]
  char v25; // [rsp+70h] [rbp+8h]
  Microsoft::WRL::Details::EventTargetArray *v26; // [rsp+80h] [rbp+18h] BYREF
  __int64 v27; // [rsp+88h] [rbp+20h] BYREF

  v2 = a1 + 2;
  v4 = 0LL;
  v27 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
  v10 = (struct IUnknown **)Ptr[2];
  v11 = 0LL;
  v12 = Ptr[3] - (_QWORD)v10;
  v26 = 0LL;
  v25 = 0;
  v13 = (v12 >> 3) - 1;
  if ( !v13 )
  {
    v22 = *v10 == a2;
LABEL_13:
    if ( v22 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v27, a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v26);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      v11 = v26;
      v4 = v27;
    }
LABEL_17:
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v11,
        v6,
        v7,
        v8);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v4,
        v6,
        v7,
        v8);
    return 0LL;
  }
  v14 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v14;
  if ( v14 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(v14);
    v15[2] = 0LL;
    v15[3] = 0LL;
    v15[4] = 0LL;
    *v15 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
    v19 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
            (Microsoft::WRL::Details::EventTargetArray *)v15,
            v13);
    if ( v19 >= 0 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v15 + 12), v16);
      v11 = (Microsoft::WRL::Details::EventTargetArray *)v15;
      v24 = v15;
      v26 = (Microsoft::WRL::Details::EventTargetArray *)v15;
      v19 = 0;
    }
    else
    {
      v24 = 0LL;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      v15,
      v16,
      v17,
      v18);
    if ( v19 >= 0 )
    {
      v20 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
      v21 = (void **)*((_QWORD *)a1->Ptr + 4);
      if ( v20 != *((struct IUnknown ***)a1->Ptr + 3) )
      {
        v22 = 0;
        while ( 1 )
        {
          if ( v22 || a2 != *v20 )
          {
            if ( !v13 )
              goto LABEL_13;
            Microsoft::WRL::Details::EventTargetArray::AddTail(v11, *v20, *v21);
            v22 = v25;
            ++v21;
            --v13;
          }
          else
          {
            v22 = 1;
            v25 = 1;
          }
          if ( ++v20 == *((struct IUnknown ***)a1->Ptr + 3) )
            goto LABEL_13;
        }
      }
      goto LABEL_17;
    }
    if ( v24 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        v11,
        v6,
        v7,
        v8);
  }
  else
  {
    v19 = -2147024882;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return (unsigned int)v19;
}
