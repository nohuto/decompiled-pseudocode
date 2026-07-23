/*
 * XREFs of EtwpAllocatePayloadFilterData @ 0x14083825C
 * Callers:
 *     EtwpAllocateFilter @ 0x140AA2CB4 (EtwpAllocateFilter.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     EtwpValidatePayloadFilter @ 0x1408384A0 (EtwpValidatePayloadFilter.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocatePayloadFilterData(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned int v6; // esi
  _DWORD *Pool2; // rax
  _DWORD *v8; // rbx
  size_t v9; // r8
  const void *v10; // rdx

  if ( *a3 )
    return 3221225485LL;
  result = EtwpValidatePayloadFilter(a1, *(_QWORD *)a2, *(unsigned int *)(a2 + 8));
  v6 = result;
  if ( (int)result >= 0 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    v8 = Pool2;
    if ( Pool2 )
    {
      v9 = *(unsigned int *)(a2 + 8);
      v10 = *(const void **)a2;
      *Pool2 = 1;
      memmove(Pool2 + 2, v10, v9);
      result = v6;
      *a3 = v8;
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
