/*
 * XREFs of RtlpIcEmulateInstruction @ 0x140C5C9F8
 * Callers:
 *     KiTpCompletion @ 0x140C5C010 (KiTpCompletion.c)
 *     RtlpIcParseInstruction @ 0x140C5D4F8 (RtlpIcParseInstruction.c)
 * Callees:
 *     RtlpIcAccessMemory @ 0x140C5C198 (RtlpIcAccessMemory.c)
 *     RtlpIcDecodeModRm @ 0x140C5C290 (RtlpIcDecodeModRm.c)
 *     RtlpIcDecodeModRmOperand @ 0x140C5C37C (RtlpIcDecodeModRmOperand.c)
 *     RtlpIcEmulateGroup0Instruction @ 0x140C5C4D4 (RtlpIcEmulateGroup0Instruction.c)
 *     RtlpIcEmulateGroup11Instruction @ 0x140C5C734 (RtlpIcEmulateGroup11Instruction.c)
 *     RtlpIcEmulateGroup1Instruction @ 0x140C5C800 (RtlpIcEmulateGroup1Instruction.c)
 *     RtlpIcEmulateMovzx @ 0x140C5D1FC (RtlpIcEmulateMovzx.c)
 *     RtlpIcEmulateRegisterPushPop @ 0x140C5D310 (RtlpIcEmulateRegisterPushPop.c)
 *     RtlpIcFetchImmediateOperand @ 0x140C5D3E0 (RtlpIcFetchImmediateOperand.c)
 *     RtlpIcFetchInstructionBytes @ 0x140C5D45C (RtlpIcFetchInstructionBytes.c)
 *     RtlpIcGetRegisterAddressByIndex @ 0x140C5D4A0 (RtlpIcGetRegisterAddressByIndex.c)
 *     RtlpIcReadOperandValue @ 0x140C5D63C (RtlpIcReadOperandValue.c)
 *     RtlpIcSetFlagsZeroSignParity @ 0x140C5D870 (RtlpIcSetFlagsZeroSignParity.c)
 *     RtlpIcSetImmediateOperandSize @ 0x140C5D8E0 (RtlpIcSetImmediateOperandSize.c)
 *     RtlpIcSignExtendOperandValue @ 0x140C5D910 (RtlpIcSignExtendOperandValue.c)
 *     RtlpIcWriteRegisterValue @ 0x140C5D93C (RtlpIcWriteRegisterValue.c)
 */

