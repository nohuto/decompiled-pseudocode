/*
 * XREFs of RtlCopyContext @ 0x140A4D9B0
 * Callers:
 *     PspSetContextState @ 0x140776D58 (PspSetContextState.c)
 *     PspWow64GetContextThread @ 0x140A2AB08 (PspWow64GetContextThread.c)
 *     PspGetSetContextInternal @ 0x140A4CA50 (PspGetSetContextInternal.c)
 *     PspWow64SetContextThread @ 0x140B81920 (PspWow64SetContextThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1403D9B20 (RtlpValidateContextFlags.c)
 *     RtlpCopyXStateChunk @ 0x14040C07C (RtlpCopyXStateChunk.c)
 *     RtlpCopyLegacyContext @ 0x14042EB90 (RtlpCopyLegacyContext.c)
 *     RtlpGetContextFlagsLocation @ 0x1404773A4 (RtlpGetContextFlagsLocation.c)
 *     RtlpCopyKernelCetChunk @ 0x140534E68 (RtlpCopyKernelCetChunk.c)
 */

NTSTATUS __cdecl RtlCopyContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT Source)
{
  _M128A *v5; // rdi
  NTSTATUS result; // eax
  int v8; // edx
  int *v9; // rax
  int *v10; // r8
  int v11; // r12d
  int v12; // ebx
  ULONG v13; // ebx
  NTSTATUS v14; // r14d
  char v15; // si
  int v16; // r15d
  _M128A *XmmRegisters; // r13
  int v18[4]; // [rsp+30h] [rbp-58h] BYREF
  _DWORD *ContextFlagsLocation; // [rsp+40h] [rbp-48h]
  int v21; // [rsp+A8h] [rbp+20h] BYREF

  v5 = 0LL;
  v18[0] = 0;
  v21 = 0;
  result = RtlpValidateContextFlags(ContextFlags, 0LL);
  if ( result < 0 )
    return result;
  ContextFlagsLocation = (_DWORD *)RtlpGetContextFlagsLocation((__int64)Context, ContextFlags);
  v9 = (int *)RtlpGetContextFlagsLocation((__int64)Source, v8);
  v11 = *v10;
  v12 = *v9;
  result = RtlpValidateContextFlags(ContextFlags | *v9 | *v10, 0LL);
  if ( result < 0 )
    return result;
  v13 = ContextFlags & v12;
  result = RtlpValidateContextFlags(v13, v18);
  if ( result < 0 )
    return result;
  result = RtlpValidateContextFlags(v11, &v21);
  v14 = result;
  if ( result < 0 )
    return result;
  v15 = v18[0];
  v16 = v21;
  if ( (~v21 & v18[0]) != 0 )
    return -2147483643;
  RtlpCopyLegacyContext(0LL, (__int64)Context, v13, (__int64)Source);
  *ContextFlagsLocation |= v11;
  if ( (v16 & 0xFFFFFFFE) != 0 )
  {
    if ( (v13 & 0x10000) != 0 )
    {
      XmmRegisters = (_M128A *)((char *)&Source->1 + 460);
      v5 = (_M128A *)((char *)&Context->1 + 460);
      if ( (v13 & 0x10020) == 0x10020 && (v11 & 0x10020) != 0x10020 )
        *((_DWORD *)&Context->1 + 118) = 716;
      goto LABEL_8;
    }
    if ( (ContextFlags & 0x100000) != 0 )
    {
      XmmRegisters = (_M128A *)&Source[1];
      v5 = (_M128A *)&Context[1];
      goto LABEL_8;
    }
    if ( (ContextFlags & 0x200000) != 0 )
    {
      XmmRegisters = Source->FltSave.XmmRegisters;
      v5 = Context->FltSave.XmmRegisters;
      goto LABEL_8;
    }
    if ( (ContextFlags & 0x400000) != 0 )
    {
      XmmRegisters = &Source->VectorRegister[9];
      v5 = &Context->VectorRegister[9];
      goto LABEL_8;
    }
  }
  XmmRegisters = 0LL;
LABEL_8:
  if ( (v15 & 2) == 0
    || (result = RtlpCopyXStateChunk(0, (__int64)v5, (__int64)v5, (__int64)XmmRegisters, (__int64)XmmRegisters),
        v14 = result,
        result >= 0) )
  {
    if ( (v15 & 4) == 0 )
      return v14;
    result = RtlpCopyKernelCetChunk(0, (__int64)v5, (__int64)v5, (__int64)XmmRegisters, (__int64)XmmRegisters);
    v14 = result;
    if ( result >= 0 )
      return v14;
  }
  return result;
}
