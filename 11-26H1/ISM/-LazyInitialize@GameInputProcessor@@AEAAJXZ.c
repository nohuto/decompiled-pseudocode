/*
 * XREFs of ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x180048AF8
 * Callers:
 *     ?OnDeviceAttach@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x180048670 (-OnDeviceAttach@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ?OnFocusRequest@GameInputProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180048790 (-OnFocusRequest@GameInputProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?OnInput@GameInputProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180048870 (-OnInput@GameInputProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?OnDeviceRemoval@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x18008F760 (-OnDeviceRemoval@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180065234 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GameInputServerGet @ 0x18009789C (GameInputServerGet.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800AE528 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Reallocate@$00@?$vector@KV?$allocator@K@std@@@std@@AEAAXAEA_K@Z @ 0x1800E6374 (--$_Reallocate@$00@-$vector@KV-$allocator@K@std@@@std@@AEAAXAEA_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GameInputProcessor::LazyInitialize(GameInputProcessor *this)
{
  _QWORD *v2; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 *v5; // rbx
  unsigned int *v6; // r14
  unsigned int *v7; // rbp
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v12; // eax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 32);
  if ( *((_QWORD *)this + 4) )
    return 0LL;
  *v2 = 0LL;
  v3 = GameInputServerGet((char *)this + 32);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( *v2 )
    {
      v5 = (__int64 *)((char *)this + 168);
      v6 = (unsigned int *)*((_QWORD *)this + 21);
      v7 = (unsigned int *)*((_QWORD *)this + 22);
      v8 = (_QWORD *)((char *)this + 168);
      if ( v6 != v7 )
      {
        do
        {
          v15 = 0LL;
          if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 *v6,
                 &v15) >= 0 )
          {
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v2 + 24LL))(
              *v2,
              v15 + 76,
              *(unsigned int *)v15);
            if ( *(_DWORD *)(v15 + 4) == 4 && !*((_BYTE *)this + 192) )
            {
              v12 = NtMITSetKeyboardInputRoutingPolicy(1LL);
              if ( v12 < 0 )
                wil::details::in1diag3::_FailFast_NtStatus(
                  retaddr,
                  (void *)0x19B,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\s"
                                "ystem\\lib\\gameinputprocessor.cpp",
                  (const char *)(unsigned int)v12,
                  v13);
              *((_BYTE *)this + 192) = 1;
            }
          }
          ++v6;
        }
        while ( v6 != v7 );
        v8 = (_QWORD *)((char *)this + 168);
      }
      v9 = *((_QWORD *)this + 22);
      v10 = *v5;
      if ( *v5 != v9 )
      {
        *((_QWORD *)this + 22) = v10;
        v9 = v10;
      }
      if ( v9 != v8[2] )
      {
        if ( *v8 == v9 )
        {
          std::vector<Windows::UI::Color>::_Tidy();
        }
        else
        {
          v15 = (v9 - *v8) >> 2;
          std::vector<unsigned long>::_Reallocate<1>(v8, &v15);
        }
      }
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x187,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\ga"
                  "meinputprocessor.cpp",
    (const char *)(unsigned int)v3,
    v13);
  return v4;
}
