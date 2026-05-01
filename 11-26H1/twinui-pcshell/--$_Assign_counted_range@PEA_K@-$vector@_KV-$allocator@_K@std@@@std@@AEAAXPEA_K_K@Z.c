/*
 * XREFs of ??$_Assign_counted_range@PEA_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAXPEA_K_K@Z @ 0x1805A59D8
 * Callers:
 *     ?SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@@IPEA_K@Z @ 0x1805A7A90 (-SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Inte.c)
 * Callees:
 *     ??$_Copy_memmove_n@PEBUWindowId@UI@Windows@winrt@@PEAU1234@@std@@YAPEAUWindowId@UI@Windows@winrt@@PEBU1234@_KPEAU1234@@Z @ 0x1805A5BBC (--$_Copy_memmove_n@PEBUWindowId@UI@Windows@winrt@@PEAU1234@@std@@YAPEAUWindowId@UI@Windows@winrt.c)
 *     ?_Clear_and_reserve_geometric@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x1805A8CC0 (-_Clear_and_reserve_geometric@-$vector@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::vector<unsigned __int64>::_Assign_counted_range<unsigned __int64 *>(
        __int64 *a1,
        char *a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  char *v7; // rcx
  __int64 result; // rax
  unsigned __int64 v9; // rbp

  v3 = *a1;
  v4 = a3;
  if ( a3 <= (a1[2] - *a1) >> 3 )
  {
    v9 = (a1[1] - v3) >> 3;
    if ( a3 > v9 )
    {
      std::_Copy_memmove_n<winrt::Windows::UI::WindowId const *,winrt::Windows::UI::WindowId *>(a2);
      v3 = a1[1];
      v7 = &a2[8 * v9];
      v4 -= v9;
      goto LABEL_4;
    }
  }
  else
  {
    std::vector<unsigned __int64>::_Clear_and_reserve_geometric(a1, a3);
    v3 = *a1;
  }
  v7 = a2;
LABEL_4:
  std::_Copy_memmove_n<winrt::Windows::UI::WindowId const *,winrt::Windows::UI::WindowId *>(v7);
  result = v3 + 8 * v4;
  a1[1] = result;
  return result;
}
