/*
 * XREFs of ??$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DMatrix@@@Z @ 0x180168674
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x180167FC8 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@UD2DMatrix@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x180168744 (--$AddProperty@UD2DMatrix@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IW4DCOMPOSITION_EXPRES.c)
 *     ??$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x180168904 (--$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPR.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<D2DMatrix>(__int64 a1, __int64 a2, __int64 a3)
{
  int updated; // eax
  unsigned int v4; // ebx
  unsigned int v6; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<D2DMatrix>(
                a1,
                *(_DWORD *)(a2 + 8),
                *(_DWORD *)(a2 + 12),
                *(_DWORD *)(a2 + 16),
                a3);
    v4 = updated;
    if ( updated >= 0 )
      return 0;
    v7 = 328;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, v7, 0LL);
    return v4;
  }
  v6 = *(_DWORD *)(a2 + 8);
  if ( v6 >= *(_DWORD *)(a1 + 112) )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  if ( *(_DWORD *)(a2 + 12) != (*(_DWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v6 + 4) & 0x1FFFFFFF) )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x14Fu, 0LL);
    return v4;
  }
  updated = CPropertySet::UpdateProperty<D2DMatrix>(a1, *(unsigned int *)(a2 + 8));
  v4 = updated;
  if ( updated < 0 )
  {
    v7 = 338;
    goto LABEL_12;
  }
  return 0;
}
