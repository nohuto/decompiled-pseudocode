/*
 * XREFs of DrvNotifyModeChangeStartStop @ 0x140188CE8
 * Callers:
 *     ApplyPathsModality @ 0x1401F498C (ApplyPathsModality.c)
 * Callees:
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001D21C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1400281B8 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140057320 (--$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140057430 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140057724 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1400C6550 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C66D4 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C7510 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C77EC (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall DrvNotifyModeChangeStartStop(__int64 a1)
{
  char v1; // bp
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 i; // rcx
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // r8d
  struct _ERESOURCE *v10; // rax
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rbx
  struct _ERESOURCE *v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v1 = a1;
  v2 = *(_QWORD **)(W32GetSessionState(a1) + 88);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v16, v2);
  v3 = *v2 + 1144LL;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v3);
  v4 = *v2 + 728LL;
  GreAcquireSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v4);
  for ( i = 0LL; ; i = v13 )
  {
    v10 = hdevEnumerate<1>(i);
    v13 = (__int64)v10;
    if ( !v10 )
      break;
    v6 = (__int64)v10->ExclusiveWaiters & 0x20401;
    v15 = v10;
    if ( v6 == 1 )
    {
      v7 = *(_QWORD *)&v10[24].NumberOfSharedWaiters;
      if ( v7 )
      {
        if ( v7 != -4 && (*(_DWORD *)(v7 + 160) & 0x800000) != 0 )
        {
          GreAcquireSemaphore<8,PDEVOBJ>(v13, v11, v12);
          PDEVOBJ::vSync(
            (PDEVOBJ *)&v15,
            (struct _SURFOBJ *)((*(_QWORD *)(v13 + 2544) + 24LL) & -(__int64)(*(_QWORD *)(v13 + 2544) != 0LL)),
            0LL,
            v1 != 0 ? 30 : 18);
          GreReleaseSemaphoreExclusive<8,PDEVOBJ>(v13, v8, v9);
        }
      }
    }
  }
  if ( v4 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v4,
      v12);
  if ( v3 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v3,
      v12);
  return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
           (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
           v16,
           v12);
}
