/*
 * XREFs of DrvDbGetObjectDatabaseNode @ 0x14097932C
 * Callers:
 *     DrvDbDeleteObjectRegKey @ 0x1408A3FC4 (DrvDbDeleteObjectRegKey.c)
 * Callees:
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     RtlDuplicateUnicodeString @ 0x1409791B0 (RtlDuplicateUnicodeString.c)
 *     DrvDbFindDatabaseNode @ 0x140979718 (DrvDbFindDatabaseNode.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall DrvDbGetObjectDatabaseNode(__int64 a1, wchar_t *a2, wchar_t **a3, _QWORD *a4)
{
  NTSTATUS DatabaseNode; // ebx
  bool v5; // zf
  wchar_t *v10; // rdi
  wchar_t *v12; // rbp
  wchar_t *v13; // rax
  wchar_t *Buffer; // rsi
  UNICODE_STRING StringIn; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING StringOut; // [rsp+30h] [rbp-38h] BYREF

  DatabaseNode = 0;
  v5 = *a2 == 64;
  *(_DWORD *)(&StringIn.MaximumLength + 1) = 0;
  StringOut = 0LL;
  if ( !v5
    || (v12 = a2 + 1, (v13 = wcschr(a2 + 1, 0x3Au)) == 0LL)
    || (StringIn.Buffer = v12,
        StringIn.Length = 2 * (v13 - v12),
        StringIn.MaximumLength = StringIn.Length,
        v10 = v13 + 1,
        v13 == (wchar_t *)-2LL) )
  {
    v10 = a2;
LABEL_3:
    *a4 = *(_QWORD *)(a1 + 48);
LABEL_4:
    *a3 = v10;
    return (unsigned int)DatabaseNode;
  }
  if ( v10 == a2 )
    goto LABEL_3;
  DatabaseNode = RtlDuplicateUnicodeString(1u, &StringIn, &StringOut);
  if ( DatabaseNode >= 0 )
  {
    Buffer = StringOut.Buffer;
    DatabaseNode = DrvDbFindDatabaseNode(a1, StringOut.Buffer, a4);
    if ( Buffer )
      ExFreePool(Buffer);
    if ( DatabaseNode == -1073741772 )
      return (unsigned int)-1073741766;
    if ( DatabaseNode >= 0 )
      goto LABEL_4;
  }
  return (unsigned int)DatabaseNode;
}
