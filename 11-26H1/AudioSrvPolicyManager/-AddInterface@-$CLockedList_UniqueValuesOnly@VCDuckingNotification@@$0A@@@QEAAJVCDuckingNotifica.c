/*
 * XREFs of ?AddInterface@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18001B6B8
 * Callers:
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180028BC0 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 * Callees:
 *     ??8@YA_NAEAVCDuckingNotification@@0@Z @ 0x18001B774 (--8@YA_NAEAVCDuckingNotification@@0@Z.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x18001B868 (--1CDuckingNotification@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ??$emplace_back@AEAVCDuckingNotification@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@QEAAAEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAVCDuckingNotification@@$$QEAH@Z @ 0x18003ED44 (--$emplace_back@AEAVCDuckingNotification@@H@-$vector@ULockedListEntry@-$CLockedList_UniqueValues.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList_UniqueValuesOnly<CDuckingNotification,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        CDuckingNotification *this)
{
  PRTL_CRITICAL_SECTION_DEBUG i; // rcx
  __int64 v5; // rcx
  const char *v6; // r9
  unsigned int v8; // [rsp+20h] [rbp-28h] BYREF
  LPCRITICAL_SECTION v9; // [rsp+28h] [rbp-20h]
  CDuckingNotification *v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = this;
  EnterCriticalSection(lpCriticalSection);
  v9 = lpCriticalSection;
  for ( i = lpCriticalSection[1].DebugInfo;
        i != *(PRTL_CRITICAL_SECTION_DEBUG *)&lpCriticalSection[1].LockCount;
        i = (PRTL_CRITICAL_SECTION_DEBUG)(v5 + 64) )
  {
    if ( (unsigned __int8)operator==(i, this) )
    {
      ++*(_DWORD *)(v5 + 56);
      goto LABEL_6;
    }
  }
  try
  {
    v8 = 1;
    std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::emplace_back<CDuckingNotification &,int>(
      &lpCriticalSection[1],
      this,
      &v8);
  }
  catch ( ... )
  {
    v8 = wil::details::in1diag3::Return_CaughtException(
           retaddr,
           (void *)0x85,
           (unsigned int)"onecoreuap\\internal\\avcore\\inc\\audiocore\\LockedList.h",
           v6);
    CDuckingNotification::~CDuckingNotification(v10);
    return v8;
  }
LABEL_6:
  LeaveCriticalSection(lpCriticalSection);
  CDuckingNotification::~CDuckingNotification(this);
  return 0LL;
}
