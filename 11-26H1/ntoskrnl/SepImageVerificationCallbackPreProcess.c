/*
 * XREFs of SepImageVerificationCallbackPreProcess @ 0x140B3A5F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

void *__fastcall SepImageVerificationCallbackPreProcess(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int Size)
{
  void *result; // rax

  result = memmove(a3, a4, Size);
  a3[2] = (char *)a3 - (char *)a4 + a4[2];
  a3[6] = (char *)a3 - (char *)a4 + a4[6];
  a3[8] = (char *)a3 - (char *)a4 + a4[8];
  a3[9] = (char *)a3 - (char *)a4 + a4[9];
  a3[10] = (char *)a3 - (char *)a4 + a4[10];
  return result;
}
