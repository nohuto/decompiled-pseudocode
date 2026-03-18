/*
 * XREFs of vCleanupUMWindowlessSprite @ 0x140094D90
 * Callers:
 *     <none>
 * Callees:
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14001B280 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x14001D154 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x14001D1B0 (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     GreDeleteSprite @ 0x14005AEC4 (GreDeleteSprite.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x14008E444 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FD90 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14008FE7C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009347C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall vCleanupUMWindowlessSprite(Gre::Base *a1)
{
  int v1; // ebp
  __int64 result; // rax
  __int64 CSRSSProcess; // rbx
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rsi
  HSEMAPHORE v8; // rdi
  Gre::Base *HDEV; // r14
  struct PDEVOBJ *v10; // rdx
  Gre::Base *v11; // rcx
  _QWORD **v12; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  char v17[8]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  char v19; // [rsp+38h] [rbp-20h]
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF

  v1 = (int)a1;
  result = IsDwmActive(a1);
  if ( (_DWORD)result )
  {
    CSRSSProcess = UserGetCSRSSProcess();
    result = PsGetCurrentProcess();
    if ( result != CSRSSProcess )
    {
      v5 = Gre::Base::Globals(v4);
      SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v20, v5);
      v7 = Gre::Base::Globals(v6);
      v8 = (HSEMAPHORE)(*(_QWORD *)v7 + 1144LL);
      GreAcquireSemaphoreInternal(v8);
      GrepAcquireLockValidate<2>();
      HDEV = (Gre::Base *)UserGetHDEV();
      DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v17, v10, 0, 1);
      v18 = *(_QWORD *)v7 + 520LL;
      v19 = 0;
      GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
        (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
        v18);
      if ( IsDwmActive(v11) )
      {
        v12 = (_QWORD **)(*((_QWORD *)v7 + 17) + 80LL);
        v13 = *v12;
        while ( v13 != v12 )
        {
          v14 = (__int64)v13;
          v15 = (unsigned __int64)(v13 - 3);
          v13 = (_QWORD *)*v13;
          v16 = -v14;
          if ( (*(_DWORD *)((v15 & -(__int64)(v16 != 0)) + 0x48) & 0x400000) != 0
            && *(_DWORD *)((v15 & -(__int64)(v16 != 0)) + 0x70) == v1 )
          {
            GreDeleteSprite(HDEV, 0LL, *(void **)(v15 & -(__int64)(v16 != 0)), 1);
          }
          v12 = (_QWORD **)(*((_QWORD *)v7 + 17) + 80LL);
        }
      }
      SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>((__int64)&v18);
      DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v17);
      if ( v8 )
        GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
          (__int64)v8);
      return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
               (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
               v20);
    }
  }
  return result;
}
