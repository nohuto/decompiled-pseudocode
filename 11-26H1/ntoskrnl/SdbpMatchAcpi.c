/*
 * XREFs of SdbpMatchAcpi @ 0x14088B19C
 * Callers:
 *     SdbpCheckKObject @ 0x1409D8348 (SdbpCheckKObject.c)
 * Callees:
 *     SdbpMatchDeviceDWORD @ 0x14088B3D0 (SdbpMatchDeviceDWORD.c)
 *     SdbpMatchDeviceString @ 0x14088B45C (SdbpMatchDeviceString.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpMatchAcpi(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int FirstTag; // eax
  unsigned int v7; // esi
  int v8; // r9d

  v5 = 0;
  FirstTag = SdbFindFirstTag(a1, a2, 28703LL);
  v7 = FirstTag;
  if ( FirstTag )
  {
    if ( (unsigned int)SdbpMatchDeviceString(a1, *(_QWORD *)a3, FirstTag, 24613LL)
      && (unsigned int)SdbpMatchDeviceString(a1, *(_QWORD *)(a3 + 8), v7, 24614LL)
      && (unsigned int)SdbpMatchDeviceDWORD(a1, *(_DWORD *)(a3 + 44), v7, 16436, 16437, 16438) )
    {
      LOWORD(v8) = 16448;
      return (unsigned int)SdbpMatchDeviceDWORD(a1, *(_DWORD *)(a3 + 48), v7, v8, 16449, 16450) != 0;
    }
  }
  else
  {
    return 1;
  }
  return v5;
}
