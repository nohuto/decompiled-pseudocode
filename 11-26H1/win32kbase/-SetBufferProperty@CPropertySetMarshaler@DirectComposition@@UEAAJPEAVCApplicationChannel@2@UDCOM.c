/*
 * XREFs of ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401878D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x140127344 (--$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUProperty.c)
 *     ??$UpdateProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x140127820 (--$UpdateProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z.c)
 *     ??$UpdateProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector3@@@Z @ 0x140127934 (--$UpdateProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVal.c)
 *     ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBU_D3DCOLORVALUE@@@Z @ 0x140127A44 (--$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySe.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DQuaternion@@@Z @ 0x140127B9C (--$UpdateProperty@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySet.c)
 *     ??$UpdateProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z @ 0x140127D10 (--$UpdateProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z.c)
 *     ??$UpdateProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DMatrix@@@Z @ 0x140127DE4 (--$UpdateProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValu.c)
 *     ??$AddProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z @ 0x140187BDC (--$AddProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z.c)
 *     ??$AddProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DMatrix@@@Z @ 0x140199BC0 (--$AddProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@.c)
 *     ??$AddProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBU_D3DCOLORVALUE@@@Z @ 0x14024130C (--$AddProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVa.c)
 *     ??$AddProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector2@@@Z @ 0x14024148C (--$AddProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@.c)
 *     ??$AddProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector3@@@Z @ 0x140241614 (--$AddProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@.c)
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x14024179C (--$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySet.c)
 *     ??$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x140241918 (--$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector2@@@Z @ 0x140241DF4 (--$UpdateProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVal.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  int v6; // edx
  __int64 v8; // xmm0_8
  int v9; // r8d
  int updated; // eax
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  __int64 v20; // [rsp+20h] [rbp-10h] BYREF
  int v21; // [rsp+28h] [rbp-8h]

  v6 = 0;
  if ( (a3 == 1 || a3 == 2) && a5 >= 0xC )
  {
    v8 = *a4;
    v21 = *((_DWORD *)a4 + 2);
    v20 = v8;
    if ( v21 == 17 )
    {
      if ( (_DWORD)a5 == 16 )
      {
        v18 = a3 - 1;
        if ( !v18 )
        {
          updated = DirectComposition::CPropertySetMarshaler::AddProperty<bool>(a1, &v20, (char *)a4 + 12);
          goto LABEL_18;
        }
        if ( v18 == 1 )
        {
          updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<bool>(
                      a1,
                      (unsigned int *)&v20,
                      (_BYTE *)a4 + 12);
          goto LABEL_18;
        }
      }
      goto LABEL_60;
    }
    if ( v21 == 18 )
    {
      if ( (_DWORD)a5 == 16 )
      {
        v17 = a3 - 1;
        if ( !v17 )
        {
          updated = DirectComposition::CPropertySetMarshaler::AddProperty<float>(a1, &v20, (char *)a4 + 12);
          goto LABEL_18;
        }
        if ( v17 == 1 )
        {
          updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<float>(
                      a1,
                      (unsigned int *)&v20,
                      (_DWORD *)a4 + 3);
          goto LABEL_18;
        }
      }
      goto LABEL_60;
    }
    if ( v21 == 35 )
    {
      if ( (_DWORD)a5 == 20 )
      {
        v16 = a3 - 1;
        if ( !v16 )
        {
          updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2DVector2>(a1, &v20, (char *)a4 + 12);
          goto LABEL_18;
        }
        if ( v16 == 1 )
        {
          updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DVector2>(a1, &v20, (char *)a4 + 12);
          goto LABEL_18;
        }
      }
      goto LABEL_60;
    }
    if ( v21 == 52 )
    {
      if ( (_DWORD)a5 == 24 )
      {
        v15 = a3 - 1;
        if ( !v15 )
        {
          updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2DVector3>(a1, &v20, (char *)a4 + 12);
          goto LABEL_18;
        }
        if ( v15 == 1 )
        {
          updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DVector3>(
                      a1,
                      (unsigned int *)&v20,
                      (__int64)a4 + 12);
          goto LABEL_18;
        }
      }
      goto LABEL_60;
    }
    if ( v21 == 69 )
    {
      if ( (_DWORD)a5 != 28 )
        goto LABEL_60;
      v14 = a3 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
          goto LABEL_60;
        goto LABEL_28;
      }
    }
    else if ( v21 == 70 )
    {
      if ( (_DWORD)a5 != 28 )
        goto LABEL_60;
      v13 = a3 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<_D3DCOLORVALUE>(
                      a1,
                      (unsigned int *)&v20,
                      (__int64 *)((char *)a4 + 12));
          goto LABEL_18;
        }
        goto LABEL_60;
      }
    }
    else
    {
      if ( v21 != 71 )
      {
        if ( v21 == 104 )
        {
          if ( (_DWORD)a5 == 36 )
          {
            v11 = a3 - 1;
            if ( !v11 )
            {
              updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2D_MATRIX_3X2_F>(
                          a1,
                          &v20,
                          (char *)a4 + 12);
              goto LABEL_18;
            }
            if ( v11 == 1 )
            {
              updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2D_MATRIX_3X2_F>(
                          a1,
                          (unsigned int *)&v20,
                          (__int64)a4 + 12);
              goto LABEL_18;
            }
          }
        }
        else
        {
          if ( v21 != 265 )
            goto LABEL_62;
          if ( (_DWORD)a5 == 76 )
          {
            v9 = a3 - 1;
            if ( !v9 )
            {
              updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2DMatrix>(a1, &v20, (char *)a4 + 12);
              goto LABEL_18;
            }
            if ( v9 == 1 )
            {
              updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DMatrix>(
                          a1,
                          (unsigned int *)&v20,
                          (__int64 *)((char *)a4 + 12));
LABEL_18:
              v6 = updated;
              goto LABEL_61;
            }
          }
        }
LABEL_60:
        v6 = -1073741811;
LABEL_61:
        if ( v6 < 0 )
          return (unsigned int)v6;
LABEL_62:
        *(_DWORD *)(a1 + 16) |= 0x100u;
        *a6 = 1;
        return (unsigned int)v6;
      }
      if ( (_DWORD)a5 != 28 )
        goto LABEL_60;
      v12 = a3 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
          goto LABEL_60;
LABEL_28:
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DQuaternion>(
                    a1,
                    (unsigned int *)&v20,
                    (__int64 *)((char *)a4 + 12));
        goto LABEL_18;
      }
    }
    updated = DirectComposition::CPropertySetMarshaler::AddProperty<_D3DCOLORVALUE>(a1, &v20, (char *)a4 + 12);
    goto LABEL_18;
  }
  return (unsigned int)-1073741811;
}
