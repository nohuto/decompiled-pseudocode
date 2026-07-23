/*
 * XREFs of EtwpCheckForPrivatePreEnable @ 0x180041FE0
 * Callers:
 *     EtwNotificationRegister @ 0x180041740 (EtwNotificationRegister.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     EtwpFindGuidEntry @ 0x1800421B0 (EtwpFindGuidEntry.c)
 *     EtwpRegisterGuidsApiCallback @ 0x1800436E0 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpGetUmProcessImageInfo @ 0x18005E274 (EtwpGetUmProcessImageInfo.c)
 *     EtwpUpdatePrivateEnableInfo @ 0x1800F7E44 (EtwpUpdatePrivateEnableInfo.c)
 *     EtwpPreEnableEventApiCallback @ 0x180106F38 (EtwpPreEnableEventApiCallback.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void __fastcall EtwpCheckForPrivatePreEnable(__int64 a1)
{
  char v2; // si
  _RTL_SRWLOCK *GuidEntry; // rax
  _RTL_SRWLOCK *v4; // rdi
  unsigned __int8 *v5; // rbp
  __int64 v6; // r14
  __int16 v7; // cx
  __int128 v8; // xmm0
  __int64 v9; // r8
  _BYTE v10[40]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v11; // [rsp+48h] [rbp-70h]
  unsigned __int64 Value; // [rsp+88h] [rbp-30h]
  int v13; // [rsp+90h] [rbp-28h]

  v2 = 0;
  GuidEntry = (_RTL_SRWLOCK *)EtwpFindGuidEntry((void *)(a1 + 32));
  v4 = GuidEntry;
  if ( GuidEntry )
  {
    RtlAcquireSRWLockShared(GuidEntry + 5);
    *(_QWORD *)(a1 + 240) = v4;
    *(_OWORD *)(a1 + 120) = *(_OWORD *)&v4[7].0;
    *(_RTL_SRWLOCK *)(a1 + 136) = v4[9];
    *(_OWORD *)(a1 + 144) = *(_OWORD *)&v4[10].0;
    *(_RTL_SRWLOCK *)(a1 + 160) = v4[12];
    *(_OWORD *)(a1 + 168) = *(_OWORD *)&v4[13].0;
    *(_RTL_SRWLOCK *)(a1 + 184) = v4[15];
    *(_OWORD *)(a1 + 192) = *(_OWORD *)&v4[16].0;
    *(_RTL_SRWLOCK *)(a1 + 208) = v4[18];
    EtwpUpdatePrivateEnableInfo(a1);
    v5 = (unsigned __int8 *)(a1 + 142);
    v6 = 4LL;
    do
    {
      if ( *(v5 - 2) )
      {
        v7 = *(_WORD *)(a1 + 86);
        if ( (v7 & 0x3FFF) == 2 || v7 < 0 )
          EtwpGetUmProcessImageInfo(*v5, a1);
        v2 = 1;
      }
      v5 += 24;
      --v6;
    }
    while ( v6 );
    if ( v2 )
    {
      if ( (*(_WORD *)(a1 + 86) & 0x3FFF) == 2 )
      {
        memset_thunk_772440563353939046(v10, 0, 0x78uLL);
        v8 = *(_OWORD *)&v4[3].0;
        Value = v4[19].Value;
        v13 = (int)v4[20].0;
        v11 = v8;
        RtlReleaseSRWLockShared(v4 + 5);
        LOBYTE(v9) = 1;
        EtwpRegisterGuidsApiCallback(v10, a1, v9);
      }
      else
      {
        RtlReleaseSRWLockShared(v4 + 5);
        EtwpPreEnableEventApiCallback(a1);
      }
    }
    else
    {
      RtlReleaseSRWLockShared(v4 + 5);
    }
  }
}
