/*
 * XREFs of TtmpDispatchOpenTerminal @ 0x14075BE98
 * Callers:
 *     TtmDispatchApi @ 0x140A2D58C (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     TtmiAcquireCurrentSession @ 0x14075A3F0 (TtmiAcquireCurrentSession.c)
 *     TtmiOpenDefaultTerminal @ 0x140760000 (TtmiOpenDefaultTerminal.c)
 *     TtmiLogError @ 0x140A2DC20 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchOpenTerminal(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = TtmiAcquireCurrentSession((__int64)&v10);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v8 = a2;
    v7 = v10;
    LOBYTE(v5) = KeGetCurrentThread()->PreviousMode;
    v6 = TtmiOpenDefaultTerminal(v10, *(unsigned int *)(a1 + 8), v5, v8);
  }
  else
  {
    TtmiLogError("TtmpDispatchOpenTerminal", 154LL, (unsigned int)v4, (unsigned int)v4);
    v7 = v10;
  }
  if ( v7 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return v6;
}
