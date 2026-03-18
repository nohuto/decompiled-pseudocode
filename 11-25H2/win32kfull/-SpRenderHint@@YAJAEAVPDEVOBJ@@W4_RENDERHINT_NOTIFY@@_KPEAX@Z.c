/*
 * XREFs of ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1401D8698
 * Callers:
 *     GreDwmStartup @ 0x1401D500C (GreDwmStartup.c)
 *     GreDesktopSwitch @ 0x1401E887C (GreDesktopSwitch.c)
 *     GreDwmShutdown @ 0x140267064 (GreDwmShutdown.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14007E404 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x140095760 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SpRenderHint(struct PDEVOBJ *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  _BYTE v10[144]; // [rsp+30h] [rbp-98h] BYREF

  v8 = -1073741822;
  if ( (unsigned int)bNeedRenderHint(a1) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v10, a1);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 3424LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 1784LL),
           a2,
           a3,
           a4);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v10);
  }
  return v8;
}
