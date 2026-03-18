/*
 * XREFs of ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1401D78A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C78C (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C868 (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x14006AA44 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007854C (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A9094 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FD860 (--$GreAcquireSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401D7CF0 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall pConvertDfbSurfaceToDibNKAPC(void *a1, HSURF a2, void *a3)
{
  Gre::Base *v4; // rcx
  __int64 v5; // rdi
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 SessionState; // rax
  HSEMAPHORE v12; // rbx
  Gre::Base *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r14
  HSEMAPHORE v16; // r15
  __int64 v17; // r13
  Gre::Base *v18; // rcx
  struct Gre::Base::SESSION_GLOBALS *v19; // rax
  bool v20; // zf
  __int64 v21; // r8
  _BYTE v22[32]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v23; // [rsp+50h] [rbp-79h]
  _BYTE v24[160]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v25; // [rsp+138h] [rbp+6Fh] BYREF

  UserEnterUserCritSec(a1, a2, a3);
  v5 = *(_QWORD *)Gre::Base::Globals(v4) + 624LL;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v5);
  v7 = Gre::Base::Globals(v6);
  SURFREF::SURFREF((SURFREF *)v22, a2, v7);
  if ( v23 )
  {
    v10 = *(unsigned int *)(v23 + 116);
    if ( (v10 & 0x20) != 0 )
    {
      SessionState = W32GetSessionState(v10, v8, v9);
      ++*(_DWORD *)(*(_QWORD *)(SessionState + 96) + 4748LL);
      *(_DWORD *)(v23 + 116) &= ~0x20u;
      if ( *(_WORD *)(v23 + 100) == 3 )
      {
        v12 = (HSEMAPHORE)(*(_QWORD *)v7 + 1144LL);
        GreAcquireSemaphoreInternal(v12);
        GrepAcquireLockValidate<2>();
        v14 = *(_QWORD *)Gre::Base::Globals(v13) + 728LL;
        GreAcquireSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
          (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
          v14);
        v15 = *(_QWORD *)v7 + 1040LL;
        GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
          (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
          v15);
        v16 = (HSEMAPHORE)(*(_QWORD *)v7 + 520LL);
        GreAcquireSemaphoreInternal(v16);
        GrepAcquireLockValidate<7>();
        v17 = v23;
        v19 = Gre::Base::Globals(v18);
        DEC_SHARE_REF_CNT(v19, v23);
        v23 = 0LL;
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v24);
        v20 = (*(_DWORD *)(v17 + 112) & 0x400000) == 0;
        v21 = *(_QWORD *)(v17 + 48);
        v25 = v21;
        if ( !v20 && v21 )
          DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v24, (struct PDEVOBJ *)&v25);
        pProcessDfbSurfaces2(v17, 1LL, 1LL);
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v24);
        if ( v16 )
          GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            (__int64)v16);
        if ( v15 )
          GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            v15);
        if ( v14 )
          GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            v14);
        if ( v12 )
          GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            (__int64)v12);
      }
    }
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v22);
  if ( v5 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v5);
  UserLeaveUserCritSec();
}
