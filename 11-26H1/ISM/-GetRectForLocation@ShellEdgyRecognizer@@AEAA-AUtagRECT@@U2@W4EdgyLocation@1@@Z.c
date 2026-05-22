/*
 * XREFs of ?GetRectForLocation@ShellEdgyRecognizer@@AEAA?AUtagRECT@@U2@W4EdgyLocation@1@@Z @ 0x1800527D0
 * Callers:
 *     ?HitTestEdgyRegion@ShellEdgyRecognizer@@QEAA?AW4EdgyLocation@1@UtagPOINT@@@Z @ 0x180052720 (-HitTestEdgyRegion@ShellEdgyRecognizer@@QEAA-AW4EdgyLocation@1@UtagPOINT@@@Z.c)
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800F4C34 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall ShellEdgyRecognizer::GetRectForLocation(__int64 a1, __int64 a2, _OWORD *a3, int a4)
{
  int v5; // r9d
  int v6; // r9d
  int v7; // r9d
  int v8; // edx
  int v9; // edx
  const char *v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_OWORD *)a2 = *a3;
  v5 = a4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        if ( v7 != 4 )
          wil::details::in1diag3::FailFast_UnexpectedMsg(
            retaddr,
            (void *)0x149,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\pro"
                          "cessor\\shelledgyrecognizer.cpp",
            "Unknown Edgy location",
            v11);
        v8 = *(_DWORD *)(a2 + 12);
        *(_DWORD *)(a2 + 4) = v8 - **(_DWORD **)(a1 + 136);
        *(_DWORD *)(a2 + 12) = v8 + 1;
      }
      else
      {
        v9 = *(_DWORD *)(a2 + 8);
        *(_DWORD *)a2 = v9 - **(_DWORD **)(a1 + 136);
        *(_DWORD *)(a2 + 8) = v9 + 1;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(a2 + 4) + **(_DWORD **)(a1 + 136);
    }
  }
  else
  {
    *(_DWORD *)(a2 + 8) = *(_DWORD *)a2 + **(_DWORD **)(a1 + 136);
  }
  return a2;
}
