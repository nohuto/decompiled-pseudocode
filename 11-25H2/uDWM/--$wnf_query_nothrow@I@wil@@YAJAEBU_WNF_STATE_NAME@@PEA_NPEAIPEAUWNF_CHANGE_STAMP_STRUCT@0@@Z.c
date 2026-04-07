/*
 * XREFs of ??$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800BACD8
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18006C2D0 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180096104 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<unsigned int>(__int64 a1, char *a2, _DWORD *a3, __int64 a4)
{
  char v4; // bl
  unsigned int v7; // edi
  int v9; // eax
  int v10; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]
  int v14; // [rsp+68h] [rbp+20h] BYREF
  int v15; // [rsp+6Ch] [rbp+24h]

  v15 = HIDWORD(a4);
  v13 = HIDWORD(a1);
  v14 = 4;
  v4 = 0;
  *a2 = 0;
  v12 = 0;
  v7 = NtQueryWnfStateData(&WNF_EOA_MAGNIFIER_RENDERING_INPUT, 0LL, 0LL, &v12) | 0x10000000;
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -805306333 )
  {
    v9 = v12;
    if ( v12 )
    {
      v10 = v14;
      if ( v14 != 4 )
      {
        wil::details::in1diag3::Log_HrMsg(
          retaddr,
          (void *)0x271,
          (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
          (const char *)0x8000FFFFLL,
          (__int64)"Inconsistent state data size in wnf_query",
          (const char *)&v14);
        v10 = v14;
        *a3 = 0;
        v9 = v12;
      }
      if ( v9 )
      {
        if ( v10 == 4 )
          v4 = 1;
      }
    }
    *a2 = v4;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CC,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)v7);
    return v7;
  }
}
