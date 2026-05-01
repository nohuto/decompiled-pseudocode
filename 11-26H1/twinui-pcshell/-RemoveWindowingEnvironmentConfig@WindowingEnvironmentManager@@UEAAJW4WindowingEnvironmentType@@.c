/*
 * XREFs of ?RemoveWindowingEnvironmentConfig@WindowingEnvironmentManager@@UEAAJW4WindowingEnvironmentType@@@Z @ 0x1801D1C90
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_37b02de6af5cc70082ddb03b5db08654___ @ 0x1801D1DA8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_37b02de6af5cc70082ddb03b5db08654.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentManager::RemoveWindowingEnvironmentConfig(RTL_SRWLOCK *a1, int a2)
{
  RTL_SRWLOCK *v3; // rbx
  _QWORD *Ptr; // r8
  __int64 *v5; // rdx
  char v6; // cl
  char v7; // r10
  __int64 *v8; // rax
  __int64 v9; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v11; // rcx
  int v12; // eax
  const char *v13; // r9
  __int64 result; // rax
  int v15[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = a2;
  v3 = a1 + 3;
  AcquireSRWLockExclusive(a1 + 3);
  Ptr = a1[4].Ptr;
  v5 = (__int64 *)Ptr[1];
  v15[3] = 0;
  v6 = 1;
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      if ( *((_DWORD *)v5 + 8) >= v17 )
      {
        v7 = 0;
        Ptr = v5;
      }
      else
      {
        v7 = 1;
      }
      v8 = v5 + 2;
      if ( !v7 )
        v8 = v5;
      v5 = (__int64 *)*v8;
    }
    while ( !*(_BYTE *)(*v8 + 25) );
  }
  if ( !*((_BYTE *)Ptr + 25) && v17 >= *((_DWORD *)Ptr + 8) )
    v6 = 0;
  try
  {
    if ( v6 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA6,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)0x80070057LL,
        v15[0]);
    v9 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v15, &a1[-17], &v17);
    CurrentThreadId = GetCurrentThreadId();
    v12 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_37b02de6af5cc70082ddb03b5db08654___(
            v11,
            CurrentThreadId,
            v9);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD3,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v12,
        v15[0]);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD7,
                           (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                           v13);
  }
  return result;
}
