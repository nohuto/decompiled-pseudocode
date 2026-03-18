/*
 * XREFs of ParseIntObj @ 0x140009C30
 * Callers:
 *     ParseArg @ 0x140006850 (ParseArg.c)
 *     ParsePackage @ 0x1400387D0 (ParsePackage.c)
 *     ParseFieldConnection @ 0x140054000 (ParseFieldConnection.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     IsCompatableDSDTRevision @ 0x140014C60 (IsCompatableDSDTRevision.c)
 */

__int64 __fastcall ParseIntObj(__int64 a1, const void **a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // r10d
  bool v9; // zf
  char v11; // al
  __int64 v12; // rcx

  v4 = 0;
  v8 = *(unsigned __int8 *)*a2;
  *a2 = (char *)*a2 + 1;
  *(_WORD *)(a3 + 2) = 1;
  *(_QWORD *)(a3 + 16) = 0LL;
  if ( v8 == 10 )
  {
    *(_BYTE *)(a3 + 16) = *(_BYTE *)*a2;
    *a2 = (char *)*a2 + 1;
    v9 = (gDebugger & 0xD0) == 0;
    goto LABEL_3;
  }
  if ( v8 == 12 )
  {
    *(_DWORD *)(a3 + 16) = *(_DWORD *)*a2;
    *a2 = (char *)*a2 + 4;
    v9 = (gDebugger & 0xD0) == 0;
    goto LABEL_3;
  }
  if ( v8 <= 0xC )
  {
    if ( !(_BYTE)v8 )
    {
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("Zero");
      return v4;
    }
    if ( v8 == 1 )
    {
      *(_QWORD *)(a3 + 16) = 1LL;
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("One");
      return v4;
    }
    if ( v8 == 11 )
    {
      *(_WORD *)(a3 + 16) = *(_WORD *)*a2;
      *a2 = (char *)*a2 + 2;
      v9 = (gDebugger & 0xD0) == 0;
      goto LABEL_3;
    }
    goto LABEL_20;
  }
  if ( v8 != 255 )
  {
    if ( v8 != 14 )
    {
LABEL_20:
      *a2 = (char *)*a2 - 1;
      if ( !a4 )
      {
        LogError(-1072431103);
        AcpiDiagTraceAmlError(a1, -1072431103);
        PrintDebugMessage(0x80u, (const void *)*(unsigned __int8 *)*a2, *a2, 0LL, 0LL);
      }
      return (unsigned int)-1072431103;
    }
    *(_QWORD *)(a3 + 16) = *(_QWORD *)*a2;
    *a2 = (char *)*a2 + 8;
    v9 = (gDebugger & 0xD0) == 0;
LABEL_3:
    if ( !v9 )
      ConPrintf("0x%I64x", *(_QWORD *)(a3 + 16));
    return v4;
  }
  v11 = IsCompatableDSDTRevision();
  v12 = -1LL;
  if ( !v11 )
    v12 = 0xFFFFFFFFLL;
  *(_QWORD *)(a3 + 16) = v12;
  if ( (gDebugger & 0xD0) != 0 )
    ConPrintf("Ones");
  return v4;
}
