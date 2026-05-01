/*
 * XREFs of ??0ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ @ 0x18000EBEC
 * Callers:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000E264 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     PsmHostStateNotification2 @ 0x18000E610 (PsmHostStateNotification2.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA@XZ @ 0x18000DAA4 (--0-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA@XZ.c)
 */

__int64 __fastcall ModernResourceEnforcer::ModernResourceEnforcerWorkItem::ModernResourceEnforcerWorkItem(
        ModernResourceEnforcer::ModernResourceEnforcerWorkItem *this)
{
  __int64 v1; // r8
  __int64 result; // rax

  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>((__int64)this + 8);
  *(_QWORD *)(v1 + 112) = 0LL;
  result = v1;
  *(_QWORD *)(v1 + 120) = 0LL;
  *(_DWORD *)(v1 + 128) = 0;
  *(_OWORD *)(v1 + 136) = 0LL;
  return result;
}
