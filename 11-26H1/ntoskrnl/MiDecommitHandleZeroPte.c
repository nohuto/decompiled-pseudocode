/*
 * XREFs of MiDecommitHandleZeroPte @ 0x140362760
 * Callers:
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 */

unsigned __int64 __fastcall MiDecommitHandleZeroPte(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi
  unsigned __int64 *v5; // r9
  unsigned __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 *v10; // rcx
  _KPROCESS *v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 KernelWaitTime; // rax
  __int64 v15; // rax
  int v16; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 100);
  v3 = (unsigned int)result;
  if ( (result & 0xF0) == 0 )
  {
    v4 = 1LL;
    if ( (result & 0x1C0000) == 0 )
      v4 = *(_QWORD *)(a1 + 144);
    result = *(_QWORD *)(a1 + 136);
    if ( *(_QWORD *)(a1 + 64) > result )
    {
      result = MiPageSizes[(v3 >> 16) & 3];
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) += result;
    }
    if ( *(_QWORD *)(a1 + 128) )
    {
      v5 = *(unsigned __int64 **)(a1 + 56);
      v6 = *v5;
      if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL
        && (v6 & 1) != 0
        && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
      {
        v11 = MiPteHasShadow();
        if ( v11 )
        {
          KernelWaitTime = v11[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v15 = *(_QWORD *)(KernelWaitTime + 8 * ((v13 >> 3) & 0x1FF));
            if ( (v15 & 0x20) != 0 )
              v12 |= 0x20uLL;
            v6 = v12 | 0x42;
            if ( (v15 & 0x42) == 0 )
              v6 = v12;
          }
        }
      }
      v7 = 48 * ((v6 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v16);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      if ( (*(_DWORD *)(v7 + 36) & 0x4000000) != 0 )
        v8 = *(_QWORD *)v7 >> 36;
      else
        v8 = *(_QWORD *)(v7 + 16) >> 17;
      v9 = (unsigned int)(v4 + v8);
      if ( (*(_DWORD *)(v7 + 36) & 0x4000000) != 0 )
        *(_QWORD *)v7 = (v9 << 36) ^ (*(_QWORD *)v7 ^ (v9 << 36)) & 0xFFFFC00FFFFFFFFFuLL;
      else
        *(_QWORD *)(v7 + 16) = (v9 << 17) ^ (*(_QWORD *)(v7 + 16) ^ (v9 << 17)) & 0xFFFFFFFFF801FFFFuLL;
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v10 = *(unsigned __int64 **)(a1 + 80);
      if ( v4 )
      {
        result = *(_QWORD *)(a1 + 128);
        do
        {
          *v10++ = result;
          --v4;
        }
        while ( v4 );
      }
    }
  }
  return result;
}
