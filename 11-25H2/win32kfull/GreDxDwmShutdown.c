/*
 * XREFs of GreDxDwmShutdown @ 0x140326770
 * Callers:
 *     xxxDwmStopRedirection @ 0x1402B5280 (xxxDwmStopRedirection.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x14009344C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x14020F4EC (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 GreDxDwmShutdown()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 DxgkWin32kInterface; // rax
  __int64 HDEV; // rax
  __int64 i; // rcx
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp+8h] BYREF
  __int64 v19; // [rsp+38h] [rbp+10h] BYREF

  result = UserIsWddmConnectedSession();
  if ( (_DWORD)result )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v2, v1, v3, v4);
    (*(void (__fastcall **)(__int64))(DxgkWin32kInterface + 120))(-1LL);
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v19);
    HDEV = UserGetHDEV();
    GreLockVisRgn(HDEV);
    for ( i = 0LL; ; i = v16 )
    {
      v15 = hdevEnumerateDisplayOnly(i);
      v16 = v15;
      if ( !v15 )
        break;
      v8 = *(_DWORD *)(v15 + 40) & 0x20401;
      v18 = v15;
      if ( v8 == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v18) )
      {
        GreLockDisplayDevice(v16);
        v13 = DxDdGetDxgkWin32kInterface(v10, v9, v11, v12);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(v13 + 288))(
               *(_QWORD *)(*(_QWORD *)(v16 + 2568) + 232LL),
               *(unsigned int *)(*(_QWORD *)(v16 + 2568) + 248LL)) )
        {
          if ( *(_QWORD *)(v16 + 2720) )
          {
            LOBYTE(v14) = 1;
            DrvDxgkDisplayOnOff(v16, v14, 3LL);
            (*(void (__fastcall **)(_QWORD, __int64))(v16 + 2720))(*(_QWORD *)(v16 + 1784), 1LL);
          }
        }
        GreUnlockDisplayDevice(v16);
      }
    }
    v17 = UserGetHDEV();
    GreUnlockVisRgn(v17);
    return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
             (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
             v19);
  }
  return result;
}
