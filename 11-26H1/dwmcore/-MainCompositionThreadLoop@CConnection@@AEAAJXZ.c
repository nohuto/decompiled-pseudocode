/*
 * XREFs of ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x18002E3F4
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18022C4D4 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014F3A4 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVCConnection@@PEAPEAVCComposition@@@Z @ 0x18020E22C (-Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVCConnection@@PEAPEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConnection::MainCompositionThreadLoop(CConnection *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CComposition *v5; // rbx
  const char *v6; // r9
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CComposition *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = CGlobalComposition::Create(*((struct CTransport **)this + 1), this, &v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    SetEvent(*((HANDLE *)this + 5));
    v5 = v9;
    *((_BYTE *)this + 24) = 1;
    while ( *((_BYTE *)this + 24) )
      CComposition::ProcessComposition(v5);
    CComposition::OnShutdown(v5);
    if ( *((_DWORD *)v5 + 2) != 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x6A,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
        v6);
    if ( v5 )
      (*(void (__fastcall **)(CComposition *))(*(_QWORD *)v5 + 8LL))(v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
      (const char *)(unsigned int)v2,
      v7);
    if ( v9 )
      (*(void (__fastcall **)(CComposition *))(*(_QWORD *)v9 + 8LL))(v9);
    return v3;
  }
}
