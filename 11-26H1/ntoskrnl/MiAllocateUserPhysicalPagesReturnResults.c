/*
 * XREFs of MiAllocateUserPhysicalPagesReturnResults @ 0x14087E82C
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x14087DC48 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiAllocateUserPhysicalPagesReturnResults(__int64 a1, _QWORD *a2, int a3)
{
  int v3; // r14d
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r10
  _QWORD *v8; // rdx
  _QWORD *v9; // r14
  unsigned __int64 v10; // r9
  char *v11; // rcx
  unsigned __int64 i; // r8
  unsigned __int64 v13; // r12
  unsigned __int64 *v14; // rcx
  char *v15; // r15
  char v16; // r13
  _QWORD *j; // r14
  void *v18; // rdx
  size_t v19; // rdi
  _QWORD *v20; // rcx
  _QWORD *v21; // rsi
  _QWORD *v22; // rdi

  v3 = a3;
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    KiUnstackDetachProcess(a1 + 48, 0);
    *(_DWORD *)a1 &= ~1u;
  }
  v6 = *(_QWORD *)(a1 + 32);
  v7 = v6 / *(_QWORD *)(a1 + 24);
  if ( v7 != 1 )
  {
    v8 = (_QWORD *)*a2;
    if ( *a2 )
    {
      do
      {
        v9 = (_QWORD *)*v8;
        v10 = (unsigned __int64)*((unsigned int *)v8 + 10) >> 12;
        v11 = (char *)(v8 + 6);
        for ( i = 0LL; i < v10; i += v7 )
        {
          *(_QWORD *)v11 = v8[i + 6];
          v11 += 8;
        }
        *((_DWORD *)v8 + 10) = (unsigned int)((v11 - (char *)v8 - 48) >> 3) << 12;
        v8 = v9;
      }
      while ( v9 );
      v3 = a3;
    }
  }
  v13 = a2[1];
  v14 = *(unsigned __int64 **)(a1 + 144);
  v15 = *(char **)(a1 + 152);
  v16 = *(_BYTE *)(a1 + 8);
  if ( v3 >= 0 )
  {
    if ( v16 )
      RtlWriteULong64ToUser(v14, v13 / v6);
    else
      *v14 = v13 / v6;
  }
  for ( j = (_QWORD *)*a2; j; j = (_QWORD *)*j )
  {
    v18 = j + 6;
    v19 = 8 * ((unsigned __int64)*((unsigned int *)j + 10) >> 12);
    if ( v16 )
      RtlCopyToUser(v15, v18, v19);
    else
      RtlCopyVolatileMemory(v15, v18, v19);
    v15 += v19;
  }
  v20 = (_QWORD *)*a2;
  if ( *a2 )
  {
    v21 = a2 + 2;
    do
    {
      v22 = (_QWORD *)*v20;
      if ( v20 != v21 )
        ExFreePoolWithTag(v20, 0);
      v20 = v22;
    }
    while ( v22 );
  }
  *(_QWORD *)(a1 + 16) -= v13;
}
