/*
 * XREFs of MiProcessVpabAccessedInfo @ 0x14045D47C
 * Callers:
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 *     MiAgeWorkingSetTail @ 0x14032AD10 (MiAgeWorkingSetTail.c)
 *     MiTrimWorkingSetTail @ 0x14045D050 (MiTrimWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14045D220 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiAgeTrimListsTail @ 0x14045D310 (MiAgeTrimListsTail.c)
 * Callees:
 *     MiRecheckVpabAccessedVa @ 0x14045D51C (MiRecheckVpabAccessedVa.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiProcessVpabAccessedInfo(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  unsigned __int64 v6; // rbp

  result = (unsigned int)*a2;
  v3 = a2 + 2;
  v6 = (unsigned __int64)&a2[2 * result + 2];
  while ( (unsigned __int64)v3 < v6 )
  {
    result = MiRecheckVpabAccessedVa(a1, *v3 & 0xFFFFFFFFFFFFF000uLL);
    if ( result )
    {
      result = guard_dispatch_icall_no_overrides(a1, v3);
      if ( (_DWORD)result )
        break;
    }
    ++v3;
  }
  *a2 = 0;
  return result;
}
