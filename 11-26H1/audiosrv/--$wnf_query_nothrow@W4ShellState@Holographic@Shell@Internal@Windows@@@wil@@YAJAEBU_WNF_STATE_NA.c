/*
 * XREFs of ??$wnf_query_nothrow@W4ShellState@Holographic@Shell@Internal@Windows@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4ShellState@Holographic@Shell@Internal@Windows@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180150868
 * Callers:
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJPEBU_tlgProvider_t@@_N@Z @ 0x180151C00 (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJPEBU_tlgProvider_t@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800CA468 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<enum Windows::Internal::Shell::Holographic::ShellState>(
        __int64 a1,
        char *a2,
        _DWORD *a3,
        _DWORD *a4)
{
  int v7; // eax
  unsigned int v8; // edi
  int v10; // eax
  int v11; // ecx
  char v12; // cl
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+58h] [rbp+10h] BYREF

  v14 = a1;
  *a2 = 0;
  if ( a4 )
    *a4 = 0;
  LODWORD(v14) = 4;
  v15 = 0;
  v7 = NtQueryWnfStateData(&WNF_HOLO_SHELL_STATE_INTERACTIVE_USER, 0LL, 0LL, &v15);
  v8 = v7 | 0x10000000;
  if ( v7 >= 0 || v8 == -805306333 )
  {
    v10 = v15;
    if ( !v15 )
      goto LABEL_12;
    v11 = v14;
    if ( (_DWORD)v14 != 4 )
    {
      wil::details::in1diag3::Log_HrMsg(
        retaddr,
        625LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
        (const char *)0x8000FFFFLL,
        (unsigned __int64)"Inconsistent state data size in wnf_query",
        (const char *)&v14);
      v11 = v14;
      *a3 = 0;
      v10 = v15;
    }
    if ( v10 && v11 == 4 )
      v12 = 1;
    else
LABEL_12:
      v12 = 0;
    *a2 = v12;
    if ( a4 )
      *a4 = v10;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CC,
      (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v8);
    return v8;
  }
}
