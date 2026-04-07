/*
 * XREFs of ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18002ABE4
 * Callers:
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18002A920 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18002AB54 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001AA00 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002AD28 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x18002AE84 (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18002C9F8 (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     McTemplateU0ppd_EtwEventWriteTransfer @ 0x1800891F4 (McTemplateU0ppd_EtwEventWriteTransfer.c)
 */

void __fastcall CWindowData::RemoveSecondaryWindowRepresentation(
        __int64 a1,
        CSecondaryWindowRepresentation *a2,
        int a3,
        char a4)
{
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 i; // r8
  int v10; // edi
  int v11; // edi
  struct CWindowData *v12; // rdx
  __int64 v13; // rdx
  CBaseObject *v14; // rcx

  if ( a4 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0ppd_EtwEventWriteTransfer(a1, (_DWORD)a2, (_DWORD)a2, *(_QWORD *)(a1 + 40), a3);
    v7 = *(_DWORD *)(a1 + 520);
    v8 = 0LL;
    for ( i = *(_QWORD *)(a1 + 496); (unsigned int)v8 < v7; v8 = (unsigned int)(v8 + 1) )
    {
      if ( a2 == *(CSecondaryWindowRepresentation **)(i + 8 * v8) )
        break;
    }
    if ( (unsigned int)v8 < v7 )
    {
      if ( (unsigned int)v8 < v7 - 1 )
      {
        do
        {
          v13 = (unsigned int)(v8 + 1);
          *(_QWORD *)(i + 8 * v8) = *(_QWORD *)(i + 8 * v13);
          v8 = v13;
        }
        while ( (unsigned int)v13 < *(_DWORD *)(a1 + 520) - 1 );
      }
      --*(_DWORD *)(a1 + 520);
    }
  }
  v10 = a3 - 1;
  if ( v10 )
  {
    if ( v10 == 2 && !CWindowData::IsImmersiveWindow((CWindowData *)a1) )
    {
      v14 = *(CBaseObject **)(a1 + 488);
      if ( v14 )
      {
        if ( !(unsigned int)CBaseObject::Release(v14) )
        {
          CIconicBitmapRegistry::IconicRepresentationDestroyed(
            *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
            (struct CWindowData *)a1);
          *(_QWORD *)(a1 + 488) = 0LL;
        }
      }
    }
  }
  else
  {
    --*(_DWORD *)(a1 + 528);
    v11 = *(_DWORD *)(a1 + 632);
    while ( v11 )
    {
      v12 = *(struct CWindowData **)(*(_QWORD *)(a1 + 608) + 8LL * (unsigned int)--v11);
      if ( (*((_BYTE *)v12 + 738) & 1) != 0 )
        CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(a2, v12, 0);
    }
    if ( !*(_DWORD *)(a1 + 528) )
      CWindowData::TrackOwnedWindows((CWindowData *)a1, 0);
  }
}
