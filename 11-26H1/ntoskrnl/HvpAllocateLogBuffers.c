/*
 * XREFs of HvpAllocateLogBuffers @ 0x1404BD54C
 * Callers:
 *     HvpGenerateLogEntry @ 0x1408BD3E8 (HvpGenerateLogEntry.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvpAllocateLogBuffers(__int64 *a1, _DWORD *a2, unsigned int a3)
{
  void *Pool2; // r14
  __int64 v7; // rax
  unsigned int v8; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ecx
  __int64 v13; // rsi
  __int64 v14; // rdi
  void *v15; // r15
  unsigned int v16; // ebp
  __int64 v17; // r12
  unsigned int v18; // edx
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  PVOID *v23; // rdi
  __int64 v24; // r12
  unsigned int v25; // [rsp+20h] [rbp-48h]

  Pool2 = (void *)ExAllocatePool2(0x108uLL);
  if ( Pool2 )
  {
    v7 = ExAllocatePool2(0x100uLL);
    if ( v7 )
    {
      *a2 = 1;
      v8 = 0;
      *(_DWORD *)v7 = 0;
      *(_QWORD *)(v7 + 8) = Pool2;
      *(_DWORD *)(v7 + 16) = a3;
      *a1 = v7;
      return v8;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  v10 = 0;
  do
  {
    v25 = v10;
    v11 = *((_DWORD *)LogEntryChunkSizes + v10) << 12;
    v12 = a3 / v11 + 1;
    if ( !(a3 % v11) )
      v12 = a3 / v11;
    v13 = v12;
    v14 = ExAllocatePool2(0x100uLL);
    v15 = (void *)v14;
    if ( !v14 )
      break;
    v16 = a3;
    v17 = 0LL;
    v18 = v11;
    while ( 1 )
    {
      if ( (unsigned int)v17 >= (unsigned int)v13 )
      {
        *a1 = v14;
        v8 = 0;
        *a2 = v13;
        return v8;
      }
      v19 = v16;
      *(_DWORD *)(v14 + 24 * v17) = 0;
      if ( v16 >= v18 )
        v19 = v18;
      *(_DWORD *)(v14 + 24 * v17 + 16) = v19;
      v20 = ExAllocatePool2(0x108uLL);
      *(_QWORD *)(v14 + 24 * v17 + 8) = v20;
      if ( !v20 )
        break;
      v18 = v11;
      v21 = v16;
      v22 = v16 - v11;
      v16 = 0;
      v17 = (unsigned int)(v17 + 1);
      if ( v21 >= v11 )
        v16 = v22;
    }
    if ( (_DWORD)v13 )
    {
      v23 = (PVOID *)(v14 + 8);
      v24 = v13;
      do
      {
        if ( *v23 )
        {
          ExFreePoolWithTag(*v23, 0);
          *v23 = 0LL;
        }
        v23 += 3;
        --v24;
      }
      while ( v24 );
    }
    ExFreePoolWithTag(v15, 0);
    v10 = v25 + 1;
  }
  while ( v25 != 8 );
  return (unsigned int)-1073741801;
}
