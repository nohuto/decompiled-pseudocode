/*
 * XREFs of ValidateArgTypes @ 0x140013230
 * Callers:
 *     CreateXField @ 0x140011840 (CreateXField.c)
 *     SleepStall @ 0x140011960 (SleepStall.c)
 *     LNot @ 0x140011ED0 (LNot.c)
 *     DerefOf @ 0x140011F60 (DerefOf.c)
 *     While @ 0x140012000 (While.c)
 *     Index @ 0x1400120A0 (Index.c)
 *     Notify @ 0x1400123C0 (Notify.c)
 *     ExprOp2_64 @ 0x140012500 (ExprOp2_64.c)
 *     LogOp2 @ 0x140012A30 (LogOp2.c)
 *     LogOp2_32 @ 0x140012BEC (LogOp2_32.c)
 *     IfElse @ 0x140013020 (IfElse.c)
 *     Acquire @ 0x140014CB0 (Acquire.c)
 *     Release @ 0x140014E60 (Release.c)
 *     Concat @ 0x140015240 (Concat.c)
 *     ToHexStr @ 0x1400155F0 (ToHexStr.c)
 *     ToInteger @ 0x1400159E0 (ToInteger.c)
 *     Divide @ 0x140015A70 (Divide.c)
 *     MidString @ 0x140015EA0 (MidString.c)
 *     Match_64 @ 0x140016110 (Match_64.c)
 *     ExprOp2_32 @ 0x140016334 (ExprOp2_32.c)
 *     ExprOp1_64 @ 0x140016520 (ExprOp1_64.c)
 *     OSInterface @ 0x140016870 (OSInterface.c)
 *     ToString @ 0x140016D20 (ToString.c)
 *     ToBuffer @ 0x140016F00 (ToBuffer.c)
 *     Match_32 @ 0x1400175CC (Match_32.c)
 *     ExprOp1_32 @ 0x140017E0C (ExprOp1_32.c)
 *     ResetSignal @ 0x140036A80 (ResetSignal.c)
 *     Wait @ 0x140036BE0 (Wait.c)
 *     Buffer @ 0x1400395A0 (Buffer.c)
 *     Package @ 0x14003C780 (Package.c)
 *     ToDecStr @ 0x140044A30 (ToDecStr.c)
 *     ConcatenateResTemplate @ 0x140052780 (ConcatenateResTemplate.c)
 *     Fatal @ 0x140070B20 (Fatal.c)
 *     Load @ 0x140070B90 (Load.c)
 *     Unload @ 0x140070D20 (Unload.c)
 *     LoadTable @ 0x140070D90 (LoadTable.c)
 *     ProcessLoadTable @ 0x1400711D0 (ProcessLoadTable.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     ConvertToInteger @ 0x140015028 (ConvertToInteger.c)
 *     ConvertToBuffer @ 0x1400150F8 (ConvertToBuffer.c)
 *     ConvertToString @ 0x140016ABC (ConvertToString.c)
 *     ConvertToDDBHandle @ 0x1400557FC (ConvertToDDBHandle.c)
 */

