/*
 * XREFs of EtwSetProcessTelemetryCoverage @ 0x140B0E008
 * Callers:
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     EtwpCoverageRecordAtHighIrql @ 0x1406C68DC (EtwpCoverageRecordAtHighIrql.c)
 *     EtwpCoverageEnsureContext @ 0x140775C70 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageCheckCP @ 0x140829AA4 (EtwpCoverageCheckCP.c)
 *     EtwpCoverageReset @ 0x140829D38 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x140829F60 (EtwpCoverageResetCP.c)
 *     PspIsContextAdmin @ 0x140958640 (PspIsContextAdmin.c)
 *     EtwpCoverageEnsureUserModeView @ 0x140B0E0B0 (EtwpCoverageEnsureUserModeView.c)
 *     EtwpCoverageRecord @ 0x140B0E2F8 (EtwpCoverageRecord.c)
 */

__int64 __fastcall EtwSetProcessTelemetryCoverage(_KPROCESS *a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // eax
  __int64 result; // rax
  int v6; // eax
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9

  if ( a1 != KeGetCurrentThread()->ApcState.Process )
    return 3221225659LL;
  if ( EtwpCoverageContext || (result = EtwpCoverageEnsureContext(), (int)result >= 0) )
  {
    v3 = EtwpCoverageContext;
    if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
    {
      *(_DWORD *)(a2 + 12) = -1;
    }
    else
    {
      v4 = *(_DWORD *)(a2 + 12);
      if ( v4 < 0xFFFFFF00 )
      {
        EtwpCoverageRecord(EtwpCoverageContext, a2);
        result = EtwpCoverageEnsureUserModeView(v3);
        if ( (int)result < 0 )
          return result;
        return 0LL;
      }
      switch ( v4 )
      {
        case 0xFFFFFFFE:
          v6 = EtwpCoverageCheckCP(EtwpCoverageContext, a2);
          goto LABEL_16;
        case 0xFFFFFFFD:
          v6 = EtwpCoverageResetCP(EtwpCoverageContext, a2);
LABEL_16:
          if ( !v6 )
            return 3221226021LL;
          return 0LL;
        case 0xFFFFFFFC:
          if ( !PspIsContextAdmin() )
            return 3221225506LL;
          EtwpCoverageReset(v3, 1, v7, v8);
          *(_DWORD *)(a2 + 12) = *(_DWORD *)(*(_QWORD *)(v3 + 16) + 24LL);
          return 0LL;
        case 0xFFFFFFFB:
          EtwpCoverageRecordAtHighIrql((char **)a2);
          return 0LL;
      }
    }
    return 3221225485LL;
  }
  return result;
}
