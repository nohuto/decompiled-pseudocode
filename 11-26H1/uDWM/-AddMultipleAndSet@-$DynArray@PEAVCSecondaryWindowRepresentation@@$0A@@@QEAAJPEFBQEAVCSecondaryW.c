/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAJPEFBQEAVCSecondaryWindowRepresentation@@I@Z @ 0x180065478
 * Callers:
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18002A9F4 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002AD28 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CSecondaryWindowRepresentation *,0>::AddMultipleAndSet(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v4; // r8d
  unsigned int v5; // edi
  int v7; // eax
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  v4 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
  }
  else
  {
    v5 = 0;
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v8 = a2;
      v7 = DynArrayImpl<0>::Grow(a1, 8u, 1, (__int64)a2, (unsigned __int64 *)&v8);
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xC2u, 0LL);
      else
        *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(a1 + 24))++) + *(_QWORD *)a1) = *v8;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * v2) = *a2;
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  return v5;
}
