/*
 * XREFs of ?Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ @ 0x1401FD674
 * Callers:
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x140114080 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 * Callees:
 *     ?InsertWithHash@CPointerHashTable@NSInstrumentation@@AEAAX_KPEBX1@Z @ 0x14011431C (-InsertWithHash@CPointerHashTable@NSInstrumentation@@AEAAX_KPEBX1@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

char __fastcall NSInstrumentation::CPointerHashTable::Resize(NSInstrumentation::CPointerHashTable *this)
{
  __int64 v1; // rdi
  unsigned int v3; // r14d
  void *Pool2; // rax
  void *v5; // r15
  const void **v6; // rbp
  const void **v7; // rbx

  v1 = *((unsigned int *)this + 10);
  v3 = 2 * v1;
  if ( (unsigned __int64)(2 * v1) > 0xFFFFFFFF )
    return 0;
  if ( 16 * (unsigned __int64)v3 > 0xFFFFFFFF )
    return 0;
  Pool2 = (void *)ExAllocatePool2(258LL, 16LL * v3, 944337749LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 0;
  memset(Pool2, 0, 16LL * v3);
  ++*((_DWORD *)this + 11);
  v6 = (const void **)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v5;
  *((_DWORD *)this + 10) = v3;
  if ( (_DWORD)v1 )
  {
    v7 = v6;
    do
    {
      if ( *v7 )
        NSInstrumentation::CPointerHashTable::InsertWithHash(
          this,
          0x9E3779B97F34A803uLL * ((unsigned __int64)*v7 >> 4),
          (unsigned __int64 *)*v7,
          v7[1]);
      v7 += 2;
      --v1;
    }
    while ( v1 );
  }
  ExFreePoolWithTag(v6, 0);
  return 1;
}
