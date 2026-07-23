/*
 * XREFs of AlpcpPortQueryServerSessionInfo @ 0x140A7D538
 * Callers:
 *     NtAlpcQueryInformation @ 0x140A7D210 (NtAlpcQueryInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     AlpcpReferenceConnectedPort @ 0x140905270 (AlpcpReferenceConnectedPort.c)
 */

__int64 __fastcall AlpcpPortQueryServerSessionInfo(__int64 a1, int *a2, __int64 a3, struct _KLOCK_ENTRIES *a4, char a5)
{
  unsigned int v6; // r12d
  __int64 v8; // rax
  struct _KLOCK_ENTRIES *v9; // r9
  _QWORD *v10; // rsi
  signed __int64 *v11; // rdi
  void *v12; // rdx
  LegacyAutoBoost *v13; // rbx
  _DWORD *v14; // rbx
  int v15; // esi
  int SessionId; // edi

  v6 = a3;
  if ( !a1 )
    return 3221225485LL;
  v8 = AlpcpReferenceConnectedPort(a1, (__int64)a2, a3, a4);
  v10 = (_QWORD *)v8;
  if ( !v8 )
    return 3221225485LL;
  v11 = (signed __int64 *)(v8 + 352);
  v13 = (LegacyAutoBoost *)KeAbPreAcquire(v8 + 352, 0LL, 0LL, v9);
  if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v11, 0, v13, (struct _KTHREAD *)v11);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  v14 = 0LL;
  if ( (v10[3] & 1) == 0 )
    v14 = (_DWORD *)v10[3];
  if ( v14 )
    ObfReferenceObjectWithTag(v14, 0x63706C41u);
  if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v11);
  KeAbPostRelease((unsigned __int64)v11);
  ObfDereferenceObject(v10);
  if ( !v14 )
    return 3221225485LL;
  v15 = v14[116];
  SessionId = PsGetSessionIdEx((__int64)v14);
  ObfDereferenceObjectWithTag(v14, 0x63706C41u);
  if ( v6 >= 8 )
  {
    if ( a5 )
      RtlWriteULongToUser(a2, SessionId);
    else
      *a2 = SessionId;
    if ( a5 )
      RtlWriteULongToUser(a2 + 1, v15);
    else
      a2[1] = v15;
  }
  if ( a4 )
  {
    if ( a5 )
      RtlWriteULongToUser(a4, 8);
    else
      LODWORD(a4->Thread) = 8;
  }
  return v6 < 8 ? 0xC0000004 : 0;
}
