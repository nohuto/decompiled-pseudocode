/*
 * XREFs of Store @ 0x140013D20
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     WriteField @ 0x14000D02C (WriteField.c)
 *     CopyObjBuffer @ 0x140010868 (CopyObjBuffer.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     IsCompatableDSDTRevision @ 0x140014C60 (IsCompatableDSDTRevision.c)
 *     DumpObject @ 0x14006FE98 (DumpObject.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall Store(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v5; // eax
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int16 v11; // ax
  unsigned int v13; // edi
  _QWORD *v15; // rbx
  int v16; // ecx
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 *v19; // rax
  const void *ObjectTypeName; // rax
  const void *v21; // r8
  unsigned int v22; // ecx
  const void *v23; // r10
  int v24; // ecx
  int v25; // edx
  const void *v26; // rax
  const void *v27; // rax

  v2 = *(_QWORD *)(a2 + 80) + 40LL;
  v5 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 42LL);
  if ( (_WORD)v5 != 128 )
  {
    if ( (_WORD)v5 == 129 )
    {
      v2 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
      goto LABEL_5;
    }
    if ( v5 <= 0x10 )
    {
      v6 = 81921;
      if ( _bittest(&v6, v5) )
      {
LABEL_5:
        v7 = *(unsigned __int16 *)(v2 + 2);
        if ( (_DWORD)v7 == 133 )
        {
LABEL_22:
          FreeDataBuffs(v2, 1u);
        }
        else
        {
          switch ( *(_WORD *)(v2 + 2) )
          {
            case 1:
            case 2:
            case 3:
            case 4:
              goto LABEL_22;
            case 5:
            case 0xE:
              goto LABEL_8;
            default:
              if ( !*(_WORD *)(v2 + 2) )
                goto LABEL_22;
              break;
          }
        }
        goto LABEL_8;
      }
    }
    LogError(-1072431094);
    AcpiDiagTraceAmlError(a1, -1072431094);
    ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(v2 + 2));
    v21 = 0LL;
    v22 = 208;
LABEL_37:
    PrintDebugMessage(v22, ObjectTypeName, v21, 0LL, 0LL);
    return 3222536202LL;
  }
  v2 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL) + 64LL;
  v7 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL) + 66LL);
  if ( (_DWORD)v7 != 135 )
  {
    switch ( (int)v7 )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 14:
        goto LABEL_8;
      default:
        if ( (_DWORD)v7 == 133 || (_DWORD)v7 == 134 || !(_DWORD)v7 )
          goto LABEL_8;
        LogError(-1072431094);
        AcpiDiagTraceAmlError(a1, -1072431094);
        GetObjectTypeName(135LL);
        ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(v2 + 2));
        v21 = v23;
        v22 = 207;
        break;
    }
    goto LABEL_37;
  }
LABEL_8:
  v8 = *(_QWORD *)(a2 + 80);
  v9 = *(_QWORD *)(a2 + 88);
  if ( v9 != v8 )
  {
    *(_OWORD *)v9 = *(_OWORD *)v8;
    *(_OWORD *)(v9 + 16) = *(_OWORD *)(v8 + 16);
    *(_QWORD *)(v9 + 32) = *(_QWORD *)(v8 + 32);
    *(_OWORD *)v8 = 0LL;
    *(_OWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
  }
  v10 = *(_QWORD *)(a2 + 88);
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *(_WORD *)(v2 + 2);
      if ( v11 != 128 )
        break;
      v2 = *(_QWORD *)(v2 + 16) + 64LL;
    }
    if ( v11 != 129 )
      break;
    v2 = *(_QWORD *)(v2 + 16);
  }
  if ( *(_WORD *)(v2 + 2) )
  {
    switch ( *(_WORD *)(v2 + 2) )
    {
      case 1:
        v15 = (_QWORD *)(v2 + 16);
        if ( !(unsigned __int8)IsCompatableDSDTRevision() )
          return (unsigned int)CopyObjBuffer(v15, 4uLL, v10);
        v16 = *(unsigned __int16 *)(v10 + 2);
        v13 = 0;
        if ( v16 == 1 )
        {
          v17 = (_QWORD *)(v10 + 16);
          v18 = 8;
        }
        else
        {
          v24 = v16 - 2;
          if ( v24 )
          {
            if ( v24 != 1 )
            {
              LogError(-1072431095);
              AcpiDiagTraceAmlError(0LL, -1072431095);
              v26 = (const void *)GetObjectTypeName(*(unsigned __int16 *)(v10 + 2));
              PrintDebugMessage(0x1Eu, v26, 0LL, 0LL, 0LL);
              return (unsigned int)-1072431095;
            }
            v17 = *(_QWORD **)(v10 + 32);
            v18 = *(_DWORD *)(v10 + 24);
          }
          else
          {
            v17 = *(_QWORD **)(v10 + 32);
            v18 = *(_DWORD *)(v10 + 24) - 1;
          }
        }
        if ( v15 != v17 )
        {
          *v15 = 0LL;
          if ( v18 >= 8 )
            v18 = 8;
          memmove(v15, v17, v18);
        }
        return v13;
      case 2:
        v25 = *(_DWORD *)(v2 + 24);
        if ( v25 )
          return (unsigned int)CopyObjBuffer(*(void **)(v2 + 32), (unsigned int)(v25 - 1), *(_QWORD *)(a2 + 88));
        v13 = -1073741811;
        break;
      case 3:
        return (unsigned int)CopyObjBuffer(*(void **)(v2 + 32), *(unsigned int *)(v2 + 24), *(_QWORD *)(a2 + 88));
      case 5:
        v19 = HeapAlloc((_QWORD *)(a1 + 480), 1297237576, 0x30u);
        if ( v19 )
        {
          v13 = 0;
          v19[1] = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = v19;
          v19[3] = (__int64)AccFieldUnit;
          *(_DWORD *)v19 = 1430668097;
          v19[4] = v2;
          v19[5] = v10;
        }
        else
        {
          LogError(-1072431102);
          AcpiDiagTraceAmlError(a1, -1072431102);
          PrintDebugMessage(0x99u, 0LL, 0LL, 0LL, 0LL);
          return (unsigned int)-1072431102;
        }
        return v13;
      case 0xE:
        return (unsigned int)WriteField(a1, v2, *(_QWORD *)(v2 + 32) + 12LL, *(_QWORD *)(a2 + 88));
      case 0x10:
        if ( (gDebugger & 0x20000) != 0 )
          DumpObject(*(_QWORD *)(a2 + 88), v7, 0LL);
        return 0;
      default:
        LogError(-1072431095);
        AcpiDiagTraceAmlError(a1, -1072431095);
        v27 = (const void *)GetObjectTypeName(*(unsigned __int16 *)(v2 + 2));
        PrintDebugMessage(0xD7u, v27, 0LL, 0LL, 0LL);
        return (unsigned int)-1072431095;
    }
  }
  else
  {
    return (unsigned int)DupObjData(gpheapGlobal, v2, *(_QWORD *)(a2 + 88));
  }
  return v13;
}
