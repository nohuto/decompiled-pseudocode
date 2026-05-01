/*
 * XREFs of ??_GAcrylicPolicyManager@@UEAAPEAXI@Z @ 0x1802DAA54
 * Callers:
 *     ??_EAcrylicPolicyManager@@WDA@EAAPEAXI@Z @ 0x1802DA900 (--_EAcrylicPolicyManager@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AcrylicPolicyManager@@UEAA@XZ @ 0x1802DA738 (--1AcrylicPolicyManager@@UEAA@XZ.c)
 */

AcrylicPolicyManager *__fastcall AcrylicPolicyManager::`scalar deleting destructor'(
        AcrylicPolicyManager *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  char v2; // bl

  v2 = (char)a2;
  AcrylicPolicyManager::~AcrylicPolicyManager(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x168);
  return this;
}
