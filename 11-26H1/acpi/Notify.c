/*
 * XREFs of Notify @ 0x1400123C0
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Notify(__int64 a1, __int64 a2)
{
  const void *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  char v7; // al
  int v8; // eax

  LODWORD(v4) = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0LL, "OI");
  if ( !(_DWORD)v4 )
  {
    v5 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v5 + 56) > 0xFFuLL )
    {
      LODWORD(v4) = -1072431089;
      LogError(-1072431089);
      AcpiDiagTraceAmlError(a1, -1072431089);
      PrintDebugMessage(0x73u, *(const void **)(*(_QWORD *)(a2 + 80) + 56LL), 0LL, 0LL, 0LL);
    }
    else if ( ghNotify )
    {
      v6 = *(_QWORD *)(v5 + 16);
      v7 = gdwfAMLI;
      *(_QWORD *)(a2 + 64) = v6;
      if ( (v7 & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 112));
      v8 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64 (__fastcall *)(__int64), __int64))ghNotify)(
             2LL,
             *(unsigned int *)(*(_QWORD *)(a2 + 80) + 56LL),
             *(_QWORD *)(a2 + 64) + 120LL,
             qword_14008EAE0,
             RestartCtxtCallback,
             a1 + 328);
      v4 = (const void *)v8;
      if ( v8 == 259 )
      {
        LODWORD(v4) = 32772;
      }
      else if ( v8 )
      {
        LogError(-1072431098);
        AcpiDiagTraceAmlError(a1, -1072431098);
        PrintDebugMessage(0x72u, v4, 0LL, 0LL, 0LL);
        LODWORD(v4) = -1072431098;
      }
    }
  }
  return (unsigned int)v4;
}
