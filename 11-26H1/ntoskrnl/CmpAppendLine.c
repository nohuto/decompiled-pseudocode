/*
 * XREFs of CmpAppendLine @ 0x140CBDC8C
 * Callers:
 *     CmpParseInfBuffer @ 0x140CBE2F8 (CmpParseInfBuffer.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

char __fastcall CmpAppendLine(_QWORD *a1, __int64 a2, char a3)
{
  ULONG_PTR Pool2; // rax
  ULONG_PTR v7; // r9
  ULONG_PTR *v8; // rax
  char result; // al

  if ( !a1[1] )
    return 0;
  Pool2 = ExAllocatePool2(256LL, 0x20uLL, 0x69704D43u);
  v7 = Pool2;
  if ( !Pool2 )
    return 0;
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 8) = a2;
  *(_BYTE *)(Pool2 + 24) = a3;
  v8 = (ULONG_PTR *)a1[2];
  if ( v8 )
    *v8 = v7;
  else
    *(_QWORD *)(a1[1] + 16LL) = v7;
  a1[2] = v7;
  result = 1;
  a1[3] = 0LL;
  return result;
}
