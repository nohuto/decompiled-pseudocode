/*
 * XREFs of MmFillEtwHugeIoSpaceInformation @ 0x1406E818C
 * Callers:
 *     EtwpLogMemNodeInfo @ 0x140259734 (EtwpLogMemNodeInfo.c)
 * Callees:
 *     MiGetNodeHugeRangeCounts @ 0x140510168 (MiGetNodeHugeRangeCounts.c)
 */

__int64 __fastcall MmFillEtwHugeIoSpaceInformation(
        unsigned __int16 **a1,
        __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        _DWORD *a5)
{
  unsigned __int16 *v5; // r15
  unsigned int v6; // esi
  __int64 v8; // rbx
  unsigned int v9; // eax
  bool v10; // cc
  unsigned int v11; // ebp
  __int64 v12; // r14
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 result; // rax
  unsigned __int64 v17[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  v5 = *a1;
  v6 = a3;
  v18 = 0LL;
  v19 = 0LL;
  v8 = a2;
  v17[0] = 0LL;
  v9 = (unsigned __int16)KeNumberNodes;
  v10 = a3 <= (unsigned __int16)KeNumberNodes;
  *a4 = 0;
  if ( !v10 )
    v6 = v9;
  v11 = 0;
  if ( v6 )
  {
    v12 = 0LL;
    v13 = (_QWORD *)(a2 + 20);
    do
    {
      *(_OWORD *)v8 = 0LL;
      *(_QWORD *)(v8 + 16) = 0LL;
      *(_DWORD *)(v8 + 24) = 0;
      ++v11;
      v14 = v12 + *((_QWORD *)v5 + 2);
      *((_DWORD *)v13 - 5) = v11;
      MiGetNodeHugeRangeCounts(v14, &v18, &v19, v17);
      v15 = v18;
      *v13 = v19;
      *(v13 - 1) = v17[0];
      *(v13 - 2) = v15;
      if ( v15 )
        *a4 = 1;
      v8 += 28LL;
      v12 += 56320LL;
      v13 = (_QWORD *)((char *)v13 + 28);
    }
    while ( v11 < v6 );
  }
  result = v11;
  *a5 = *v5;
  return result;
}
