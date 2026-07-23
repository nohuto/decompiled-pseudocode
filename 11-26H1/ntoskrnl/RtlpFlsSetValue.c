/*
 * XREFs of RtlpFlsSetValue @ 0x140A9E618
 * Callers:
 *     PsTlsSetValue @ 0x140A9E5C0 (PsTlsSetValue.c)
 * Callees:
 *     RtlpFlsSetValueSlot @ 0x140A9E6A4 (RtlpFlsSetValueSlot.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpFlsSetValue(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 Pool2; // rax
  unsigned int v7; // edi

  if ( (unsigned int)(a3 - 1) > 0xEE )
    return 3221225485LL;
  Pool2 = *a2;
  v7 = a3 + 16;
  if ( *a2 )
    return RtlpFlsSetValueSlot(a1, Pool2, v7, a4);
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_OWORD *)Pool2 = 0LL;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    *a2 = Pool2;
    return RtlpFlsSetValueSlot(a1, Pool2, v7, a4);
  }
  return 3221225495LL;
}
