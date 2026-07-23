/*
 * XREFs of TtmpDispatchSetDisplayTimeouts @ 0x1407EDF10
 * Callers:
 *     TtmDispatchApi @ 0x1409F5FD0 (TtmDispatchApi.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1407ED6A8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1407F2068 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchSetDisplayTimeouts(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rsi
  unsigned int v4; // edi
  PVOID v5; // rbx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  Object = 0LL;
  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 1, &v7, &Object);
  v3 = v7;
  v4 = v2;
  v5 = Object;
  if ( v2 >= 0 )
  {
    if ( !*((_DWORD *)Object + 7) )
      *(_BYTE *)(v7 + 240) = 0;
    TtmiTerminalSetDisplayTimeouts(v3, v5, *(unsigned int *)(a1 + 16), *(unsigned int *)(a1 + 20));
    v4 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchSetDisplayTimeouts", 536LL, (unsigned int)v2, (unsigned int)v2);
  }
  if ( v3 )
  {
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
    KeLeaveCriticalRegion();
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  return v4;
}
