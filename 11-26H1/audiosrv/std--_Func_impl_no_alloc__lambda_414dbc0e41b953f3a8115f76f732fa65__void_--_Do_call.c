/*
 * XREFs of std::_Func_impl_no_alloc__lambda_414dbc0e41b953f3a8115f76f732fa65__void_::_Do_call @ 0x1800C0700
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18007B7DC (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_414dbc0e41b953f3a8115f76f732fa65__void_::_Do_call(
        __int64 a1,
        void *a2)
{
  __int64 v3; // rdx
  __int128 v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ResetEvent(*(wil::details **)(*(_QWORD *)(a1 + 8) + 64LL), a2);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_OWORD *)(v3 + 48);
  v5 = *(_QWORD *)g_AudioResourceManager;
  v6 = *(_QWORD *)(v3 + 40);
  *(_OWORD *)v8 = v4;
  v7 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, __int64, int *))(v5 + 80))(
         g_AudioResourceManager,
         v6,
         v8);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      50LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiomodeeffectsdiscovery.cpp",
      (const char *)(unsigned int)v7);
}
