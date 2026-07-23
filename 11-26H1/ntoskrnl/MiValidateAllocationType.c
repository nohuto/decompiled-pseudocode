/*
 * XREFs of MiValidateAllocationType @ 0x1409F0360
 * Callers:
 *     MiAllocateVirtualMemoryPrepare @ 0x1409EF464 (MiAllocateVirtualMemoryPrepare.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x1403667E0 (MiMakeProtectionMask.c)
 */

__int64 __fastcall MiValidateAllocationType(int a1, int a2, unsigned int a3)
{
  int v3; // r9d
  int v5; // eax
  bool v6; // zf
  int ProtectionMask; // eax
  int v8; // eax

  v3 = a1;
  if ( (a1 & 0x9E038FFF) != 0 || (a1 & 0x1083000) == 0 )
    return 3221225485LL;
  if ( (a1 & 0x61EC4000) == 0 )
    return 0LL;
  if ( (a1 & 0x80000) != 0 )
  {
    if ( a1 != 0x80000 )
      return 3221225485LL;
  }
  else if ( (a1 & 0x1000000) != 0 )
  {
    if ( a1 != 0x1000000 )
      return 3221225485LL;
  }
  else if ( (a1 & 0x200000) != 0 && ((a2 & 0x90040000) != 0 || (a1 & 0x2000) == 0) )
  {
    return 3221225485LL;
  }
  v5 = a1 & 0x20400000;
  if ( (a1 & 0x20400000) == 0x20400000 )
  {
    v6 = (a1 & 0x40800000) == 0;
  }
  else
  {
    if ( v5 != 0x20000000 )
      goto LABEL_12;
    v6 = (a1 & 0x40C00000) == 0;
  }
  if ( !v6 )
    return 3221225485LL;
LABEL_12:
  if ( (a1 & 0x800000) == 0 )
  {
    if ( v5 != 0x400000 )
    {
      if ( (a1 & 0x40100000) != 0x40100000 )
        goto LABEL_15;
      return 3221225485LL;
    }
    if ( (a1 & 0x2000) == 0 || (a1 & 0xFF8F9FFF) != 0 )
      return 3221225485LL;
    ProtectionMask = MiMakeProtectionMask(a3);
    if ( ProtectionMask == -1 )
      return 3221225541LL;
    if ( (ProtectionMask & 0xFFFFFFF8) == 0x10 )
      return 3221225541LL;
    v8 = ProtectionMask & 7;
    if ( v8 != 4 && v8 != 1 )
      return 3221225541LL;
LABEL_15:
    if ( (v3 & 0x40000) != 0 )
    {
      if ( (v3 & 0x2000) != 0 && (v3 & 0xBFEBDFFF) == 0 && a3 == 1 )
        return 0LL;
    }
    else
    {
      if ( (v3 & 0x4000) == 0 )
        return 0LL;
      if ( (v3 & 0x2000) != 0 )
        return (v3 & 0xDF9F8FFF) != 0 ? 0xC000000D : 0;
    }
    return 3221225485LL;
  }
  if ( (a1 & 0x40400000) != 0 )
    return 3221225485LL;
  if ( (a3 & 0xFFFFF9F9) == 0 )
    goto LABEL_15;
  return 3221225541LL;
}
