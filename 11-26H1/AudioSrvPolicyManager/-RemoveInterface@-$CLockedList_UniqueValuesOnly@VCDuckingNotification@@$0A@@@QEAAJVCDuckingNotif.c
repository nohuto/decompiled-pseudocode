/*
 * XREFs of ?RemoveInterface@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18001B580
 * Callers:
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18001B7A0 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 * Callees:
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x18001B868 (--1CDuckingNotification@@QEAA@XZ.c)
 *     ??R_lambda_958c91c43235a8789bf8f41d13e0d823_@@QEBA@AEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@Z @ 0x180029998 (--R_lambda_958c91c43235a8789bf8f41d13e0d823_@@QEBA@AEAULockedListEntry@-$CLockedList_UniqueValue.c)
 *     ??4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z @ 0x18002D120 (--4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CLockedList_UniqueValuesOnly<CDuckingNotification,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        CDuckingNotification *this)
{
  __int64 v4; // rdi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rbx
  CDuckingNotification *v6; // rcx
  _BYTE *v7; // rdx
  LIST_ENTRY *i; // rsi
  __int64 v11; // rsi
  CDuckingNotification *v12; // rsi
  CDuckingNotification *v13; // rdi
  _BYTE v14[16]; // [rsp+20h] [rbp-48h] BYREF
  CDuckingNotification *v15; // [rsp+30h] [rbp-38h] BYREF
  _BYTE *v16; // [rsp+38h] [rbp-30h]

  EnterCriticalSection(lpCriticalSection);
  v14[0] = 0;
  v4 = *(_QWORD *)&lpCriticalSection[1].LockCount;
  DebugInfo = lpCriticalSection[1].DebugInfo;
  v6 = this;
  v15 = this;
  v7 = v14;
  v16 = v14;
  while ( DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)v4 )
  {
    if ( LODWORD(DebugInfo->CriticalSection) == *((_DWORD *)v6 + 2)
      && (!*(_QWORD *)&DebugInfo->Type || !*(_QWORD *)v6 || *(_QWORD *)&DebugInfo->Type == *(_QWORD *)v6) )
    {
      *v7 = 1;
      if ( LODWORD(DebugInfo[1].CriticalSection)-- == 1 )
        break;
      v7 = v16;
      v6 = v15;
    }
    DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)((char *)DebugInfo + 64);
  }
  if ( DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)v4 )
  {
    for ( i = &DebugInfo[1].ProcessLocksList; i != (LIST_ENTRY *)v4; i += 4 )
    {
      if ( !(unsigned __int8)_lambda_958c91c43235a8789bf8f41d13e0d823_::operator()(&v15, i) )
      {
        CDuckingNotification::operator=(DebugInfo);
        LODWORD(DebugInfo[1].CriticalSection) = i[3].Blink;
        DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)((char *)DebugInfo + 64);
      }
    }
    if ( DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)v4 )
    {
      v11 = *(_QWORD *)&lpCriticalSection[1].LockCount;
      while ( v4 != v11 )
      {
        CDuckingNotification::operator=(DebugInfo);
        LODWORD(DebugInfo[1].CriticalSection) = *(_DWORD *)(v4 + 56);
        DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)((char *)DebugInfo + 64);
        v4 += 64LL;
      }
      v12 = *(CDuckingNotification **)&lpCriticalSection[1].LockCount;
      v13 = (CDuckingNotification *)DebugInfo;
      if ( DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)v12 )
      {
        do
        {
          CDuckingNotification::~CDuckingNotification(v13);
          v13 = (CDuckingNotification *)((char *)v13 + 64);
        }
        while ( v13 != v12 );
      }
      *(_QWORD *)&lpCriticalSection[1].LockCount = DebugInfo;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  CDuckingNotification::~CDuckingNotification(this);
  return 0LL;
}
