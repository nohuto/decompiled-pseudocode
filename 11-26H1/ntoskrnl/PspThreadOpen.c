/*
 * XREFs of PspThreadOpen @ 0x1409474A0
 * Callers:
 *     <none>
 * Callees:
 *     PspIsParentProcess @ 0x14047908C (PspIsParentProcess.c)
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x14048E9D0 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140947588 (PsTestProtectedProcessIncompatibility.c)
 */

__int64 __fastcall PspThreadOpen(__int64 a1, char a2, __int64 a3, __int64 a4, int *a5)
{
  __int64 v5; // rbx
  bool IsParentProcess; // al
  unsigned int v10; // r9d
  __int64 v11; // rcx
  int v12; // eax

  v5 = *(_QWORD *)(a4 + 544);
  Feature_ID51912085__private_IsEnabledPreCheck();
  IsParentProcess = PspIsParentProcess(a3, v5);
  v11 = v10 & 0xFFFFFFFE;
  if ( !IsParentProcess )
    v11 = v10;
  if ( ((unsigned int)v11 & *a5) != 0 )
  {
    LOBYTE(v11) = a2;
    if ( (unsigned __int8)PsTestProtectedProcessIncompatibility(v11, a3, *(_QWORD *)(a4 + 544)) )
      return 3221225506LL;
  }
  if ( *(_QWORD *)(a4 + 1648)
    && !*(_QWORD *)(a3 + 1600)
    && a2
    && (~*(_DWORD *)&PsAltSystemCallRegistrationLock.Tag & *a5) != 0 )
  {
    return 3221225506LL;
  }
  v12 = *a5;
  if ( (*a5 & 0x40) != 0 )
  {
    v12 |= 0x800u;
    *a5 = v12;
  }
  if ( (v12 & 0x20) != 0 )
  {
    v12 |= 0x400u;
    *a5 = v12;
  }
  if ( (v12 & 2) != 0 )
    *a5 = v12 | 0x1000;
  return 0LL;
}
