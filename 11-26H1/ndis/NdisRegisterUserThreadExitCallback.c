/*
 * XREFs of NdisRegisterUserThreadExitCallback @ 0x1400E7110
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0$00X@?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@QEAA@PEAVInterfaceProfileKnobCollection@@@Z @ 0x14000AC20 (--$-0$00X@-$unique_ptr@VInterfaceProfileKnobCollection@@U-$KFreePool@VInterfaceProfileKnobCollec.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ??$?0$00X@?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@QEAA@$$T@Z @ 0x14008E040 (--$-0$00X@-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@QEAA@$$T@Z.c)
 *     ??$invoke@P6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@Z @ 0x1400DF1B4 (--$invoke@P6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_ETHREAD@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400E6FB8 (--1-$unique_storage@U-$resource_policy@PEAU_ETHREAD@@$$A6A_JPEAX@Z$1-ObfDereferenceObject@@YA_J0.c)
 *     ??1_NDIS_THREAD_EXIT_REGISTRATION@@QEAA@XZ @ 0x1400E6FF0 (--1_NDIS_THREAD_EXIT_REGISTRATION@@QEAA@XZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DRIVER_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1400E7018 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DRIVER_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ?AcquireDriverObjectReference@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DRIVER_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAU_DRIVER_OBJECT@@@Z @ 0x1400E7080 (-AcquireDriverObjectReference@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DRI.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDIS_THREAD_STATE@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUNDIS_THREAD_STATE@@@Z @ 0x1400E70B8 (-reset@-$unique_storage@U-$resource_policy@PEAUNDIS_THREAD_STATE@@$$A6A_JPEAX@Z$1-ObfDereference.c)
 *     ?ndisCreateThreadStateObject@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDIS_THREAD_STATE@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1400E775C (-ndisCreateThreadStateObject@@YAJAEAV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDI.c)
 *     ?ndisGetThreadStateReferenceFromThread@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDIS_THREAD_STATE@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAU_ETHREAD@@@Z @ 0x1400E7924 (-ndisGetThreadStateReferenceFromThread@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x140163240 (--0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

__int64 __fastcall NdisRegisterUserThreadExitCallback(void *a1, __int64 a2, __int64 a3, __int64 **a4)
{
  __int64 v6; // r12
  int v8; // r9d
  struct KPushLockBase *v9; // rbx
  unsigned __int64 *v10; // rbx
  unsigned __int64 *i; // rax
  char v12; // bl
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *Pool2; // rax
  int v16; // edx
  __int64 *v17; // rdi
  int v18; // edx
  unsigned int v19; // ebx
  unsigned __int16 v20; // r9
  __int64 *v21; // rax
  _QWORD *v22; // rbx
  int v23; // edx
  struct _KTHREAD *v24; // [rsp+30h] [rbp-40h] BYREF
  __int64 v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h] BYREF
  LONG_PTR (__stdcall *v28)(PVOID); // [rsp+50h] [rbp-20h] BYREF
  KLockHolder v29; // [rsp+58h] [rbp-18h] BYREF
  PVOID P; // [rsp+B8h] [rbp+48h] BYREF

  v6 = a2;
  if ( !a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 10;
      LOBYTE(a2) = 4;
LABEL_25:
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        27,
        v8,
        (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids);
    }
    return 3221225485LL;
  }
  *a4 = 0LL;
  if ( !a1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v8 = 11;
LABEL_24:
    LOBYTE(a2) = 2;
    goto LABEL_25;
  }
  v9 = qword_14011EA40;
  KLockThisShared::KLockThisShared((KLockThisShared *)&v29, qword_14011EA40);
  v10 = (unsigned __int64 *)&v9[1];
  for ( i = (unsigned __int64 *)*v10; i != v10; i = (unsigned __int64 *)*i )
  {
    if ( (void *)i[9] == a1 )
    {
      v12 = 1;
      goto LABEL_13;
    }
  }
  v12 = 0;
LABEL_13:
  KLockHolder::~KLockHolder(&v29);
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        27,
        12,
        (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids);
    }
    return 3221225474LL;
  }
  if ( qword_14011F6E8 )
  {
    if ( !v6 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v8 = 14;
      goto LABEL_24;
    }
    CurrentThread = KeGetCurrentThread();
    if ( PsIsSystemThread(CurrentThread) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v8 = 15;
      goto LABEL_24;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1380280404LL);
    if ( Pool2 )
    {
      *Pool2 = 0LL;
      Pool2[1] = 0LL;
      wistd::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>(
        (__int64)&P,
        (__int64)Pool2);
    }
    else
    {
      wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(&P);
    }
    v17 = (__int64 *)P;
    if ( P )
    {
      AcquireDriverObjectReference(&v26, a1);
      ObfReferenceObject(CurrentThread);
      v24 = CurrentThread;
      ndisGetThreadStateReferenceFromThread(&v25, CurrentThread);
      if ( v25 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v18) = 2;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v18,
            27,
            17,
            (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids);
        }
        v19 = -1073740528;
        goto LABEL_43;
      }
      P = 0LL;
      v19 = ndisCreateThreadStateObject(&P);
      if ( v19 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = 18;
LABEL_41:
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x1Bu,
            v20,
            (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids,
            v19);
          goto LABEL_42;
        }
        goto LABEL_42;
      }
      v21 = AcquireDriverObjectReference(&v27, a1);
      v22 = P;
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DRIVER_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DRIVER_OBJECT *,_DRIVER_OBJECT *,0,std::nullptr_t>>>::operator=(
        (__int64 *)P,
        v21);
      wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>(&v27);
      v22[1] = CurrentThread;
      v22[2] = v6;
      v22[3] = a3;
      v19 = PsSetThreadProperty(CurrentThread, 1398031173LL, v22);
      if ( v19 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = 19;
          goto LABEL_41;
        }
LABEL_42:
        wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>((__int64 *)&P);
LABEL_43:
        wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>(&v25);
        wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>((__int64 *)&v24);
        wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>(&v26);
        _NDIS_THREAD_EXIT_REGISTRATION::~_NDIS_THREAD_EXIT_REGISTRATION((_NDIS_THREAD_EXIT_REGISTRATION *)v17);
        ExFreePoolWithTag(v17, 0);
        return v19;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DRIVER_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DRIVER_OBJECT *,_DRIVER_OBJECT *,0,std::nullptr_t>>>::operator=(
        v17 + 1,
        &v26);
      if ( v17 != (__int64 *)&v24 )
      {
        if ( *v17 )
        {
          v27 = *v17;
          v28 = ObfDereferenceObject;
          wistd::invoke<__int64 (*)(void *),_DRIVER_OBJECT * &>((__int64 (__fastcall **)(_QWORD))&v28, &v27);
        }
        *v17 = (__int64)CurrentThread;
        v24 = 0LL;
      }
      wil::details::unique_storage<wil::details::resource_policy<NDIS_THREAD_STATE *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,NDIS_THREAD_STATE *,NDIS_THREAD_STATE *,0,std::nullptr_t>>::reset(
        (__int64 *)&P,
        0LL);
      *a4 = v17;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v23,
          27,
          20,
          (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids,
          (char)v17);
      }
      wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>((__int64 *)&P);
      wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>(&v25);
      wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>((__int64 *)&v24);
      wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>(&v26);
      return 0LL;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v16,
          27,
          16,
          (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids);
      }
      return 3221225626LL;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        27,
        13,
        (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids);
    }
    return 3221225473LL;
  }
}
