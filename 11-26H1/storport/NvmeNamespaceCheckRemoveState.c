/*
 * XREFs of NvmeNamespaceCheckRemoveState @ 0x1400416C8
 * Callers:
 *     NvmeNamespaceAcquireRemoveLock @ 0x140041680 (NvmeNamespaceAcquireRemoveLock.c)
 * Callees:
 *     RaidSrbFunctionFromIrp @ 0x140070658 (RaidSrbFunctionFromIrp.c)
 */

__int64 __fastcall NvmeNamespaceCheckRemoveState(__int64 a1, __int64 a2)
{
  int v2; // r9d
  unsigned int v4; // edx
  char *v5; // r8
  char v6; // cl
  bool v7; // cf

  v2 = *(_DWORD *)(a1 + 96);
  if ( v2 == 6 )
    return (unsigned int)-1073741738;
  if ( ((v2 - 5) & 0xFFFFFFFD) != 0 )
    return 0;
  if ( !a2 )
    return (unsigned int)-1073741738;
  v5 = *(char **)(a2 + 184);
  v6 = *v5;
  if ( *v5 == 27 )
    return 0;
  v4 = -1073741738;
  if ( v2 == 5 )
    return v4;
  if ( v6 == 14 )
  {
    v7 = *((_DWORD *)v5 + 6) != 266264;
LABEL_12:
    v4 &= -v7;
    return v4;
  }
  if ( v6 == 15 )
  {
    v7 = (unsigned __int8)RaidSrbFunctionFromIrp(a2, 3221225558LL) != 1;
    goto LABEL_12;
  }
  if ( v6 == 22 && v5[1] == 2 )
    return 0;
  return v4;
}
