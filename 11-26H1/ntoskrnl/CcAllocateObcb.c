/*
 * XREFs of CcAllocateObcb @ 0x14078A170
 * Callers:
 *     CcPinMappedData @ 0x140A54D50 (CcPinMappedData.c)
 *     CcPinRead @ 0x140A7CBB0 (CcPinRead.c)
 *     CcPreparePinWrite @ 0x140AC3300 (CcPreparePinWrite.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall CcAllocateObcb(_DWORD *a1, int a2, __int64 a3)
{
  SIZE_T v6; // rbx
  _WORD *result; // rax

  v6 = 8
     * ((unsigned int)(*a1
                     - *(_DWORD *)((a3 & 0xFFFFFFFFFFFFFFFEuLL) + 8)
                     - *(_DWORD *)((a3 & 0xFFFFFFFFFFFFFFFEuLL) + 4)
                     + a2
                     + 4095) >> 12)
     + 32;
  result = ExAllocatePoolWithTag((POOL_TYPE)1552, v6, 0x624F6343u);
  result[1] = v6;
  *result = 762;
  *((_DWORD *)result + 1) = a2;
  *((_QWORD *)result + 1) = *(_QWORD *)a1;
  *((_QWORD *)result + 2) = a3;
  return result;
}
