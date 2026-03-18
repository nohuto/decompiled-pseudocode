/*
 * XREFs of SetLogSize @ 0x14006F4CC
 * Callers:
 *     AMLIInitialize @ 0x1400DD5C8 (AMLIInitialize.c)
 * Callees:
 *     memset @ 0x140072740 (memset.c)
 */

char SetLogSize()
{
  char v0; // bl
  void *Pool2; // rax

  v0 = 0;
  if ( qword_14008ED10 )
  {
    ExFreePoolWithTag(qword_14008ED10, 0);
    qword_14008ED10 = 0LL;
    qword_14008ED08 = 0LL;
  }
  Pool2 = (void *)ExAllocatePool2(64LL, 14688LL, 1196379205LL);
  qword_14008ED10 = Pool2;
  if ( Pool2 )
  {
    qword_14008ED08 = 204LL;
    memset(Pool2, 0, 0x3960uLL);
    return 1;
  }
  return v0;
}
