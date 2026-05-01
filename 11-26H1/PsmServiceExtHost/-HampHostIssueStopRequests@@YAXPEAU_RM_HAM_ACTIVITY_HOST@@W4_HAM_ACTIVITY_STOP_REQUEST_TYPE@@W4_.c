/*
 * XREFs of ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003F3F8
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@K@Z @ 0x180067868 (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REAS.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180078D90 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x18007E560 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F9C0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004394C (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _HAM_ACTIVITY *__fastcall HampHostIssueStopRequests(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 a5,
        int a6,
        char a7,
        unsigned int (__fastcall *a8)(struct _HAM_ACTIVITY *, _QWORD),
        __int64 a9,
        __int64 a10)
{
  int v13; // esi
  struct _HAM_ACTIVITY *result; // rax
  struct _HAM_ACTIVITY *v15; // rbx
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax

  if ( a3 == 5 )
    v13 = *(unsigned __int16 *)(a1 + 664);
  else
    v13 = 6912;
  result = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
  v15 = result;
  while ( v15 )
  {
    if ( (*((_BYTE *)v15 + 552) & 8) == 0 )
    {
      v16 = *((_BYTE *)v15 + 562);
      if ( v16 == 3 || v16 == 2 && *((_BYTE *)v15 + 563) >= a5 )
      {
        v19 = *((_DWORD *)v15 + 28);
        if ( ((v19 & 0x2000) != 0 || (a7 & 2) == 0)
          && ((v19 & 0x400) != 0 || (a7 & 1) == 0)
          && ((a7 & 4) == 0 || (*((_BYTE *)v15 + 116) & 0x40) != 0)
          && ((v19 & 0x800) != 0 || (a7 & 8) == 0)
          && (!a8 || a8(v15, 0LL)) )
        {
          HampActRequestStopEx(v15, a2, a3, a4, v13, a6, a10);
        }
      }
    }
    v17 = *((_QWORD *)v15 + 12);
    v18 = *((_QWORD *)v15 + 10);
    v15 = 0LL;
    result = (struct _HAM_ACTIVITY *)(v17 - 96);
    if ( v17 != v18 + 608 )
      v15 = (struct _HAM_ACTIVITY *)(v17 - 96);
  }
  return result;
}
