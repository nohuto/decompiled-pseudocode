/*
 * XREFs of ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1401656D8
 * Callers:
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x14016C2F0 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1400281B8 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x140165780 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXAEAVPDEVOBJ@@@Z @ 0x1401657D8 (-DrvUpdatePDevForWDDMDevice@@YAXAEAVPDEVOBJ@@@Z.c)
 */

void __fastcall DrvUpdatePDevForWDDMVidPnSource(struct _LUID *a1, int a2)
{
  __int64 i; // rcx
  struct _ERESOURCE *v5; // rax
  struct _ERESOURCE *v6; // rbx
  int v7; // r8d
  __int64 v8; // rdi
  struct _LUID *v9; // rax
  struct _ERESOURCE *v10; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = (__int64)v6 )
  {
    v5 = hdevEnumerate<1>(i);
    v6 = v5;
    if ( !v5 )
      break;
    v7 = (__int64)v5->ExclusiveWaiters & 0x20401;
    v10 = v5;
    if ( v7 == 1 )
    {
      v8 = *(_QWORD *)&v5[24].NumberOfSharedWaiters;
      if ( v8 )
      {
        if ( v8 != -4 && (*(_DWORD *)(v8 + 160) & 0x800000) != 0 )
        {
          v9 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v10);
          if ( v9->LowPart == a1->LowPart && v9->HighPart == a1->HighPart && *(_DWORD *)(v8 + 248) == a2 )
            DrvUpdatePDevForWDDMDevice((struct PDEVOBJ *)&v10);
        }
      }
    }
  }
}
