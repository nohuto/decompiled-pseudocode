/*
 * XREFs of Amd64InitializeCacheStatus @ 0x1405A6754
 * Callers:
 *     Amd64InitializeUncoreProfiling @ 0x1405A6A20 (Amd64InitializeUncoreProfiling.c)
 * Callees:
 *     HalpInterruptGetIdentifiers @ 0x1404F6820 (HalpInterruptGetIdentifiers.c)
 *     Amd64FreeCounter @ 0x1405A6504 (Amd64FreeCounter.c)
 *     Amd64InitializeUncoreStatus @ 0x1405A6B28 (Amd64InitializeUncoreStatus.c)
 */

__int64 __fastcall Amd64InitializeCacheStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v12; // r8
  int v13; // r8d
  char v24; // bl
  unsigned int v25; // edx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // [rsp+50h] [rbp+20h] BYREF
  int v31; // [rsp+58h] [rbp+28h]

  LODWORD(a4) = KeGetPcr()->Prcb.Number;
  v30 = 0;
  v4 = (unsigned int)a4;
  result = KiProcessorBlock[a4];
  v6 = *(_QWORD *)(result + 88);
  if ( *(_DWORD *)(v6 + 76) )
  {
    if ( KeGetCurrentPrcb()->CpuType == 22 )
    {
      _RAX = 2147483678LL;
      __asm { cpuid }
      v12 = (unsigned __int8)_RCX;
    }
    else
    {
      v13 = 0;
      do
      {
        _RAX = 2147483677LL;
        ++v13;
        __asm { cpuid }
      }
      while ( (_RAX & 0xF) != 0 );
      _RAX = 2147483677LL;
      v31 = 0;
      __asm { cpuid }
      v24 = 0;
      _BitScanReverse((unsigned int *)&_RCX, 2 * (((unsigned int)_RAX >> 14) & 0xFFF) + 1);
      v25 = (unsigned __int8)(1 << _RCX);
      while ( 1 )
      {
        v25 >>= 1;
        if ( !v25 )
          break;
        ++v24;
      }
      result = HalpInterruptGetIdentifiers(a4, &v30, 0LL);
      if ( (int)result < 0 )
        return result;
      v12 = v30 >> v24;
    }
    v26 = 0LL;
    result = *(_QWORD *)(Amd64InitializeUncoreStatus(2LL, &qword_140F879C0, v12, *(unsigned int *)(v6 + 76)) + 24);
    *(_QWORD *)(v6 + 88) = result;
    if ( *(_DWORD *)(v6 + 76) )
    {
      while ( 1 )
      {
        LODWORD(v27) = 0;
        *(_DWORD *)(*(_QWORD *)(v6 + 88) + 48 * v26 + 28) = 101;
        if ( *(_DWORD *)(v6 + 72) == 1 )
          goto LABEL_20;
        if ( *(_DWORD *)(v6 + 72) == 100 )
          goto LABEL_17;
        if ( *(_DWORD *)(v6 + 72) == 101 )
          break;
LABEL_23:
        __writemsr(*((_DWORD *)&xmmword_140F879E0 + (unsigned int)(v27 + v26)), 0LL);
        result = Amd64FreeCounter(v26, *(_DWORD *)(v6 + 72));
        v26 = (unsigned int)(v26 + 1);
        if ( (unsigned int)v26 >= *(_DWORD *)(v6 + 76) )
          return result;
      }
      v27 = *(_QWORD *)(KiProcessorBlock[v4] + 88) + 48LL;
      if ( *(_QWORD *)(KiProcessorBlock[v4] + 88) != -48LL )
        LODWORD(v27) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v4] + 88) + 52LL);
LABEL_17:
      v28 = *(_QWORD *)(KiProcessorBlock[v4] + 88) + 24LL;
      if ( *(_QWORD *)(KiProcessorBlock[v4] + 88) != -24LL )
        LODWORD(v28) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v4] + 88) + 28LL);
      LODWORD(v27) = v28 + v27;
LABEL_20:
      v29 = *(_QWORD *)(KiProcessorBlock[v4] + 88);
      if ( v29 )
        LODWORD(v29) = *(_DWORD *)(v29 + 4);
      LODWORD(v27) = v29 + v27;
      goto LABEL_23;
    }
  }
  return result;
}
