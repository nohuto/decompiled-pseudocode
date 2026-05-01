/*
 * XREFs of ?UpdateDisplayRegionVisibility@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@H@Z @ 0x18044A2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18020EE18 (-find@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKUDis.c)
 *     ??0_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@H@ZAEAW42@AEAHAEAJ@Z @ 0x1802931FC (--0_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@H@.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_5b81071474e0379f4c1550f72c623acc___ @ 0x180449DD0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_5b81071474e0379f4c1550f72c623acc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentConfig::UpdateDisplayRegionVisibility(
        WindowingEnvironmentConfig *this,
        struct IImmersiveMonitor *a2,
        int a3)
{
  __int64 v5; // rcx
  int v6; // eax
  _QWORD *v7; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v9; // rcx
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  RTL_SRWLOCK *v16; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v17[7]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v19; // [rsp+80h] [rbp+8h] BYREF
  int v20; // [rsp+90h] [rbp+18h] BYREF
  int v21; // [rsp+98h] [rbp+20h] BYREF

  v20 = a3;
  v5 = *((_QWORD *)this + 6);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
    v21 = 0;
    v6 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 24LL))(a2, &v21);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x116,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v6,
        v13);
    std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::find(
      (__int64 **)this + 9,
      &v15,
      &v21);
    if ( v15 == *((_QWORD *)this + 9) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x119,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x80070057LL,
        v13);
    LOBYTE(v19) = v20 != 0;
    if ( (v20 != 0) != *(_BYTE *)(v15 + 56) )
    {
      v7 = _lambda_5724e9f0897f2fd11b6a24af4b09628e_::_lambda_5724e9f0897f2fd11b6a24af4b09628e_(
             v17,
             (__int64)this - 32,
             (__int64)&v15,
             (__int64)&v19,
             (__int64)&v20);
      CurrentThreadId = GetCurrentThreadId();
      v10 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_5b81071474e0379f4c1550f72c623acc___(
              v9,
              CurrentThreadId,
              v7);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x132,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v10,
          v14);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v16);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x137,
                           (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v11);
  }
  return result;
}
