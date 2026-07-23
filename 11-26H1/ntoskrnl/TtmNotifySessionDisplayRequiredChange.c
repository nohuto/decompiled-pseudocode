/*
 * XREFs of TtmNotifySessionDisplayRequiredChange @ 0x140ABE730
 * Callers:
 *     PopPowerRequestCallbackDisplayRequired @ 0x140ABE670 (PopPowerRequestCallbackDisplayRequired.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PoSessionEngagementUpdate @ 0x140613EB0 (PoSessionEngagementUpdate.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1407ED464 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpAcquireSessionById @ 0x1409F6634 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 *     TtmiLogSessionDisplayRequiredDereference @ 0x140ABEA5C (TtmiLogSessionDisplayRequiredDereference.c)
 *     TtmiLogSessionDisplayRequiredReference @ 0x140ABEB20 (TtmiLogSessionDisplayRequiredReference.c)
 */

__int64 __fastcall TtmNotifySessionDisplayRequiredChange(int a1, unsigned int a2, char a3)
{
  unsigned int v4; // ebp
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
  unsigned int ExplicitScope; // [rsp+70h] [rbp+8h] BYREF
  char Buffer; // [rsp+80h] [rbp+18h] BYREF
  unsigned int *v19; // [rsp+88h] [rbp+20h] BYREF

  ExplicitScope = a1;
  v19 = 0LL;
  v4 = 0;
  Buffer = 0;
  v6 = 0;
  v7 = TtmpAcquireSessionById((void **)&v19, a1);
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
  TtmpUpdateDisplayRequiredPowerRequest(v19, a2, a3);
  v12 = v8[5];
  if ( !a3 )
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
    Buffer = 1;
LABEL_11:
  if ( v8 )
  {
    v4 = v8[5];
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, &Buffer, 1u, 0LL, &ExplicitScope, 0, 0);
    LOBYTE(v14) = Buffer;
    PoSessionEngagementUpdate(v14);
  }
  if ( a3 )
    return TtmiLogSessionDisplayRequiredReference(ExplicitScope, v4, v9);
  else
    return TtmiLogSessionDisplayRequiredDereference(ExplicitScope, v4, v9);
}
