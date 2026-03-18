/*
 * XREFs of ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1402BEDCC
 * Callers:
 *     xxxMNKeyDown @ 0x1402BFBCC (xxxMNKeyDown.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140285BFC (safe_cast_fnid_to_PMENUWND.c)
 */

__int64 __fastcall GetMenuInheritedContextHelpId(__int64 **a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  unsigned int v4; // ebx
  _QWORD v5[2]; // [rsp+20h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v5, **a1);
  if ( (**(_DWORD **)v5[0] & 1) == 0 )
  {
    while ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5[0] + 40LL) + 40LL) + 48LL) )
    {
      if ( (**(_DWORD **)v5[0] & 2) != 0 )
      {
        v1 = *(_QWORD *)v5[0];
        if ( *(_QWORD *)(*(_QWORD *)v5[0] + 32LL) == *(_QWORD *)(*(_QWORD *)v5[0] + 8LL) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v5, *(_QWORD *)(*(_QWORD *)v5[0] + 64LL));
          break;
        }
      }
      if ( *(_QWORD *)(*(_QWORD *)v5[0] + 32LL) )
      {
        v2 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v5[0] + 32LL));
        if ( v2 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v5, *(_QWORD *)(v2 + 8));
          if ( *(_QWORD *)v5[0] )
            continue;
        }
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v5, v1);
      return 0LL;
    }
  }
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5[0] + 40LL) + 40LL) + 48LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v5, v1);
  return v4;
}
