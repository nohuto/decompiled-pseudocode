/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarInitialize @ 0x1800D0F04
 * Callers:
 *     RtlHpHeapManagerInitialize @ 0x1800D0E2C (RtlHpHeapManagerInitialize.c)
 * Callees:
 *     <none>
 */

char *RtlpHpCustomVaCallbacksRegistrarInitialize()
{
  char *result; // rax

  qword_1801CB590 = 0LL;
  RtlpHpHeapVaCallbacksRegistrar = 0;
  qword_1801CB588 = (__int64)&unk_1801CB598;
  result = (char *)&RtlpHpHeapVaCallbacksRegistrar + 1;
  dword_1801CB584 = 2048;
  if ( (&unk_1801CB798 >= &unk_1801CB598 ? 0x40 : 0) != 0 )
    memset64(&unk_1801CB598, (unsigned __int64)result, &unk_1801CB798 >= &unk_1801CB598 ? 0x40 : 0);
  return result;
}
