/*
 * XREFs of MmFillEtwNodeInformation @ 0x140259C74
 * Callers:
 *     EtwpLogMemNodeInfo @ 0x140259734 (EtwpLogMemNodeInfo.c)
 * Callees:
 *     MiGetPartitionNodeInformation @ 0x14025A7B8 (MiGetPartitionNodeInformation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MmFillEtwNodeInformation(unsigned __int16 **a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  unsigned __int16 *v4; // rbp
  unsigned int v8; // ebx
  _QWORD *v10; // rdi
  _QWORD v11[10]; // [rsp+20h] [rbp-68h] BYREF

  v4 = *a1;
  memset_0(v11, 0, 0x48uLL);
  if ( a3 > (unsigned __int16)KeNumberNodes )
    a3 = (unsigned __int16)KeNumberNodes;
  v8 = 0;
  if ( a3 )
  {
    v10 = (_QWORD *)(a2 + 20);
    do
    {
      MiGetPartitionNodeInformation(v4, v8, v11);
      memset_0((void *)(a2 + 76LL * v8++), 0, 0x4CuLL);
      *(v10 - 2) = v11[0];
      *v10 = v11[2];
      *(v10 - 1) = v11[1];
      v10[2] = v11[4];
      v10[1] = v11[3];
      v10[4] = v11[6];
      v10[3] = v11[5];
      v10[6] = v11[8];
      v10[5] = v11[7];
      *((_DWORD *)v10 - 5) = v8;
      v10 = (_QWORD *)((char *)v10 + 76);
    }
    while ( v8 < a3 );
  }
  *a4 = *v4;
  return v8;
}
