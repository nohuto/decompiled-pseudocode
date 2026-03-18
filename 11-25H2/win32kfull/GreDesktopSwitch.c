/*
 * XREFs of GreDesktopSwitch @ 0x1401E887C
 * Callers:
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 * Callees:
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140077DA8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140089AE4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     IsDwmActive @ 0x14008D760 (IsDwmActive.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14008D8A4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008E720 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x140095B18 (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095BDC (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095C14 (--0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095C60 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140095C98 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140095D2C (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1401D8698 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 */

__int64 __fastcall GreDesktopSwitch(__int64 a1, int a2, int a3, __int64 a4)
{
  struct _ERESOURCE **v8; // rsi
  char v9; // bl
  Gre::Base *v10; // rcx
  _QWORD *i; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  _BYTE v15[16]; // [rsp+20h] [rbp-58h] BYREF
  HSEMAPHORE v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  HSEMAPHORE v18; // [rsp+40h] [rbp-38h]
  HSEMAPHORE v19; // [rsp+48h] [rbp-30h] BYREF
  HSEMAPHORE v20; // [rsp+50h] [rbp-28h] BYREF
  HSEMAPHORE v21; // [rsp+58h] [rbp-20h] BYREF
  __int64 v22; // [rsp+80h] [rbp+8h] BYREF

  v22 = a1;
  v8 = (struct _ERESOURCE **)Gre::Base::Globals((Gre::Base *)a1);
  if ( ExIsResourceAcquiredSharedLite(*v8 + 6) )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    GreAcquireSemaphoreShared<1,>(v8);
  }
  GreAcquireUnownedDMCLockShared::GreAcquireUnownedDMCLockShared(
    (GreAcquireUnownedDMCLockShared *)v15,
    (struct Gre::Base::SESSION_GLOBALS *)v8);
  SEMOBJ<2>::SEMOBJ<2>(&v16, v8);
  SEMOBJ<3>::SEMOBJ<3>(&v17, v8);
  v18 = *(HSEMAPHORE *)(a1 + 56);
  GreAcquireSemaphoreInternal(v18);
  GrepAcquireLockValidate<4>();
  SEMOBJ<6>::SEMOBJ<6>(&v19, v8);
  SEMOBJ<7>::SEMOBJ<7>(&v20, v8);
  SEMOBJ<8>::SEMOBJ<8>(&v21, (__int64)&v22);
  if ( IsDwmActive(v10) && !a3 )
    SpRenderHint((struct PDEVOBJ *)&v22, 65539 - (a2 != 0), 0LL, 0LL);
  ENTER_GRE_DWM_CRIT::~ENTER_GRE_DWM_CRIT((ENTER_GRE_DWM_CRIT *)v15);
  if ( (*(_DWORD *)(a1 + 40) & 0x20000) != 0 )
  {
    for ( i = **(_QWORD ***)(a1 + 1784); i; i = (_QWORD *)*i )
    {
      v13 = i[6];
      if ( v13 )
      {
        if ( (*(_DWORD *)(v13 + 40) & 1) != 0 )
        {
          v14 = *(_QWORD *)(v13 + 2544);
          if ( v14 )
            *(_QWORD *)(v14 + 648) = a4;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 2544) + 648LL) = a4;
  }
  if ( v9 )
    GreReleaseSemaphoreShared<1,>((__int64 *)v8);
  return 0LL;
}
