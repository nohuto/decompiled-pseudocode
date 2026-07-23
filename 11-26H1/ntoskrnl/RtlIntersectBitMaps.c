/*
 * XREFs of RtlIntersectBitMaps @ 0x14061BAB0
 * Callers:
 *     PopHiberWriteBootFreePageMap @ 0x140C00D84 (PopHiberWriteBootFreePageMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlIntersectBitMaps(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v4; // r8d
  unsigned int v6; // r11d
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // ecx

  result = *a2;
  v4 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 >= (unsigned int)result )
    v4 = *a2;
  v6 = 0;
  if ( v4 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      result = *((_QWORD *)a2 + 1);
      v8 = 4LL * v6;
      if ( v4 < 0x20 )
        break;
      v9 = *(_DWORD *)(result + 4LL * v6++);
      *(_DWORD *)(v7 + v8) &= v9;
      result = v4 - 32;
      v4 = result;
      if ( !(_DWORD)result )
        return result;
    }
    *(_DWORD *)(v7 + 4LL * v6) &= *(_DWORD *)(result + 4LL * v6) | -(int)(1LL << v4);
  }
  return result;
}
