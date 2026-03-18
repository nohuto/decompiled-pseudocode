/*
 * XREFs of ToString @ 0x140016D20
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     ValidateTarget @ 0x140014990 (ValidateTarget.c)
 *     IsCompatableDSDTRevision @ 0x140014C60 (IsCompatableDSDTRevision.c)
 *     ConvertToString @ 0x140016ABC (ConvertToString.c)
 */

__int64 __fastcall ToString(__int64 a1, __int64 a2)
{
  int v4; // edx
  const void *v5; // rdx
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  bool v8; // al
  __int64 v9; // rdx
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0LL;
  v4 = *(_DWORD *)(a2 + 76) - 2;
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      LogError(-1072431098);
      AcpiDiagTraceAmlError(a1, -1072431098);
      v5 = (const void *)*(unsigned int *)(a2 + 76);
      v6 = 191;
LABEL_4:
      PrintDebugMessage(v6, v5, 0LL, 0LL, 0LL);
      return (unsigned int)-1072431098;
    }
    v7 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "BI");
    if ( !v7 )
    {
      v7 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 133, (__int64)&v14);
      if ( !v7 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL) )
        {
          v8 = IsCompatableDSDTRevision();
          v9 = *(_QWORD *)(a2 + 80);
          if ( *(_QWORD *)(v9 + 56) != (-(__int64)v8 & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF )
          {
            v10 = *(_DWORD *)(v9 + 56);
            goto LABEL_13;
          }
        }
LABEL_12:
        v10 = 0;
LABEL_13:
        v11 = ConvertToString(*(_QWORD *)(a2 + 80), v10, *(_QWORD *)(a2 + 88));
        v7 = v11;
        switch ( v11 )
        {
          case 0xC000009A:
            LogError(-1073741670);
            AcpiDiagTraceAmlError(a1, -1073741670);
            v12 = 190;
            break;
          case 0xC0000206:
            LogError(-1072431098);
            AcpiDiagTraceAmlError(a1, -1072431098);
            v5 = 0LL;
            v6 = 189;
            goto LABEL_4;
          case 0xC0140006:
            LogError(-1072431098);
            AcpiDiagTraceAmlError(a1, -1072431098);
            v12 = 192;
            break;
          default:
            return v7;
        }
        PrintDebugMessage(v12, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    v7 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "B");
    if ( !v7 )
    {
      v7 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 133, (__int64)&v14);
      if ( !v7 )
        goto LABEL_12;
    }
  }
  return v7;
}
