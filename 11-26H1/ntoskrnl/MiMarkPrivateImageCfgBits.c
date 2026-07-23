/*
 * XREFs of MiMarkPrivateImageCfgBits @ 0x14099B254
 * Callers:
 *     MiCommitVadCfgBits @ 0x140998F08 (MiCommitVadCfgBits.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x1403C5E74 (MiVadMapsLargeImage.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     MiGetControlAreaLoadConfig @ 0x14048F4E4 (MiGetControlAreaLoadConfig.c)
 *     MiPopulateCfgBitMap @ 0x1409993B4 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateImageCfgBits(__int64 *a1, __int64 a2, __int64 a3)
{
  int v5; // ebp
  __int64 **v6; // rax
  __int64 *v7; // r12
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 ControlAreaLoadConfig; // rax
  __int64 v15; // r8
  __int64 result; // rax
  _BOOL8 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rax

  v5 = 0;
  v6 = *(__int64 ***)(a3 + 80);
  v7 = *v6;
  v8 = (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) << 12;
  v9 = (((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF) + 1;
  v10 = **v6;
  if ( (unsigned int)MiVadMapsLargeImage(a3) )
  {
    v5 = 1;
    result = MiPopulateCfgBitMap(a1, 1uLL, v11, 0LL, v8, v9, 0LL);
    if ( (int)result < 0 )
      return result;
    v8 += (unsigned __int64)*(unsigned __int8 *)(MiLocateLockedVadEvent(a3, 0x10u) + 24) << 16;
    v17 = (_InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 24), -1LL, -1LL) & 0xFFF) != 0;
    v18 = v8
        + ((__int64)(*(_QWORD *)(v10 + 64)
                   + 8
                   * (v17
                    + ((unsigned __int64)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)(v10 + 24),
                                           -1LL,
                                           -1LL) >> 12))
                   - *(_QWORD *)(a3 + 88)) >> 3 << 12);
    if ( v9 > v18 )
      v9 = v18;
  }
  v12 = *(_QWORD *)(v10 + 64);
  v13 = *(_QWORD *)(a3 + 88);
  if ( v13 != v12 && !v5 )
  {
    v19 = (v13 - v12) >> 3 << 12;
    v8 += v19;
    v9 += v19;
  }
  ControlAreaLoadConfig = MiGetControlAreaLoadConfig((__int64)v7);
  return MiPopulateCfgBitMap(a1, *(_QWORD *)(ControlAreaLoadConfig + 8), v15, 0LL, v8, v9, a3);
}
