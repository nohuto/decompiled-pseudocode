/*
 * XREFs of ?UpdateEngagementTelemetryFlags@WindowWrapperBase@@UEAAJ_K0@Z @ 0x18043F750
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@AEAPEAEAEAV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x180297C24 (--0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV-$SimpleVectorIterator@UDisplayRegionId@W.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_64250699a60f045a429c95628aea0968___ @ 0x180437184 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_64250699a60f045a429c95628aea0968.c)
 */

__int64 __fastcall WindowWrapperBase::UpdateEngagementTelemetryFlags(WindowWrapperBase *this, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  int v6; // eax
  const char *v8; // r9
  __int64 v9; // rdx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v12; // [rsp+50h] [rbp+8h]
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  v13 = a2;
  if ( *((_QWORD *)this + 11) )
  {
    if ( a2 )
    {
      v3 = _lambda_8310241115156db3d8926b31d9f5a4c3_::_lambda_8310241115156db3d8926b31d9f5a4c3_(
             v10,
             (__int64)this - 16,
             (__int64)&v13,
             (__int64)&v14);
      CurrentThreadId = GetCurrentThreadId();
      v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_64250699a60f045a429c95628aea0968___(
             v5,
             CurrentThreadId,
             (__int64)v3);
      if ( v6 < 0 )
      {
        try
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x5AC,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v6,
            v10[0]);
        }
        catch ( ... )
        {
          *(_DWORD *)(v9 + 80) = wil::details::in1diag3::Return_CaughtException(
                                   retaddr,
                                   (void *)0x5B1,
                                   (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                                   v8);
          return v12;
        }
      }
    }
  }
  return 0LL;
}
