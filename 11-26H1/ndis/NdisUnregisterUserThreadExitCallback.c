/*
 * XREFs of NdisUnregisterUserThreadExitCallback @ 0x1400E75B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0$00X@?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@QEAA@PEAVInterfaceProfileKnobCollection@@@Z @ 0x14000AC20 (--$-0$00X@-$unique_ptr@VInterfaceProfileKnobCollection@@U-$KFreePool@VInterfaceProfileKnobCollec.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_ETHREAD@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400E6FB8 (--1-$unique_storage@U-$resource_policy@PEAU_ETHREAD@@$$A6A_JPEAX@Z$1-ObfDereferenceObject@@YA_J0.c)
 *     ??1_NDIS_THREAD_EXIT_REGISTRATION@@QEAA@XZ @ 0x1400E6FF0 (--1_NDIS_THREAD_EXIT_REGISTRATION@@QEAA@XZ.c)
 *     ?ndisGetThreadStateReferenceFromThread@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDIS_THREAD_STATE@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAU_ETHREAD@@@Z @ 0x1400E7924 (-ndisGetThreadStateReferenceFromThread@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 */

void __fastcall NdisUnregisterUserThreadExitCallback(__int64 a1)
{
  char v1; // bp
  _NDIS_THREAD_EXIT_REGISTRATION *v2; // rbx
  int v3; // edx
  _QWORD *v4; // rdi
  int v5; // edx
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1;
  if ( a1 )
  {
    wistd::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>(
      (__int64)&P,
      a1);
    v2 = (_NDIS_THREAD_EXIT_REGISTRATION *)P;
    ndisGetThreadStateReferenceFromThread(&P, *(_QWORD *)P);
    v4 = P;
    if ( P )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v3,
          27,
          22,
          (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids,
          (char)P);
      }
      v4[2] = 0LL;
    }
    PsSetThreadProperty(*(_QWORD *)v2, 1398031173LL, 0LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        27,
        23,
        (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids,
        v1);
    }
    wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>((__int64 *)&P);
    _NDIS_THREAD_EXIT_REGISTRATION::~_NDIS_THREAD_EXIT_REGISTRATION(v2);
    ExFreePoolWithTag(v2, 0);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2,
      27,
      21,
      (struct _GUID *)&WPP_a7bdd0433f833af46cc07abd1e9cfe56_Traceguids);
  }
}
