/*
 * XREFs of KeAllocateCalloutStackEx @ 0x140AB3C50
 * Callers:
 *     EtwpStackInitializeProcessor @ 0x1406CA748 (EtwpStackInitializeProcessor.c)
 *     KeAllocateCalloutStack @ 0x1407BD2D0 (KeAllocateCalloutStack.c)
 *     EtwpReferenceStackLookasideList @ 0x140AB3B84 (EtwpReferenceStackLookasideList.c)
 * Callees:
 *     MmCreateKernelStack @ 0x1403D3D00 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 *     KeInitializeMutex @ 0x1404ABC00 (KeInitializeMutex.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeAllocateCalloutStackEx(int a1, unsigned __int8 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // esi
  char v5; // r15
  unsigned __int8 v6; // r14
  char *Pool2; // rbx
  __int64 i; // rdi
  int v10; // ecx
  _OWORD v11[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v12; // [rsp+40h] [rbp-10h]

  v4 = a2;
  v5 = 0;
  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  if ( !a1 )
  {
LABEL_2:
    v6 = 0;
    goto LABEL_3;
  }
  v10 = a1 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
      return 3221225711LL;
    v5 = 1;
    if ( a2 != 1 )
      return 3221225712LL;
    goto LABEL_2;
  }
  v6 = 1;
LABEL_3:
  if ( !a2 )
    return 3221225712LL;
  if ( a3 )
    return 3221225713LL;
  Pool2 = (char *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225495LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v4 )
    {
      *(_DWORD *)Pool2 = 1801548883;
      Pool2[4] = v6;
      Pool2[5] = v4;
      Pool2[6] = 0;
      Pool2[7] = v5;
      KeInitializeMutex((PRKMUTEX)(Pool2 + 8), 0);
      *a4 = Pool2;
      return 0LL;
    }
    LODWORD(v11[0]) = v6 != 0 ? 5 : 0;
    *(_QWORD *)((char *)v11 + 4) = 5LL;
    *(_QWORD *)&v11[1] = 0LL;
    MmCreateKernelStack((__int64)v11);
    if ( !*((_QWORD *)&v11[1] + 1) )
      break;
    *(_QWORD *)&Pool2[8 * i + 64] = *((_QWORD *)&v11[1] + 1);
  }
  *(_OWORD *)((char *)v11 + 8) = 0LL;
  v12 = 0LL;
  while ( (_DWORD)i )
  {
    LODWORD(i) = i - 1;
    LODWORD(v11[0]) = v6;
    DWORD1(v11[0]) = 5;
    *((_QWORD *)&v11[1] + 1) = *(_QWORD *)&Pool2[8 * (unsigned int)i + 64];
    MmDeleteKernelStack((int *)v11);
  }
  ExFreePoolWithTag(Pool2, 0);
  return 3221225626LL;
}
