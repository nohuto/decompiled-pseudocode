/*
 * XREFs of ?RelaunchAfterMilliseconds@TouchKeyboardExperienceManager@@AEAAJI@Z @ 0x180463938
 * Callers:
 *     _lambda_2f931dcef3c075f3fb52ee5cb82c048c_::operator() @ 0x18045D554 (_lambda_2f931dcef3c075f3fb52ee5cb82c048c_--operator().c)
 *     _lambda_764a1297a52a98304490b9424ce1b78f_::operator() @ 0x18045E3B4 (_lambda_764a1297a52a98304490b9424ce1b78f_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18001A30C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18001E320 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1802C6254 (-InternalAddRef@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1802CEAF4 (-InternalRelease@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_23c5a3bb52c52253123ff45bf7a2f049___ @ 0x180459470 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_23c5a3bb52c52253123ff45bf7a2f049___.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_be5c4a08901c2da5d7e3733dfd359dd1___ @ 0x1804595B0 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_be5c4a08901c2da5d7e3733dfd359dd1___.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TKEM_Crash2508@@@details@wil@@QEAA_NXZ @ 0x180468A3C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TKEM_Crash2508@@@details@wil@@QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::RelaunchAfterMilliseconds(
        TouchKeyboardExperienceManager *this,
        unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // eax
  volatile signed __int32 *v12; // [rsp+20h] [rbp-30h]
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v16; // [rsp+70h] [rbp+20h] BYREF
  TouchKeyboardExperienceManager *v17; // [rsp+78h] [rbp+28h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TKEM_Crash2508>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TKEM_Crash2508>::GetImpl'::`2'::impl) )
  {
    v17 = this;
    Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalAddRef((__int64 *)&v17);
    v16 = 0LL;
    *(_QWORD *)&v13 = &v16;
    v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v13);
    Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v6);
    v8 = v16;
    *(_QWORD *)&v13 = v16;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    *((_QWORD *)&v13 + 1) = this;
    v14 = a2;
    v9 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_be5c4a08901c2da5d7e3733dfd359dd1___(
           v8,
           v7,
           *((_DWORD *)this + 243),
           a2,
           v12,
           (__int64)&v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1049,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease((__int64 *)&v17);
  }
  else
  {
    *(_QWORD *)&v13 = this;
    DWORD2(v13) = a2;
    v10 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_23c5a3bb52c52253123ff45bf7a2f049___(
            v5,
            v4,
            *((_DWORD *)this + 243),
            a2,
            v12,
            &v13);
    v9 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x105C,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
  }
  return (unsigned int)v9;
}
