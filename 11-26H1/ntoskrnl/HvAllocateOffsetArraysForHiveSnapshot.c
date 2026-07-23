/*
 * XREFs of HvAllocateOffsetArraysForHiveSnapshot @ 0x140B3DFF8
 * Callers:
 *     CmDumpKeyToFile @ 0x1408534F4 (CmDumpKeyToFile.c)
 *     CmpFlushBackupHive @ 0x140860750 (CmpFlushBackupHive.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvAllocateOffsetArraysForHiveSnapshot(__int64 a1, unsigned int *a2, PVOID **a3, unsigned int *a4)
{
  unsigned int v4; // r12d
  unsigned int v6; // r14d
  PVOID *Pool2; // rdi
  int v8; // ebp
  unsigned int v9; // r15d
  __int64 i; // rbx
  int v11; // esi
  __int64 v12; // rax
  unsigned int v13; // ebx
  PVOID *v14; // rsi
  __int64 v15; // rbp

  v4 = *(_DWORD *)(a1 + 280) + 4096;
  v6 = (v4 >> 20) + 1;
  if ( (v4 & 0xFFFFF) == 0 )
    v6 = v4 >> 20;
  Pool2 = (PVOID *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v8 = 0;
    v9 = v4;
    for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
    {
      v11 = 0x100000;
      if ( v9 < 0x100000 )
        v11 = v9;
      v12 = ExAllocatePool2(0x100uLL);
      Pool2[3 * i + 1] = (PVOID)v12;
      if ( !v12 )
      {
        v13 = -1073741801;
        if ( v6 )
        {
          v14 = Pool2 + 1;
          v15 = v6;
          do
          {
            if ( *v14 )
            {
              ExFreePoolWithTag(*v14, 0);
              *v14 = 0LL;
            }
            v14 += 3;
            --v15;
          }
          while ( v15 );
        }
        ExFreePoolWithTag(Pool2, 0);
        return v13;
      }
      LODWORD(Pool2[3 * i]) = v8;
      v9 -= v11;
      v8 += v11;
      LODWORD(Pool2[3 * i + 2]) = v11;
    }
    if ( a4 )
      *a4 = v4;
    v13 = 0;
    *a2 = v6;
    *a3 = Pool2;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v13;
}
