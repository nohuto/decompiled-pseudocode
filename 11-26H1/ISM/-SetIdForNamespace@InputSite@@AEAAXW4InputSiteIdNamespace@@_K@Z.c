/*
 * XREFs of ?SetIdForNamespace@InputSite@@AEAAXW4InputSiteIdNamespace@@_K@Z @ 0x18002D960
 * Callers:
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x18002D8CC (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@UInputSiteId@@@?$vector@UInputSiteId@@V?$allocator@UInputSiteId@@@std@@@std@@AEAAPEAUInputSiteId@@QEAU2@$$QEAU2@@Z @ 0x180085500 (--$_Emplace_reallocate@UInputSiteId@@@-$vector@UInputSiteId@@V-$allocator@UInputSiteId@@@std@@@s.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

__int64 __fastcall InputSite::SetIdForNamespace(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 i; // r10
  __int64 result; // rax
  _OWORD *v5; // rdx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  for ( i = a1[2]; i != a1[3]; i += 16LL )
  {
    if ( *(_DWORD *)i == a2 )
    {
      *(_QWORD *)(i + 8) = a3;
      return result;
    }
  }
  result = 0LL;
  *(_QWORD *)&v6 = a2;
  v5 = (_OWORD *)a1[3];
  *((_QWORD *)&v6 + 1) = a3;
  if ( v5 == (_OWORD *)a1[4] )
    return std::vector<InputSiteId>::_Emplace_reallocate<InputSiteId>(a1 + 2, v5, &v6);
  *v5 = v6;
  a1[3] += 16LL;
  return result;
}
