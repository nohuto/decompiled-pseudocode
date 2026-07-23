/*
 * XREFs of EtwpPreserveMdlList @ 0x140834924
 * Callers:
 *     EtwpPreserveLogger @ 0x1408346EC (EtwpPreserveLogger.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpPreserveMdlList(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  _QWORD *v7; // rsi
  unsigned int v8; // ebx
  _QWORD *v9; // rdi
  __int64 Pool2; // rax
  void *v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // r14
  unsigned int v14; // ebp
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0;
  v7 = a1;
  v8 = 0;
  v9 = a1;
  do
  {
    KsrMdlToMemoryRuns(v9, 0LL, 0LL, &v16);
    v8 += v16;
    v9 = (_QWORD *)*v9;
  }
  while ( v9 );
  Pool2 = ExAllocatePool2(0x100uLL);
  v11 = (void *)Pool2;
  if ( Pool2 )
  {
    v13 = Pool2;
    v14 = v8;
    while ( v7 )
    {
      KsrMdlToMemoryRuns(v7, v13, v14, &v16);
      v14 -= v16;
      v7 = (_QWORD *)*v7;
      v13 += 8LL * v16;
    }
    v12 = KsrPersistMemoryWithMetadata(EtwpKsrGuid, v11, v8, a2, a3, a4);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v12;
}
