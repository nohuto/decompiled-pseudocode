/*
 * XREFs of RtlCopyContext @ 0x1800C0D00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCopyLegacyContextX86 @ 0x1800C12B0 (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyXStateChunk @ 0x1800C14F8 (RtlpCopyXStateChunk.c)
 *     RtlpCopyLegacyContextArm64 @ 0x180120058 (RtlpCopyLegacyContextArm64.c)
 *     RtlpCopyLegacyContextAmd64 @ 0x180123C98 (RtlpCopyLegacyContextAmd64.c)
 *     RtlpCopyLegacyContextArm @ 0x180123E88 (RtlpCopyLegacyContextArm.c)
 */

NTSTATUS __cdecl RtlCopyContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT Source)
{
  int v3; // edi
  M128A *XmmRegisters; // r15
  NTSTATUS result; // eax
  bool v9; // cl
  int *p_ContextFlags; // rbp
  int *v11; // rsi
  int v12; // ebp
  int v13; // esi
  ULONG v14; // r9d
  bool v15; // cl
  ULONG v16; // esi
  int v17; // r14d
  bool v18; // cl
  int v19; // r9d
  __int64 v20; // rcx
  NTSTATUS v21; // ebp
  int v22; // [rsp+30h] [rbp-48h]
  _DWORD *v23; // [rsp+38h] [rbp-40h]
  char v24; // [rsp+88h] [rbp+10h]
  int v25; // [rsp+98h] [rbp+20h]

  v3 = 0;
  XmmRegisters = 0LL;
  if ( ((ContextFlags & 0x10000) == 0 || (ContextFlags & 0x27FEFF80) != 0)
    && (ContextFlags & 0x7FFFF20) != 0x100000
    && ((ContextFlags & 0x200000) == 0 || (ContextFlags & 0x7DFFFF0) != 0)
    && (ContextFlags & 0x7FFFF00) != 0x400000 )
  {
    return -1073741811;
  }
  v9 = 0;
  if ( (ContextFlags & 0x400020) != 0x400020 )
    v9 = (ContextFlags & 0x10040) != 65600 && (ContextFlags & 0x100040) != 1048640;
  if ( !v9 && !MEMORY[0x7FFE03D8] || (ContextFlags & 0x100080) == 0x100080 )
    return -1073741637;
  if ( (ContextFlags & 0x10000) != 0 )
  {
    p_ContextFlags = (int *)Context;
    v23 = Context;
    v11 = (int *)Source;
  }
  else if ( (ContextFlags & 0x100000) != 0 )
  {
    p_ContextFlags = (int *)&Context->ContextFlags;
    v23 = &Context->ContextFlags;
    v11 = (int *)&Source->ContextFlags;
  }
  else if ( (ContextFlags & 0x200000) != 0 )
  {
    v11 = (int *)Source;
    v23 = Context;
    p_ContextFlags = (int *)Context;
  }
  else if ( (ContextFlags & 0x400000) != 0 )
  {
    v11 = (int *)Source;
    v23 = Context;
    p_ContextFlags = (int *)Context;
  }
  else
  {
    v11 = 0LL;
    v23 = 0LL;
    p_ContextFlags = 0LL;
  }
  v12 = *p_ContextFlags;
  v13 = *v11;
  v14 = ContextFlags | v13 | v12;
  v22 = v12;
  if ( (v14 & 0x27FFFF80) != 0x10000
    && (v14 & 0x7FFFF20) != 0x100000
    && ((v14 & 0x200000) == 0 || (v14 & 0x7DFFFF0) != 0)
    && (v14 & 0x7FFFF00) != 0x400000 )
  {
    return -1073741811;
  }
  v15 = 0;
  if ( (v14 & 0x400020) != 0x400020 )
    v15 = (v14 & 0x10040) != 65600 && (v14 & 0x100040) != 1048640;
  if ( !v15 && !MEMORY[0x7FFE03D8] || (v14 & 0x100080) == 0x100080 )
    return -1073741637;
  v16 = ContextFlags & v13;
  if ( (v16 & 0x27FFFF80) != 0x10000
    && (v16 & 0x7FFFF20) != 0x100000
    && ((v16 & 0x200000) == 0 || (v16 & 0x7DFFFF0) != 0)
    && (v16 & 0x7FFFF00) != 0x400000 )
  {
    return -1073741811;
  }
  v17 = 1;
  v25 = 1;
  v24 = 1;
  v18 = 0;
  v19 = 1;
  if ( (v16 & 0x400020) != 0x400020 )
    v18 = (v16 & 0x10040) != 65600 && (v16 & 0x100040) != 1048640;
  if ( !v18 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return -1073741637;
    v19 = 3;
    v24 = 3;
  }
  if ( (v16 & 0x100080) == 0x100080 )
    return -1073741637;
  if ( (v12 & 0x27FFFF80) != 0x10000
    && (v12 & 0x7FFFF20) != 0x100000
    && ((v12 & 0x200000) == 0 || (v12 & 0x7DFFFF0) != 0)
    && (v12 & 0x7FFFF00) != 0x400000 )
  {
    return -1073741811;
  }
  v20 = 0LL;
  if ( (v12 & 0x400020) != 0x400020 )
    v20 = ((v12 & 0x10040) != 65600) & (unsigned __int8)((v12 & 0x100040) != 1048640);
  if ( !(_BYTE)v20 )
  {
    if ( MEMORY[0x7FFE03D8] )
    {
      v17 = 3;
      v25 = 3;
      goto LABEL_44;
    }
    return -1073741637;
  }
LABEL_44:
  if ( (v12 & 0x100080) == 0x100080 )
    return -1073741637;
  v21 = 0;
  if ( (~v17 & v19) != 0 )
    return -2147483643;
  if ( (v16 & 0x10000) != 0 )
  {
    RtlpCopyLegacyContextX86(v20, Context, v16, Source);
  }
  else if ( (v16 & 0x100000) != 0 )
  {
    RtlpCopyLegacyContextAmd64(v20, Context, v16, Source);
  }
  else if ( (v16 & 0x200000) != 0 )
  {
    RtlpCopyLegacyContextArm(v20, Context, v16, Source);
  }
  else
  {
    if ( (v16 & 0x400000) == 0 )
      goto LABEL_49;
    RtlpCopyLegacyContextArm64(v20, Context, v16, Source);
  }
  LOBYTE(v19) = v24;
LABEL_49:
  *v23 |= v22;
  if ( (v25 & 0xFFFFFFFE) != 0 )
  {
    if ( (v16 & 0x10000) != 0 )
    {
      XmmRegisters = (M128A *)((char *)&Source->1 + 460);
      v3 = (_DWORD)Context + 716;
      if ( (v16 & 0x10020) == 0x10020 && (v22 & 0x10020) != 0x10020 )
        *((_DWORD *)&Context->1 + 118) = 716;
    }
    else if ( (ContextFlags & 0x100000) != 0 )
    {
      XmmRegisters = (M128A *)&Source[1];
      v3 = (_DWORD)Context + 1232;
    }
    else if ( (ContextFlags & 0x200000) != 0 )
    {
      XmmRegisters = Source->FltSave.XmmRegisters;
      v3 = (_DWORD)Context + 416;
    }
    else if ( (ContextFlags & 0x400000) != 0 )
    {
      XmmRegisters = &Source->VectorRegister[9];
      v3 = (_DWORD)Context + 912;
    }
  }
  if ( (v19 & 2) == 0 )
    return v21;
  result = RtlpCopyXStateChunk((_DWORD)v23, v3, v3, (_DWORD)XmmRegisters, (__int64)XmmRegisters);
  v21 = result;
  if ( result >= 0 )
    return v21;
  return result;
}
