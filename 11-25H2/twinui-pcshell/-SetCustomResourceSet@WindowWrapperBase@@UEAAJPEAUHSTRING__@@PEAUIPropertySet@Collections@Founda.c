/*
 * XREFs of ?SetCustomResourceSet@WindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804321A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_94a2b8c495758bf3d605ddc865d9a432___ @ 0x18042B7F8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_94a2b8c495758bf3d605ddc865d9a432.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::SetCustomResourceSet(
        WindowWrapperBase *this,
        HSTRING a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 v4; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v6; // rcx
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  int v10[2]; // [rsp+20h] [rbp-28h] BYREF
  HSTRING *v11; // [rsp+28h] [rbp-20h]
  struct Windows::Foundation::Collections::IPropertySet **v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v14; // [rsp+50h] [rbp+8h] BYREF
  HSTRING v15; // [rsp+58h] [rbp+10h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = a3;
  v15 = a2;
  v4 = *((_QWORD *)this + 31);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4);
    *(_QWORD *)v10 = (char *)this - 32;
    v11 = &v15;
    v12 = &v16;
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_94a2b8c495758bf3d605ddc865d9a432___(
           v6,
           CurrentThreadId,
           (__int64)v10);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x947,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v7,
        v10[0]);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x94B,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v8);
  }
  return result;
}
