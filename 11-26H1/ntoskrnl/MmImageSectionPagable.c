/*
 * XREFs of MmImageSectionPagable @ 0x140AC9A1C
 * Callers:
 *     MmResetDriverPaging @ 0x140AC9400 (MmResetDriverPaging.c)
 *     MiSnapDriverRange @ 0x140AC95AC (MiSnapDriverRange.c)
 *     sub_140C8113C @ 0x140C8113C (sub_140C8113C.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 *     MiLockPagableSections @ 0x140D00C50 (MiLockPagableSections.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmImageSectionPagable(__int64 a1)
{
  unsigned int v1; // edx
  char v3; // al

  v1 = 0;
  if ( *(_DWORD *)a1 == 1633969454 )
  {
    return 1;
  }
  else if ( *(_DWORD *)a1 == 1162297680 )
  {
    v3 = *(_BYTE *)(a1 + 4);
    v1 = 1;
    if ( v3 == 75 )
    {
      if ( *(_BYTE *)(a1 + 5) == 68 )
        return (unsigned __int8)KdPageDebuggerSection;
    }
    else if ( v3 == 86 )
    {
      if ( *(_BYTE *)(a1 + 5) == 82 && *(_BYTE *)(a1 + 6) == 70 )
        return (MiFlags & 1) == 0;
    }
    else if ( v3 == 67 && *(_BYTE *)(a1 + 5) == 77 && *(_BYTE *)(a1 + 6) == 82 && *(_BYTE *)(a1 + 7) == 67 )
    {
      return LODWORD(WheapPfaLock.StackBase) == 0;
    }
  }
  return v1;
}
