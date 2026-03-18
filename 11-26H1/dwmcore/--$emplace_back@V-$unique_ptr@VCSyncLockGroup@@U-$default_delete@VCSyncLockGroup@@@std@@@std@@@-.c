/*
 * XREFs of ??$emplace_back@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@1@$$QEAV21@@Z @ 0x180237BC4
 * Callers:
 *     ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z @ 0x18021AA74 (-GetGroup@CSyncLockGroup@@SAPEAV1@I@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180237A54 (--$_Emplace_reallocate@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@@.c)
 */

char *__fastcall std::vector<std::unique_ptr<CSyncLockGroup>>::emplace_back<std::unique_ptr<CSyncLockGroup>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx

  v3 = (__int64 *)xmmword_1803E26A0;
  if ( (_QWORD)xmmword_1803E26A0 == *((_QWORD *)&xmmword_1803E26A0 + 1) )
    return std::vector<std::unique_ptr<CSyncLockGroup>>::_Emplace_reallocate<std::unique_ptr<CSyncLockGroup>>(
             a1,
             xmmword_1803E26A0,
             a2);
  v4 = *a2;
  *a2 = 0LL;
  *v3 = v4;
  v5 = xmmword_1803E26A0;
  *(_QWORD *)&xmmword_1803E26A0 = xmmword_1803E26A0 + 8;
  return (char *)v5;
}
