/*
 * XREFs of MiExpandVadBitMap @ 0x140A090FC
 * Callers:
 *     MiFindEmptyAddressRange @ 0x14099635C (MiFindEmptyAddressRange.c)
 *     MiInitializeVadBitMap @ 0x140A08F10 (MiInitializeVadBitMap.c)
 *     MiInitializeVadCellBitMap @ 0x140A09018 (MiInitializeVadCellBitMap.c)
 * Callees:
 *     MiMakeHyperRangeAccessible @ 0x1403188A0 (MiMakeHyperRangeAccessible.c)
 *     MiLocateLowestConflictingVad @ 0x140460B50 (MiLocateLowestConflictingVad.c)
 *     MiUpdateVadBits @ 0x140A09330 (MiUpdateVadBits.c)
 *     MiExpandVadBitMapDown @ 0x140A093B8 (MiExpandVadBitMapDown.c)
 */

__int64 __fastcall MiExpandVadBitMap(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r13
  _KPROCESS *Process; // r11
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rsi
  __int64 LowestConflictingVad; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp+10h]
  volatile _KAFFINITY_EX *ActiveProcessors; // [rsp+78h] [rbp+20h]

  v4 = *a1;
  v5 = a1[1];
  Process = KeGetCurrentThread()->ApcState.Process;
  v23 = 0LL;
  ActiveProcessors = Process[2].ActiveProcessors;
  v9 = (v4 + 8 * (v5 - qword_140E2DFC8)) << 16;
  v10 = v4 + ((-524288 * qword_140E2DFC8 + (v5 << 19)) >> 16);
  v24 = a1[5] - v10 + 1;
  v11 = v24;
  if ( a4 )
  {
    v21 = a4 + 1;
    if ( a1[6] <= a4 + 1 )
      v21 = a1[6];
    if ( v9 + 0x10000 <= v21 )
    {
      v22 = v21 - v9;
      v11 = (v22 >> 16) + 1;
      if ( !(_WORD)v22 )
        v11 = v22 >> 16;
    }
    else
    {
      v11 = 0LL;
    }
  }
  v12 = a2;
  if ( a2 > v11 )
    return MiExpandVadBitMapDown(a1, a2);
  LowestConflictingVad = MiLocateLowestConflictingVad((__int64)Process, v9);
  if ( LowestConflictingVad )
  {
    v12 = a2
        + (((unsigned __int64)*(unsigned int *)(LowestConflictingVad + 28) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(LowestConflictingVad + 33) << 28))
        - (v9 >> 16);
    if ( v12 > v24 )
      v12 = -1LL;
    if ( v12 > v11 )
      return MiExpandVadBitMapDown(a1, a2);
  }
  v14 = a1[1];
  v15 = v14 + (v4 >> 3);
  if ( (int)MiMakeHyperRangeAccessible(v15, v14 + ((v12 + v4 - 1) >> 3), &v23) < 0 )
    return 0LL;
  ActiveProcessors[4].StaticBitmap[7] += v23;
  v16 = (((8 * ((v12 >> 6) + ((v12 & 0x3F) != 0))) & 0xFFF) != 0) + ((8 * ((v12 >> 6) + ((v12 & 0x3F) != 0))) >> 12);
  v17 = (v16 << 15) + *a1;
  v18 = (v16 << 15) + v10;
  *a1 = v17;
  v19 = a1[5];
  if ( v18 > v19 + 1 )
    *a1 = v17 + v19 - v18 + 1;
  if ( v15 == qword_140E2DFC8 )
  {
    *(_BYTE *)a1[1] |= 1u;
    if ( v4 )
      a1[2] = 1LL;
  }
  MiUpdateVadBits(v9, v9 + (v16 << 31));
  return 1LL;
}
