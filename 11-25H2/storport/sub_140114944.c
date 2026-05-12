/*
 * XREFs of sub_140114944 @ 0x140114944
 * Callers:
 *     sub_1400EEC0C @ 0x1400EEC0C (sub_1400EEC0C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140087BF4 @ 0x140087BF4 (sub_140087BF4.c)
 *     sub_140088234 @ 0x140088234 (sub_140088234.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140114944(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // ebp
  __int64 v4; // r9
  char *v5; // r15
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdi
  ULONG NodeNumber; // ebp
  unsigned int k; // r14d
  __int64 v11; // r13
  void *v12; // rax
  void *v13; // r12
  __int64 v14; // rcx
  unsigned int i; // r14d
  char *j; // rbp
  PSLIST_ENTRY v17; // rax
  _QWORD *p_Next; // rdi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Dst; // [rsp+20h] [rbp-98h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+C0h] [rbp+8h] BYREF
  ULONG Length; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v23; // [rsp+D0h] [rbp+18h]
  PHYSICAL_ADDRESS v24; // [rsp+D8h] [rbp+20h] BYREF

  v1 = 0;
  v24.QuadPart = 0LL;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 128);
  v5 = 0LL;
  v23 = 0LL;
  v6 = sub_1400143E0(
         72LL,
         (unsigned int)(dword_1401687C0 - 1)
       + 8LL * (unsigned int)dword_1401688B0
       - ((unsigned int)(dword_1401687C0 - 1) + 8 * (unsigned __int64)(unsigned int)dword_1401688B0)
       % (unsigned int)dword_1401687C0,
         1296982354LL,
         *(_QWORD *)(v4 + 8));
  *(_QWORD *)(a1 + 880) = v6;
  if ( !v6
    || (v7 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL),
        v3 = dword_1401687C0
           * (((unsigned __int64)(unsigned int)(dword_1401687C0 - 1) + 32)
            / (unsigned int)dword_1401687C0),
        v23 = v3,
        (v5 = (char *)sub_1400143E0(72LL, dword_1401688B0 * v3, 1296982354LL, v7)) == 0LL) )
  {
LABEL_15:
    v1 = -1073741670;
    if ( *(_QWORD *)(a1 + 880) )
    {
      if ( v5 )
      {
        for ( i = 0; i < dword_1401688B0; ++i )
        {
          for ( j = &v5[i * v3]; ; --*((_DWORD *)j + 4) )
          {
            v17 = ExpInterlockedPopEntrySList((PSLIST_HEADER)j);
            p_Next = &v17->Next;
            if ( !v17 )
              break;
            if ( v17[1].Next )
            {
              sub_140088234(*(_QWORD *)(a1 + 128));
              p_Next[2] = 0LL;
            }
            ExFreePoolWithTag(p_Next, 0x4D4E6152u);
          }
          v3 = v23;
        }
        ExFreePoolWithTag(v5, 0x4D4E6152u);
      }
      ExFreePoolWithTag(*(PVOID *)(a1 + 880), 0x4D4E6152u);
      *(_QWORD *)(a1 + 880) = 0LL;
    }
    return v1;
  }
  v8 = 0LL;
LABEL_4:
  if ( (unsigned int)v8 < dword_1401688B0 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 880) + 8 * v8) = &v5[v3 * (unsigned int)v8];
    InitializeSListHead(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 880) + 8 * v8));
    ProcNumber = 0;
    NodeNumber = 0x80000000;
    memset_0(&Dst, 0, sizeof(Dst));
    Length = 80;
    if ( KeGetProcessorNumberFromIndex(v8, &ProcNumber) >= 0
      && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Dst, &Length) >= 0 )
    {
      NodeNumber = Dst.NumaNode.NodeNumber;
    }
    for ( k = 0; ; ++k )
    {
      if ( k >= 0x20 )
      {
        v3 = v23;
        v8 = (unsigned int)(v8 + 1);
        goto LABEL_4;
      }
      v11 = sub_1400143E0(
              72LL,
              (unsigned int)(dword_1401687C0 - 1)
            + 64LL
            - ((unsigned __int64)(unsigned int)(dword_1401687C0 - 1) + 64) % (unsigned int)dword_1401687C0,
              1296982354LL,
              *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
      if ( !v11 )
        break;
      v12 = sub_140087BF4(0x1000u, *(_QWORD **)(a1 + 128), NodeNumber, &v24);
      v13 = v12;
      if ( !v12 )
        break;
      memset_0(v12, 0, 0x1000uLL);
      *(PHYSICAL_ADDRESS *)(v11 + 24) = v24;
      *(_QWORD *)(v11 + 16) = v13;
      *(_WORD *)(v11 + 36) = 512;
      ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 880) + 8 * v8), (PSLIST_ENTRY)v11);
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 880) + 8 * v8);
      ++*(_DWORD *)(v14 + 16);
    }
    v3 = v23;
    goto LABEL_15;
  }
  return v1;
}
