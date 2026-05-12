/*
 * XREFs of sub_140121320 @ 0x140121320
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1401211E0 @ 0x1401211E0 (sub_1401211E0.c)
 *     sub_1401212A8 @ 0x1401212A8 (sub_1401212A8.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

char sub_140121320()
{
  unsigned int v0; // r13d
  NTSTATUS v1; // r12d
  unsigned int v2; // r15d
  _WORD *v3; // rsi
  USHORT *v4; // rdi
  USHORT HighestNodeNumber; // ax
  __int64 v6; // rdx
  __int64 v7; // rax
  void *v8; // rbx
  USHORT v9; // r14
  __int64 v10; // rbx
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rax
  WORD v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // rax
  unsigned __int16 v22; // r8
  unsigned __int16 v23; // cx
  __int64 v24; // rdx
  __int64 v25; // rcx
  WORD v26; // ax
  unsigned __int16 v27; // r13
  unsigned int v28; // r12d
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v30; // r13
  __int64 v31; // rdx
  char v32; // r14
  _WORD *v33; // rax
  __int64 v34; // rcx
  UCHAR v35; // dl
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-B9h] BYREF
  ULONG Length; // [rsp+24h] [rbp-B5h] BYREF
  int v46; // [rsp+28h] [rbp-B1h]
  int v47; // [rsp+2Ch] [rbp-ADh]
  int v48; // [rsp+30h] [rbp-A9h]
  int v49; // [rsp+34h] [rbp-A5h]
  int v50; // [rsp+38h] [rbp-A1h]
  __int64 v51; // [rsp+40h] [rbp-99h]
  __int64 v52; // [rsp+48h] [rbp-91h]
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Dst; // [rsp+50h] [rbp-89h] BYREF
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+A0h] [rbp-39h] BYREF
  __int16 v55; // [rsp+140h] [rbp+67h] BYREF
  WORD v56; // [rsp+148h] [rbp+6Fh]
  unsigned __int16 v57; // [rsp+150h] [rbp+77h]
  unsigned __int16 v58; // [rsp+158h] [rbp+7Fh]

  v0 = 0;
  v46 = 0;
  v47 = 0;
  v1 = 0;
  v48 = 0;
  v49 = 0;
  v55 = 0;
  v2 = 0;
  v3 = 0LL;
  v4 = (USHORT *)sub_1400143E0(64LL, 64LL, 1230201170LL, 0LL);
  if ( !v4 )
    goto LABEL_52;
  *v4 = KeQueryActiveGroupCount();
  *((_DWORD *)v4 + 2) = KeQueryMaximumProcessorCountEx(0xFFFFu);
  *((_DWORD *)v4 + 3) = KeQueryActiveProcessorCountEx(0xFFFFu);
  v4[2] = sub_1401212A8();
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v6 = 16LL * *v4;
  v4[3] = HighestNodeNumber;
  v7 = sub_1400143E0(64LL, v6, 1230201170LL, 0LL);
  *((_QWORD *)v4 + 2) = v7;
  if ( !v7 )
    goto LABEL_52;
  v51 = sub_1400143E0(64LL, 16 * *v4 * (v4[3] + 1LL), 1230201170LL, 0LL);
  v8 = (void *)v51;
  if ( !v51 )
    goto LABEL_52;
  v9 = 0;
  if ( *v4 )
  {
    do
    {
      v10 = 2LL * v9;
      *(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL * v9 + 8) = KeQueryGroupAffinity(v9);
      *(_WORD *)(*((_QWORD *)v4 + 2) + 16LL * v9) = v9;
      v11 = RtlNumberOfSetBitsUlongPtr(*(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL * v9++ + 8));
      *(_WORD *)(*((_QWORD *)v4 + 2) + 8 * v10 + 2) = v11;
    }
    while ( v9 < *v4 );
    v8 = (void *)v51;
    v2 = 0;
  }
  v12 = sub_1400143E0(64LL, 80 * (v4[3] + 1LL), 1230201170LL, 0LL);
  *((_QWORD *)v4 + 3) = v12;
  if ( !v12
    || (v13 = sub_1400143E0(64LL, 56LL * *((unsigned int *)v4 + 2), 1230201170LL, 0LL),
        (*((_QWORD *)v4 + 4) = v13) == 0LL) )
  {
    ExFreePoolWithTag(v8, 0x49536152u);
    goto LABEL_52;
  }
  v50 = 0;
  while ( 1 )
  {
    v14 = *((_QWORD *)v4 + 3);
    v15 = 80LL * v0;
    v52 = v15;
    *(_WORD *)(v15 + v14) = v0;
    KeQueryNodeActiveAffinity(v0, (PGROUP_AFFINITY)(v15 + *((_QWORD *)v4 + 3) + 8LL), 0LL);
    *(_WORD *)(*((_QWORD *)v4 + 3) + v15 + 2) = RtlNumberOfSetBitsUlongPtr(*(_QWORD *)(*((_QWORD *)v4 + 3) + v15 + 8));
    *(_DWORD *)(*((_QWORD *)v4 + 3) + v15 + 56) = KeQueryNodeActiveProcessorCount(*(unsigned __int16 *)(*((_QWORD *)v4 + 3) + v15));
    v16 = *((_QWORD *)v4 + 3);
    v17 = *(_WORD *)(v16 + v15 + 16);
    v18 = *(_QWORD *)(v16 + v15 + 8);
    v55 = 1;
    v19 = *((_QWORD *)v4 + 3);
    v56 = v17;
    *(_WORD *)(v19 + v15 + 60) = 1;
    *(_QWORD *)(*((_QWORD *)v4 + 3) + v15 + 72) = v51 + 16LL * v0 * *v4;
    *(_OWORD *)*(_QWORD *)(*((_QWORD *)v4 + 3) + v15 + 72) = *(_OWORD *)(*((_QWORD *)v4 + 3) + v15 + 8);
    v20 = *((_QWORD *)v4 + 3);
    if ( *(_DWORD *)(v20 + v15 + 56) > (unsigned int)*(unsigned __int16 *)(v20 + v15 + 2) )
    {
      KeQueryNodeActiveAffinity2((unsigned __int16)v0, *(_QWORD *)(v20 + v15 + 72), *v4, &v55);
      *(_WORD *)(*((_QWORD *)v4 + 3) + v15 + 60) = v55;
      v20 = *((_QWORD *)v4 + 3);
      v21 = *(__int64 **)(v20 + v15 + 72);
      v18 = *v21;
      v56 = *((_WORD *)v21 + 4);
    }
    if ( *(_WORD *)(v15 + v20 + 2) )
    {
      v22 = v55;
      v23 = 0;
      v57 = 0;
      if ( v55 )
        break;
    }
LABEL_44:
    v39 = v4[3];
    v50 = ++v0;
    if ( v0 > v39 )
    {
      v40 = v47;
      *((_DWORD *)v4 + 11) = v46;
      v41 = v48;
      *((_DWORD *)v4 + 12) = v40;
      v42 = v49;
      *((_DWORD *)v4 + 13) = v41;
      *((_DWORD *)v4 + 14) = v42;
      *((_DWORD *)v4 + 10) = v2;
      goto LABEL_46;
    }
  }
  while ( 1 )
  {
    if ( v23 )
    {
      v24 = 2LL * v23;
      v25 = *(_QWORD *)(*((_QWORD *)v4 + 3) + v15 + 72);
      v26 = *(_WORD *)(v25 + 8 * v24 + 8);
      v18 = *(_QWORD *)(v25 + 8 * v24);
      v23 = v57;
      v56 = v26;
    }
    v58 = 0;
    v27 = 0;
    if ( v18 )
      break;
LABEL_42:
    v57 = ++v23;
    if ( v23 >= v22 )
    {
      v0 = v50;
      goto LABEL_44;
    }
  }
  while ( 1 )
  {
    if ( !_bittest64(&v18, (unsigned __int8)v27) )
      goto LABEL_40;
    memset_0(&Dst, 0, sizeof(Dst));
    Length = 80;
    v28 = v56;
    ProcNumber.Group = v56;
    ProcNumber.Number = v27;
    ProcNumber.Reserved = 0;
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
    v30 = ProcessorIndexFromNumber;
    if ( ProcessorIndexFromNumber == -1 )
      break;
    v31 = 56LL * ProcessorIndexFromNumber;
    *(_DWORD *)(v31 + *((_QWORD *)v4 + 4)) = ProcessorIndexFromNumber;
    *(_QWORD *)(*((_QWORD *)v4 + 4) + v31 + 40) = *((_QWORD *)v4 + 2) + 16LL * v28;
    *(_QWORD *)(*((_QWORD *)v4 + 4) + v31 + 48) = v15 + *((_QWORD *)v4 + 3);
    if ( !v3 )
    {
      v3 = (_WORD *)sub_1400143E0(64LL, 16LL * *((unsigned int *)v4 + 2), 1230201170LL, 0LL);
      if ( !v3 )
        goto LABEL_52;
    }
    v1 = KeQueryLogicalProcessorRelationship(&ProcNumber, RelationGroup|RelationProcessorPackage, &Dst, &Length);
    if ( v1 < 0 )
      goto LABEL_39;
    v32 = 0;
    memset_0(&Information, 0, sizeof(Information));
    if ( v2 )
    {
      v33 = v3;
      v34 = v2;
      do
      {
        if ( v33[4] == Dst.Processor.GroupMask[0].Group && *(_QWORD *)v33 == Dst.Processor.GroupMask[0].Mask )
          v32 = 1;
        v33 += 8;
        --v34;
      }
      while ( v34 );
    }
    Length = 80;
    v1 = KeQueryLogicalProcessorRelationship(&ProcNumber, RelationProcessorCore, &Information, &Length);
    if ( v1 >= 0 )
    {
      v35 = Information.Processor.Reserved[0];
      if ( Information.Processor.Reserved[0] )
      {
        ++v49;
        if ( !v32 )
        {
          v38 = v2++;
          v37 = 2 * v38;
          ++v47;
LABEL_34:
          v3[4 * v37 + 4] = Dst.Processor.GroupMask[0].Group;
          *(_QWORD *)&v3[4 * v37] = Dst.Processor.GroupMask[0].Mask;
        }
      }
      else
      {
        ++v48;
        if ( !v32 )
        {
          v36 = v2++;
          v37 = 2 * v36;
          ++v46;
          goto LABEL_34;
        }
      }
      *(_BYTE *)(56 * v30 + *((_QWORD *)v4 + 4) + 4) = v35;
      if ( Information.Processor.GroupMask[0].Mask )
        *(_OWORD *)(56 * v30 + *((_QWORD *)v4 + 4) + 8) = *(_OWORD *)&Information.Group.GroupInfo[0].MaximumProcessorCount;
    }
    v15 = v52;
    if ( Dst.Processor.GroupMask[0].Mask )
      *(_OWORD *)(56 * v30 + *((_QWORD *)v4 + 4) + 24) = *(_OWORD *)&Dst.Group.GroupInfo[0].MaximumProcessorCount;
LABEL_39:
    v27 = v58;
    _bittestandreset64(&v18, v58);
LABEL_40:
    v58 = ++v27;
    if ( !v18 )
    {
      v22 = v55;
      v23 = v57;
      goto LABEL_42;
    }
  }
  v1 = -1073741811;
LABEL_46:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x49536152u);
  if ( v1 >= 0 )
  {
    qword_140168E40 = v4;
    return 1;
  }
LABEL_52:
  sub_1401211E0();
  return 0;
}
