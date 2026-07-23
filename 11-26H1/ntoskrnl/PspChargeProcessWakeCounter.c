/*
 * XREFs of PspChargeProcessWakeCounter @ 0x14098F2A0
 * Callers:
 *     AlpcMessageCleanupProcedure @ 0x14098E170 (AlpcMessageCleanupProcedure.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 *     PsReleaseProcessWakeCounter @ 0x14098F1E0 (PsReleaseProcessWakeCounter.c)
 *     PsChargeProcessWakeCounter @ 0x14098F230 (PsChargeProcessWakeCounter.c)
 *     PspAdjustKeepAliveCountProcess @ 0x140B07994 (PspAdjustKeepAliveCountProcess.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140B73710 (AlpcpCancelMessagesByRequestor.c)
 * Callees:
 *     PspLockProcessShared @ 0x140275C70 (PspLockProcessShared.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PspUnlockProcessShared @ 0x14027C520 (PspUnlockProcessShared.c)
 *     RtlIsZeroMemory @ 0x1404D36B0 (RtlIsZeroMemory.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     EtwTraceWakeEvent @ 0x14077D224 (EtwTraceWakeEvent.c)
 *     PspCheckConditionalWakeCharge @ 0x140A9F2AC (PspCheckConditionalWakeCharge.c)
 *     PspChargeJobWakeCounter @ 0x140AAC2B0 (PspChargeJobWakeCounter.c)
 *     EtwTraceWakeCounter @ 0x140B49EFC (EtwTraceWakeCounter.c)
 */

unsigned __int64 __fastcall PspChargeProcessWakeCounter(
        PVOID Object,
        int a2,
        signed int a3,
        __int64 a4,
        int a5,
        char a6,
        int *a7)
{
  __int64 v8; // r15
  char v9; // bp
  int v10; // r14d
  bool v11; // r13
  _DWORD *v12; // r9
  bool v13; // si
  __int64 v14; // rbp
  int v15; // edi
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // edi
  int v20; // ecx
  struct _KTHREAD *v21; // rax
  int v22; // edx
  _KPROCESS *Process; // rbp
  int v24; // ecx
  int v25; // edx
  char v26; // [rsp+40h] [rbp-68h]
  int v27; // [rsp+44h] [rbp-64h]
  unsigned int v28; // [rsp+48h] [rbp-60h]
  int v29; // [rsp+4Ch] [rbp-5Ch]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-58h]
  PVOID Objecta; // [rsp+58h] [rbp-50h]
  char v32; // [rsp+B0h] [rbp+8h]
  char v34; // [rsp+C0h] [rbp+18h]

  v8 = a3;
  v28 = a3;
  v29 = 0;
  v27 = a2 & 2;
  v9 = 0;
  v10 = 0;
  v34 = 0;
  v11 = 0;
  v32 = 0;
  v26 = 0;
  CurrentThread = KeGetCurrentThread();
  PspLockProcessShared((__int64)Object, (__int64)CurrentThread);
  v12 = (_DWORD *)*((_QWORD *)Object + 84);
  v13 = v27 != 0;
  Objecta = v12;
  if ( !v12 )
    goto LABEL_2;
  v20 = v12[388];
  if ( (v20 & 0x1000) == 0 )
    goto LABEL_2;
  v21 = KeGetCurrentThread();
  v22 = v27;
  Process = v21->ApcState.Process;
  if ( !a6 )
    goto LABEL_23;
  if ( v27 && (v20 & 0x800000) != 0 && a5 > 0 )
  {
LABEL_57:
    v9 = 0;
    goto LABEL_5;
  }
  v24 = a2;
  if ( (a2 & 1) != 0 )
  {
    if ( (unsigned __int8)PspCheckConditionalWakeCharge(v21->ApcState.Process, v12, (unsigned int)v8)
      || (v13 = v27 != 0, a5 <= 0) )
    {
      v22 = v27;
LABEL_23:
      v24 = a2;
      goto LABEL_24;
    }
    goto LABEL_57;
  }
LABEL_24:
  if ( (Process[1].DirectoryTableBase & 0x40) != 0 || !v22 )
  {
    v13 = 0;
  }
  else
  {
    v28 = 7;
    v13 = v27 != 0;
    v29 = ((v24 >> 31) & 2) + 4;
  }
  v9 = 1;
  v34 = 1;
LABEL_2:
  if ( !a6 || v9 || !RtlIsZeroMemory((char *)Object + 1824, 8uLL) )
  {
    if ( v13 )
    {
      v28 = 7;
      v17 = 1868LL;
    }
    else
    {
      v17 = 4 * v8 + 1832;
    }
    v18 = _InterlockedExchangeAdd((volatile signed __int32 *)((char *)Object + v17), a5) + a5;
    v26 = 1;
    v19 = v18 & 0x7FFFFFFF;
    v11 = v18 < 0;
    if ( v18 >= 0 )
      v19 = v18;
    v10 = v19;
    if ( v13 || RtlIsZeroMemory((char *)Object + 1824, 8uLL) )
      goto LABEL_20;
    v25 = 1 << v8;
    if ( a5 > 0 )
    {
      if ( (v25 & *((_DWORD *)Object + 465)) != 0 )
      {
        v32 = 1;
        if ( v19 == 1 )
          goto LABEL_20;
      }
    }
    else if ( (v25 & *((_DWORD *)Object + 466)) != 0 && !v19 )
    {
      v32 = 1;
      goto LABEL_20;
    }
    v32 = 0;
LABEL_20:
    v9 = v34;
  }
LABEL_5:
  PspUnlockProcessShared((__int64)Object, (__int64)CurrentThread);
  if ( v32 )
  {
    ZwUpdateWnfStateData((PCWNF_STATE_NAME)Object + 228, 0LL, 0, 0LL, 0LL, 0, 0);
    if ( (xmmword_140FC0C10 & 0x400) != 0 && v10 == 1 )
      EtwTraceWakeEvent((__int64)Object, v8);
  }
  if ( a7 )
    *a7 = v10;
  if ( v11 || v9 )
  {
    v14 = a4;
    v15 = a5;
    PspChargeJobWakeCounter(Objecta, v29, (__int64)Object, a4);
  }
  else
  {
    v14 = a4;
    v15 = a5;
  }
  if ( !v26 )
  {
    if ( (xmmword_140FC0C10 & 0x200) != 0 )
      EtwTraceWakeCounter((_DWORD)Object, v13, v8, 0, 0LL, (__int64)Object, v14);
    return 0LL;
  }
  if ( (xmmword_140FC0C10 & 0x2000) != 0 )
    EtwTraceWakeCounter((_DWORD)Object, v13, v8, v15, v10, (__int64)Object, v14);
  if ( !a6 )
    return 0LL;
  if ( a5 <= 0 )
  {
    ObDereferenceObjectDeferDeleteWithTag(Object, 0x6B577350u);
    return 0LL;
  }
  ObfReferenceObjectWithTag(Object, 0x6B577350u);
  return (unsigned __int64)Object | v28;
}
