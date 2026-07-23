/*
 * XREFs of RtlInitializeExtendedContext2 @ 0x1800B1A60
 * Callers:
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x180036C00 (RtlDispatchException.c)
 *     RtlInitializeExtendedContext @ 0x1800B14A0 (RtlInitializeExtendedContext.c)
 *     RtlUnwind @ 0x1800B18E0 (RtlUnwind.c)
 * Callees:
 *     RtlpValidateContextFlags2 @ 0x1800B1FF0 (RtlpValidateContextFlags2.c)
 *     RtlpGetEntireXStateAreaLength2 @ 0x1800B20C4 (RtlpGetEntireXStateAreaLength2.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x1800B2120 (RtlpRemoveArchDisallowedXStateFeatures.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext2(
        PCONTEXT Context,
        ULONG ContextFlags,
        PCONTEXT_EX *ContextEx,
        ULONG64 EnabledExtendedFeatures)
{
  size_t v7; // r14
  _CONTEXT_EX *v9; // rbx
  NTSTATUS result; // eax
  _DWORD *v11; // rcx
  ULONG Length; // ecx
  char v13; // r15
  _CONTEXT_EX *v14; // rcx
  int v15; // esi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  LONG v18; // eax
  _DWORD v19[14]; // [rsp+20h] [rbp-38h] BYREF
  ULONG64 v20; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v7) = 0;
  v19[0] = 0;
  v9 = 0LL;
  result = RtlpValidateContextFlags2(ContextFlags, v19, 2147353560LL);
  if ( result < 0 )
    return result;
  if ( (ContextFlags & 0x10000) != 0 )
  {
    v11 = (_DWORD *)(((unsigned __int64)&Context->P1Home + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v9 = (_CONTEXT_EX *)(v11 + 179);
LABEL_4:
    *v11 = ContextFlags;
LABEL_5:
    v9->Legacy.Length = (_DWORD)v9 - (_DWORD)v11;
    goto LABEL_6;
  }
  if ( (ContextFlags & 0x100000) != 0 )
  {
    v11 = (_DWORD *)(((unsigned __int64)&Context->P2Home + 7) & 0xFFFFFFFFFFFFFFF0uLL);
    v11[12] = ContextFlags;
    v9 = (_CONTEXT_EX *)(v11 + 308);
    goto LABEL_5;
  }
  if ( (ContextFlags & 0x200000) != 0 )
  {
    v11 = (_DWORD *)(((unsigned __int64)&Context->P1Home + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v9 = (_CONTEXT_EX *)(v11 + 104);
    goto LABEL_4;
  }
  if ( (ContextFlags & 0x400000) != 0 )
  {
    v11 = (_DWORD *)(((unsigned __int64)&Context->P2Home + 7) & 0xFFFFFFFFFFFFFFF0uLL);
    v9 = (_CONTEXT_EX *)(v11 + 228);
    goto LABEL_4;
  }
LABEL_6:
  Length = v9->Legacy.Length;
  v9->Legacy.Offset = -Length;
  v9->All.Offset = -Length;
  v9->All.Length = Length + 32;
  if ( (ContextFlags & 0x10000) != 0 && (ContextFlags & 0x10020) != 0x10020 )
    v9->Legacy.Length = 204;
  v13 = v19[0];
  v14 = v9 + 1;
  if ( (v19[0] & 2) != 0 )
  {
    v16 = ((unsigned __int64)&v9[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL;
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
    {
      v20 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL) & EnabledExtendedFeatures;
      RtlpRemoveArchDisallowedXStateFeatures(ContextFlags, &v20);
      EnabledExtendedFeatures = v20;
    }
    v7 = (unsigned int)RtlpGetEntireXStateAreaLength2(EnabledExtendedFeatures, 2147353560LL) - 512;
    memset_thunk_772440563353939046(
      (void *)(((unsigned __int64)&v9[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL),
      0,
      v7);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)&v9[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = EnabledExtendedFeatures | 0x8000000000000000uLL;
    v14 = (_CONTEXT_EX *)(v7 + v16);
    v9->All.Length = v7 + v16 - v9->All.Offset - (_DWORD)v9;
    v15 = v16 - (_DWORD)v9;
  }
  else
  {
    v15 = 33;
  }
  v9->XState.Offset = v15;
  v9->XState.Length = v7;
  if ( (v13 & 4) != 0 )
  {
    v17 = ((unsigned __int64)&v14->All.Length + 3) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_OWORD *)v17 = 0LL;
    *(_QWORD *)(v17 + 16) = 0LL;
    v18 = v17 - (_DWORD)v9;
    LODWORD(v17) = v17 - v9->All.Offset - (_DWORD)v9;
    v9->KernelCet.Offset = v18;
    v9->KernelCet.Length = 24;
    v9->All.Length = v17 + 24;
  }
  *ContextEx = v9;
  return 0;
}
