/*
 * XREFs of ExprOp2_64 @ 0x140012500
 * Callers:
 *     ExprOp2 @ 0x1400162D0 (ExprOp2.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     WriteField @ 0x14000D02C (WriteField.c)
 *     CopyObjBuffer @ 0x140010868 (CopyObjBuffer.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     IsCompatableDSDTRevision @ 0x140014C60 (IsCompatableDSDTRevision.c)
 *     DumpObject @ 0x14006FE98 (DumpObject.c)
 */

__int64 __fastcall ExprOp2_64(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  unsigned int v6; // eax
  int v7; // ecx
  __int64 v8; // rdx
  unsigned int v9; // esi
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int16 v13; // ax
  char v15; // al
  size_t v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  const void *ObjectTypeName; // rax
  const void *v23; // r8
  unsigned int v24; // ecx
  const void *v25; // r10
  int v26; // edx
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  const void *v29; // rax

  result = ValidateArgTypes(a1, a2[10], 0LL, "II");
  if ( (int)result < 0 )
    return result;
  v5 = a2[10] + 80LL;
  v6 = *(unsigned __int16 *)(a2[10] + 82LL);
  if ( (_WORD)v6 == 128 )
  {
    v5 = *(_QWORD *)(a2[10] + 96LL) + 64LL;
    v8 = *(unsigned __int16 *)(*(_QWORD *)(a2[10] + 96LL) + 66LL);
    if ( (_DWORD)v8 == 135 )
      goto LABEL_9;
    switch ( *(_WORD *)(*(_QWORD *)(a2[10] + 96LL) + 66LL) )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 0xE:
        goto LABEL_9;
      default:
        if ( (_DWORD)v8 == 133 || (_DWORD)v8 == 134 || !*(_WORD *)(*(_QWORD *)(a2[10] + 96LL) + 66LL) )
          goto LABEL_9;
        LogError(-1072431094);
        AcpiDiagTraceAmlError(a1, -1072431094);
        GetObjectTypeName(135LL);
        ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(v5 + 2));
        v23 = v25;
        v24 = 207;
        break;
    }
LABEL_45:
    PrintDebugMessage(v24, ObjectTypeName, v23, 0LL, 0LL);
    return 3222536202LL;
  }
  if ( (_WORD)v6 == 129 )
  {
    v5 = *(_QWORD *)(a2[10] + 96LL);
    goto LABEL_6;
  }
  if ( v6 > 0x10 || (v7 = 81921, !_bittest(&v7, v6)) )
  {
    LogError(-1072431094);
    AcpiDiagTraceAmlError(a1, -1072431094);
    ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(v5 + 2));
    v23 = 0LL;
    v24 = 208;
    goto LABEL_45;
  }
LABEL_6:
  v8 = *(unsigned __int16 *)(v5 + 2);
  if ( (_DWORD)v8 == 133 )
  {
LABEL_29:
    FreeDataBuffs(v5, 1u);
  }
  else
  {
    switch ( *(_WORD *)(v5 + 2) )
    {
      case 1:
      case 2:
      case 3:
      case 4:
        goto LABEL_29;
      case 5:
      case 0xE:
        break;
      default:
        if ( !*(_WORD *)(v5 + 2) )
          goto LABEL_29;
        break;
    }
  }
