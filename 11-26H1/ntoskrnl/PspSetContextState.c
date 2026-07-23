/*
 * XREFs of PspSetContextState @ 0x140776D58
 * Callers:
 *     PspGetSetContextInternal @ 0x140A4CA50 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x1403D8DF0 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403D9A10 (RtlGetExtendedContextLength.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyContext @ 0x140A4D9B0 (RtlCopyContext.c)
 */

__int64 __fastcall PspSetContextState(__int64 a1, _CONTEXT *a2)
{
  bool v2; // zf
  _CONTEXT *v4; // rsi
  int v6; // ebx
  __int64 result; // rax
  PCONTEXT_EX ContextLength; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(_BYTE *)(a1 + 3) & 8) == 0;
  v4 = *(_CONTEXT **)(a1 + 1704);
  LODWORD(ContextLength) = 0;
  if ( v2 )
  {
    v6 = MEMORY[0xFFFFF780000003D8] != 0LL ? 0x40 : 0;
    RtlGetExtendedContextLength(v6 + 0x100000, (PULONG)&ContextLength);
    memset_0(v4, 0, (unsigned int)ContextLength);
    RtlInitializeExtendedContext(v4, v6 + 0x100000, &ContextLength);
    v4->ContextFlags = 0x100000;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Bu);
  }
  if ( (a2->ContextFlags & 0x100040) == 0x100040 )
    v4->ContextFlags |= 0x100040u;
  RtlCopyContext(v4, a2->ContextFlags, a2);
  result = a2->ContextFlags & 0x100008;
  if ( (_DWORD)result == 1048584 )
  {
    LODWORD(ContextLength) = _mm_getcsr();
    a2->FltSave.MxCsr = (unsigned int)ContextLength;
    result = 7999LL;
    a2->FltSave.ControlWord &= 0x1F3Fu;
  }
  return result;
}