__int64 __fastcall ValidateArgTypes(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  unsigned int v6; // r9d
  __int64 v9; // rax
  int v10; // edi
  __int64 v11; // rsi
  _BYTE *v13; // rbp
  _WORD *v14; // r14
  const void *v15; // rax
  const void *v16; // rax
  const void *ObjectTypeName; // rax
  unsigned int v18; // ecx
  const void *v19; // rax
  const void *v20; // rax
  const void *v21; // rax
  const void *v22; // rax
  const void *v23; // rax

  v6 = 0;
  v9 = -1LL;
  do
    ++v9;
  while ( a4[v9] );
  v10 = 0;
  v11 = (int)v9;
  if ( (int)v9 <= 0 )
    return 0LL;
  v13 = a4;
  v14 = (_WORD *)(a2 + 2);
  do
  {
    if ( v6 )
      break;
    if ( *v13 == 73 )
    {
      if ( *v14 != 1 && (!a3 || (v6 = ConvertToInteger(a2 + 40LL * v10, a2 + 40LL * v10, 128LL)) != 0) )
      {
        LogError(-1072431096);
        AcpiDiagTraceAmlError(a1, -1072431096);
        ObjectTypeName = (const void *)GetObjectTypeName((unsigned __int16)*v14);
        v18 = 198;
LABEL_31:
        PrintDebugMessage(v18, (const void *)v10, ObjectTypeName, 0LL, 0LL);
        v6 = -1072431096;
      }
    }
    else
    {
      switch ( *v13 )
      {
        case 'A':
          if ( *v14 != 129 )
          {
            LogError(-1072431095);
            AcpiDiagTraceAmlError(a1, -1072431095);
            v21 = (const void *)GetObjectTypeName((unsigned __int16)*v14);
            PrintDebugMessage(0xC3u, (const void *)v10, v21, 0LL, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'B':
          if ( *v14 != 3 && (!a3 || (v6 = ConvertToBuffer(a2 + 40LL * v10, a2 + 40LL * v10, 128LL)) != 0) )
          {
            LogError(-1072431096);
            AcpiDiagTraceAmlError(a1, -1072431096);
            ObjectTypeName = (const void *)GetObjectTypeName((unsigned __int16)*v14);
            v18 = 193;
            goto LABEL_31;
          }
          break;
        case 'C':
          if ( (unsigned __int16)(*v14 - 3) > 1u
            && (!a3 || (v6 = ConvertToBuffer(a2 + 40LL * v10, a2 + 40LL * v10, 128LL)) != 0) )
          {
            LogError(-1072431095);
            AcpiDiagTraceAmlError(a1, -1072431095);
            v15 = (const void *)GetObjectTypeName((unsigned __int16)*v14);
            PrintDebugMessage(0xC2u, (const void *)v10, v15, 0LL, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'D':
          if ( (unsigned __int16)(*v14 - 1) > 2u
            && (!a3 || (v6 = ConvertToInteger(a2 + 40LL * v10, a2 + 40LL * v10, 128LL)) != 0) )
          {
            LogError(-1072431095);
            AcpiDiagTraceAmlError(a1, -1072431095);
            v19 = (const void *)GetObjectTypeName((unsigned __int16)*v14);
            PrintDebugMessage(0xC7u, (const void *)v10, v19, 0LL, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'E':
          if ( (unsigned __int16)(*v14 - 1) > 2u
            && *v14 != 15
            && (!a3 || (v6 = ConvertToInteger(a2 + 40LL * v10, a2 + 40LL * v10, 128LL)) != 0) )
          {
            LogError(-1072431095);
            AcpiDiagTraceAmlError(a1, -1072431095);
            v20 = (const void *)GetObjectTypeName((unsigned __int16)*v14);
            PrintDebugMessage(0xC8u, (const void *)v10, v20, 0LL, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'F':
          if ( *v14 != 5 )
          {
            LogError(-1072431096);
            AcpiDiagTraceAmlError(a1, -1072431096);
            ObjectTypeName = (const void *)GetObjectTypeName((unsigned __int16)*v14);
            v18 = 197;
            goto LABEL_31;
          }
          break;
        case 'H':
          if ( *v14 == 1 )
          {
            if ( !a3 || (v6 = ConvertToDDBHandle(a2 + 40LL * v10, a2 + 40LL * v10, 128LL)) != 0 )
            {
              LogError(-1072431095);
              AcpiDiagTraceAmlError(a1, -1072431095);
              v23 = (const void *)GetObjectTypeName((unsigned __int16)*v14);
              PrintDebugMessage(0xC4u, (const void *)v10, v23, 0LL, 0LL);
              v6 = -1072431095;
            }
          }
          else if ( *v14 != 15 )
          {
            LogError(-1072431096);
            AcpiDiagTraceAmlError(a1, -1072431096);
            ObjectTypeName = (const void *)GetObjectTypeName((unsigned __int16)*v14);
            v18 = 196;
            goto LABEL_31;
          }
          break;
        case 'O':
          if ( *v14 != 128 )
          {
            LogError(-1072431095);
            AcpiDiagTraceAmlError(a1, -1072431095);
            v16 = (const void *)GetObjectTypeName((unsigned __int16)*v14);
            PrintDebugMessage(0xC9u, (const void *)v10, v16, 0LL, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'P':
          if ( *v14 != 4 )
          {
            LogError(-1072431096);
            AcpiDiagTraceAmlError(a1, -1072431096);
            ObjectTypeName = (const void *)GetObjectTypeName((unsigned __int16)*v14);
            v18 = 202;
            goto LABEL_31;
          }
          break;
        case 'R':
          if ( (unsigned __int16)(*v14 - 128) > 1u && *v14 != 14 )
          {
            LogError(-1072431096);
            AcpiDiagTraceAmlError(a1, -1072431096);
            ObjectTypeName = (const void *)GetObjectTypeName((unsigned __int16)*v14);
            v18 = 203;
            goto LABEL_31;
          }
          break;
        case 'T':
          if ( (unsigned __int16)(*v14 - 2) > 1u
            && (!a3 || (v6 = ConvertToBuffer(a2 + 40LL * v10, a2 + 40LL * v10, 128LL)) != 0) )
          {
            LogError(-1072431095);
            AcpiDiagTraceAmlError(a1, -1072431095);
            v22 = (const void *)GetObjectTypeName((unsigned __int16)*v14);
            PrintDebugMessage(0xCCu, (const void *)v10, v22, 0LL, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'U':
          break;
        case 'Z':
          if ( *v14 != 2 && (!a3 || (v6 = ConvertToString(a2 + 40LL * v10, 0LL, a2 + 40LL * v10)) != 0) )
          {
            LogError(-1072431096);
            AcpiDiagTraceAmlError(a1, -1072431096);
            ObjectTypeName = (const void *)GetObjectTypeName((unsigned __int16)*v14);
            v18 = 205;
            goto LABEL_31;
          }
          break;
        default:
          LogError(-1072431101);
          AcpiDiagTraceAmlError(a1, -1072431101);
          PrintDebugMessage(0xCEu, (const void *)(char)*v13, 0LL, 0LL, 0LL);
          v6 = -1072431101;
          break;
      }
    }
    ++v13;
    ++v10;
    v14 += 20;
  }
  while ( v13 - a4 < v11 );
  return v6;
}
