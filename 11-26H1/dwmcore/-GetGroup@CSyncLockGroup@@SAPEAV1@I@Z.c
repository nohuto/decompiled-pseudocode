/*
 * XREFs of ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z @ 0x18021AA74
 * Callers:
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x18014921C (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ @ 0x18014A234 (-EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ @ 0x18014ADBC (-CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@QEAA@XZ @ 0x1802067D0 (--1-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@@std@@QEAA@XZ.c)
 *     ??$emplace_back@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@1@$$QEAV21@@Z @ 0x180237BC4 (--$emplace_back@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@@std@@@-.c)
 */

struct CSyncLockGroup *__fastcall CSyncLockGroup::GetGroup(int a1)
{
  __int64 i; // rax
  char *v4; // rax
  void **v5; // rcx
  char *v6; // [rsp+38h] [rbp+10h] BYREF

  for ( i = CSyncLockGroup::g_syncLockGroups;
        i != (_QWORD)xmmword_1803E26A0 && *(_DWORD *)(*(_QWORD *)i + 8LL) != a1;
        i += 8LL )
  {
    ;
  }
  if ( i != (_QWORD)xmmword_1803E26A0 )
    return *(struct CSyncLockGroup **)i;
  v4 = (char *)operator new(0x38uLL);
  if ( a1 == -1 )
  {
    if ( v4 )
    {
      *((_DWORD *)v4 + 2) = -1;
      *((_QWORD *)v4 + 2) = v4 + 40;
      *((_QWORD *)v4 + 3) = v4 + 40;
      *((_QWORD *)v4 + 4) = v4 + 56;
      v5 = &CParallelModeGroup::`vftable';
      *(_QWORD *)v4 = &CParallelModeGroup::`vftable';
    }
  }
  else if ( v4 )
  {
    *((_DWORD *)v4 + 2) = a1;
    *(_QWORD *)v4 = &CSyncLockGroup::`vftable';
    *((_QWORD *)v4 + 2) = v4 + 40;
    *((_QWORD *)v4 + 3) = v4 + 40;
    v5 = (void **)(v4 + 56);
    *((_QWORD *)v4 + 4) = v4 + 56;
  }
  v6 = v4;
  std::vector<std::unique_ptr<CSyncLockGroup>>::emplace_back<std::unique_ptr<CSyncLockGroup>>(v5, &v6);
  std::unique_ptr<CSyncLockGroup>::~unique_ptr<CSyncLockGroup>(&v6);
  return *(struct CSyncLockGroup **)(xmmword_1803E26A0 - 8);
}
