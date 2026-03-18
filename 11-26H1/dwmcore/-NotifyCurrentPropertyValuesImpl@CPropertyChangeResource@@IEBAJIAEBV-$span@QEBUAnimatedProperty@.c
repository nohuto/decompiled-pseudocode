/*
 * XREFs of ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z @ 0x180183990
 * Callers:
 *     ?NotifyCurrentPropertyValues@CComponentTransform2D@@MEBAJI@Z @ 0x180183900 (-NotifyCurrentPropertyValues@CComponentTransform2D@@MEBAJI@Z.c)
 *     ?NotifyCurrentPropertyValues@CRectangleGeometry@@MEBAJI@Z @ 0x180183930 (-NotifyCurrentPropertyValues@CRectangleGeometry@@MEBAJI@Z.c)
 *     ?NotifyCurrentPropertyValues@CComponentTransform3D@@MEBAJI@Z @ 0x180183960 (-NotifyCurrentPropertyValues@CComponentTransform3D@@MEBAJI@Z.c)
 *     ?NotifyCurrentPropertyValues@CViewBox@@UEBAJI@Z @ 0x180286120 (-NotifyCurrentPropertyValues@CViewBox@@UEBAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180183A50 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyCurrentPropertyValuesImpl(
        CPropertyChangeResource *this,
        int a2,
        _QWORD *a3)
{
  unsigned int **v3; // rbx
  unsigned int v6; // edi
  unsigned int **v7; // r15
  unsigned int *v8; // rsi
  char *v9; // rbp
  int v11; // eax

  v3 = (unsigned int **)a3[1];
  v6 = 0;
  v7 = &v3[*a3];
  while ( v3 != v7 )
  {
    v8 = *v3;
    if ( _bittest(&a2, **v3) )
    {
      v9 = (char *)this + *((_QWORD *)v8 + 1);
      if ( memcmp_0(v9, *((const void **)v8 + 4), *((_QWORD *)v8 + 2)) )
      {
        v11 = CPropertyChangeResource::NotifyPropertyChanged(
                this,
                (const struct AnimationHelper::AnimatedProperty *)v8,
                v9);
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x27Fu, 0LL);
          return v6;
        }
      }
    }
    ++v3;
  }
  return v6;
}
