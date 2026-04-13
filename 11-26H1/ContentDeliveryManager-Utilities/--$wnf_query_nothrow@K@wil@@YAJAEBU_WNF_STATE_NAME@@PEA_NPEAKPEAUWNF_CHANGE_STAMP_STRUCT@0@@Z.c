/*
 * XREFs of ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18008E298
 * Callers:
 *     ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x18008F67C (-GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180069F3C (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<unsigned long>(__int64 a1, char *a2, _DWORD *a3, __int64 a4)
{
  char v4; // bl
  int v7; // eax
  unsigned int v8; // edi
  int v10; // eax
  int v11; // ecx
  const char *v12; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+54h] [rbp+Ch]
  int v16; // [rsp+68h] [rbp+20h] BYREF
  int v17; // [rsp+6Ch] [rbp+24h]

  v17 = HIDWORD(a4);
  v15 = HIDWORD(a1);
  v16 = 4;
  v4 = 0;
  *a2 = 0;
  v14 = 0;
  v7 = NtQueryWnfStateData(&WNF_SHEL_LOCKAPPHOST_ACTIVE, 0LL, 0LL, &v14, a3, &v16);
  v8 = v7 | 0x10000000;
  if ( v7 >= 0 || v8 == -805306333 )
  {
    v10 = v14;
    if ( v14 )
    {
      v11 = v16;
      if ( v16 != 4 )
      {
        wil::details::in1diag3::Log_HrMsg(
          retaddr,
          625LL,
          (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
          (const char *)0x8000FFFFLL,
          (unsigned __int64)"Inconsistent state data size in wnf_query",
          v12);
        v11 = v16;
        *a3 = 0;
        v10 = v14;
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
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v8);
    return v8;
  }
}
