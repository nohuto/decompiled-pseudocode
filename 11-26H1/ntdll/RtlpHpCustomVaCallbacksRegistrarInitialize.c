/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarInitialize @ 0x180089BC4
 * Callers:
 *     RtlHpHeapManagerInitialize @ 0x180089AEC (RtlHpHeapManagerInitialize.c)
 * Callees:
 *     <none>
 */

char *RtlpHpCustomVaCallbacksRegistrarInitialize()
{
  char *result; // rax

  qword_1801CC550 = 0LL;
  RtlpHpHeapVaCallbacksRegistrar = 0;
  qword_1801CC548 = (__int64)&unk_1801CC558;
  result = (char *)&RtlpHpHeapVaCallbacksRegistrar + 1;
  dword_1801CC544 = 2048;
  if ( (&unk_1801CC758 >= &unk_1801CC558 ? 0x40 : 0) != 0 )
    memset64(&unk_1801CC558, (unsigned __int64)result, &unk_1801CC758 >= &unk_1801CC558 ? 0x40 : 0);
  return result;
}
