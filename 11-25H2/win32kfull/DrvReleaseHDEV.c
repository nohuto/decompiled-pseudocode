/*
 * XREFs of DrvReleaseHDEV @ 0x140323F48
 * Callers:
 *     xxxRemoteConsoleShadowStop @ 0x1402B91E4 (xxxRemoteConsoleShadowStop.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D7774 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1402FDD6C (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DrvReleaseHDEV(PDEV *a1)
{
  Gre::Base *v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *v3; // rsi
  PDEV *i; // rbx
  HSEMAPHORE v5; // rbx
  struct _GRETHREAD *v6; // rax
  HSEMAPHORE v8; // [rsp+30h] [rbp+8h] BYREF

  WdLogSingleEntry1(5LL, a1);
  WdLogGlobalForLineNumber = 657;
  if ( a1 )
  {
    v3 = Gre::Base::Globals(v2);
    SEMOBJ<19>::SEMOBJ<19>(&v8, (HSEMAPHORE *)v3);
    for ( i = (PDEV *)*((_QWORD *)v3 + 481); i; i = *(PDEV **)i )
    {
      if ( i == a1 )
      {
        if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
          PDEV::DecrementClientReferenceCountFastOpt(i, v3);
        else
          PDEV::DecrementClientReferenceCount(i);
        break;
      }
    }
    v5 = v8;
    if ( v8 )
    {
      EtwTraceGreLockReleaseSemaphore(L"DriverMgmt", v8);
      v6 = GreGetCurrentThreadCrossSessionCheck();
      if ( v6 )
      {
        if ( (*((_BYTE *)v6 + 27))-- == 1 )
          *(_QWORD *)v6 &= ~0x80000uLL;
        if ( !*(_QWORD *)v6 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v5);
    }
  }
}
