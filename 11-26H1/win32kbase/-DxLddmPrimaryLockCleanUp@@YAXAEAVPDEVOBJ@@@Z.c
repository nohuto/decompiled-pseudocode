/*
 * XREFs of ?DxLddmPrimaryLockCleanUp@@YAXAEAVPDEVOBJ@@@Z @ 0x14010246C
 * Callers:
 *     ?GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z @ 0x1401BFB84 (-GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140024D14 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1400281B8 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x140102518 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXAEAVPDEVOBJ@@@Z @ 0x1401B6D9C (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXAEAVPDEVOBJ@@@Z.c)
 */

void __fastcall DxLddmPrimaryLockCleanUp(struct PDEVOBJ *this)
{
  int v2; // r8d
  int v3; // ecx
  struct PDEVOBJ *v4; // rcx
  __int64 i; // rcx
  struct _ERESOURCE *v6; // rax
  struct _ERESOURCE *v7; // rbx
  int ExclusiveWaiters; // eax
  struct _ERESOURCE *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v10);
  if ( *(_QWORD *)this )
  {
    v3 = *(_DWORD *)(*(_QWORD *)this + 40LL);
    if ( (v3 & 1) != 0 )
    {
      if ( (v3 & 0x20000) != 0 )
      {
        for ( i = 0LL; ; i = (__int64)v7 )
        {
          v6 = hdevEnumerate<1>(i);
          v7 = v6;
          if ( !v6 )
            break;
          v9 = v6;
          ExclusiveWaiters = (int)v6->ExclusiveWaiters;
          if ( (ExclusiveWaiters & 0x20000) == 0
            && (ExclusiveWaiters & 1) != 0
            && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v9)
            && *(_QWORD *)&v7->ActiveCount == *(_QWORD *)this )
          {
            DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v9);
          }
        }
      }
      else if ( (unsigned int)PDEVOBJ::bLddmDriver(this) )
      {
        DxLddmPrimaryLockCleanUpSinglePDev(v4);
      }
    }
  }
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v10,
    v2);
}
