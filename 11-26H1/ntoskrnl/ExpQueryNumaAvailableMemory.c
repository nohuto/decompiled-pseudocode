/*
 * XREFs of ExpQueryNumaAvailableMemory @ 0x14083902C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryHighestNodeNumber @ 0x140481FE0 (KeQueryHighestNodeNumber.c)
 *     MmGetAvailablePages @ 0x14048C960 (MmGetAvailablePages.c)
 *     MmGetProcessPartitionId @ 0x1404A34A8 (MmGetProcessPartitionId.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     MmGetChannelInformation @ 0x140B0E978 (MmGetChannelInformation.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpQueryNumaAvailableMemory(_DWORD *a1, unsigned int a2, _DWORD *a3, char a4)
{
  _DWORD *v8; // r8
  unsigned __int16 ProcessPartitionId; // r12
  unsigned int v10; // edx
  __int64 result; // rax
  USHORT HighestNodeNumber; // ax
  __int16 v13; // cx
  unsigned int v14; // esi
  unsigned int i; // ebx
  __int64 v16; // rdi
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rcx
  unsigned __int64 v23; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF
  char v25; // [rsp+88h] [rbp+20h]

  v25 = a4;
  ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( v10 >= 4 )
  {
    HighestNodeNumber = KeQueryHighestNodeNumber();
    if ( a4 )
      RtlWriteULongToUser(a1, HighestNodeNumber);
    else
      *a1 = HighestNodeNumber;
    v13 = KeNumberNodes;
    v14 = (unsigned __int16)KeNumberNodes;
    if ( (a2 - 8) >> 3 <= (unsigned __int16)KeNumberNodes )
      v14 = (a2 - 8) >> 3;
    if ( a2 >= 8 && v14 )
    {
      *a3 = 8 * v14 + 8;
      if ( (unsigned __int16)v13 <= 1u )
      {
        v21 = MmGetAvailablePages(ProcessPartitionId) << 12;
        v22 = (__int64 *)(a1 + 2);
        if ( a4 )
          RtlWriteULong64ToUser(v22, v21);
        else
          *v22 = v21;
      }
      else
      {
        for ( i = 0; i < v14; ++i )
        {
          v23 = 0LL;
          P = 0LL;
          result = MmGetChannelInformation(ProcessPartitionId, i, &P, &v23);
          if ( (int)result < 0 )
            return result;
          v16 = 0LL;
          v17 = 0;
          if ( v23 / 0x28 )
          {
            v18 = 0LL;
            do
            {
              v16 += *((_QWORD *)P + 5 * v18 + 2) + *((_QWORD *)P + 5 * v18 + 3);
              v18 = ++v17;
            }
            while ( v17 < v23 / 0x28 );
          }
          ExFreePoolWithTag(P, 0);
          v19 = v16 << 12;
          v20 = (__int64 *)&a1[2 * i + 2];
          if ( a4 )
            RtlWriteULong64ToUser(v20, v19);
          else
            *v20 = v19;
        }
      }
    }
    else
    {
      *a3 = 4;
    }
    return 0LL;
  }
  else
  {
    *v8 = 4;
    return 3221225476LL;
  }
}
