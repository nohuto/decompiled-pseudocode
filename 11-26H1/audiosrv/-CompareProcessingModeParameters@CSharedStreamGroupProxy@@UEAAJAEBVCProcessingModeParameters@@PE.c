/*
 * XREFs of ?CompareProcessingModeParameters@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180070230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180070320 (-CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProc.c)
 *     ?CompareAECProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x1800706C0 (-CompareAECProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@.c)
 *     _lambda_5d34934f89fc3a58b6c7991e423b18e6_::_lambda_5d34934f89fc3a58b6c7991e423b18e6_ @ 0x1800C02B4 (_lambda_5d34934f89fc3a58b6c7991e423b18e6_--_lambda_5d34934f89fc3a58b6c7991e423b18e6_.c)
 *     wil::scope_exit__lambda_47d1fc67d67779a599de58b5c2f87016___ @ 0x1800CD3B4 (wil--scope_exit__lambda_47d1fc67d67779a599de58b5c2f87016___.c)
 *     wil::details::lambda_call__lambda_0b99164584d848c3011070eb6436a84e___::_lambda_call__lambda_0b99164584d848c3011070eb6436a84e___ @ 0x1800F990C (wil--details--lambda_call__lambda_0b99164584d848c3011070eb6436a84e___--_lambda_call__lambda_0b99.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::CompareProcessingModeParameters(
        CSharedStreamGroupProxy *this,
        const struct CProcessingModeParameters *a2,
        enum PMP_MATCH_TYPE *a3)
{
  CSharedStreamGroupProxy *v3; // rdi
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // edx
  __int64 v10; // rdx
  _BYTE v11[16]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v12[32]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v14; // [rsp+70h] [rbp+20h] BYREF
  enum PMP_MATCH_TYPE *v15; // [rsp+80h] [rbp+30h] BYREF

  v15 = a3;
  v3 = (CSharedStreamGroupProxy *)((char *)this - 8);
  *(_DWORD *)a3 = 1;
  if ( !*((_QWORD *)this + 226) )
    return 0LL;
  v6 = lambda_5d34934f89fc3a58b6c7991e423b18e6_::_lambda_5d34934f89fc3a58b6c7991e423b18e6_(v11, v3, &v15);
  wil::scope_exit__lambda_47d1fc67d67779a599de58b5c2f87016___(v12, v6);
  v14 = 0;
  v7 = CSharedStreamGroupProxy::CompareAECProcessingModeParameters(v3, a2, (enum PMP_MATCH_TYPE *)&v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 2055LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_9;
  }
  v9 = v14;
  if ( v14 != 1 )
  {
    *(_DWORD *)v15 = v14;
    if ( !v9 )
      goto LABEL_8;
  }
  v14 = 0;
  v7 = CSharedStreamGroupProxy::CompareStreamingEffectsOverrideProcessingModeParameters(
         v3,
         a2,
         (enum PMP_MATCH_TYPE *)&v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 2063LL;
    goto LABEL_14;
  }
  if ( v14 != 1 )
    *(_DWORD *)v15 = v14;
LABEL_8:
  v8 = 0;
LABEL_9:
  wil::details::lambda_call__lambda_0b99164584d848c3011070eb6436a84e___::_lambda_call__lambda_0b99164584d848c3011070eb6436a84e___(v12);
  return v8;
}
