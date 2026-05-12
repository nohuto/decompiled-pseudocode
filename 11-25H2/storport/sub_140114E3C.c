/*
 * XREFs of sub_140114E3C @ 0x140114E3C
 * Callers:
 *     sub_1400EEC0C @ 0x1400EEC0C (sub_1400EEC0C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14008ADD0 @ 0x14008ADD0 (sub_14008ADD0.c)
 *     sub_140114720 @ 0x140114720 (sub_140114720.c)
 *     sub_140115214 @ 0x140115214 (sub_140115214.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140114E3C(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  ULONG v4; // edi
  ULONG NodeNumber; // ebp
  __int64 v6; // rcx
  int v7; // ebp
  struct _SLIST_ENTRY *v8; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Dst; // [rsp+30h] [rbp-68h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+A0h] [rbp+8h] BYREF
  ULONG Length; // [rsp+A8h] [rbp+10h] BYREF

  v2 = 0;
  v3 = sub_1400143E0(
         72LL,
         (unsigned int)(dword_1401687C0 - 1)
       + 8LL * (unsigned int)dword_1401688B0
       - ((unsigned int)(dword_1401687C0 - 1) + 8 * (unsigned __int64)(unsigned int)dword_1401688B0)
       % (unsigned int)dword_1401687C0,
         1380147538LL,
         *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 888) = v3;
  if ( !v3 )
  {
LABEL_12:
    v2 = -1073741670;
    sub_140115214(a1);
    return v2;
  }
  v4 = 0;
  if ( dword_1401688B0 )
  {
LABEL_3:
    ProcNumber = 0;
    NodeNumber = 0x80000000;
    memset_0(&Dst, 0, sizeof(Dst));
    Length = 80;
    if ( KeGetProcessorNumberFromIndex(v4, &ProcNumber) >= 0
      && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Dst, &Length) >= 0 )
    {
      NodeNumber = Dst.NumaNode.NodeNumber;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 888) + 8LL * v4) = sub_14008ADD0(
                                                      72LL,
                                                      (unsigned int)(dword_1401687C0 - 1)
                                                    + 32LL
                                                    - ((unsigned __int64)(unsigned int)(dword_1401687C0 - 1) + 32)
                                                    % (unsigned int)dword_1401687C0,
                                                      1380147538LL,
                                                      *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL),
                                                      NodeNumber);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 888) + 8LL * v4);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 16) = v4;
      InitializeSListHead(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 888) + 8LL * v4));
      v7 = 0;
      while ( 1 )
      {
        v8 = (struct _SLIST_ENTRY *)sub_140114720(a1, v4);
        if ( !v8 )
          break;
        ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 888) + 8LL * v4), v8);
        if ( (unsigned int)++v7 >= 0x20 )
        {
          if ( ++v4 < dword_1401688B0 )
            goto LABEL_3;
          return v2;
        }
      }
    }
    goto LABEL_12;
  }
  return v2;
}
