/*
 * XREFs of ?OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x180083020
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z @ 0x180054568 (-SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@UShellButtonListEntry@GameControllerRawInputProvider@@U?$default_delete@UShellButtonListEntry@GameControllerRawInputProvider@@@std@@@std@@QEAA@XZ @ 0x1800996EC (--1-$unique_ptr@UShellButtonListEntry@GameControllerRawInputProvider@@U-$default_delete@UShellBu.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800CE090 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GameControllerRawInputProvider::OnSystemCommand(
        GameControllerRawInputProvider *this,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        bool a6)
{
  int v10; // ebp
  __int64 *i; // rbx
  __int64 v12; // rcx
  __int64 *v13; // rcx
  __int64 **v14; // rax
  int v15; // eax
  _DWORD *v16; // rax
  unsigned int v17; // r8d
  const char *v18; // r9
  _DWORD *v19; // rbx
  int v20; // eax
  _QWORD *v21; // rax
  unsigned int v22; // r8d
  const char *v23; // r9
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // r14
  __int64 (__fastcall *v28)(__int64, __int64 (__fastcall *)(_DWORD *), _QWORD *, _QWORD *); // rbp
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  GameControllerRawInputProvider **v32; // rcx
  int v33; // [rsp+20h] [rbp-38h]
  _QWORD *v34; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v10 = a5 + 45;
  if ( !a6 )
  {
    for ( i = (__int64 *)*((_QWORD *)this + 12); ; i = (__int64 *)*i )
    {
      if ( i == (__int64 *)((char *)this + 96) )
        goto LABEL_12;
      if ( *((_DWORD *)i + 8) == v10 && i[5] == a3 )
        break;
    }
    v12 = i[3];
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 96LL))(v12);
    v13 = (__int64 *)*i;
    v14 = (__int64 **)i[1];
    if ( *(__int64 **)(*i + 8) != i || *v14 != i )
      goto LABEL_37;
    *v14 = v13;
    v13[1] = (__int64)v14;
    --*((_DWORD *)this + 28);
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), __int64 *, __int64))(**((_QWORD **)this + 5)
                                                                                                + 152LL))(
            *((_QWORD *)this + 5),
            GameControllerRawInputProvider::ShellButtonListEntryDeletionCallback,
            i,
            1LL);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x240,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerra"
                      "winputprovider.cpp",
        (const char *)(unsigned int)v15,
        v33);
  }
LABEL_12:
  v16 = operator new(0xBC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = v16;
  if ( v16 )
  {
    memset_0(v16, 0, 0xBC0uLL);
    v19[6] = 3008;
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v19 )
  {
    wil::details::in1diag3::_Log_NullAlloc(retaddr, (void *)0x24B, v17, v18);
    return;
  }
  *v19 = 128;
  v19[1] = a2;
  *((_QWORD *)v19 + 4) = a3;
  v19[16] = v10;
  *((_BYTE *)v19 + 68) = a6;
  GameControllerRawInputProvider::SetTimestampsFromInput(
    (GameControllerRawInputProvider *)((char *)this - 16),
    a4,
    (struct InputInfo *)v19);
  v20 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), _DWORD *, __int64))(**((_QWORD **)this + 5)
                                                                                             + 152LL))(
          *((_QWORD *)this + 5),
          GameControllerRawInputProvider::InputReportCallback,
          v19,
          4LL);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x256,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)v20,
      v33);
    operator delete(v19, (const struct std::nothrow_t *)0xBC0);
    return;
  }
  if ( a6 )
  {
    v21 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v24 = v21;
    if ( v21 )
    {
      *v21 = 0LL;
      v21[1] = 0LL;
      v21[4] = 0LL;
      v21[5] = 0LL;
      v21[2] = 0LL;
      v21[3] = 0LL;
    }
    else
    {
      v24 = 0LL;
    }
    v34 = v24;
    if ( !v24 )
    {
      wil::details::in1diag3::_Log_NullAlloc(retaddr, (void *)0x263, v22, v23);
LABEL_39:
      std::unique_ptr<GameControllerRawInputProvider::ShellButtonListEntry>::~unique_ptr<GameControllerRawInputProvider::ShellButtonListEntry>(&v34);
      return;
    }
    v25 = *((_QWORD *)this + 4);
    v26 = v24[2];
    v24[2] = v25;
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    *((_DWORD *)v24 + 8) = v10;
    *((_DWORD *)v24 + 9) = a2;
    v24[5] = a3;
    v27 = *((_QWORD *)this + 5);
    v28 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(_DWORD *), _QWORD *, _QWORD *))(*(_QWORD *)v27
                                                                                                  + 144LL);
    v29 = v24[3];
    v24[3] = 0LL;
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    v30 = v28(v27, GameControllerRawInputProvider::ShellButtonRepeatCallback, v24, v24 + 3);
    if ( v30 >= 0 )
    {
      v30 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v24[3] + 80LL))(v24[3], 250000LL, 250000LL);
      if ( v30 >= 0 )
        goto LABEL_36;
      v31 = 625LL;
    }
    else
    {
      v31 = 621LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v31,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)v30,
      v33);
LABEL_36:
    v34 = 0LL;
    v32 = (GameControllerRawInputProvider **)*((_QWORD *)this + 13);
    if ( *v32 == (GameControllerRawInputProvider *)((char *)this + 96) )
    {
      *v24 = (char *)this + 96;
      v24[1] = v32;
      *v32 = (GameControllerRawInputProvider *)v24;
      *((_QWORD *)this + 13) = v24;
      ++*((_DWORD *)this + 28);
      goto LABEL_39;
    }
LABEL_37:
    __fastfail(3u);
  }
}
