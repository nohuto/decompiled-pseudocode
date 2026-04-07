/*
 * XREFs of ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18001E12C
 * Callers:
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18001DBAC (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001ABD8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800535D8 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x1800537A0 (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18005478C (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 */

__int64 __fastcall CWindowData::AddSecondaryWindowRepresentation(
        __int64 a1,
        CSecondaryWindowRepresentation *a2,
        int a3,
        char a4)
{
  unsigned int v4; // ebx
  CSecondaryWindowRepresentation *v6; // r11
  int v8; // esi
  int v9; // esi
  CMILRefCountBase *v11; // rcx
  __int64 i; // rsi
  struct CWindowData *v13; // rdx
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v18; // ebp
  unsigned int v19; // [rsp+20h] [rbp-18h]
  CSecondaryWindowRepresentation *v20; // [rsp+48h] [rbp+10h] BYREF

  v20 = a2;
  v4 = 0;
  v6 = a2;
  if ( a4 )
  {
    v15 = *(_DWORD *)(a1 + 520);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      v4 = -2147024362;
      v17 = 179;
      v18 = -2147024362;
LABEL_19:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v17, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x331u, 0LL);
      return v4;
    }
    v18 = 0;
    if ( v16 > *(_DWORD *)(a1 + 516) )
    {
      v18 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 496, 8, 1, &v20);
      v4 = v18;
      if ( v18 < 0 )
      {
        v17 = 190;
        goto LABEL_19;
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 496) + 8LL * *(unsigned int *)(a1 + 520)) = v6;
      *(_DWORD *)(a1 + 520) = v16;
    }
    v6 = v20;
    v4 = v18;
  }
  v8 = a3 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        if ( !CWindowData::IsImmersiveWindow((CWindowData *)a1) )
        {
          v11 = *(CMILRefCountBase **)(a1 + 488);
          if ( v11 )
          {
            CMILRefCountBase::AddRef(v11);
          }
          else
          {
            v14 = CWindowIconic::Create((struct CWindowData *)a1, (struct CWindowIconic **)(a1 + 488), 0);
            v4 = v14;
            if ( v14 < 0 )
            {
              v19 = 849;
LABEL_29:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, v19, 0LL);
            }
          }
        }
      }
      else
      {
        v4 = -2147418113;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147418113, 0x360u, 0LL);
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
      v13 = *(struct CWindowData **)(*(_QWORD *)(a1 + 608) + 8 * i);
      if ( (*((_BYTE *)v13 + 674) & 1) != 0 )
      {
        v14 = CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(v6, v13, 1);
        v4 = v14;
        if ( v14 < 0 )
        {
          v19 = 837;
          goto LABEL_29;
        }
        v6 = v20;
      }
    }
  }
  return v4;
}
