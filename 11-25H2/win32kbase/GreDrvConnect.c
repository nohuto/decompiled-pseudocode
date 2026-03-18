/*
 * XREFs of GreDrvConnect @ 0x1401D18C0
 * Callers:
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140043A70 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044EE4 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004E2F4 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140074928 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140087950 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140087D5C (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14014711C (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140152384 (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDrvConnect(_QWORD *a1)
{
  struct _ERESOURCE **v2; // rbx
  struct _ERESOURCE *i; // rbx
  unsigned int v4; // edi
  unsigned int (__fastcall *v5)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  struct _ERESOURCE *v6; // rbx
  struct _GRETHREAD *v7; // rax
  bool v8; // zf
  struct _ERESOURCE *v9; // rbx
  struct _GRETHREAD *v10; // rax
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  struct _ERESOURCE *v15; // [rsp+78h] [rbp+28h] BYREF
  HSEMAPHORE v16; // [rsp+80h] [rbp+30h] BYREF
  HSEMAPHORE v17; // [rsp+88h] [rbp+38h] BYREF

  v2 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  SEMOBJ<1>::SEMOBJ<1>(&v14, v2);
  SEMOBJ<2>::SEMOBJ<2>(&v13, v2);
  SEMOBJ<3>::SEMOBJ<3>(&v12, v2);
  SEMOBJ<6>::SEMOBJ<6>((struct _ERESOURCE **)&v17, v2);
  SEMOBJ<10>::SEMOBJ<10>((struct _ERESOURCE **)&v16, v2);
  SEMOBJ<19>::SEMOBJ<19>(&v15, v2);
  for ( i = v2[216]; ; i = (struct _ERESOURCE *)i->SystemResourcesList.Flink )
  {
    v4 = 0;
    if ( !i )
      break;
    if ( i->OwnerTable )
    {
      if ( LODWORD(i->SharedWaiters) == 1 )
      {
        v5 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)&i[8].NumberOfSharedWaiters
                                                                           + 616LL);
        if ( v5 )
        {
          if ( !v5(a1[3], a1[2], a1[1], a1[4]) )
          {
            i->ContentionCount = 4;
            v4 = -2143354875;
            break;
          }
          i->ContentionCount = 1;
        }
      }
    }
  }
  if ( v15 )
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)v15);
  v6 = (struct _ERESOURCE *)v16;
  if ( v16 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v16);
    v7 = GreGetCurrentThreadCrossSessionCheck();
    if ( v7 )
    {
      v8 = (*((_BYTE *)v7 + 18))-- == 1;
      if ( v8 )
        *(_QWORD *)v7 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v6);
  }
  v9 = (struct _ERESOURCE *)v17;
  if ( v17 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v17);
    v10 = GreGetCurrentThreadCrossSessionCheck();
    if ( v10 )
    {
      v8 = (*((_BYTE *)v10 + 14))-- == 1;
      if ( v8 )
        *(_QWORD *)v10 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v9);
  }
  if ( v12 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v12);
  if ( v13 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v13);
  if ( v14 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v14);
  return v4;
}
