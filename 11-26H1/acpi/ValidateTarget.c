/*
 * XREFs of ValidateTarget @ 0x140014990
 * Callers:
 *     Concat @ 0x140015240 (Concat.c)
 *     ToHexStr @ 0x1400155F0 (ToHexStr.c)
 *     CondRefOf @ 0x140015920 (CondRefOf.c)
 *     ToInteger @ 0x1400159E0 (ToInteger.c)
 *     Divide @ 0x140015A70 (Divide.c)
 *     MidString @ 0x140015EA0 (MidString.c)
 *     ExprOp2_32 @ 0x140016334 (ExprOp2_32.c)
 *     ExprOp1_64 @ 0x140016520 (ExprOp1_64.c)
 *     CopyObject @ 0x1400166E0 (CopyObject.c)
 *     ToString @ 0x140016D20 (ToString.c)
 *     ToBuffer @ 0x140016F00 (ToBuffer.c)
 *     ExprOp1_32 @ 0x140017E0C (ExprOp1_32.c)
 *     ToDecStr @ 0x140044A30 (ToDecStr.c)
 *     ConcatenateResTemplate @ 0x140052780 (ConcatenateResTemplate.c)
 *     Load @ 0x140070B90 (Load.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     RtlStringCbPrintfA @ 0x14000903C (RtlStringCbPrintfA.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

__int64 __fastcall ValidateTarget(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // eax
  _WORD *v5; // rbx
  unsigned int v7; // edi
  __int64 v8; // r8
  int v11; // ecx
  int v12; // eax
  int v14; // ecx
  int v15; // eax
  const void *ObjectTypeName; // rax
  const void *v17; // rbx
  const void *v18; // rsi
  char pszDest[256]; // [rsp+40h] [rbp-138h] BYREF

  v4 = *(unsigned __int16 *)(a2 + 2);
  v5 = (_WORD *)(a2 + 2);
  v7 = 0;
  v8 = a2;
  if ( (_WORD)v4 == 128 )
  {
    v8 = *(_QWORD *)(a2 + 16) + 64LL;
  }
  else if ( (_WORD)v4 == 129 )
  {
    v8 = *(_QWORD *)(a2 + 16);
  }
  else if ( v4 > 0x10 || (v11 = 81921, !_bittest(&v11, v4)) )
  {
    LogError(-1072431094);
    AcpiDiagTraceAmlError(a1, -1072431094);
    ObjectTypeName = (const void *)GetObjectTypeName((unsigned __int16)*v5);
    PrintDebugMessage(0xD0u, ObjectTypeName, 0LL, 0LL, 0LL);
    return (unsigned int)-1072431094;
  }
  *(_QWORD *)a4 = v8;
  v12 = *(unsigned __int16 *)(v8 + 2);
  if ( *v5 == 128 )
  {
    v14 = *(unsigned __int16 *)(v8 + 2);
    if ( v12 != a3 )
    {
      if ( v12 == 14 )
      {
        if ( a3 == 1 )
          return v7;
        v15 = 13;
      }
      else
      {
        v15 = v12 - 1;
      }
      switch ( v15 )
      {
        case 0:
        case 1:
        case 2:
        case 3:
          v14 = 133;
          goto LABEL_23;
        case 4:
        case 13:
          v14 = 134;
LABEL_23:
          if ( v14 == a3 )
            return v7;
          goto LABEL_15;
        default:
LABEL_15:
          if ( a3 == 135 && (unsigned int)(v14 - 133) <= 1 )
            return v7;
          if ( v14 )
          {
            if ( !a3 )
              return v7;
          }
          else if ( a3 != 134 )
          {
            return v7;
          }
          LogError(-1072431094);
          AcpiDiagTraceAmlError(a1, -1072431094);
          v17 = (const void *)GetObjectTypeName(a3);
          v18 = (const void *)GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)a4 + 2LL));
          if ( !(_BYTE)KdDebuggerEnabled )
          {
            RtlStringCbPrintfA(pszDest, 0x100uLL, "AMLIDBG: !amli err 0x%x %p %p %p %p", 207, v18, v17, 0LL, 0LL);
            DbgPrintEx(0x19u, 0, "%s\n", pszDest);
            return (unsigned int)-1072431094;
          }
          DbgPrintEx(0x19u, 0, off_14008DA58, v18, v17, 0LL, 0LL);
          if ( (gDebugger & 0x40000) == 0 )
            return (unsigned int)-1072431094;
          RtlStringCbPrintfA(pszDest, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", 207, v18, v17, 0LL, 0LL);
          DbgCommandString("ACPI", pszDest);
          v7 = -1072431094;
          break;
      }
    }
  }
  else if ( v12 == 133 )
  {
LABEL_11:
    FreeDataBuffs(v8, 1u);
  }
  else
  {
    switch ( *(_WORD *)(v8 + 2) )
    {
      case 1:
      case 2:
      case 3:
      case 4:
        goto LABEL_11;
      case 5:
      case 0xE:
        return v7;
      default:
        if ( !*(_WORD *)(v8 + 2) )
          goto LABEL_11;
        break;
    }
  }
  return v7;
}
