/*
 * XREFs of TtmNotifySessionDisplayRequiredChange @ 0x140ABC910
 * Callers:
 *     PopPowerRequestCallbackDisplayRequired @ 0x140ABC850 (PopPowerRequestCallbackDisplayRequired.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PoSessionEngagementUpdate @ 0x140610C00 (PoSessionEngagementUpdate.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1407E7904 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpAcquireSessionById @ 0x140A3AA34 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
 *     TtmiLogSessionDisplayRequiredDereference @ 0x140ABCC3C (TtmiLogSessionDisplayRequiredDereference.c)
 *     TtmiLogSessionDisplayRequiredReference @ 0x140ABCD00 (TtmiLogSessionDisplayRequiredReference.c)
 */

__int64 __fastcall TtmNotifySessionDisplayRequiredChange(unsigned int a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebp
  char v5; // r14
  bool v6; // si
  int v7; // eax
  unsigned int *v8; // rdi
  unsigned int v9; // ebx
  int v10; // r8d
  int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned int v16; // eax
  char v18; // [rsp+80h] [rbp+18h] BYREF
  unsigned int *v19; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0LL;
  v4 = 0;
  v18 = 0;
  v5 = a3;
  v6 = 0;
  v7 = TtmpAcquireSessionById((void **)&v19, a1, a3);
  v8 = v19;
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = v7;
    v11 = 3810;
LABEL_3:
    TtmiLogError("TtmNotifySessionDisplayRequiredChange", v11, v10, -1);
    goto LABEL_11;
  }
  TtmpUpdateDisplayRequiredPowerRequest(v19, a2, v5);
  v12 = v8[5];
  if ( !v5 )
  {
    if ( !v12 )
    {
      v9 = -1073741811;
      v11 = 3842;
      v10 = -1073741811;
      goto LABEL_3;
    }
    v13 = v12 - 1;
    v8[5] = v13;
    v6 = v13 == 0;
LABEL_8:
    v9 = 0;
    if ( !v6 )
      goto LABEL_11;
    goto LABEL_9;
  }
  if ( v12 == -1 )
  {
    v9 = -1073741675;
    v11 = 3862;
    v10 = -1073741675;
    goto LABEL_3;
  }
  v16 = v12 + 1;
  v8[5] = v16;
  if ( v16 != 1 )
    goto LABEL_8;
  v6 = 1;
  v9 = 0;
LABEL_9:
  if ( v8[5] )
    v18 = 1;
LABEL_11:
  if ( v8 )
  {
    v4 = v8[5];
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    ZwUpdateWnfStateData((__int64)&WNF_PO_DISPLAY_REQUEST_ACTIVE, (__int64)&v18);
    LOBYTE(v14) = v18;
    PoSessionEngagementUpdate(v14);
  }
  if ( v5 )
    return TtmiLogSessionDisplayRequiredReference(a1, v4, v9);
  else
    return TtmiLogSessionDisplayRequiredDereference(a1, v4, v9);
}
