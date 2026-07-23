/*
 * XREFs of HalpInterruptDpReplaceBegin @ 0x14059C39C
 * Callers:
 *     HalpDpReplaceBegin @ 0x140788940 (HalpDpReplaceBegin.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14021AC70 (KeGetProcessorIndexFromNumber.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptDpReplaceBegin(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        char a6,
        _DWORD *a7)
{
  unsigned int v8; // ebx
  __int64 v11; // rdx
  unsigned int i; // ecx
  unsigned __int64 v13; // r8
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 j; // rsi
  unsigned int k; // edi
  int v19; // r15d
  bool v20; // zf
  unsigned __int64 v21; // rcx
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v23; // r13
  __int64 v24; // rdi
  unsigned int v25; // esi
  __int64 v26; // r15
  int v27; // eax
  int v28; // eax
  unsigned int v30; // [rsp+20h] [rbp-50h]

  v8 = 0;
  *a7 = 0;
  v11 = 0LL;
LABEL_2:
  if ( (unsigned int)v11 < a4 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= (unsigned int)HalpInterruptProcessorCount )
      {
        v11 = (unsigned int)(v11 + 1);
        goto LABEL_2;
      }
      v13 = (unsigned __int64)i << 6;
      if ( *(_BYTE *)(v13 + HalpInterruptProcessorState + 13) )
      {
        if ( *(_DWORD *)(v13 + HalpInterruptProcessorState) == *(_DWORD *)(a2 + 4 * v11) )
          break;
      }
    }
    v30 = 151;
    v14 = 24;
LABEL_10:
    v15 = 0LL;
LABEL_11:
    HalpInterruptSetProblemEx(v15, v14, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", v30);
    return (unsigned int)-1073741811;
  }
  v16 = a1;
  for ( j = 0LL; (unsigned int)j < a4; j = (unsigned int)(j + 1) )
  {
    for ( k = 0; ; ++k )
    {
      v19 = HalpInterruptProcessorCount;
      v20 = k == (_DWORD)HalpInterruptProcessorCount;
      if ( k >= (unsigned int)HalpInterruptProcessorCount )
        break;
      v21 = (unsigned __int64)k << 6;
      if ( *(_BYTE *)(v21 + HalpInterruptProcessorState + 12)
        && *(_BYTE *)(v21 + HalpInterruptProcessorState + 13)
        && *(_DWORD *)(v21 + HalpInterruptProcessorState) == *(_DWORD *)(v16 + 4 * j) )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(HalpInterruptProcessorState
                                                                                   + 16
                                                                                   + v21));
        v16 = a1;
        v20 = k == v19;
        *(_DWORD *)(a3 + 4 * j) = ProcessorIndexFromNumber;
        break;
      }
    }
    if ( v20 )
    {
      v30 = 187;
      v14 = 21;
      goto LABEL_10;
    }
  }
  v23 = *(_QWORD *)(HalpInterruptController + 16);
  if ( a4 && *(_QWORD *)(HalpInterruptController + 144) && !HalpInterruptPhysicalModeOnly && !a5 )
  {
    v24 = a2;
    v25 = 0;
    v26 = v16 - a2;
    while ( v25 < a4 )
    {
      v27 = guard_dispatch_icall_no_overrides(v23, v26 + v24);
      v8 = v27;
      if ( v27 < 0 )
      {
        HalpInterruptSetProblemEx(
          HalpInterruptController,
          9,
          v27,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
          0xECu);
        return v8;
      }
      v28 = guard_dispatch_icall_no_overrides(v23, v24);
      v8 = v28;
      if ( v28 < 0 )
      {
        HalpInterruptSetProblemEx(
          HalpInterruptController,
          9,
          v28,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
          0xF9u);
        return v8;
      }
      v24 += 4LL;
      ++v25;
    }
  }
  if ( a6 && a4 )
  {
    if ( a5 || !HalpInterruptPhysicalModeOnly )
    {
      *a7 = *(_DWORD *)(HalpInterruptController + 312);
      return v8;
    }
    v30 = 476;
    v14 = 28;
    v15 = HalpInterruptController;
    goto LABEL_11;
  }
  return v8;
}
