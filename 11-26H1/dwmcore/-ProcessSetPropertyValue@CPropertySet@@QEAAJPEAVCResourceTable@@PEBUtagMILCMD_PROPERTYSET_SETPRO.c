/*
 * XREFs of ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x180167FC8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180024920 (--$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITI.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x180167850 (--$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z.c)
 *     ??$AddOrUpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DQuaternion@@@Z @ 0x180167AEC (--$AddOrUpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTY.c)
 *     ??$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector4@@@Z @ 0x180167C8C (--$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 *     ??$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z @ 0x180168374 (--$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z.c)
 *     ??$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DMatrix@@@Z @ 0x180168674 (--$AddOrUpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALU.c)
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180168824 (--$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IW4DCOMPOSITION.c)
 *     ??$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBU_D3DCOLORVALUE@@@Z @ 0x180168C58 (--$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERT.c)
 *     ??$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector3@@@Z @ 0x180168D38 (--$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 *     ??$AddOrUpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector2@@@Z @ 0x180169548 (--$AddOrUpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::ProcessSetPropertyValue(
        CPropertySet *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROPERTYSET_SETPROPERTYVALUE *a3,
        _QWORD *a4,
        unsigned int a5)
{
  int v6; // r8d
  int updated; // eax
  unsigned int v8; // ebx
  int v10; // edi
  int v11; // r9d
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = *((_DWORD *)a3 + 4);
  if ( v6 == 17 )
  {
    if ( a5 == 4 )
    {
      updated = CPropertySet::AddOrUpdateProperty<bool>((__int64)this, (__int64)a3, (__int64)a4);
      v8 = updated;
      if ( updated >= 0 )
        return 0;
      v14 = 91;
      goto LABEL_29;
    }
    v14 = 90;
    goto LABEL_16;
  }
  if ( v6 != 18 )
  {
    switch ( v6 )
    {
      case 35:
        if ( a5 == 8 )
        {
          updated = CPropertySet::AddOrUpdateProperty<D2DVector2>(this, a3, a4);
          v8 = updated;
          if ( updated >= 0 )
            return 0;
          v14 = 101;
          goto LABEL_29;
        }
        v14 = 100;
        break;
      case 52:
        if ( a5 == 12 )
        {
          updated = CPropertySet::AddOrUpdateProperty<D2DVector3>(this, a3, a4);
          v8 = updated;
          if ( updated >= 0 )
            return 0;
          v14 = 106;
          goto LABEL_29;
        }
        v14 = 105;
        break;
      case 69:
        if ( a5 == 16 )
        {
          updated = CPropertySet::AddOrUpdateProperty<D2DVector4>((__int64)this, (__int64)a3, (__int64)a4);
          v8 = updated;
          if ( updated >= 0 )
            return 0;
          v14 = 111;
          goto LABEL_29;
        }
        v14 = 110;
        break;
      case 70:
        if ( a5 == 16 )
        {
          updated = CPropertySet::AddOrUpdateProperty<_D3DCOLORVALUE>(this, a3, a4);
          v8 = updated;
          if ( updated >= 0 )
            return 0;
          v14 = 116;
          goto LABEL_29;
        }
        v14 = 115;
        break;
      case 71:
        if ( a5 == 16 )
        {
          updated = CPropertySet::AddOrUpdateProperty<D2DQuaternion>((__int64)this, (__int64)a3, (__int64)a4);
          v8 = updated;
          if ( updated >= 0 )
            return 0;
          v14 = 121;
          goto LABEL_29;
        }
        v14 = 120;
        break;
      case 104:
        if ( a5 == 24 )
        {
          if ( *((_BYTE *)a3 + 20) )
          {
            v10 = CPropertySet::AddProperty<D2D_MATRIX_3X2_F>(
                    (_DWORD)this,
                    *((_DWORD *)a3 + 2),
                    *((_DWORD *)a3 + 3),
                    v6,
                    (__int64)a4);
            if ( v10 >= 0 )
              return 0;
            v13 = 328;
          }
          else
          {
            v12 = *((_DWORD *)a3 + 2);
            if ( v12 >= *((_DWORD *)this + 28) )
              ModuleFailFastForHRESULT(-2147024809, retaddr);
            if ( *((_DWORD *)a3 + 3) == (*(_DWORD *)(*((_QWORD *)this + 11) + 8LL * v12 + 4) & 0x1FFFFFFF) )
            {
              v10 = CPropertySet::UpdateProperty<D2D_MATRIX_3X2_F>((__int64)this, *((_DWORD *)a3 + 2), v6, a4);
              if ( v10 >= 0 )
                return 0;
              v13 = 338;
            }
            else
            {
              v10 = -2003303421;
              v13 = 335;
            }
          }
          v8 = v10;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v13, 0LL);
          v14 = 126;
          goto LABEL_17;
        }
        v14 = 125;
        break;
      case 265:
        if ( a5 == 64 )
        {
          updated = CPropertySet::AddOrUpdateProperty<D2DMatrix>(this, a3, a4);
          v8 = updated;
          if ( updated >= 0 )
            return 0;
          v14 = 131;
          goto LABEL_29;
        }
        v14 = 130;
        break;
      default:
        ModuleFailFastForHRESULT(-2003303421, retaddr);
    }
LABEL_16:
    v10 = -2003303421;
    v8 = -2003303421;
LABEL_17:
    v11 = v10;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v14, 0LL);
    return v8;
  }
  if ( a5 != 4 )
  {
    v14 = 95;
    goto LABEL_16;
  }
  updated = CPropertySet::AddOrUpdateProperty<float>(this, a3, a4);
  v8 = updated;
  if ( updated < 0 )
  {
    v14 = 96;
LABEL_29:
    v11 = updated;
    goto LABEL_18;
  }
  return 0;
}
