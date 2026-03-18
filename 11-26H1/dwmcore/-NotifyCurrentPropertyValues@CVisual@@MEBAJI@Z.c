/*
 * XREFs of ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1801C1BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector3@@@Z @ 0x180025070 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18008DB30 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18008DBC0 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x1800D5440 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@M@Z @ 0x18011115C (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@M@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector2@@@Z @ 0x180111700 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVe.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

__int64 __fastcall CVisual::NotifyCurrentPropertyValues(FLOAT *this, int a2)
{
  unsigned int v2; // ebx
  FLOAT v5; // xmm1_4
  FLOAT v6; // xmm1_4
  int v8; // eax
  float OpacityInternal; // xmm0_4
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  struct D2D_VECTOR_3F Buf1; // [rsp+30h] [rbp-30h] BYREF
  struct D2D_VECTOR_3F v15; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0;
  if ( (a2 & 0x10000000) == 0
    || (v5 = this[29],
        Buf1.x = this[28],
        Buf1.z = this[30],
        Buf1.y = v5,
        !memcmp_0(&Buf1, &CVisual::sc_defaultOffset, 0xCuLL))
    || (v8 = CPropertyChangeResource::NotifyVector3PropertyChanged((__int64)this, 0x1Cu, (__int64 *)&Buf1),
        v2 = v8,
        v8 >= 0) )
  {
    if ( (a2 & 0x4000000) == 0
      || (OpacityInternal = CVisual::GetOpacityInternal((CVisual *)this), OpacityInternal == 1.0)
      || (v11 = CPropertyChangeResource::NotifyScalarPropertyChanged((__int64)this, 0x1Au, OpacityInternal),
          v2 = v11,
          v11 >= 0) )
    {
      if ( (a2 & 0x20000000) == 0
        || (v6 = this[34], v15.x = this[33], v15.y = v6, !memcmp_0(&v15, &CVisual::sc_Size, 8uLL))
        || (v10 = CPropertyChangeResource::NotifyVector2PropertyChanged((__int64)this, 0x1Du, (__int64 *)&v15),
            v2 = v10,
            v10 >= 0) )
      {
        if ( (a2 & 0x40000000) == 0
          || (CVisual::GetRelativeOffsetInternal((CVisual *)this, &v15),
              Buf1 = v15,
              !memcmp_0(&Buf1, &CVisual::sc_defaultRelativeOffset, 0xCuLL))
          || (v12 = CPropertyChangeResource::NotifyVector3PropertyChanged((__int64)this, 0x1Eu, (__int64 *)&Buf1),
              v2 = v12,
              v12 >= 0) )
        {
          if ( a2 < 0 )
          {
            CVisual::GetRelativeLayoutSizeInternal((CVisual *)this, &Buf1);
            v15.x = Buf1.x;
            v15.y = Buf1.y;
            if ( memcmp_0(&v15, &CVisual::sc_defaultRelativeSize, 8uLL) )
            {
              v13 = CPropertyChangeResource::NotifyVector2PropertyChanged((__int64)this, 0x1Fu, (__int64 *)&v15);
              v2 = v13;
              if ( v13 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x1850u, 0LL);
            }
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x1846u, 0LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1839u, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1830u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x1827u, 0LL);
  }
  return v2;
}
