/*
 * XREFs of ??$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800BA4B4
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007A548 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800889F8 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<unsigned int>(__int64 a1, char *a2, _DWORD *a3, __int64 a4)
{
  char v4; // bl
  int v7; // eax
  unsigned int v8; // edi
  int v10; // eax
  int v11; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+54h] [rbp+Ch]
  int v15; // [rsp+68h] [rbp+20h] BYREF
  int v16; // [rsp+6Ch] [rbp+24h]

  v16 = HIDWORD(a4);
  v14 = HIDWORD(a1);
  v15 = 4;
  v4 = 0;
  *a2 = 0;
  v13 = 0;
  v7 = NtQueryWnfStateData(&WNF_EOA_MAGNIFIER_RENDERING_INPUT, 0LL, 0LL, &v13);
  v8 = v7 | 0x10000000;
  if ( v7 >= 0 || v8 == -805306333 )
  {
    v10 = v13;
    if ( v13 )
    {
      v11 = v15;
      if ( v15 != 4 )
      {
        wil::details::in1diag3::Log_HrMsg(
          retaddr,
          (void *)0x271,
          (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
          (const char *)0x8000FFFFLL,
          (__int64)"Inconsistent state data size in wnf_query",
          (const char *)&v15);
        v11 = v15;
        *a3 = 0;
        v10 = v13;
      }
      if ( v10 )
      {
        if ( v11 == 4 )
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
      (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)v8);
    return v8;
  }
}
