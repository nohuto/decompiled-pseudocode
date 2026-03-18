/*
 * XREFs of ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x140072CEC
 * Callers:
 *     GreSuspendDirectDraw @ 0x140072B40 (GreSuspendDirectDraw.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140046948 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14004BB48 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x14013E588 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 */

void __fastcall DxLddmPrimaryLockCleanUp(HDEV a1)
{
  int v2; // eax
  __int64 v3; // rcx
  PDEV *i; // rcx
  PDEV *v5; // rax
  PDEV *v6; // rbx
  int v7; // ecx
  __int64 v8; // rcx
  HDEV v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v10);
  v9 = a1;
  if ( a1 )
  {
    v2 = *((_DWORD *)a1 + 10);
    if ( (v2 & 1) != 0 )
    {
      if ( (v2 & 0x20000) != 0 )
      {
        for ( i = 0LL; ; i = v6 )
        {
          v5 = hdevEnumerate<1>(i);
          v6 = v5;
          if ( !v5 )
            break;
          v7 = *((_DWORD *)v5 + 10) & 0x20001;
          v9 = (HDEV)v5;
          if ( v7 == 1 )
          {
            v8 = *((_QWORD *)v5 + 321);
            if ( ((v8 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0
              && (*(_DWORD *)(v8 + 160) & 0x800000) != 0
              && *((HDEV *)v5 + 3) == a1 )
            {
              DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v9);
            }
          }
        }
      }
      else
      {
        v3 = *((_QWORD *)a1 + 321);
        if ( ((v3 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v3 + 160) & 0x800000) != 0 )
          DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v9);
      }
    }
  }
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v10);
}
