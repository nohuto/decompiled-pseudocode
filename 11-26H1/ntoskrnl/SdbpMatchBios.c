/*
 * XREFs of SdbpMatchBios @ 0x14088B278
 * Callers:
 *     SdbpCheckKObject @ 0x1409D8348 (SdbpCheckKObject.c)
 * Callees:
 *     SdbpMatchDeviceDWORD @ 0x14088B3D0 (SdbpMatchDeviceDWORD.c)
 *     SdbpMatchDeviceString @ 0x14088B45C (SdbpMatchDeviceString.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpMatchBios(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int FirstTag; // eax
  unsigned int v7; // esi
  int v8; // r9d

  v5 = 0;
  FirstTag = SdbFindFirstTag(a1, a2, 28704LL);
  v7 = FirstTag;
  if ( FirstTag )
  {
    if ( (unsigned int)SdbpMatchDeviceString(a1, *(_QWORD *)a3, FirstTag, 24613LL) )
    {
      LOWORD(v8) = 16439;
      return (unsigned int)SdbpMatchDeviceDWORD(a1, *(_DWORD *)(a3 + 40), v7, v8, 16440, 16441) != 0;
    }
  }
  else
  {
    return 1;
  }
  return v5;
}
