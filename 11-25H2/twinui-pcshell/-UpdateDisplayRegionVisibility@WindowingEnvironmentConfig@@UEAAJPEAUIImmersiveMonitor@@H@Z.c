/*
 * XREFs of ?UpdateDisplayRegionVisibility@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@H@Z @ 0x18043DC00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18021CD98 (-find@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKUDis.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_5b81071474e0379f4c1550f72c623acc___ @ 0x18043D708 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_5b81071474e0379f4c1550f72c623acc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentConfig::UpdateDisplayRegionVisibility(
        WindowingEnvironmentConfig *this,
        struct IImmersiveMonitor *a2,
        int a3)
{
  __int64 v5; // rcx
  int v6; // eax
  DWORD CurrentThreadId; // eax
  __int64 v8; // rcx
  int v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  RTL_SRWLOCK *v13; // [rsp+28h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  int *v15; // [rsp+40h] [rbp-18h]
  int *v16; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+70h] [rbp+18h] BYREF
  int v20; // [rsp+78h] [rbp+20h] BYREF

  v19 = a3;
  v5 = *((_QWORD *)this + 6);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
    v20 = 0;
    v6 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 24LL))(a2, &v20);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x116,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v6,
        v12);
    std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::find(
      (__int64 **)this + 9,
      &v12,
      &v20);
    if ( v12 == *((_QWORD *)this + 9) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x119,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x80070057LL,
        v12);
    LOBYTE(v18) = v19 != 0;
    if ( (v19 != 0) != *(_BYTE *)(v12 + 56) )
    {
      *(_QWORD *)&v14 = (char *)this - 32;
      *((_QWORD *)&v14 + 1) = &v12;
      v15 = &v18;
      v16 = &v19;
      CurrentThreadId = GetCurrentThreadId();
      v9 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_5b81071474e0379f4c1550f72c623acc___(
             v8,
             CurrentThreadId,
             &v14);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x132,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v9,
          v12);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x137,
                           (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v10);
  }
  return result;
}