__int64 __fastcall RtlpIcEmulateInstruction(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rdx
  int InstructionBytes; // ebx
  __int64 v7; // r8
  int v8; // eax
  char v9; // r14
  int v10; // r9d
  __int64 v11; // r8
  int v12; // r9d
  int v13; // r9d
  _QWORD *RegisterAddressByIndex; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // r9d
  int v18; // r9d
  __int64 v19; // rax
  int v20; // r9d
  _QWORD *v21; // rax
  char v22; // r14
  int v23; // r9d
  int v24; // r9d
  _QWORD *v25; // rax
  _DWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  char v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  volatile void *v35; // [rsp+40h] [rbp-28h] BYREF
  __int64 v36; // [rsp+48h] [rbp-20h] BYREF
  __int64 v37[3]; // [rsp+50h] [rbp-18h] BYREF
  char v38; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v39; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v40; // [rsp+B0h] [rbp+48h] BYREF
  int v41; // [rsp+B8h] [rbp+50h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 21);
  LOBYTE(v40) = 0;
  v36 = 0LL;
  v37[0] = 0LL;
  v35 = 0LL;
  v38 = 0;
  LOBYTE(v39) = 0;
  v41 = v2;
  InstructionBytes = RtlpIcFetchInstructionBytes(a1, &v40, 1LL, &v41);
  if ( InstructionBytes < 0 )
    goto LABEL_109;
  if ( (v40 & 0xF0) == 0x50 )
  {
    v8 = RtlpIcEmulateRegisterPushPop(a1, a2, (unsigned __int8)v40);
    goto LABEL_4;
  }
  if ( (v40 & 0xF0) == 0xB0 )
  {
    v9 = v40;
    if ( !a2 )
    {
      if ( (v40 & 8) == 0 )
        *(_BYTE *)(a1 + 1) = 8;
      LOBYTE(v7) = 32;
      LOBYTE(v5) = 16;
      RtlpIcSetImmediateOperandSize(a1, v5, v7);
    }
    InstructionBytes = RtlpIcFetchImmediateOperand(a1, a2, &v41);
    if ( InstructionBytes < 0 )
      goto LABEL_109;
    if ( a2 )
    {
      LOBYTE(v10) = *(_BYTE *)(a1 + 25) & 1;
      RtlpIcWriteRegisterValue(a1, a2, v9 & 7, v10, *(_QWORD *)(a1 + 32));
      InstructionBytes = 0;
      goto LABEL_106;
    }
LABEL_30:
    InstructionBytes = 0;
    goto LABEL_111;
  }
  if ( (v40 & 0xC4) == 0 )
  {
    v8 = RtlpIcEmulateGroup0Instruction((_BYTE *)a1, a2, v40, &v41);
    goto LABEL_4;
  }
  if ( (unsigned __int8)v40 <= 0x8Du )
  {
    if ( (unsigned __int8)v40 != 141 )
    {
      if ( (unsigned __int8)v40 <= 0x85u )
      {
        if ( (unsigned __int8)v40 == 133 )
        {
LABEL_28:
          InstructionBytes = RtlpIcDecodeModRm(a1, a2, &v41);
          if ( InstructionBytes < 0 )
            goto LABEL_109;
          if ( a2 )
          {
            RtlpIcDecodeModRmOperand(a1, a2, (__int64 *)&v35, &v38, &v39);
            LOBYTE(v12) = v38;
            InstructionBytes = RtlpIcReadOperandValue(a1, a2, (_DWORD)v35, v12, v39, (__int64)&v36);
            if ( InstructionBytes < 0 )
              return (unsigned int)InstructionBytes;
            LOBYTE(v13) = (*(_BYTE *)(a1 + 25) & 4) != 0;
            RegisterAddressByIndex = (_QWORD *)RtlpIcGetRegisterAddressByIndex(
                                                 a1,
                                                 a2,
                                                 (*(unsigned __int8 *)(a1 + 26) >> 3) & 7,
                                                 v13,
                                                 1);
            v37[0] = RtlpIcSignExtendOperandValue(a1, *RegisterAddressByIndex);
            v15 = v36 & v37[0];
            *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= 0xFFFFF7FE;
            RtlpIcSetFlagsZeroSignParity(v16, a2, v15);
            goto LABEL_106;
          }
          goto LABEL_30;
        }
        if ( (unsigned __int8)v40 != 15 )
        {
          switch ( (unsigned __int8)v40 )
          {
            case 0x80u:
              if ( a2 )
                goto LABEL_42;
              *(_BYTE *)(a1 + 1) = 8;
              break;
            case 0x81u:
              if ( a2 )
                goto LABEL_42;
              break;
            case 0x82u:
              if ( !a2 )
              {
                *(_BYTE *)(a1 + 1) = 8;
LABEL_35:
                LOBYTE(v7) = 8;
                LOBYTE(v5) = 8;
LABEL_41:
                RtlpIcSetImmediateOperandSize(a1, v5, v7);
              }
LABEL_42:
              v8 = RtlpIcEmulateGroup1Instruction(a1, a2, &v41);
              goto LABEL_4;
            case 0x83u:
              if ( a2 )
                goto LABEL_42;
              goto LABEL_35;
            case 0x84u:
              if ( !a2 )
                *(_BYTE *)(a1 + 1) = 8;
              goto LABEL_28;
            default:
LABEL_108:
              InstructionBytes = -1073741637;
              goto LABEL_109;
          }
          LOBYTE(v5) = 16;
          LOBYTE(v7) = 32;
          goto LABEL_41;
        }
        InstructionBytes = RtlpIcFetchInstructionBytes(a1, &v40, 1LL, &v41);
        if ( InstructionBytes < 0 )
          goto LABEL_109;
        v11 = (unsigned __int8)v40;
        if ( (unsigned __int8)v40 != 182 && (unsigned __int8)v40 != 183 )
          goto LABEL_108;
        LOBYTE(v11) = 8 * ((v40 & 1) + 1);
        v8 = RtlpIcEmulateMovzx(a1, a2, v11, &v41);
LABEL_4:
        InstructionBytes = v8;
        if ( v8 >= 0 )
        {
LABEL_105:
          if ( a2 )
          {
LABEL_106:
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 248LL) += *(unsigned __int8 *)(a1 + 24);
            v31 = *(_QWORD *)(a2 + 8);
            if ( (*(_DWORD *)(v31 + 48) & 0x100080) == 0x100080 )
            {
              v32 = *(int *)(v31 + 1256);
              v33 = *(_QWORD *)(v31 + 248);
              *(_WORD *)(v32 + v31 + 1250) &= ~1u;
              *(_QWORD *)(v32 + v31 + 1240) = v33;
            }
            return (unsigned int)InstructionBytes;
          }
          goto LABEL_110;
        }
LABEL_109:
        if ( a2 )
          return (unsigned int)InstructionBytes;
LABEL_110:
        if ( InstructionBytes < 0 )
          return (unsigned int)InstructionBytes;
LABEL_111:
        *(_BYTE *)(a1 + 24) = v41;
        return (unsigned int)InstructionBytes;
      }
      if ( (unsigned __int8)v40 == 134 )
      {
        if ( !a2 )
          *(_BYTE *)(a1 + 1) = 8;
      }
      else if ( (unsigned __int8)v40 != 135 )
      {
        if ( (unsigned __int8)v40 == 136 )
        {
          if ( !a2 )
            *(_BYTE *)(a1 + 1) = 8;
        }
        else if ( (unsigned __int8)v40 != 137 )
        {
          if ( (unsigned __int8)v40 == 138 )
          {
            if ( !a2 )
              *(_BYTE *)(a1 + 1) = 8;
          }
          else if ( (unsigned __int8)v40 != 139 )
          {
            goto LABEL_108;
          }
          InstructionBytes = RtlpIcDecodeModRm(a1, a2, &v41);
          if ( InstructionBytes < 0 )
            goto LABEL_109;
          if ( !a2 )
            goto LABEL_30;
          RtlpIcDecodeModRmOperand(a1, a2, (__int64 *)&v35, &v38, &v39);
          LOBYTE(v17) = v38;
          InstructionBytes = RtlpIcReadOperandValue(a1, a2, (_DWORD)v35, v17, v39, (__int64)v37);
          if ( InstructionBytes < 0 )
            return (unsigned int)InstructionBytes;
          v19 = v37[0];
LABEL_75:
          LOBYTE(v18) = (*(_BYTE *)(a1 + 25) & 4) != 0;
          RtlpIcWriteRegisterValue(a1, a2, (*(unsigned __int8 *)(a1 + 26) >> 3) & 7, v18, v19);
          goto LABEL_106;
        }
        InstructionBytes = RtlpIcDecodeModRm(a1, a2, &v41);
        if ( InstructionBytes < 0 )
          goto LABEL_109;
        if ( a2 )
        {
          RtlpIcDecodeModRmOperand(a1, a2, (__int64 *)&v35, &v38, &v39);
          LOBYTE(v20) = (*(_BYTE *)(a1 + 25) & 4) != 0;
          v21 = (_QWORD *)RtlpIcGetRegisterAddressByIndex(a1, a2, (*(unsigned __int8 *)(a1 + 26) >> 3) & 7, v20, 1);
          v37[0] = RtlpIcSignExtendOperandValue(a1, *v21);
          v40 = v37[0];
          InstructionBytes = RtlpIcAccessMemory(a2, &v40, v35, v38, v39, *(_BYTE *)(a1 + 1) >> 3, 1);
          if ( InstructionBytes < 0 )
            return (unsigned int)InstructionBytes;
          goto LABEL_106;
        }
        goto LABEL_30;
      }
      InstructionBytes = RtlpIcDecodeModRm(a1, a2, &v41);
      if ( InstructionBytes < 0 )
        goto LABEL_109;
      if ( !a2 )
        goto LABEL_30;
      RtlpIcDecodeModRmOperand(a1, a2, (__int64 *)&v35, &v38, &v39);
      v22 = v39;
      LOBYTE(v23) = v38;
      InstructionBytes = RtlpIcReadOperandValue(a1, a2, (_DWORD)v35, v23, v39, (__int64)&v36);
      if ( InstructionBytes < 0 )
        return (unsigned int)InstructionBytes;
      LOBYTE(v24) = (*(_BYTE *)(a1 + 25) & 4) != 0;
      v25 = (_QWORD *)RtlpIcGetRegisterAddressByIndex(a1, a2, (*(unsigned __int8 *)(a1 + 26) >> 3) & 7, v24, 1);
      v37[0] = RtlpIcSignExtendOperandValue(a1, *v25);
      v39 = v37[0];
      InstructionBytes = RtlpIcAccessMemory(a2, &v39, v35, v38, v22, *(_BYTE *)(a1 + 1) >> 3, 1);
      if ( InstructionBytes < 0 )
        return (unsigned int)InstructionBytes;
      v19 = v36;
      goto LABEL_75;
    }
    InstructionBytes = RtlpIcDecodeModRm(a1, a2, &v41);
    if ( InstructionBytes < 0 )
      goto LABEL_109;
    if ( !a2 )
      goto LABEL_30;
    RtlpIcDecodeModRmOperand(a1, a2, (__int64 *)&v35, &v38, &v39);
    if ( (_BYTE)v39 )
    {
      v26 = *(_DWORD **)a2;
      InstructionBytes = -1073741795;
      *v26 = -1073741795;
      v26[6] = 0;
      return (unsigned int)InstructionBytes;
    }
    v19 = (__int64)v35;
    goto LABEL_75;
  }
  if ( (unsigned __int8)v40 >= 0xCCu )
    goto LABEL_108;
  if ( (unsigned __int8)v40 == 144 )
  {
    if ( (*(_BYTE *)(a1 + 25) & 1) == 0 )
      goto LABEL_105;
    goto LABEL_108;
  }
  if ( (unsigned __int8)v40 == 156 )
  {
    if ( (*(_BYTE *)(a1 + 25) & 8) != 0 )
    {
      if ( a2 )
      {
        v29 = *(_QWORD *)(a2 + 8);
        v30 = *(_BYTE *)(a2 + 16);
        v36 = *(_DWORD *)(v29 + 68) & 0xFCFFFF;
        InstructionBytes = RtlpIcAccessMemory(a2, &v36, (volatile void *)(*(_QWORD *)(v29 + 152) - 8LL), v30, 0, 8u, 1);
        if ( InstructionBytes < 0 )
          return (unsigned int)InstructionBytes;
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 152LL) -= 8LL;
        goto LABEL_106;
      }
      goto LABEL_30;
    }
    goto LABEL_108;
  }
  if ( (unsigned __int8)v40 == 194 )
  {
    InstructionBytes = RtlpIcFetchInstructionBytes(a1, a1 + 32, 2LL, &v41);
    if ( InstructionBytes < 0 )
      goto LABEL_109;
  }
  else if ( (unsigned __int8)v40 != 195 )
  {
    if ( (unsigned __int8)v40 == 198 )
    {
      if ( a2 )
      {
LABEL_93:
        v8 = RtlpIcEmulateGroup11Instruction(a1, a2, &v41);
        goto LABEL_4;
      }
      *(_BYTE *)(a1 + 1) = 8;
    }
    else
    {
      if ( (unsigned __int8)v40 != 199 )
        goto LABEL_108;
      if ( a2 )
        goto LABEL_93;
    }
    LOBYTE(v5) = 16;
    LOBYTE(v7) = 32;
    RtlpIcSetImmediateOperandSize(a1, v5, v7);
    goto LABEL_93;
  }
  if ( !a2 )
    goto LABEL_30;
  InstructionBytes = RtlpIcAccessMemory(
                       a2,
                       &v36,
                       *(volatile void **)(*(_QWORD *)(a2 + 8) + 152LL),
                       *(_BYTE *)(a2 + 16),
                       0,
                       8u,
                       0);
  if ( InstructionBytes >= 0 )
  {
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 248LL) = v36;
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 152LL) += *(_QWORD *)(a1 + 32) + 8LL;
    v27 = *(_QWORD *)(a2 + 8);
    if ( (*(_DWORD *)(v27 + 48) & 0x100080) == 0x100080 )
    {
      v28 = *(int *)(v27 + 1256);
      *(_QWORD *)(v28 + v27 + 1240) = *(_QWORD *)(v27 + 248);
      *(_WORD *)(v28 + v27 + 1250) = *(_WORD *)(v28 + v27 + 1250) & 0xFFFC | 2;
    }
    return 0;
  }
  return (unsigned int)InstructionBytes;
}
