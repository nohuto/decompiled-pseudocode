/*
 * XREFs of ?RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800E5B28
 * Callers:
 *     ?ReevaluateGameModeOperation@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800E537C (-ReevaluateGameModeOperation@CBtAudioResourceManagerBase@@IEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_1507dc9f61c5d8e5e73777b0ef111e5c__void_::_Do_call @ 0x1800E7B30 (std--_Func_impl_no_alloc__lambda_1507dc9f61c5d8e5e73777b0ef111e5c__void_--_Do_call.c)
 * Callees:
 *     _lambda_f7a716bfe224096f553bb41568304cf0_::_lambda_f7a716bfe224096f553bb41568304cf0_ @ 0x1800ADDB8 (_lambda_f7a716bfe224096f553bb41568304cf0_--_lambda_f7a716bfe224096f553bb41568304cf0_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_7221d4a040d55e9dfc0559924ec597ce_::operator() @ 0x1800E0704 (_lambda_7221d4a040d55e9dfc0559924ec597ce_--operator().c)
 */

void __fastcall CBtAudioResourceManagerBase::RefreshStreamsOnDevice(CBtAudioResourceManagerBase *this)
{
  struct _RTL_CRITICAL_SECTION **v1; // rax
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION **)lambda_f7a716bfe224096f553bb41568304cf0_::_lambda_f7a716bfe224096f553bb41568304cf0_(
                                          &v4,
                                          (__int64)this);
  v2 = lambda_7221d4a040d55e9dfc0559924ec597ce_::operator()(v1);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1625LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v2);
}
