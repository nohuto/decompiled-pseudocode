/*
 * XREFs of ?InsertWithHash@CPointerHashTable@NSInstrumentation@@AEAAX_KPEBX1@Z @ 0x14011431C
 * Callers:
 *     ?InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA?AW4EInsertResult@12@PEBX0@Z @ 0x1401142AC (-InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA-AW4EInsertResult@12@PEBX0@Z.c)
 *     ?Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ @ 0x1401FD674 (-Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CPointerHashTable::InsertWithHash(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        const void *a4)
{
  unsigned __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx

  v5 = a2 >> (64 - (unsigned __int8)*((_DWORD *)this + 11));
  if ( (*((_BYTE *)this + 52) & 1) != 0 )
    *a3 = a2;
  while ( 1 )
  {
    while ( (unsigned int)v5 >= *((_DWORD *)this + 10) )
      LODWORD(v5) = 0;
    v6 = *((_QWORD *)this + 4);
    v7 = 16LL * (unsigned int)v5;
    if ( !*(_QWORD *)(v6 + v7) && !_InterlockedCompareExchange64((volatile signed __int64 *)(v6 + v7), -1LL, 0LL) )
      break;
    LODWORD(v5) = v5 + 1;
  }
  *(_QWORD *)(*((_QWORD *)this + 4) + v7 + 8) = a4;
  *(_QWORD *)(v7 + *((_QWORD *)this + 4)) = a3;
}
