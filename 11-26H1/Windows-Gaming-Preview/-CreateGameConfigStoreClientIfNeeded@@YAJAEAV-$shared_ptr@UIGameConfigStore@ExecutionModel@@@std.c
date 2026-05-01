/*
 * XREFs of ?CreateGameConfigStoreClientIfNeeded@@YAJAEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x1800142E8
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180010A10 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     _lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator() @ 0x1800196C4 (_lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator().c)
 *     _lambda_c7e28edb760347053732171cef665d5d_::operator() @ 0x18001A51C (_lambda_c7e28edb760347053732171cef665d5d_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180002250 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateGameConfigStoreClientIfNeeded(_QWORD *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rbx
  _DWORD *v6; // rax
  volatile signed __int32 *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  _DWORD *v10; // [rsp+60h] [rbp+18h]

  if ( !*a1 )
  {
    v9 = 0LL;
    v2 = CreateGameConfigStoreClient(&v9);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v2);
      return v3;
    }
    v5 = v9;
    v6 = operator new(0x18uLL);
    v10 = v6;
    *(_OWORD *)v6 = 0LL;
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = off_180046B98;
    *((_QWORD *)v6 + 2) = v5;
    *a1 = v5;
    v7 = (volatile signed __int32 *)a1[1];
    a1[1] = v6;
    if ( v7 && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return 0LL;
}