LABEL_9:
  *(_WORD *)(a2[11] + 2LL) = 1;
  v9 = 0;
  v10 = *(_DWORD *)(a2[7] + 8LL);
  if ( v10 == 114 )
  {
    v11 = *(_QWORD *)(a2[10] + 16LL) + *(_QWORD *)(a2[10] + 56LL);
  }
  else
  {
    if ( v10 != 123 )
    {
      switch ( v10 )
      {
        case 116:
          v8 = *(_QWORD *)(a2[10] + 16LL) - *(_QWORD *)(a2[10] + 56LL);
          *(_QWORD *)(a2[11] + 16LL) = v8;
          break;
        case 119:
          v11 = *(_QWORD *)(a2[10] + 16LL) * *(_QWORD *)(a2[10] + 56LL);
          goto LABEL_11;
        case 121:
          v18 = a2[10];
          v19 = *(_QWORD *)(v18 + 56);
          if ( v19 >= 0x40 )
          {
            v8 = 0LL;
            *(_QWORD *)(a2[11] + 16LL) = 0LL;
          }
          else
          {
            v8 = *(_QWORD *)(v18 + 16) << v19;
            *(_QWORD *)(a2[11] + 16LL) = v8;
          }
          break;
        case 122:
          v20 = a2[10];
          v21 = *(_QWORD *)(v20 + 56);
          if ( v21 >= 0x40 )
          {
            v8 = 0LL;
            *(_QWORD *)(a2[11] + 16LL) = 0LL;
          }
          else
          {
            v8 = *(_QWORD *)(v20 + 16) >> v21;
            *(_QWORD *)(a2[11] + 16LL) = v8;
          }
          break;
        case 124:
          v11 = ~(*(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL));
          goto LABEL_11;
        case 125:
          v8 = *(_QWORD *)(a2[10] + 16LL) | *(_QWORD *)(a2[10] + 56LL);
          *(_QWORD *)(a2[11] + 16LL) = v8;
          break;
        case 126:
          v8 = ~(*(_QWORD *)(a2[10] + 16LL) | *(_QWORD *)(a2[10] + 56LL));
          *(_QWORD *)(a2[11] + 16LL) = v8;
          break;
        case 127:
          v8 = *(_QWORD *)(a2[10] + 16LL) ^ *(_QWORD *)(a2[10] + 56LL);
          *(_QWORD *)(a2[11] + 16LL) = v8;
          break;
        case 133:
          v27 = a2[10];
          v28 = *(_QWORD *)(v27 + 56);
          if ( v28 )
          {
            v8 = *(_QWORD *)(v27 + 16) % v28;
            *(_QWORD *)(a2[11] + 16LL) = v8;
          }
          else
          {
            *(_QWORD *)(a2[11] + 16LL) = 0LL;
          }
          break;
        default:
          goto LABEL_12;
      }
      goto LABEL_12;
    }
    v11 = *(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL);
  }
LABEL_11:
  *(_QWORD *)(a2[11] + 16LL) = v11;
LABEL_12:
  v12 = a2[11];
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = *(_WORD *)(v5 + 2);
      if ( v13 != 128 )
        break;
      v5 = *(_QWORD *)(v5 + 16) + 64LL;
    }
    if ( v13 != 129 )
      break;
    v5 = *(_QWORD *)(v5 + 16);
  }
  if ( *(_WORD *)(v5 + 2) )
  {
    switch ( *(_WORD *)(v5 + 2) )
    {
      case 1:
        v15 = IsCompatableDSDTRevision();
        v16 = 8LL;
        if ( !v15 )
          v16 = 4LL;
        return (unsigned int)CopyObjBuffer((void *)(v5 + 16), v16, v12);
      case 2:
        v26 = *(_DWORD *)(v5 + 24);
        if ( v26 )
          return (unsigned int)CopyObjBuffer(*(void **)(v5 + 32), (unsigned int)(v26 - 1), v12);
        v9 = -1073741811;
        break;
      case 3:
        return (unsigned int)CopyObjBuffer(*(void **)(v5 + 32), *(unsigned int *)(v5 + 24), v12);
      case 5:
        v17 = HeapAlloc((_QWORD *)(a1 + 480), 1297237576, 0x30u);
        if ( v17 )
        {
          v17[1] = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = v17;
          v17[3] = (__int64)AccFieldUnit;
          *(_DWORD *)v17 = 1430668097;
          v17[4] = v5;
          v17[5] = v12;
        }
        else
        {
          LogError(-1072431102);
          AcpiDiagTraceAmlError(a1, -1072431102);
          PrintDebugMessage(0x99u, 0LL, 0LL, 0LL, 0LL);
          return (unsigned int)-1072431102;
        }
        return v9;
      case 0xE:
        return (unsigned int)WriteField(a1, v5, *(_QWORD *)(v5 + 32) + 12LL, v12);
      case 0x10:
        if ( (gDebugger & 0x20000) != 0 )
          DumpObject(v12, v8, 0LL);
        return v9;
      default:
        LogError(-1072431095);
        AcpiDiagTraceAmlError(a1, -1072431095);
        v29 = (const void *)GetObjectTypeName(*(unsigned __int16 *)(v5 + 2));
        PrintDebugMessage(0xD7u, v29, 0LL, 0LL, 0LL);
        return (unsigned int)-1072431095;
    }
  }
  else
  {
    return (unsigned int)DupObjData(gpheapGlobal, v5, v12);
  }
  return v9;
}
