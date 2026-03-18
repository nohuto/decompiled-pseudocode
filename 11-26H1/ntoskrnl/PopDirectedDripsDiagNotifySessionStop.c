/*
 * XREFs of PopDirectedDripsDiagNotifySessionStop @ 0x140B08A3C
 * Callers:
 *     PopDirectedDripsSendSessionData @ 0x140B089C0 (PopDirectedDripsSendSessionData.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x1404E37D0 (PopDirectedDripsDiagQueryAndResetPnpAccounting.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopDirectedDripsDiagRundownBroadcastTrees @ 0x140B08C90 (PopDirectedDripsDiagRundownBroadcastTrees.c)
 *     PopDirectedDripsDiagRundownDevices @ 0x140B08D6C (PopDirectedDripsDiagRundownDevices.c)
 */

void __fastcall PopDirectedDripsDiagNotifySessionStop(__int64 a1, int a2, int a3)
{
  int v5; // r14d
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // r15
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  signed __int8 v12; // cf
  AutoBoost *v13; // rbx
  struct _LIST_ENTRY *v14; // [rsp+38h] [rbp-D0h] BYREF
  int v15; // [rsp+40h] [rbp-C8h] BYREF
  int v16; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v21; // [rsp+88h] [rbp-80h]
  __int64 v22; // [rsp+90h] [rbp-78h]
  int *v23; // [rsp+98h] [rbp-70h]
  __int64 v24; // [rsp+A0h] [rbp-68h]
  int *v25; // [rsp+A8h] [rbp-60h]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  __int64 *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  struct _LIST_ENTRY **v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  _BYTE *v31; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  _LIST_ENTRY *v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  __int64 *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  _BYTE v37[128]; // [rsp+108h] [rbp+0h] BYREF
  _LIST_ENTRY v38[15]; // [rsp+188h] [rbp+80h] BYREF

  v14 = 0LL;
  v5 = a1;
  _m_prefetchw(dword_140F12AC0);
  v6 = dword_140F12AC0[0];
  do
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange(dword_140F12AC0, v6, v6);
  }
  while ( v7 != v6 );
  if ( (v6 & 1) != 0 )
  {
    PopDirectedDripsDiagQueryAndResetPnpAccounting(a1, &v14, (__int64)v37, v38);
    v8 = qword_140F0F5D0;
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink, 0LL, 0LL, v9);
    v12 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsUmLock.ApcStateFill[8], 0LL);
    v13 = v10;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink,
        v10,
        (__int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v11);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    if ( LOBYTE(PopDirectedDripsUmLock.ThreadListEntry.Blink)
      && (unsigned int)dword_140FD58E0 > 5
      && (qword_140FD58F0 & 0x400000000000LL) != 0
      && (qword_140FD58F8 & 0x400000000000LL) == qword_140FD58F8 )
    {
      v18 = v8;
      v21 = &v18;
      v22 = 8LL;
      v23 = &v15;
      v15 = v5;
      v25 = &v16;
      v24 = 4LL;
      v27 = &v17;
      v29 = &v14;
      v31 = v37;
      v33 = v38;
      v35 = &v19;
      v16 = a2;
      v26 = 4LL;
      LODWORD(v17) = a3;
      v28 = 4LL;
      v30 = 8LL;
      v32 = 120LL;
      v34 = 240LL;
      v19 = 0x1000000LL;
      v36 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140FD58E0,
        (unsigned __int8 *)byte_14004FE81,
        0LL,
        0LL,
        0xAu,
        &v20);
    }
    PopDirectedDripsDiagRundownBroadcastTrees();
    PopDirectedDripsDiagRundownDevices();
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
    KeAbPostRelease((unsigned __int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
  }
}
