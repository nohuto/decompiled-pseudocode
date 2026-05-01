/*
 * XREFs of CrmGlobalsRundown @ 0x18001DCB4
 * Callers:
 *     CrmSessionUserNotification @ 0x18001D49C (CrmSessionUserNotification.c)
 *     CrmGlobalsPeriodicRundown @ 0x18006C7C0 (CrmGlobalsPeriodicRundown.c)
 * Callees:
 *     CrmGlobalsRegistrationRundownHelper @ 0x18001DE38 (CrmGlobalsRegistrationRundownHelper.c)
 *     CrmLogActivityCoordinatorTelemetry @ 0x18001DFA0 (CrmLogActivityCoordinatorTelemetry.c)
 *     CrmLogStateMonitorRundown @ 0x18001E23C (CrmLogStateMonitorRundown.c)
 */

__int64 CrmGlobalsRundown()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rcx
  void **v3; // rbx
  __int64 v4; // rdi
  unsigned __int64 v6; // rax
  char v7; // dl
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  RtlAcquireSRWLockShared(&unk_1800E3938);
  v0 = xmmword_1800E3948;
  if ( (_QWORD)xmmword_1800E3948 )
  {
    while ( 1 )
    {
LABEL_10:
      if ( (int)CrmGlobalsRegistrationRundownHelper(v0, &v8) < 0 )
        goto LABEL_11;
      v6 = *(_QWORD *)v0;
      if ( !*(_QWORD *)v0 )
      {
        v6 = *(_QWORD *)(v0 + 8);
        if ( !v6 )
          break;
      }
      if ( (BYTE8(xmmword_1800E3948) & 1) != 0 )
        v0 ^= v6;
      else
        v0 = v6;
    }
    v1 = v0;
    v7 = BYTE8(xmmword_1800E3948) & 1;
    while ( 1 )
    {
      v1 = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v7 )
      {
        if ( !v1 )
          break;
        v1 ^= v0;
      }
      if ( !v1 )
        break;
      v2 = *(_QWORD *)(v1 + 8);
      if ( v7 )
      {
        if ( !v2 )
          goto LABEL_17;
        v2 ^= v1;
      }
      if ( v2 && v2 != v0 )
      {
        v0 = v2;
        goto LABEL_10;
      }
LABEL_17:
      v0 = v1;
    }
  }
LABEL_11:
  RtlReleaseSRWLockShared(&unk_1800E3938);
  RtlAcquireSRWLockShared(&unk_1800E3A08);
  CrmLogActivityCoordinatorTelemetry(&unk_1800E3A18, L"CrmAggregateActivityTelemetry", MEMORY[0x7FFE0008]);
  RtlReleaseSRWLockShared(&unk_1800E3A08);
  RtlAcquireSRWLockShared(&CrmGlobals);
  v3 = &qword_1800E37D0;
  v4 = 43LL;
  do
  {
    if ( *v3 )
      CrmLogStateMonitorRundown();
    ++v3;
    --v4;
  }
  while ( v4 );
  return RtlReleaseSRWLockShared(&CrmGlobals);
}
