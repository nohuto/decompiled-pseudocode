/*
 * XREFs of sub_1400EE010 @ 0x1400EE010
 * Callers:
 *     sub_140194600 @ 0x140194600 (sub_140194600.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14008ADD0 @ 0x14008ADD0 (sub_14008ADD0.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400EE010(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // r8d
  int v6; // ecx
  ULONG MaximumProcessorCount; // eax
  __int64 v8; // r9
  __int64 v9; // rax
  ULONG i; // esi
  __int64 v11; // r15
  USHORT *v12; // r14
  USHORT MaximumGroupCount; // r14
  __int64 v14; // rcx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Dst; // [rsp+30h] [rbp-50h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+B0h] [rbp+30h] BYREF
  ULONG Length; // [rsp+B8h] [rbp+38h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  v3 = *(_DWORD *)(a1 + 1320);
  v4 = 0;
  v5 = *(_DWORD *)(v1 + 1060);
  *(_DWORD *)(a1 + 1328) = v5;
  v6 = v3 ^ (*(_DWORD *)(v1 + 1056) ^ v3) & 1;
  *(_DWORD *)(a1 + 1320) = v6;
  *(_DWORD *)(a1 + 1320) = v6 ^ (*(_DWORD *)(v1 + 1056) ^ v6) & 2;
  *(_DWORD *)(a1 + 1336) = *(_DWORD *)(v1 + 1064);
  *(_QWORD *)(a1 + 1344) = *(_QWORD *)(v1 + 1072) | 0x20LL;
  if ( v5 )
  {
    if ( qword_140168E40 )
      MaximumProcessorCount = *((_DWORD *)qword_140168E40 + 2);
    else
      MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    v8 = *(_QWORD *)(a1 + 128);
    *(_DWORD *)(a1 + 1408) = -1;
    *(_DWORD *)(a1 + 1324) = MaximumProcessorCount;
    v9 = sub_1400143E0(64LL, 8LL * MaximumProcessorCount, 1380147538LL, *(_QWORD *)(v8 + 8));
    *(_QWORD *)(a1 + 1352) = v9;
    if ( v9 )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 1324); ++i )
      {
        if ( qword_140168E40 )
        {
          v11 = i;
          v12 = *(USHORT **)(56LL * i + *((_QWORD *)qword_140168E40 + 4) + 48);
          if ( v12 )
          {
            MaximumGroupCount = *v12;
          }
          else
          {
            ProcNumber = 0;
            MaximumGroupCount = 0;
            memset_0(&Dst, 0, sizeof(Dst));
            Length = 80;
            if ( KeGetProcessorNumberFromIndex(i, &ProcNumber) >= 0
              && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Dst, &Length) >= 0 )
            {
              MaximumGroupCount = Dst.Group.MaximumGroupCount;
            }
          }
        }
        else
        {
          ProcNumber = 0;
          MaximumGroupCount = 0;
          memset_0(&Dst, 0, sizeof(Dst));
          Length = 80;
          if ( KeGetProcessorNumberFromIndex(i, &ProcNumber) >= 0
            && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Dst, &Length) >= 0 )
          {
            MaximumGroupCount = Dst.Group.MaximumGroupCount;
          }
          v11 = i;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 1352) + 8 * v11) = sub_14008ADD0(
                                                          64LL,
                                                          ((unsigned int)(*(_DWORD *)(a1 + 1328) - 1) + 2LL) << 6,
                                                          1380147538LL,
                                                          *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL),
                                                          MaximumGroupCount);
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 1352) + 8 * v11);
        if ( !v14 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v14 + 4) = i;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1352) + 8 * v11) + 8LL) = MaximumGroupCount;
        **(_DWORD **)(*(_QWORD *)(a1 + 1352) + 8 * v11) = -1;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1352) + 8 * v11) + 12LL) = *(_DWORD *)(a1 + 1328);
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 1352) = 0LL;
  }
  return v4;
}
