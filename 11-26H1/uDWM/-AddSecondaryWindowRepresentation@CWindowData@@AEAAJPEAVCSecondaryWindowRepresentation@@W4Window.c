/*
 * XREFs of ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18002A9F4
 * Callers:
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18002A920 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001AA00 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002AD28 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x18002AE84 (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003852C (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAJPEFBQEAVCSecondaryWindowRepresentation@@I@Z @ 0x180065478 (-AddMultipleAndSet@-$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAJPEFBQEAVCSecondaryW.c)
 */

__int64 __fastcall CWindowData::AddSecondaryWindowRepresentation(
        __int64 a1,
        CSecondaryWindowRepresentation *a2,
        int a3,
        char a4)
{
  unsigned int v4; // ebx
  int v7; // esi
  int v8; // esi
  CBaseObject *v10; // rcx
  __int64 i; // rsi
  struct CWindowData *v12; // rdx
  int v13; // eax
  unsigned int v14; // [rsp+20h] [rbp-18h]
  CSecondaryWindowRepresentation *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  v4 = 0;
  if ( a4 )
  {
    v13 = DynArray<CSecondaryWindowRepresentation *,0>::AddMultipleAndSet(a1 + 496, &v15);
    v4 = v13;
    if ( v13 < 0 )
    {
      v14 = 813;
      goto LABEL_22;
    }
  }
  v7 = a3 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        if ( !CWindowData::IsImmersiveWindow((CWindowData *)a1) )
        {
          v10 = *(CBaseObject **)(a1 + 488);
          if ( v10 )
          {
            CBaseObject::AddRef(v10);
          }
          else
          {
            v13 = CWindowIconic::Create((struct CWindowData *)a1, (struct CWindowIconic **)(a1 + 488), 0);
            v4 = v13;
            if ( v13 < 0 )
            {
              v14 = 845;
LABEL_22:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, v14, 0LL);
            }
          }
        }
      }
      else
      {
        v4 = -2147418113;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147418113, 0x35Cu, 0LL);
      }
    }
  }
  else if ( ++*(_DWORD *)(a1 + 528) == 1 )
  {
    CWindowData::TrackOwnedWindows((CWindowData *)a1, 1);
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 632); i = (unsigned int)(i + 1) )
    {
      v12 = *(struct CWindowData **)(*(_QWORD *)(a1 + 608) + 8 * i);
      if ( (*((_BYTE *)v12 + 738) & 1) != 0 )
      {
        v13 = CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(v15, v12, 1);
        v4 = v13;
        if ( v13 < 0 )
        {
          v14 = 833;
          goto LABEL_22;
        }
      }
    }
  }
  return v4;
}
