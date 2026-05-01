/*
 * XREFs of ?RelaunchAfterMilliseconds@TouchKeyboardExperienceManager@@AEAAJI@Z @ 0x18046F868
 * Callers:
 *     _lambda_2f931dcef3c075f3fb52ee5cb82c048c_::operator() @ 0x1804698C8 (_lambda_2f931dcef3c075f3fb52ee5cb82c048c_--operator().c)
 *     _lambda_c5b63f338e787c1dc9ce32ee8c9a5927_::operator() @ 0x18046AE20 (_lambda_c5b63f338e787c1dc9ce32ee8c9a5927_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180073448 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800BFE24 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ?InternalAddRef@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1802BD030 (-InternalAddRef@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1802C5378 (-InternalRelease@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_8564353b7dc6971d7da83ff0ca7e4bd3___ @ 0x1804657A4 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_8564353b7dc6971d7da83ff0ca7e4bd3___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::RelaunchAfterMilliseconds(
        TouchKeyboardExperienceManager *this,
        unsigned int a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  void *v9; // [rsp+20h] [rbp-30h]
  __int64 v10[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v11; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v13; // [rsp+70h] [rbp+20h] BYREF
  TouchKeyboardExperienceManager *v14; // [rsp+80h] [rbp+30h] BYREF
  __int64 *v15; // [rsp+88h] [rbp+38h] BYREF

  v14 = this;
  Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalAddRef((__int64 *)&v14);
  v13 = 0LL;
  v15 = &v13;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v15);
  Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v4);
  v6 = v13;
  v10[0] = v13;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v10[1] = (__int64)this;
  v11 = a2;
  v7 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_8564353b7dc6971d7da83ff0ca7e4bd3___(
         v6,
         v5,
         *((_DWORD *)this + 243),
         a2,
         v9,
         (__int64)v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1021,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v7;
}
