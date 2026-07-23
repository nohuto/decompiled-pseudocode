/*
 * XREFs of PiUEventBroadcastPortsChangedEvent @ 0x1407A8294
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140AFDDA0 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     PsGetSessionById @ 0x1402160B0 (PsGetSessionById.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 */

int __fastcall PiUEventBroadcastPortsChangedEvent(int a1, __int128 *a2, int a3)
{
  __int64 SessionById; // rax
  __int64 v5; // rcx
  void *v6; // rbx
  int ExplicitScope; // [rsp+48h] [rbp+7h] BYREF
  int v9; // [rsp+50h] [rbp+Fh] BYREF
  int v10; // [rsp+54h] [rbp+13h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+17h] BYREF
  __int128 Buffer; // [rsp+60h] [rbp+1Fh] BYREF
  _OWORD v13[2]; // [rsp+70h] [rbp+2Fh] BYREF

  ExplicitScope = a1;
  Handle = 0LL;
  v10 = 0;
  Buffer = 0LL;
  memset(v13, 0, sizeof(v13));
  LODWORD(SessionById) = CmOpenDeviceRegKey(PiPnpRtlCtx, a3, 17, 0, 131097, 0, (__int64)&Handle, 0LL);
  if ( (int)SessionById >= 0 )
  {
    v9 = 32;
    LODWORD(SessionById) = PnpCtxRegQueryValue(v5, Handle, L"PortName", &v10, v13, &v9);
    if ( (int)SessionById >= 0 )
    {
      Buffer = *a2;
      if ( ExplicitScope == -1 )
      {
        LODWORD(SessionById) = ZwUpdateWnfStateData(&WNF_PNPA_PORTS_CHANGED, &Buffer, 0x30u, 0LL, 0LL, 0, 0);
      }
      else
      {
        SessionById = PsGetSessionById();
        v6 = (void *)SessionById;
        if ( SessionById )
        {
          ZwUpdateWnfStateData(&WNF_PNPA_PORTS_CHANGED_SESSION, &Buffer, 0x30u, 0LL, &ExplicitScope, 0, 0);
          LODWORD(SessionById) = ObfDereferenceObjectWithTag(v6, 0x79517350u);
        }
      }
    }
  }
  if ( Handle )
    LODWORD(SessionById) = ZwClose(Handle);
  return SessionById;
}
