/*
 * XREFs of MiExpandVadBitMapDown @ 0x140A093B8
 * Callers:
 *     MiExpandVadBitMap @ 0x140A090FC (MiExpandVadBitMap.c)
 * Callees:
 *     MiMakeHyperRangeAccessible @ 0x1403188A0 (MiMakeHyperRangeAccessible.c)
 *     MiUpdateVadBits @ 0x140A09330 (MiUpdateVadBits.c)
 */

__int64 __fastcall MiExpandVadBitMapDown(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r10
  volatile _KAFFINITY_EX *ActiveProcessors; // rbp
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  _BYTE *v9; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0LL;
  v4 = a1[1];
  ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
  if ( a3 >= a1[7] )
  {
    v11 = (((a1[1] - qword_140E2DFC8) << 19) - a3) >> 16;
    v6 = v11 + 1;
    if ( !(_WORD)a3 )
      v6 = v11;
  }
  else
  {
    v6 = (8 * (a1[1] - qword_140E2DFC8)) & 0xFFFFFFFFFFFFLL;
  }
  if ( a2 > v6 )
    return 0LL;
  v7 = (a2 >> 6) + ((a2 & 0x3F) != 0);
  v8 = (((8 * v7) & 0xFFF) != 0) + ((8 * v7) >> 12);
  v9 = (_BYTE *)(v4 - (v8 << 12));
  if ( (int)MiMakeHyperRangeAccessible((unsigned __int64)v9, v4 - 1, &v13) < 0 )
    return 0LL;
  ActiveProcessors[4].StaticBitmap[7] += v13;
  *a1 += v8 << 15;
  a1[1] = v9;
  if ( v9 == (_BYTE *)qword_140E2DFC8 )
  {
    *v9 |= 1u;
    v12 = 1LL;
  }
  else
  {
    v12 = 0LL;
  }
  a1[2] = v12;
  a1[4] = v12;
  a1[3] = 0LL;
  MiUpdateVadBits((a1[1] - qword_140E2DFC8) << 19, ((a1[1] - qword_140E2DFC8) << 19) + (v8 << 31));
  return 1LL;
}
