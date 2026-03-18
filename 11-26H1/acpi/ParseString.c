/*
 * XREFs of ParseString @ 0x140038A6C
 * Callers:
 *     ParseArg @ 0x140006850 (ParseArg.c)
 *     ParsePackage @ 0x1400387D0 (ParsePackage.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ParseString(__int64 a1, const char **a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rax
  const char *v9; // rdx
  __int64 *v10; // rax

  v4 = 0;
  if ( **a2 == 13 )
  {
    ++*a2;
    v8 = -1LL;
    *(_WORD *)(a3 + 2) = 2;
    v9 = *a2;
    do
      ++v8;
    while ( v9[v8] );
    *(_DWORD *)(a3 + 24) = v8 + 1;
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("\"%s\"", *a2);
    v10 = HeapAlloc((_QWORD *)gpheapGlobal, 1381258056, *(_DWORD *)(a3 + 24));
    *(_QWORD *)(a3 + 32) = v10;
    if ( v10 )
    {
      memmove(v10, *a2, *(unsigned int *)(a3 + 24));
    }
    else
    {
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      PrintDebugMessage(0x8Bu, 0LL, 0LL, 0LL, 0LL);
      v4 = -1073741670;
    }
    *a2 += *(unsigned int *)(a3 + 24);
  }
  else
  {
    if ( !a4 )
    {
      LogError(-1072431103);
      AcpiDiagTraceAmlError(a1, -1072431103);
      PrintDebugMessage(0x8Cu, (const void *)*(unsigned __int8 *)*a2, *a2, 0LL, 0LL);
    }
    return (unsigned int)-1072431103;
  }
  return v4;
}
