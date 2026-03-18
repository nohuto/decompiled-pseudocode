/*
 * XREFs of ?Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z @ 0x1401EDBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z @ 0x140023420 (-InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1400E59F0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ??0HANDLELOCK@@QEAA@IW4HandleLockOptions@@@Z @ 0x14010F730 (--0HANDLELOCK@@QEAA@IW4HandleLockOptions@@@Z.c)
 *     ?MakeRoom@ThreadRestrictNewHandlesRegion@@QEAA_NXZ @ 0x14012E1B0 (-MakeRoom@ThreadRestrictNewHandlesRegion@@QEAA_NXZ.c)
 */

char __fastcall ThreadRestrictNewHandlesRegion::Protect(struct _GRETHREAD *a1, void *a2)
{
  char v2; // bl
  ThreadRestrictNewHandlesRegion *v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // rdx
  ThreadRestrictNewHandlesRegion *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char result; // al
  struct OBJECT *v10; // rbx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]

  v2 = 0;
  v3 = 0LL;
  v4 = (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000;
  if ( a1 )
    v3 = (ThreadRestrictNewHandlesRegion *)*((_QWORD *)a1 + 41);
  if ( ThreadRestrictNewHandlesRegion::InRegion(v3, v4) )
    return 1;
  result = ThreadRestrictNewHandlesRegion::MakeRoom(v6, v5, v7, v8);
  if ( result )
  {
    HANDLELOCK::HANDLELOCK(&v11, v4, 1);
    if ( v12 )
    {
      if ( (*((_BYTE *)HANDLELOCK::pObj((HANDLELOCK *)&v11) + 14) & 0x20) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v10 = HANDLELOCK::pObj((HANDLELOCK *)&v11);
      *((_WORD *)v10 + 7) = *((_WORD *)HANDLELOCK::pObj((HANDLELOCK *)&v11) + 7) | 0x20;
      HANDLELOCK::vUnlock((HANDLELOCK *)&v11);
      v2 = 1;
      *(_DWORD *)(*((_QWORD *)v3 + 5) + 4LL * (*((_QWORD *)v3 + 3))++) = v4;
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v11);
    return v2;
  }
  return result;
}
