/*
 * XREFs of HvpIncrementalLogFileEnumeratorAdvance @ 0x140ADDB38
 * Callers:
 *     HvpApplyIncrementalLogFile @ 0x140ADD93C (HvpApplyIncrementalLogFile.c)
 *     HvpAnalyzeSingleLogFile @ 0x140ADDA48 (HvpAnalyzeSingleLogFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HvpIsLogEntryHeaderCoherent @ 0x140ADDC80 (HvpIsLogEntryHeaderCoherent.c)
 *     HvpIsMetadataArrayCoherent @ 0x140ADDCF0 (HvpIsMetadataArrayCoherent.c)
 *     HvpLogEntryCheckDataChecksum @ 0x140B55D88 (HvpLogEntryCheckDataChecksum.c)
 */

__int64 __fastcall HvpIncrementalLogFileEnumeratorAdvance(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  int v6; // eax
  __int128 v8; // [rsp+40h] [rbp-30h] BYREF
  __int128 v9; // [rsp+50h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-10h]

  v2 = *(_DWORD *)a1;
  v3 = 0;
  v10 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( !v2 || v2 + 40 < v2 )
    return (unsigned int)-2147483622;
  v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), v2);
  if ( v6 < 0 )
    goto LABEL_10;
  v8 = MEMORY[0];
  v9 = MEMORY[0x10];
  v10 = MEMORY[0x20];
  if ( !(unsigned __int8)HvpIsLogEntryHeaderCoherent(&v8, v2) || HIDWORD(v8) != *(_DWORD *)(a1 + 4) )
    return (unsigned int)-2147483622;
  v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), v2);
  if ( v6 >= 0 )
  {
    if ( (unsigned __int8)HvpIsMetadataArrayCoherent(&v8, 40LL, DWORD1(v9))
      && (unsigned int)HvpLogEntryCheckDataChecksum(0LL, DWORD1(v8), &v8) )
    {
      ++*(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v2 + DWORD1(v8);
      *a2 = 0LL;
      return v3;
    }
    return (unsigned int)-2147483622;
  }
LABEL_10:
  v3 = -2147483622;
  if ( v6 != -1073741807 )
    return (unsigned int)-1073741491;
  return v3;
}
