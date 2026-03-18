/*
 * XREFs of ApiSetEdtionGetInputDesktopId @ 0x140225D84
 * Callers:
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1400603D8 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     ?GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1400DEA80 (-GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEP.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1400EBC84 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x140220278 (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEdtionGetInputDesktopId(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 (*v6)(void); // rax

  v2 = 0LL;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 7024LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v6 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 7032LL);
      if ( v6 )
        return v6();
    }
  }
  return v2;
}
