/*
 * XREFs of CmpCaptureUnicodeStringBuffer @ 0x1408F2650
 * Callers:
 *     NtRenameKey @ 0x14084F890 (NtRenameKey.c)
 *     CmCreateKey @ 0x1409748F0 (CmCreateKey.c)
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x14097CD00 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14097DACC (CmpCaptureKeyValueArray.c)
 *     CmUnloadKey @ 0x140B0A63C (CmUnloadKey.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 */

void *__fastcall CmpCaptureUnicodeStringBuffer(unsigned __int16 *a1, void *a2, char a3)
{
  bool v5; // zf
  void *v6; // rdx
  size_t v7; // r8
  void *result; // rax

  if ( a3 && *a1 && (a1[4] & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = a3 == 0;
  v6 = (void *)*((_QWORD *)a1 + 1);
  v7 = *a1;
  if ( v5 )
    result = RtlCopyVolatileMemory(a2, v6, v7);
  else
    result = RtlCopyFromUser(a2, v6, v7);
  *((_QWORD *)a1 + 1) = a2;
  return result;
}
