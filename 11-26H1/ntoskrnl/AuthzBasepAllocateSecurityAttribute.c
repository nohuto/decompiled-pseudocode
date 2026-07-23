/*
 * XREFs of AuthzBasepAllocateSecurityAttribute @ 0x1403B2050
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x1403B0444 (AuthzBasepAddSecurityAttribute.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

_WORD *__fastcall AuthzBasepAllocateSecurityAttribute(unsigned __int16 *a1)
{
  ULONG_PTR v2; // rcx
  _WORD *result; // rax
  _WORD *v4; // rbx
  unsigned int v5; // eax
  const void *v6; // rdx
  unsigned __int64 v7; // rdi

  v2 = 256LL;
  if ( KeGetCurrentIrql() >= 2u )
    v2 = 64LL;
  result = (_WORD *)ExAllocatePool2(v2);
  v4 = result;
  if ( result )
  {
    memset_0(result, 0, 0x70uLL);
    v4[17] = *a1;
    *((_QWORD *)v4 + 5) = v4 + 56;
    v5 = (unsigned __int16)v4[17];
    v6 = (const void *)*((_QWORD *)a1 + 1);
    if ( *a1 <= (unsigned __int16)v5 )
      v5 = *a1;
    v7 = v5;
    v4[16] = v5;
    memmove(v4 + 56, v6, v5);
    if ( (unsigned __int64)(unsigned __int16)v4[16] + 2 <= (unsigned __int16)v4[17] )
      v4[(v7 >> 1) + 56] = 0;
    *((_QWORD *)v4 + 10) = v4 + 36;
    *((_QWORD *)v4 + 9) = v4 + 36;
    *((_QWORD *)v4 + 13) = v4 + 48;
    *((_QWORD *)v4 + 12) = v4 + 48;
    return v4;
  }
  return result;
}
