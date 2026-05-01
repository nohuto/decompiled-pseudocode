/*
 * XREFs of ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18000ECB0
 * Callers:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000E264 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180070998 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(
        void **a1)
{
  if ( *a1 != a1 + 2 )
    operator delete(*a1);
}
