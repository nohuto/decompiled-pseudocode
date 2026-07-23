/*
 * XREFs of MiQueryImageInfo @ 0x1409235C4
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x1403C5E74 (MiVadMapsLargeImage.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiReadVadFlags2 @ 0x1404739E0 (MiReadVadFlags2.c)
 *     MiQueryReturnResults @ 0x140923994 (MiQueryReturnResults.c)
 */

__int64 __fastcall MiQueryImageInfo(_QWORD *a1)
{
  __int64 v1; // r11
  int VadFlags; // eax
  __int64 v4; // r11
  __int64 v5; // r10
  char v6; // cl
  int v7; // r8d
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r11
  __int64 v11; // r10
  unsigned __int64 v12; // rdx
  unsigned __int64 LockedVadEvent; // rax
  __int128 v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h]

  v1 = a1[17];
  v16 = 0LL;
  v15 = 0LL;
  VadFlags = MiReadVadFlags(v1);
  if ( (VadFlags & 0x80000) == 0 && (VadFlags & 0x1C) == 8 )
  {
    v5 = ***(_QWORD ***)(v4 + 80);
    v6 = *(_BYTE *)(v5 + 15);
    *(_QWORD *)&v15 = (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12;
    *((_QWORD *)&v15 + 1) = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), -1LL, -1LL);
    v7 = v16 & 0xFFFFFFC3 | (4 * (v6 & 0xF));
    LODWORD(v16) = v7;
    if ( (VadFlags & 0x3E0) == 0x20 )
      LODWORD(v16) = v7 | 2;
    v8 = MiVadMapsLargeImage(v4);
    v11 = 0LL;
    if ( v8 )
    {
      LockedVadEvent = MiLocateLockedVadEvent(v9, 0x10u);
      v12 = *(_QWORD *)(LockedVadEvent + 32);
      *(_QWORD *)&v15 = ((unsigned __int64)*(unsigned __int8 *)(LockedVadEvent + 24) << 16) + v15;
    }
    else
    {
      v12 = (*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32))
          - (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32))
          + 1;
    }
    LOBYTE(v11) = (WORD4(v15) & 0xFFF) != 0LL;
    if ( v12 < (*((_QWORD *)&v15 + 1) >> 12) + v11 )
    {
      LODWORD(v16) = v16 | 1;
    }
    else if ( (MiReadVadFlags2(v10) & 0x20) != 0 )
    {
      LODWORD(v16) = v16 | 0x40;
    }
  }
  a1[7] = 24LL;
  a1[8] = &v15;
  return MiQueryReturnResults(a1);
}
