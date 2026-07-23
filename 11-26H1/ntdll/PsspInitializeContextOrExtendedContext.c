/*
 * XREFs of PsspInitializeContextOrExtendedContext @ 0x1800B1330
 * Callers:
 *     PsspDumpThread @ 0x1800B1008 (PsspDumpThread.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x1800B14A0 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1800B1520 (RtlGetExtendedContextLength.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

struct _CONTEXT *__fastcall PsspInitializeContextOrExtendedContext(
        struct _CONTEXT *a1,
        size_t Size,
        ULONG ContextFlags)
{
  size_t v3; // rsi
  ULONG v4; // ebx
  __int64 Offset; // r9
  struct _CONTEXT *result; // rax
  NTSTATUS ExtendedContextLength; // eax
  ULONG v9; // ecx
  ULONG ContextLength; // [rsp+38h] [rbp+10h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+20h] BYREF

  v3 = (unsigned int)Size;
  v4 = ContextFlags;
  ContextLength = 0;
  ContextEx = 0LL;
  if ( (_DWORD)Size == 1232 )
    goto LABEL_8;
  if ( RtlGetExtendedContextLength(ContextFlags, &ContextLength) < 0 || (unsigned int)v3 < ContextLength )
  {
    if ( (v4 & 0x10000) != 0 )
    {
      v4 &= 0x1003Fu;
    }
    else if ( (v4 & 0x100000) != 0 )
    {
      v4 &= 0x10001Fu;
    }
    ExtendedContextLength = RtlGetExtendedContextLength(v4, &ContextLength);
    v9 = ContextLength;
    if ( ExtendedContextLength < 0 )
      v9 = -1;
    if ( (unsigned int)v3 < v9 )
      goto LABEL_8;
  }
  if ( RtlInitializeExtendedContext(a1, v4, &ContextEx) < 0
    || (Offset = ContextEx->Legacy.Offset, ContextEx->All.Offset > (int)Offset)
    || (signed __int32)(ContextEx->All.Offset + ContextEx->All.Length) < (signed int)(Offset + ContextEx->Legacy.Length)
    || (result = (struct _CONTEXT *)((char *)ContextEx + Offset)) == 0LL )
  {
LABEL_8:
    if ( (v4 & 0x10000) != 0 )
    {
      v4 &= 0x1003Fu;
    }
    else if ( (v4 & 0x100000) != 0 )
    {
      v4 &= 0x10001Fu;
    }
    memset_thunk_772440563353939046(a1, 0, v3);
    result = a1;
    a1->ContextFlags = v4;
  }
  return result;
}
