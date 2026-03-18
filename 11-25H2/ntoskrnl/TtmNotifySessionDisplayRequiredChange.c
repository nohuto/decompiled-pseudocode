/*
 * XREFs of TtmNotifySessionDisplayRequiredChange @ 0x140A2CE40
 * Callers:
 *     PopPowerRequestCallbackDisplayRequired @ 0x140A2CD80 (PopPowerRequestCallbackDisplayRequired.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PoSessionEngagementUpdate @ 0x1405D64D8 (PoSessionEngagementUpdate.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x14075B6E4 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmiLogError @ 0x140A2DC20 (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x140A2DD78 (TtmpAcquireSessionById.c)
 *     TtmiLogSessionDisplayRequiredDereference @ 0x140A2DEEC (TtmiLogSessionDisplayRequiredDereference.c)
 *     TtmiLogSessionDisplayRequiredReference @ 0x140A2DFB0 (TtmiLogSessionDisplayRequiredReference.c)
 */

__int64 __fastcall TtmNotifySessionDisplayRequiredChange(unsigned int a1, unsigned int a2, char a3)
{
  unsigned int v4; // ebp
  bool v6; // si
  int v7; // eax
  unsigned int *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned int v16; // eax
  char v18; // [rsp+80h] [rbp+18h] BYREF
  unsigned int *v19; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0LL;
  v4 = 0;
  v18 = 0;
  v6 = 0;
  v7 = TtmpAcquireSessionById(&v19, a1);
  v8 = v19;
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = (unsigned int)v7;
    v11 = 3812LL;
LABEL_3:
    TtmiLogError("TtmNotifySessionDisplayRequiredChange", v11, v10, 0xFFFFFFFFLL);
    goto LABEL_11;
  }
  TtmpUpdateDisplayRequiredPowerRequest(v19, a2, a3);
  v12 = v8[5];
  if ( !a3 )
  {
    if ( !v12 )
    {
      v9 = -1073741811;
      v11 = 3844LL;
      v10 = 3221225485LL;
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
    v11 = 3864LL;
    v10 = 3221225621LL;
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
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    ZwUpdateWnfStateData((__int64)&WNF_PO_DISPLAY_REQUEST_ACTIVE, (__int64)&v18);
    LOBYTE(v14) = v18;
    PoSessionEngagementUpdate(v14);
  }
  if ( a3 )
    return TtmiLogSessionDisplayRequiredReference(a1, v4, v9);
  else
    return TtmiLogSessionDisplayRequiredDereference(a1, v4, v9);
}
