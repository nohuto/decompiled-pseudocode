/*
 * XREFs of MiInitializeStrongCode @ 0x140C85F10
 * Callers:
 *     MmInitSystem @ 0x140C85D84 (MmInitSystem.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x140415184 (VslGetNestedPageProtectionFlags.c)
 */

__int64 MiInitializeStrongCode()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // rdx

  result = VslGetNestedPageProtectionFlags(qword_140E37E10);
  if ( !(_DWORD)result )
    return result;
  v1 = MiFlags | 0x4000;
  MiFlags = v1;
  v2 = v1;
  if ( (result & 4) != 0 )
  {
    v1 |= 0x18000uLL;
    BYTE2(stru_140E2D2D0.ThreadLock) = 1;
    MiFlags = v1;
    v2 = v1;
  }
  if ( (result & 1) != 0 )
  {
    v1 = v2 | 0xA0000;
LABEL_8:
    v2 = v1;
    MiFlags = v1;
    goto LABEL_9;
  }
  if ( (result & 2) != 0 )
  {
    v1 = v2 | 0x20000;
    goto LABEL_8;
  }
LABEL_9:
  if ( (result & 0x10) == 0 )
  {
    v1 = v2 | 0x40000;
    MiFlags = v2 | 0x40000;
    v2 |= 0x40000uLL;
  }
  if ( (result & 0x40) != 0 )
  {
    v1 = v2 | 0x200000;
    MiFlags = v2 | 0x200000;
  }
  if ( (result & 0x4000) != 0 )
  {
    v1 |= 0x4000000000uLL;
    MiFlags = v1;
  }
  if ( (result & 0x8000) != 0 )
  {
    v1 |= 0x8000000000uLL;
    MiFlags = v1;
  }
  if ( (result & 0x80u) != 0LL )
    MiFlags = v1 | 0x100000;
  return result;
}
