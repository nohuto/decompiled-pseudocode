/*
 * XREFs of WriteObject @ 0x140014190
 * Callers:
 *     ProcessIncDec @ 0x14000DFF0 (ProcessIncDec.c)
 *     Index @ 0x1400120A0 (Index.c)
 *     Concat @ 0x140015240 (Concat.c)
 *     ToHexStr @ 0x1400155F0 (ToHexStr.c)
 *     CondRefOf @ 0x140015920 (CondRefOf.c)
 *     ToInteger @ 0x1400159E0 (ToInteger.c)
 *     ProcessDivide @ 0x140015B20 (ProcessDivide.c)
 *     MidString @ 0x140015EA0 (MidString.c)
 *     ExprOp2_32 @ 0x140016334 (ExprOp2_32.c)
 *     ExprOp1_64 @ 0x140016520 (ExprOp1_64.c)
 *     CopyObject @ 0x1400166E0 (CopyObject.c)
 *     ToBuffer @ 0x140016F00 (ToBuffer.c)
 *     ExprOp1_32 @ 0x140017E0C (ExprOp1_32.c)
 *     ToDecStr @ 0x140044A30 (ToDecStr.c)
 *     ConcatenateResTemplate @ 0x140052780 (ConcatenateResTemplate.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     SupportsOnlyRawAccess @ 0x14000CA74 (SupportsOnlyRawAccess.c)
 *     CopyObjBuffer @ 0x140010868 (CopyObjBuffer.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     RawFieldAccess @ 0x140036EEC (RawFieldAccess.c)
 *     DumpObject @ 0x14006FE98 (DumpObject.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall WriteObject(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  unsigned int v8; // edi
  __int64 v10; // r13
  unsigned int v11; // r14d
  int v12; // ecx
  unsigned int v13; // ebp
  __int64 v14; // r12
  __int64 *v15; // rax
  unsigned int v16; // r15d
  int v17; // edx
  _DWORD *v18; // rcx
  _DWORD *v19; // rdx
  unsigned int v20; // ebp
  __int64 *v21; // rax
  int v22; // edx
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // ecx
  int v28; // ecx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  const void *ObjectTypeName; // rax
  const void *v33; // rax
  unsigned int v34; // [rsp+68h] [rbp+10h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(unsigned __int16 *)(a2 + 2);
      if ( (_WORD)v6 != 128 )
        break;
      a2 = *(_QWORD *)(a2 + 16) + 64LL;
    }
    if ( (_WORD)v6 != 129 )
      break;
    a2 = *(_QWORD *)(a2 + 16);
  }
  if ( !*(_WORD *)(a2 + 2) )
    return (unsigned int)DupObjData(gpheapGlobal, a2, a3);
  switch ( *(_WORD *)(a2 + 2) )
  {
    case 1:
      v8 = 0;
      v34 = 0;
      if ( !ghGetAcpiTableVersion || (ghGetAcpiTableVersion(1413763908LL, &v34), v34 < 2) )
      {
        v17 = *(unsigned __int16 *)(a3 + 2);
        v18 = (_DWORD *)(a2 + 16);
        if ( v17 == 1 )
        {
          v19 = (_DWORD *)(a3 + 16);
          v20 = 8;
          goto LABEL_22;
        }
        v31 = v17 - 2;
        if ( !v31 )
        {
          v19 = *(_DWORD **)(a3 + 32);
          v20 = *(_DWORD *)(a3 + 24) - 1;
LABEL_22:
          if ( v18 != v19 )
          {
            *v18 = 0;
            if ( v20 >= 4 )
              v20 = 4;
            memmove(v18, v19, v20);
          }
          return v8;
        }
        if ( v31 == 1 )
        {
          v19 = *(_DWORD **)(a3 + 32);
          v20 = *(_DWORD *)(a3 + 24);
          goto LABEL_22;
        }
LABEL_60:
        LogError(-1072431095);
        AcpiDiagTraceAmlError(0LL, -1072431095);
        ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a3 + 2));
        PrintDebugMessage(0x1Eu, ObjectTypeName, 0LL, 0LL, 0LL);
        return (unsigned int)-1072431095;
      }
      v22 = *(unsigned __int16 *)(a3 + 2);
      v23 = (_QWORD *)(a2 + 16);
      if ( v22 == 1 )
      {
        v24 = (_QWORD *)(a3 + 16);
        v25 = 8;
      }
      else
      {
        v29 = v22 - 2;
        if ( v29 )
        {
          if ( v29 != 1 )
            goto LABEL_60;
          v24 = *(_QWORD **)(a3 + 32);
          v25 = *(_DWORD *)(a3 + 24);
        }
        else
        {
          v24 = *(_QWORD **)(a3 + 32);
          v25 = *(_DWORD *)(a3 + 24) - 1;
        }
      }
      if ( v23 != v24 )
      {
        *v23 = 0LL;
        if ( v25 >= 8 )
          v25 = 8;
        memmove(v23, v24, v25);
      }
      return v8;
    case 2:
      v30 = *(_DWORD *)(a2 + 24);
      if ( v30 )
        return (unsigned int)CopyObjBuffer(*(void **)(a2 + 32), (unsigned int)(v30 - 1), a3);
      return (unsigned int)-1073741811;
    case 3:
      return (unsigned int)CopyObjBuffer(*(void **)(a2 + 32), *(unsigned int *)(a2 + 24), a3);
    case 5:
      v21 = HeapAlloc((_QWORD *)(a1 + 480), 1297237576, 0x30u);
      if ( v21 )
      {
        v21[1] = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v21;
        v8 = 0;
        v21[3] = (__int64)AccFieldUnit;
        *(_DWORD *)v21 = 1430668097;
        v21[4] = a2;
        v21[5] = a3;
      }
      else
      {
        LogError(-1072431102);
        AcpiDiagTraceAmlError(a1, -1072431102);
        PrintDebugMessage(0x99u, 0LL, 0LL, 0LL, 0LL);
        return (unsigned int)-1072431102;
      }
      return v8;
    case 0xE:
      v10 = *(_QWORD *)(a2 + 32) + 12LL;
      v11 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 32) + 20LL) + 7) >> 3;
      if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 24LL) & 0xFu) > 4 )
      {
        if ( v6 == 5 )
          return (unsigned int)RawFieldAccess(a1, 1LL, a2, a3);
        v16 = -1072431087;
        LogError(-1072431087);
        AcpiDiagTraceAmlError(a1, -1072431087);
        v26 = *(unsigned int *)(v10 + 12);
        v27 = 213;
        goto LABEL_39;
      }
      v12 = *(unsigned __int16 *)(a3 + 2);
      if ( v12 != 1 )
      {
        v28 = v12 - 2;
        if ( !v28 )
        {
          v14 = *(_QWORD *)(a3 + 32);
          v13 = *(_DWORD *)(a3 + 24) - 1;
          goto LABEL_13;
        }
        if ( v28 == 1 )
        {
          v13 = *(_DWORD *)(a3 + 24);
          v14 = *(_QWORD *)(a3 + 32);
          goto LABEL_13;
        }
        v16 = -1072431095;
        LogError(-1072431095);
        AcpiDiagTraceAmlError(a1, -1072431095);
        v26 = GetObjectTypeName(*(unsigned __int16 *)(a3 + 2));
        v27 = 214;
LABEL_39:
        PrintDebugMessage(v27, (const void *)v26, 0LL, 0LL, 0LL);
        return v16;
      }
      v13 = 8;
      v14 = a3 + 16;
      if ( v11 < 8 )
        v13 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 32) + 20LL) + 7) >> 3;
LABEL_13:
      if ( !SupportsOnlyRawAccess(a2) )
      {
        v15 = HeapAlloc((_QWORD *)(a1 + 480), 1297237576, 0x40u);
        if ( v15 )
        {
          v15[1] = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = v15;
          v15[3] = (__int64)WriteFieldLoop;
          v16 = 0;
          *(_DWORD *)v15 = 1279677015;
          v15[4] = a2;
          v15[5] = v10;
          v15[6] = v14;
          *((_DWORD *)v15 + 14) = v13;
          *((_DWORD *)v15 + 15) = v11;
          return v16;
        }
        v16 = -1072431102;
        LogError(-1072431102);
        AcpiDiagTraceAmlError(a1, -1072431102);
        v26 = 0LL;
        v27 = 153;
        goto LABEL_39;
      }
      return (unsigned int)RawFieldAccess(a1, 1LL, a2, a3);
    case 0x10:
      if ( (gDebugger & 0x20000) != 0 )
        DumpObject(a3, 128LL, 0LL);
      return 0;
    default:
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      v33 = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2 + 2));
      PrintDebugMessage(0xD7u, v33, 0LL, 0LL, 0LL);
      return (unsigned int)-1072431095;
  }
}
