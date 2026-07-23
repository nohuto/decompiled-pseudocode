/*
 * XREFs of ViMiscValidateKeWaitUsage @ 0x140C4CEBC
 * Callers:
 *     VfMiscKeWaitForSingleObject_Entry @ 0x140C43070 (VfMiscKeWaitForSingleObject_Entry.c)
 *     VfMiscKeWaitForMultipleObjects_Entry @ 0x140C4CE90 (VfMiscKeWaitForMultipleObjects_Entry.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140263230 (RtlpGetStackLimits.c)
 *     ViMiscValidateSynchronizationObject @ 0x140C26524 (ViMiscValidateSynchronizationObject.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

char __fastcall ViMiscValidateKeWaitUsage(unsigned int a1, ULONG_PTR *a2, char a3, _QWORD *a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v6; // r15
  ULONG_PTR v7; // r12
  __int64 v10; // rbp
  int v12; // eax
  __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // rdi
  ULONG_PTR v16; // rbx
  ULONG_PTR v18; // [rsp+40h] [rbp-38h] BYREF
  ULONG_PTR v19; // [rsp+48h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v10 = a1;
  if ( (CurrentThread->MiscFlags & 4) != 0 )
    LOBYTE(v12) = CurrentThread->WaitIrql;
  else
    LOBYTE(v12) = KeGetCurrentIrql();
  if ( (unsigned __int8)v12 <= 2u )
  {
    if ( (_BYTE)v12 != 2 )
      goto LABEL_12;
    if ( a4 )
    {
      if ( !*a4 )
        goto LABEL_12;
      v13 = 290LL;
    }
    else
    {
      v13 = 289LL;
    }
  }
  else
  {
    v13 = 288LL;
  }
  LOBYTE(v12) = CarReportRuleViolationFromNt(196, v13, (unsigned __int8)v12, *a2, (__int64)a4, 0xBu, a5);
LABEL_12:
  if ( a3 == 1 && (!a4 || *a4) && (v12 = *(&CurrentThread->MiscFlags + 1), (v12 & 0x40) != 0) )
  {
    LOBYTE(v12) = RtlpGetStackLimits((__int64)&v18, (__int64)&v19);
    v6 = v18;
    v7 = v19;
    v14 = (unsigned __int8)v12;
  }
  else
  {
    v14 = 0;
  }
  if ( (_DWORD)v10 )
  {
    v15 = v10;
    do
    {
      v16 = *a2;
      LOBYTE(v12) = ViMiscValidateSynchronizationObject((PVOID)*a2, 1uLL, a5);
      if ( v14 && v16 >= v6 && v16 < v7 )
        LOBYTE(v12) = CarReportRuleViolationFromNt(196, 291LL, v16, 0LL, 0LL, 0xBu, a5);
      ++a2;
      --v15;
    }
    while ( v15 );
  }
  return v12;
}
