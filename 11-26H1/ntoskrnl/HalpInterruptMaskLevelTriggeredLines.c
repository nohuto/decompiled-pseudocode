/*
 * XREFs of HalpInterruptMaskLevelTriggeredLines @ 0x14059C770
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x14032FC8C (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptRestoreAllControllerState @ 0x140C0FB80 (HalpInterruptRestoreAllControllerState.c)
 */

__int64 HalpInterruptMaskLevelTriggeredLines()
{
  ULONG_PTR *v0; // rbx
  __int64 v1; // r9
  _QWORD *v2; // r13
  _QWORD *v3; // rsi
  int v4; // r14d
  _QWORD *v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // r12d
  __m128i v10; // [rsp+20h] [rbp-40h] BYREF
  __int128 v11; // [rsp+30h] [rbp-30h]
  __int128 v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-10h]
  __int64 v14; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR *v15; // [rsp+A8h] [rbp+48h]

  v0 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  v14 = 0LL;
  v10 = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  while ( v0 != &HalpRegisteredInterruptControllers )
  {
    v1 = (__int64)v0;
    v15 = v0;
    v0 = (ULONG_PTR *)*v0;
    v2 = (_QWORD *)(v1 + 264);
    v3 = *(_QWORD **)(v1 + 264);
    while ( v3 != v2 )
    {
      v4 = 0;
      v5 = v3;
      v3 = (_QWORD *)*v3;
      v6 = 0LL;
      while ( v4 < *((_DWORD *)v5 + 6) - *((_DWORD *)v5 + 5) )
      {
        v7 = v5[5];
        if ( (*(_DWORD *)(v7 + v6 + 12) & 0x10) != 0 && !*(_DWORD *)(v7 + v6 + 8) )
        {
          v10 = *(__m128i *)(v7 + v6);
          v11 = *(_OWORD *)(v7 + v6 + 16);
          v12 = *(_OWORD *)(v7 + v6 + 32);
          v13 = *(_QWORD *)(v7 + v6 + 48);
          v10.m128i_i32[3] = _mm_srli_si128(v10, 8).m128i_i32[1] & 0xFFFFFFEF;
          LODWORD(v14) = *(_DWORD *)(v1 + 256);
          HIDWORD(v14) = v4 + *((_DWORD *)v5 + 5);
          v8 = HalpInterruptSetLineStateInternal(v1, (__int64)&v14, (__int64)&v10);
          if ( v8 < 0 )
          {
            HalpInterruptRestoreAllControllerState();
            return (unsigned int)v8;
          }
          v1 = (__int64)v15;
        }
        ++v4;
        v6 += 56LL;
      }
    }
  }
  return 0;
}
