/*
 * XREFs of TtmpDispatchSetDisplayTimeouts @ 0x1407E83B0
 * Callers:
 *     TtmDispatchApi @ 0x140A3A3D0 (TtmDispatchApi.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1407E7B48 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1407EC504 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
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
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
    KeLeaveCriticalRegion();
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  return v4;
}
