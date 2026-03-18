/*
 * XREFs of WriteCookAccess @ 0x14000F370
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     DequeueAndReadyContext @ 0x14000E1E8 (DequeueAndReadyContext.c)
 *     QueueContext @ 0x14000F2B4 (QueueContext.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WriteCookAccess(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v3; // rdi
  const void *v4; // rsi
  int v7; // r8d
  _DWORD *v8; // r12
  __int64 v9; // r14
  char v10; // r12
  __int64 v11; // r9
  int v12; // eax
  int v14; // r8d
  int v15; // r8d
  KIRQL v16; // bl
  _QWORD *v17; // rcx
  char v18; // r13
  KIRQL v19; // al
  __int32 v20; // esi
  __int64 v21; // r8
  __int64 v22; // rdx
  int v23; // eax
  KIRQL v24; // [rsp+90h] [rbp+18h]

  v3 = (_DWORD *)(a2 + 16);
  LODWORD(v4) = a3;
  if ( a3 )
    v7 = 3;
  else
    v7 = *v3 & 0xF;
  v8 = (_DWORD *)(a2 + 16);
  v9 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 96LL);
  if ( !v7 )
  {
    if ( !*(_BYTE *)(a2 + 88) )
    {
      *v3 += 2;
      goto LABEL_6;
    }
    v18 = 0;
    if ( (gDebugger & 0x100) != 0 )
    {
      _m_prefetchw(&gDebugger);
      v18 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
    }
    v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 24));
    v24 = v19;
    v20 = _InterlockedExchange((volatile __int32 *)(v9 + 16), 1);
    if ( v20 )
    {
      QueueContext(a1, 0xFFFFu, v9 + 32);
      v19 = v24;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 24), v19);
    if ( v20 )
      goto LABEL_11;
    v21 = *(_QWORD *)(a2 + 40);
    v22 = *(_QWORD *)(a2 + 32);
    v8 = (_DWORD *)(a2 + 16);
    ++*(_DWORD *)(a2 + 16);
    v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v21 + 16))(
            0LL,
            v22 + 120,
            *(_QWORD *)(a2 + 48),
            *(unsigned int *)(a2 + 56),
            a2 + 80,
            *(_QWORD *)(v21 + 24),
            RestartCtxtCallback,
            a1 + 328);
    v4 = (const void *)v23;
    if ( (v18 & 0x10) != 0 )
      _InterlockedOr(&gDebugger, 0x10u);
    if ( v23 == 259 )
      goto LABEL_11;
    if ( v23 )
      goto LABEL_30;
    goto LABEL_32;
  }
  v14 = v7 - 1;
  if ( !v14 )
  {
LABEL_32:
    *(_QWORD *)(a2 + 64) |= *(_QWORD *)(a2 + 80) & ~*(_QWORD *)(a2 + 72);
    ++*v8;
    goto LABEL_6;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    if ( v15 != 1 )
      return (unsigned int)v4;
    goto LABEL_16;
  }
LABEL_6:
  v10 = 0;
  if ( (gDebugger & 0x100) != 0 )
  {
    _m_prefetchw(&gDebugger);
    v10 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
  }
  v11 = *(_QWORD *)(a2 + 40);
  ++*v3;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v11 + 16))(
          1LL,
          *(_QWORD *)(a2 + 32) + 120LL,
          *(_QWORD *)(a2 + 48),
          *(unsigned int *)(a2 + 56),
          a2 + 64,
          *(_QWORD *)(v11 + 24),
          RestartCtxtCallback,
          a1 + 328);
  v4 = (const void *)v12;
  if ( (v10 & 0x10) != 0 )
    _InterlockedOr(&gDebugger, 0x10u);
  if ( v12 == 259 )
  {
LABEL_11:
    LODWORD(v4) = 32772;
    return (unsigned int)v4;
  }
  if ( v12 )
  {
LABEL_30:
    LogError(-1072431080);
    AcpiDiagTraceAmlError(a1, -1072431080);
    PrintDebugMessage(0xD4u, (const void *)*(unsigned __int8 *)(v9 + 12), v4, 0LL, 0LL);
    LODWORD(v4) = -1072431080;
    return (unsigned int)v4;
  }
LABEL_16:
  if ( *(_BYTE *)(a2 + 88) )
  {
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 24));
    DequeueAndReadyContext((_QWORD **)(v9 + 32));
    _InterlockedExchange((volatile __int32 *)(v9 + 16), 0);
    KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 24), v16);
  }
  v17 = *(_QWORD **)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v17[1];
  HeapFree(v17);
  return (unsigned int)v4;
}
