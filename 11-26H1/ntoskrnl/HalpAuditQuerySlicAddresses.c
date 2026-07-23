/*
 * XREFs of HalpAuditQuerySlicAddresses @ 0x140CBA1EC
 * Callers:
 *     HalpAuditAcpiTables @ 0x140CB9EA0 (HalpAuditAcpiTables.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall HalpAuditQuerySlicAddresses(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v3; // esi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r14
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  ULONG_PTR Pool2; // rax
  unsigned int v11; // r12d
  unsigned int *v12; // r13
  __int64 *v13; // rcx
  ULONG_PTR v14; // r14
  __int64 v15; // rbx
  _DWORD *v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v20; // [rsp+70h] [rbp+8h]
  __int64 *v21; // [rsp+78h] [rbp+10h]
  ULONG_PTR v22; // [rsp+80h] [rbp+18h]
  unsigned __int64 v23; // [rsp+88h] [rbp+20h]

  v1 = 4096 - (*(_DWORD *)a1 & 0xFFF);
  if ( v1 < 0x24 )
    v1 = 36;
  v3 = 0;
  while ( 1 )
  {
    v4 = MmMapIoSpaceEx(*(_QWORD *)a1, v1, 0x204u);
    v5 = v4;
    if ( !v4 )
      return (unsigned int)-1073741823;
    v6 = *(_DWORD *)(v4 + 4);
    if ( v1 >= v6 )
      break;
    MiUnmapContiguousMemory(v4, v1, 1);
    v1 = v6;
  }
  v7 = *(unsigned int *)(v4 + 4);
  v8 = (unsigned int)v7;
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
  {
    if ( (unsigned int)v7 >= 0x24 )
      v8 = 36LL;
    v9 = (unsigned __int64)(v7 - v8) >> 3;
  }
  else
  {
    if ( (unsigned int)v7 >= 0x24 )
      v8 = 36LL;
    v9 = (unsigned __int64)(v7 - v8) >> 2;
  }
  if ( (_DWORD)v9 )
  {
    Pool2 = ExAllocatePool2(256LL, 8LL * (unsigned int)v9, 0x416C6148u);
    v22 = Pool2;
    if ( Pool2 )
    {
      v20 = 0;
      v11 = 0;
      v12 = (unsigned int *)(v5 + 36);
      v23 = v5;
      v13 = (__int64 *)(v5 + 36);
      v14 = Pool2;
      v21 = v13;
      do
      {
        if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
          v15 = *v13;
        else
          v15 = *v12;
        v16 = (_DWORD *)MmMapIoSpaceEx(v15, 36LL, 0x204u);
        v17 = (unsigned __int64)v16;
        if ( v16 )
        {
          if ( *v16 == 1128877139 )
          {
            v18 = v11++;
            *(_QWORD *)(v14 + 8 * v18) = v15;
          }
          MiUnmapContiguousMemory(v17, 0x24uLL, 1);
        }
        ++v12;
        v13 = v21 + 1;
        ++v20;
        ++v21;
      }
      while ( v20 < (unsigned int)v9 );
      v5 = v23;
      *(_QWORD *)(a1 + 24) = v22;
      *(_DWORD *)(a1 + 16) = v11;
    }
    else
    {
      v3 = -1073741801;
    }
  }
  MiUnmapContiguousMemory(v5, v1, 1);
  return v3;
}
