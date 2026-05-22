/*
 * XREFs of ?OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z @ 0x1801ACAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AE078 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AEF30 (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 */

__int64 __fastcall EdgyConnection::OnEdgyCompositionUpdateStatic(
        char *a1,
        const struct EdgyCompositionConfigurationUpdateEx *a2,
        int a3)
{
  const char *v3; // r9
  const char *v4; // r9
  const char *v6; // r9
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (const char *)*((unsigned int *)a2 + 2);
  if ( (unsigned int)v3 < 2 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
      (const char *)0x80004001LL,
      v7);
  if ( (unsigned int)((_DWORD)v3 - 2) <= 1 )
  {
    if ( a3 != 152 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x99,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
        v3);
    v4 = (const char *)(unsigned int)((_DWORD)v3 - 2);
    if ( (_DWORD)v4 )
    {
      if ( (_DWORD)v4 != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xB5,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
          v4);
      Edges::Remove((Edges *)(a1 + 72), a2);
    }
    else if ( (int)Edges::AddOrUpdate((Edges *)(a1 + 72), a2) < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xAB,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
        v6);
    }
  }
  return 0LL;
}
