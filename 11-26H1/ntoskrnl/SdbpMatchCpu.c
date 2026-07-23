/*
 * XREFs of SdbpMatchCpu @ 0x14088B310
 * Callers:
 *     SdbpCheckKObject @ 0x1409D8348 (SdbpCheckKObject.c)
 * Callees:
 *     SdbpMatchDeviceDWORD @ 0x14088B3D0 (SdbpMatchDeviceDWORD.c)
 *     SdbpMatchDeviceString @ 0x14088B45C (SdbpMatchDeviceString.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpMatchCpu(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int FirstTag; // eax
  unsigned int v7; // esi
  int v8; // r9d

  v5 = 0;
  FirstTag = SdbFindFirstTag(a1, a2, 28705LL);
  v7 = FirstTag;
  if ( FirstTag )
  {
    if ( (unsigned int)SdbpMatchDeviceString(a1, *(_QWORD *)a3, FirstTag, 24613LL)
      && (unsigned int)SdbpMatchDeviceDWORD(a1, *(_DWORD *)(a3 + 32), v7, 16442, 16443, 16444) )
    {
      LOWORD(v8) = 16445;
      return (unsigned int)SdbpMatchDeviceDWORD(a1, *(_DWORD *)(a3 + 36), v7, v8, 16446, 16447) != 0;
    }
  }
  else
  {
    return 1;
  }
  return v5;
}
