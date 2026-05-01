/*
 * XREFs of ??0?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@QEAA@V?$initializer_list@W4ShellView@Shell@UI@WindowsUdk@winrt@@@1@AEBV?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@1@@Z @ 0x1801DD650
 * Callers:
 *     ??0EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAA@AEBUShellAnimationCoordinator@23456@@Z @ 0x1802158D0 (--0EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAA.c)
 * Callees:
 *     ?_Buy_nonzero@?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@AEAAX_K@Z @ 0x180029BBC (-_Buy_nonzero@-$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V-$allocator@W4ShellView@Shell@UI@.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

__int64 *__fastcall std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>(
        __int64 *a1,
        __int64 a2)
{
  const void *v2; // r14
  signed __int64 v4; // rbp
  __int64 v5; // rbx

  v2 = *(const void **)a2;
  v4 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v4 >> 2 )
  {
    std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>::_Buy_nonzero(a1, v4 >> 2);
    v5 = *a1;
    memmove_0((void *)*a1, v2, v4);
    a1[1] = v5 + 4 * (v4 >> 2);
  }
  return a1;
}
