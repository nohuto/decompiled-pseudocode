/*
 * XREFs of MiValidateAddPhysicalMemoryParameters @ 0x14086D580
 * Callers:
 *     MiAddPhysicalMemory @ 0x14086B3FC (MiAddPhysicalMemory.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MiLogAddPhysicalMemory @ 0x1406EE42C (MiLogAddPhysicalMemory.c)
 */

__int64 __fastcall MiValidateAddPhysicalMemoryParameters(
        ULONG *a1,
        _DWORD *a2,
        _DWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v9; // r10
  ULONG_PTR v10; // rdx
  ULONG_PTR v11; // r10
  int v12; // ecx
  __int64 v13; // r8
  __int64 v15; // rcx
  int v16; // r9d

  if ( (*a2 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( (*a3 & 0xFFF) != 0 )
    return 3221225712LL;
  v9 = *(_QWORD *)a2;
  v10 = *(_QWORD *)a3 >> 12;
  v11 = v9 >> 12;
  if ( (a4 & 0x8000) != 0 )
  {
    if ( (v11 & 0x3FFFF) != 0 )
      return 3221225711LL;
    if ( (v10 & 0x3FFFF) != 0 )
      return 3221225712LL;
    if ( (a4 & 0x1000) == 0 )
      return 3221225714LL;
    v12 = a4 & 0x100000;
    if ( (a4 & 0x100000) == 0 || (a4 & 0xFFEB4AFF) != 0 )
      return 3221225714LL;
  }
  else
  {
    v12 = a4 & 0x100000;
  }
  v13 = v10 + v11;
  if ( v11 >= v10 + v11 )
    return 3221225711LL;
  if ( v13 - 1 > (unsigned __int64)qword_140E2D920 )
  {
    if ( !v12 )
    {
      v13 = qword_140E2D920 + 1;
      v10 = qword_140E2D920 + 1 - v11;
      if ( v11 < qword_140E2D920 + 1 )
        goto LABEL_15;
      return 3221225711LL;
    }
    return 3221225712LL;
  }
LABEL_15:
  if ( v10 + v11 >= qword_140E34930 && v11 < qword_140E34930 + 2048 || v10 + v11 >= 0x3FFFFFFFFELL )
    return 3221225496LL;
  if ( (a4 & 0xF2) != 0 && (a4 & 0x100) != 0 )
    return 3221225714LL;
  *(_DWORD *)(a6 + 40) = a4 | 1;
  *(_QWORD *)(a6 + 48) = a1;
  if ( a1 != &MiSystemPartition )
    *(_DWORD *)(a6 + 40) = a4 | 9;
  *(_QWORD *)(a6 + 56) = a5;
  *(_QWORD *)(a6 + 16) = v11;
  *(_QWORD *)(a6 + 24) = v13;
  *(_QWORD *)(a6 + 32) = v10;
  if ( stru_140E366D8.FirstArgument
    && *(_DWORD *)stru_140E366D8.FirstArgument
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 256LL) )
  {
    MiLogAddPhysicalMemory(v15, (unsigned __int16 *)a1, (__int64)a2, (__int64)a3, v16, 0LL);
  }
  return 0LL;
}
