/*
 * XREFs of RtlInitializeExtendedContext2 @ 0x1403D9690
 * Callers:
 *     RtlUnwindEx @ 0x1402CA550 (RtlUnwindEx.c)
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 *     RtlInitializeExtendedContext @ 0x1403D8DF0 (RtlInitializeExtendedContext.c)
 *     RtlDispatchException @ 0x1403D8F00 (RtlDispatchException.c)
 *     RtlUnwind @ 0x1403D95A0 (RtlUnwind.c)
 *     KiInitializeUserApc @ 0x14043ED48 (KiInitializeUserApc.c)
 *     RtlRaiseException @ 0x14061C280 (RtlRaiseException.c)
 *     PspWow64InitThread @ 0x1409E712C (PspWow64InitThread.c)
 *     PspInitializeThunkContext @ 0x1409E7B48 (PspInitializeThunkContext.c)
 *     PspWow64GetContextThread @ 0x140A2AB08 (PspWow64GetContextThread.c)
 *     NtCreateThreadEx @ 0x140A79100 (NtCreateThreadEx.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 *     PspWow64SetContextThread @ 0x140B81920 (PspWow64SetContextThread.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x1403D99A0 (RtlpGetEntireXStateAreaLength.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext2(
        PCONTEXT Context,
        ULONG ContextFlags,
        PCONTEXT_EX *ContextEx,
        ULONG64 EnabledExtendedFeatures)
{
  size_t v4; // rbp
  _CONTEXT_EX *v9; // rbx
  ULONG v10; // r11d
  bool v11; // cl
  char v12; // si
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  ULONG Length; // ecx
  _CONTEXT_EX *v17; // rcx
  int v18; // edi
  unsigned __int64 v19; // rcx
  LONG v20; // eax
  unsigned __int64 v21; // rdi
  ULONG64 v22; // r14

  LODWORD(v4) = 0;
  v9 = 0LL;
  v10 = ContextFlags & 0x10000;
  if ( ((ContextFlags & 0x10000) == 0 || (ContextFlags & 0x27FEFF80) != 0)
    && (ContextFlags & 0x7FFFF20) != 0x100000
    && ((ContextFlags & 0x200000) == 0 || (ContextFlags & 0x7DFFFF0) != 0)
    && (ContextFlags & 0x7FFFF00) != 0x400000 )
  {
    return -1073741811;
  }
  v11 = 0;
  v12 = 1;
  if ( (ContextFlags & 0x400020) != 0x400020 )
    v11 = (ContextFlags & 0x10040) != 65600 && (ContextFlags & 0x100040) != 1048640;
  if ( !v11 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      return -1073741637;
    v12 = 3;
  }
  if ( (ContextFlags & 0x100080) == 0x100080 )
  {
    if ( !(_BYTE)KiKernelCetEnabled )
      return -1073741637;
    v12 |= 4u;
  }
  v14 = ContextFlags & 0x100000;
  if ( v10 )
  {
    v15 = (_DWORD *)(((unsigned __int64)&Context->P1Home + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v9 = (_CONTEXT_EX *)(v15 + 179);
LABEL_27:
    *v15 = ContextFlags;
    goto LABEL_15;
  }
  if ( (_DWORD)v14 )
  {
    v15 = (_DWORD *)(((unsigned __int64)&Context->P2Home + 7) & 0xFFFFFFFFFFFFFFF0uLL);
    v15[12] = ContextFlags;
    v9 = (_CONTEXT_EX *)(v15 + 308);
LABEL_15:
    v9->Legacy.Length = (_DWORD)v9 - (_DWORD)v15;
    goto LABEL_16;
  }
  if ( (ContextFlags & 0x200000) != 0 )
  {
    v15 = (_DWORD *)(((unsigned __int64)&Context->P1Home + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v9 = (_CONTEXT_EX *)(v15 + 104);
    *v15 = ContextFlags;
    goto LABEL_15;
  }
  if ( (ContextFlags & 0x400000) != 0 )
  {
    v15 = (_DWORD *)(((unsigned __int64)&Context->P2Home + 7) & 0xFFFFFFFFFFFFFFF0uLL);
    v9 = (_CONTEXT_EX *)(v15 + 228);
    goto LABEL_27;
  }
LABEL_16:
  Length = v9->Legacy.Length;
  v9->Legacy.Offset = -Length;
  v9->All.Offset = -Length;
  v9->All.Length = Length + 32;
  if ( v10 && (ContextFlags & 0x10020) != 0x10020 )
    v9->Legacy.Length = 204;
  v17 = v9 + 1;
  if ( (v12 & 2) != 0 )
  {
    v21 = ((unsigned __int64)&v9[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL;
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      v22 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & EnabledExtendedFeatures;
      if ( v10 )
      {
        EnabledExtendedFeatures = v22 & 0x40000000000001FFLL;
      }
      else if ( (_DWORD)v14 )
      {
        EnabledExtendedFeatures = v22 & 0x4000000000060DFFLL;
      }
      else if ( (ContextFlags & 0x400000) != 0 )
      {
        EnabledExtendedFeatures = v22 & 0x3C;
      }
      else
      {
        EnabledExtendedFeatures = 0LL;
      }
    }
    v4 = (unsigned int)RtlpGetEntireXStateAreaLength(EnabledExtendedFeatures, v14, 0xFFFFF780000003D8uLL) - 512;
    memset_0((void *)(((unsigned __int64)&v9[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL), 0, v4);
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)&v9[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = EnabledExtendedFeatures | 0x8000000000000000uLL;
    v17 = (_CONTEXT_EX *)(v21 + v4);
    v9->All.Length = v4 + v21 - v9->All.Offset - (_DWORD)v9;
    v18 = v21 - (_DWORD)v9;
  }
  else
  {
    v18 = 33;
  }
  v9->XState.Offset = v18;
  v9->XState.Length = v4;
  if ( (v12 & 4) != 0 )
  {
    v19 = ((unsigned __int64)&v17->All.Length + 3) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_OWORD *)v19 = 0LL;
    *(_QWORD *)(v19 + 16) = 0LL;
    v20 = v19 - (_DWORD)v9;
    LODWORD(v19) = v19 - v9->All.Offset - (_DWORD)v9;
    v9->KernelCet.Offset = v20;
    v9->KernelCet.Length = 24;
    v9->All.Length = v19 + 24;
  }
  *ContextEx = v9;
  return 0;
}
