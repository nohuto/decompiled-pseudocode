/*
 * XREFs of ViSpRtlReplaceStringBuffer @ 0x140B94E64
 * Callers:
 *     ViSpRtlUpcaseUnicodeStringToAnsiString_Exit @ 0x140B94DE0 (ViSpRtlUpcaseUnicodeStringToAnsiString_Exit.c)
 *     ViSpRtlCreateUnicodeString_Exit @ 0x140B94E10 (ViSpRtlCreateUnicodeString_Exit.c)
 *     ViSpRtlDuplicateUnicodeString_Exit @ 0x140B94E40 (ViSpRtlDuplicateUnicodeString_Exit.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 */

void __fastcall ViSpRtlReplaceStringBuffer(__int64 a1, __int64 a2)
{
  void *v3; // rax
  void *v4; // rdi

  if ( *(_WORD *)(a1 + 2) )
  {
    v3 = (void *)VfHandlePoolAlloc(
                   NonPagedPool,
                   0x300uLL,
                   *(unsigned __int16 *)(a1 + 2),
                   0x72745356u,
                   LowPoolPriority,
                   (__int64)&VfExtendedParameters,
                   1,
                   a2);
    v4 = v3;
    if ( v3 )
    {
      memmove(v3, *(const void **)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
      *(_QWORD *)(a1 + 8) = v4;
    }
  }
}
