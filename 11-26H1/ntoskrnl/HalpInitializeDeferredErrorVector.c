/*
 * XREFs of HalpInitializeDeferredErrorVector @ 0x1405925F0
 * Callers:
 *     HalpInterruptInitializeLocalUnit @ 0x140592A68 (HalpInterruptInitializeLocalUnit.c)
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x14032FC8C (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptFindLines @ 0x1404336FC (HalpInterruptFindLines.c)
 *     HalpInterruptGetPriority @ 0x140436214 (HalpInterruptGetPriority.c)
 */

__int64 __fastcall HalpInitializeDeferredErrorVector(__int64 a1)
{
  bool v1; // zf
  unsigned int v2; // eax
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  int v6; // [rsp+28h] [rbp-38h]
  int v7; // [rsp+2Ch] [rbp-34h]
  int v8; // [rsp+30h] [rbp-30h]
  int v9; // [rsp+34h] [rbp-2Ch]
  int v10; // [rsp+38h] [rbp-28h]
  __int128 v11; // [rsp+3Ch] [rbp-24h]
  int v12; // [rsp+4Ch] [rbp-14h]
  int v13; // [rsp+50h] [rbp-10h]
  int Priority; // [rsp+54h] [rbp-Ch]
  unsigned int v15; // [rsp+70h] [rbp+10h] BYREF
  int v16; // [rsp+74h] [rbp+14h]

  v1 = *(_DWORD *)(a1 + 240) == 2;
  v2 = *(_DWORD *)(a1 + 256);
  v11 = 0LL;
  HIDWORD(v5) = 0;
  v12 = 0;
  v15 = v2;
  v16 = -8;
  if ( !v1 || !HalpInterruptFindLines(&v15) )
    return 0LL;
  v5 = 1LL;
  v12 = 0;
  v11 = 0LL;
  v6 = 1;
  v7 = 16;
  v13 = 54;
  v8 = -1;
  v9 = 1;
  v10 = 3;
  Priority = HalpInterruptGetPriority(a1, 0x36u);
  return HalpInterruptSetLineStateInternal(a1, (__int64)&v15, (__int64)&v5);
}
