/*
 * XREFs of ?_Buy_nonzero@?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@AEAAX_K@Z @ 0x18013BEB0
 * Callers:
 *     ??0?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@QEAA@V?$initializer_list@W4ShellView@Shell@UI@WindowsUdk@winrt@@@1@AEBV?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@1@@Z @ 0x18013B86C (--0-$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V-$allocator@W4ShellView@Shell@UI@WindowsUdk@.c)
 *     ??0?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18013BE2C (--0-$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V-$allocator@W4ShellView@Shell@U_ea_18013BE2C.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18013BF14 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>::_Buy_nonzero(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 size_of; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  size_of = std::_Get_size_of_n<4>(a2);
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = v5 + 4 * a2;
  a1[2] = result;
  return result;
}
