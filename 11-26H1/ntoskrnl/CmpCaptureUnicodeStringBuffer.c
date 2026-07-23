/*
 * XREFs of CmpCaptureUnicodeStringBuffer @ 0x1408F8C10
 * Callers:
 *     NtRenameKey @ 0x140855BA0 (NtRenameKey.c)
 *     CmCreateKey @ 0x140936900 (CmCreateKey.c)
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x14093ED10 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14093FADC (CmpCaptureKeyValueArray.c)
 *     CmUnloadKey @ 0x140A3E88C (CmUnloadKey.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
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
