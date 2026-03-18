/*
 * XREFs of DupObjData @ 0x140014650
 * Callers:
 *     RunContext @ 0x140009490 (RunContext.c)
 *     AsyncEvalObject @ 0x140009DE0 (AsyncEvalObject.c)
 *     ParseCall @ 0x14000B5D0 (ParseCall.c)
 *     ExprOp2_64 @ 0x140012500 (ExprOp2_64.c)
 *     Return @ 0x140013CF0 (Return.c)
 *     Store @ 0x140013D20 (Store.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 *     EvalPackageElement @ 0x140015D4C (EvalPackageElement.c)
 *     Match_64 @ 0x140016110 (Match_64.c)
 *     CopyObject @ 0x1400166E0 (CopyObject.c)
 *     Match_32 @ 0x1400175CC (Match_32.c)
 *     Simulator_CallbackWorker @ 0x14006C690 (Simulator_CallbackWorker.c)
 *     Simulator_Copy_Arguments @ 0x14006C874 (Simulator_Copy_Arguments.c)
 *     ParseDLMObjectInternal @ 0x14006E4EC (ParseDLMObjectInternal.c)
 *     NestAsyncEvalObject @ 0x1400704D4 (NestAsyncEvalObject.c)
 *     ParseNestedContext @ 0x1400707F0 (ParseNestedContext.c)
 *     ProcessLoadTable @ 0x1400711D0 (ProcessLoadTable.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     ReferenceObjectEx @ 0x140036D50 (ReferenceObjectEx.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall DupObjData(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // r14
  unsigned int v6; // ebp
  __int64 result; // rax
  int v8; // eax
  int v9; // edx
  __int64 *v10; // rax
  _DWORD *v11; // r12
  _DWORD *v12; // r15
  int v13; // edi
  __int64 v14; // rcx
  const void *ObjectTypeName; // rax

  v5 = a1;
  v6 = 0;
  if ( a2 == a3 )
    return 0LL;
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 32);
  if ( !*(_QWORD *)(a3 + 32) )
    return 0LL;
  v8 = *(unsigned __int16 *)(a3 + 2);
  switch ( v8 )
  {
    case 14:
      v9 = 1145455176;
      break;
    case 3:
      a1 = (_QWORD *)gpheapGlobal;
      v9 = 1179992648;
      break;
    case 2:
      a1 = (_QWORD *)gpheapGlobal;
      v9 = 1381258056;
      break;
    case 4:
      a1 = (_QWORD *)gpheapGlobal;
      v9 = 1196118088;
      break;
    default:
      switch ( *(_WORD *)(a3 + 2) )
      {
        case 5:
          v9 = 1430537800;
          goto LABEL_9;
        case 7:
          v9 = 1314276680;
          goto LABEL_9;
        case 8:
          v9 = 1413827912;
          goto LABEL_9;
        case 9:
          v9 = 1414876488;
          goto LABEL_9;
        case 0xA:
          v9 = 1196576584;
          goto LABEL_9;
        case 0xB:
          v9 = 1397903432;
          goto LABEL_9;
        case 0xC:
          v9 = 1330794568;
          goto LABEL_9;
        case 0x82:
          v9 = 1179337288;
          goto LABEL_9;
        case 0x83:
          v9 = 1329874504;
          goto LABEL_9;
        case 0x84:
          v9 = 1180191048;
          goto LABEL_9;
        default:
          LogError(-1072431101);
          AcpiDiagTraceAmlError(0LL, -1072431101);
          ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a3 + 2));
          PrintDebugMessage(0x70u, ObjectTypeName, 0LL, 0LL, 0LL);
          *(_QWORD *)(a2 + 32) = 0LL;
          goto LABEL_43;
      }
  }
LABEL_9:
  v10 = HeapAlloc(a1, v9, *(_DWORD *)(a3 + 24));
  *(_QWORD *)(a2 + 32) = v10;
  if ( !v10 )
  {
LABEL_43:
    LogError(-1073741670);
    AcpiDiagTraceAmlError(0LL, -1073741670);
    PrintDebugMessage(0x2Bu, 0LL, 0LL, 0LL, 0LL);
    return 3221225626LL;
  }
  memmove(v10, *(const void **)(a3 + 32), *(unsigned int *)(a3 + 24));
  if ( *(_WORD *)(a2 + 2) == 4 )
  {
    v11 = *(_DWORD **)(a2 + 32);
    v12 = *(_DWORD **)(a3 + 32);
    v13 = 0;
    for ( *v11 = *v12; v13 < *v12; ++v13 )
    {
      v6 = DupObjData(v5, &v11[10 * v13 + 2], &v12[10 * v13 + 2]);
      if ( v6 )
        break;
    }
    goto LABEL_15;
  }
  if ( *(_WORD *)(a2 + 2) == 5 )
    goto LABEL_44;
  if ( *(_WORD *)(a2 + 2) != 130 )
  {
    if ( *(_WORD *)(a2 + 2) != 131 )
    {
      if ( *(_WORD *)(a2 + 2) != 132 )
      {
LABEL_15:
        *(_WORD *)a2 &= ~1u;
        result = v6;
        _InterlockedExchange((volatile __int32 *)(a2 + 8), 0);
        return result;
      }
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) + 112LL));
      v14 = **(_QWORD **)(a2 + 32);
      goto LABEL_26;
    }
LABEL_44:
    ReferenceObjectEx(**(_QWORD **)(a2 + 32));
    goto LABEL_15;
  }
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(a2 + 32) + 112LL));
  v14 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL);
LABEL_26:
  if ( (gdwfAMLI & 4) == 0 )
    goto LABEL_15;
  _InterlockedIncrement((volatile signed __int32 *)(v14 + 112));
  *(_WORD *)a2 &= ~1u;
  result = 0LL;
  _InterlockedExchange((volatile __int32 *)(a2 + 8), 0);
  return result;
}
