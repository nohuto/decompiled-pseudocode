/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@E$03@@QEAAPEAEI@Z @ 0x14036CA00
 * Callers:
 *     NtDxgkSetProperties @ 0x14036C450 (NtDxgkSetProperties.c)
 *     NtDxgkGetProperties @ 0x140413730 (NtDxgkGetProperties.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<unsigned char,4>::AllocateElements(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 4 )
  {
    v5 = a1 + 1;
    *a1 = (__int64)v5;
    if ( a2 )
      memset(v5, 0, a2);
    goto LABEL_4;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 )
  {
    *a1 = ExAllocatePool2(256LL, a2, 1265072196LL);
LABEL_4:
    result = *a1;
    *((_DWORD *)a1 + 3) = a2;
    return result;
  }
  return 0LL;
}
