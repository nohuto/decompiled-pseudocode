/*
 * XREFs of sub_1400463BC @ 0x1400463BC
 * Callers:
 *     sub_1400373B0 @ 0x1400373B0 (sub_1400373B0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14004648C @ 0x14004648C (sub_14004648C.c)
 *     sub_1400464F4 @ 0x1400464F4 (sub_1400464F4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1400463BC(LPCRITICAL_SECTION lpCriticalSection, __int64 a2, __int64 *a3)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  __int64 i; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  v12 = lpCriticalSection;
  DebugInfo = lpCriticalSection[1].DebugInfo;
  if ( DebugInfo )
  {
    for ( i = *((_QWORD *)&DebugInfo->Type + (unsigned int)a2 % LODWORD(lpCriticalSection[1].OwningThread));
          i;
          i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 24) == (_DWORD)a2 && *(_QWORD *)i == a2 )
      {
        v8 = sub_14004648C(&lpCriticalSection[1], a2);
        sub_1400464F4(&v11, v8);
        v9 = v11;
        v11 = 0LL;
        *a3 = v9;
        sub_140018FF0(&v12);
        sub_140003238(&v11);
        return 0LL;
      }
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 2289827964LL;
}
