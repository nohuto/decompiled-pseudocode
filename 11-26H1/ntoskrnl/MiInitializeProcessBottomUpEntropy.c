/*
 * XREFs of MiInitializeProcessBottomUpEntropy @ 0x140A0959C
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeProcessBottomUpEntropy(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rdi
  unsigned __int64 v6; // r14
  __int64 v7; // r8
  int v8; // eax
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+28h] [rbp-30h]
  __int64 v19; // [rsp+30h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 1040);
  v2 = 0;
  v3 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v4 = v1 + 896;
  v6 = 2LL;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 1872) & 0x40) != 0 )
    goto LABEL_16;
  v8 = ExGenRandom(1, 0LL);
  v3 = (unsigned __int8)v8;
  v18 = (unsigned __int8)v8;
  if ( (MiFlags & 0x30) == 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x20u);
  v7 = (unsigned __int8)v8;
  if ( *(_QWORD *)(a1 + 872) <= 0x100000000uLL || (*(_DWORD *)(a1 + 1872) & 0x20) == 0 )
  {
LABEL_16:
    if ( !v7 )
    {
      v3 = 1LL;
      v18 = 1LL;
    }
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1872), 0xFFFFFFDF);
    v17 = v3;
  }
  else
  {
    v9 = v8 & 0xFFFFFF;
    if ( v9 <= 0x800000 )
      v9 = 0x800000LL;
    v18 = v9;
    v17 = v9 + (ExGenRandom(1, (unsigned __int8)v8) & 0xFFFFFF) + 0x1000000;
  }
  if ( *(_QWORD *)(a1 + 872) <= 0x100000000uLL )
  {
    v6 = 3LL;
    v19 = (ExGenRandom(1, v3) & 0xFFFFFF) + 0x10000;
  }
  *(_QWORD *)(v4 + 216) = v6;
  v10 = 0LL;
  do
  {
    v11 = 9 * v10;
    v12 = *(&v17 + v10);
    v13 = *(_QWORD *)(a1 + 872) - 1LL;
    if ( v2 == 2 )
      v13 = 0x7FFFFFFEFFFFLL;
    v14 = v12 << 16;
    ++v2;
    *(_QWORD *)(v4 + 8 * v11 + 40) = v13 >> 16;
    v15 = v14 >> 16;
    *(_QWORD *)(v4 + 8 * v11 + 56) = v14;
    v10 = v2;
    *(_QWORD *)(v4 + 8 * v11 + 64) = v15;
  }
  while ( v2 < v6 );
  result = v4 + 728;
  *(_QWORD *)(v4 + 720) = v4 + 728;
  *(_DWORD *)(v4 + 712) = 256;
  return result;
}
