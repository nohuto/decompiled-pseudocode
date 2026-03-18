/*
 * XREFs of ?ReAllocate@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z @ 0x140349D44
 * Callers:
 *     ?Insert@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAUFONTFILEVIEW@@@Z @ 0x1400D1570 (-Insert@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAUFONTFILEVIEW@@@Z.c)
 *     ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x1400D2B10 (-Insert@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x1401D0450 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::ReAllocate(
        __int64 a1,
        unsigned __int64 a2)
{
  void *Pool2; // rax
  void *v5; // rdi
  char result; // al
  unsigned __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 16LL;
  if ( (int)ULongLongMult(0x10uLL, a2, &v7) < 0 )
    return 0;
  Pool2 = (void *)ExAllocatePool2(258LL, v7, 1665758037LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 0;
  memmove(Pool2, *(const void **)(a1 + 48), 16LL * *(_QWORD *)(a1 + 32));
  ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  result = 1;
  *(_QWORD *)(a1 + 48) = v5;
  *(_QWORD *)(a1 + 32) = a2;
  return result;
}
