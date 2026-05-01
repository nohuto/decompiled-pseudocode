/*
 * XREFs of ?RemoveDisplayRegion@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18043DA90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18021CD98 (-find@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKUDis.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_687e5a8c7a4f05ed052b2b78739515ed___ @ 0x18022FB3C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_687e5a8c7a4f05ed052b2b78739515ed.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentConfig::RemoveDisplayRegion(
        WindowingEnvironmentConfig *this,
        struct IImmersiveMonitor *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  DWORD CurrentThreadId; // eax
  __int64 v7; // rcx
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  int v11[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v15; // [rsp+58h] [rbp+20h] BYREF

  v4 = *((_QWORD *)this + 6);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
    v13 = 0;
    v5 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 24LL))(a2, &v13);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xF3,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v5,
        v11[0]);
    std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::find(
      (__int64 **)this + 9,
      &v14,
      &v13);
    if ( v14 == *((_QWORD *)this + 9) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xF6,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x80070057LL,
        v11[0]);
    *(_QWORD *)v11 = (char *)this - 32;
    *(_QWORD *)&v11[2] = &v14;
    CurrentThreadId = GetCurrentThreadId();
    v8 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_687e5a8c7a4f05ed052b2b78739515ed___(
           v7,
           CurrentThreadId,
           v11);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x10B,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v8,
        v11[0]);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v15);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x10F,
                           (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v9);
  }
  return result;
}
