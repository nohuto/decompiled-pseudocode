/*
 * XREFs of PspProcessOpen @ 0x140A7FB60
 * Callers:
 *     <none>
 * Callees:
 *     PspIsParentProcess @ 0x14047F71C (PspIsParentProcess.c)
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x140494E80 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlTestProtectedAccess @ 0x140A7FCA4 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspProcessOpen(__int64 a1, char a2, __int64 a3, __int64 a4, int *a5)
{
  bool IsParentProcess; // al
  __int64 v9; // rdx
  unsigned int v10; // r9d
  char v11; // r10
  __int64 v12; // rcx
  int v13; // edx

  Feature_ID51912085__private_IsEnabledPreCheck();
  IsParentProcess = PspIsParentProcess(a3, a4);
  v12 = v10 & 0xFFFFFFFE;
  if ( !IsParentProcess )
    v12 = v10;
  if ( ((unsigned int)v12 & *a5) != 0 && a3 != a4 )
  {
    if ( a2 )
    {
      LOBYTE(v12) = *(_BYTE *)(a3 + 1530);
      LOBYTE(v9) = v11;
      if ( !(unsigned __int8)RtlTestProtectedAccess(v12, v9)
        && (!SepRmCapTableLock.KernelShadowStackInitial || !(unsigned __int8)guard_dispatch_icall_no_overrides(a3, a4)) )
      {
        return 3221225506LL;
      }
    }
  }
  if ( *(_QWORD *)(a4 + 1600) && !*(_QWORD *)(a3 + 1600) && a2 && (~DWORD2(xmmword_140F0A060) & *a5) != 0 )
    return 3221225506LL;
  v13 = *a5;
  if ( (*a5 & 1) != 0 && a2 == 1 && (*(_DWORD *)(a4 + 1532) & 0x8000000) != 0 )
    return 3221225506LL;
  if ( (*a5 & 0x28) == 40 || (*a5 & 0x400) != 0 )
  {
    v13 |= 0x1000u;
    *a5 = v13;
  }
  if ( (v13 & 0x200) != 0 )
    *a5 = v13 | 0x2000;
  return 0LL;
}
