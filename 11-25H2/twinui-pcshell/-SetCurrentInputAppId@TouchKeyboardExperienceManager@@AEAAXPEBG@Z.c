/*
 * XREFs of ?SetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXPEBG@Z @ 0x180202F5C
 * Callers:
 *     _lambda_2f931dcef3c075f3fb52ee5cb82c048c_::operator() @ 0x18045D554 (_lambda_2f931dcef3c075f3fb52ee5cb82c048c_--operator().c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180462E90 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x18002A5E8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchKeyboardExperienceManager::SetCurrentInputAppId(
        TouchKeyboardExperienceManager *this,
        unsigned __int16 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 520);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 13);
  std::wstring::operator=((void **)this + 61, a2);
  if ( v4 )
    LeaveCriticalSection(v4);
}
