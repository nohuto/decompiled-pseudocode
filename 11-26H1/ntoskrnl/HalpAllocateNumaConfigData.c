/*
 * XREFs of HalpAllocateNumaConfigData @ 0x140CB7250
 * Callers:
 *     HalpInitializeConfigurationFromMadt @ 0x140CB76B0 (HalpInitializeConfigurationFromMadt.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140CB7A3C (HalpNumaInitializeStaticConfiguration.c)
 * Callees:
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall HalpAllocateNumaConfigData(int a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // r12
  __int64 v5; // r13
  unsigned int v7; // esi
  int v8; // edi
  unsigned int v9; // ebp
  unsigned int v10; // ebx
  unsigned __int64 result; // rax
  __int64 v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx

  v4 = (unsigned int)(4 * a1);
  v5 = 4 * a2;
  v7 = a3;
  v8 = a4;
  v9 = 2 * a1 * a1;
  v10 = v9
      + ((((((((((v5 + ((v5 + 79) & 0xFFFFFFF8) + 7) & 0xFFFFFFF8) + v5 + 7) & 0xFFFFFFF8) + v4 + 7) & 0xFFFFFFF8)
          + v4
          + 7) & 0xFFFFFFF8)
        + v4
        + 7) & 0xFFFFFFF8);
  if ( a3 )
  {
    v7 = a3 + 1;
    v10 = 16 * (a3 + 1) + ((v10 + 7) & 0xFFFFFFF8);
  }
  if ( a4 )
  {
    v8 = a4 + 1;
    v10 = 16 * (a4 + 1) + ((v10 + 7) & 0xFFFFFFF8);
  }
  result = HalpMmAllocateMemoryInternal(v10, 1u);
  v12 = result;
  if ( result )
  {
    memset_0((void *)result, 0, v10);
    v13 = (v12 + 79) & 0xFFFFFFFFFFFFFFF8uLL;
    HalpNumaConfig = v12;
    *(_QWORD *)v12 = v13;
    *(_DWORD *)(v12 + 64) = a1;
    v14 = (v13 + v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_QWORD *)(v12 + 8) = v14;
    v15 = (v14 + v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_QWORD *)(v12 + 16) = v15;
    v16 = (v15 + v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_QWORD *)(v12 + 24) = v16;
    v17 = ((unsigned int)v4 + 7LL + v16) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_QWORD *)(v12 + 32) = v17;
    v18 = (v17 + v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_QWORD *)(v12 + 40) = v18;
    v19 = (v18 + v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v20 = v19 + v9;
    *(_QWORD *)(v12 + 48) = v19;
    result = a2;
    *(_DWORD *)(v12 + 68) = a2;
    if ( v7 )
    {
      result = (v20 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v20 = result + 16LL * v7;
      HalpNumaMemoryRanges = (void *)result;
    }
    if ( v8 )
    {
      dword_140F87A80 = v8;
      result = (v20 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      qword_140F87A78 = (void *)result;
    }
  }
  return result;
}
