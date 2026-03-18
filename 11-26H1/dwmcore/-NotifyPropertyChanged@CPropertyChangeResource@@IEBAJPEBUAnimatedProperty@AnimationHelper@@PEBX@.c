/*
 * XREFs of ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180183A50
 * Callers:
 *     ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z @ 0x180183990 (-NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV-$span@QEBUAnimatedProperty@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180183FD0 (-NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2D.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector4@@@Z @ 0x180190108 (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVe.c)
 *     ?NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@_N@Z @ 0x180267DD4 (-NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@_N@Z.c)
 *     ?NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBU_D3DCOLORVALUE@@@Z @ 0x180267ECC (-NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBU_D3DCOL.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DQuaternion@@@Z @ 0x180267FD4 (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyPropertyChanged(
        CPropertyChangeResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  int v3; // eax
  int v6; // edi
  __int64 v7; // rax
  unsigned int v8; // ebx
  float v9; // xmm6_4
  int v10; // eax
  __int64 v12; // rax
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // r10
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // xmm0_8
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // ebx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // edx
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // ebx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // edx
  __int64 v37; // xmm0_8
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // edx
  int v42; // eax
  __int64 v43; // [rsp+40h] [rbp-88h] BYREF
  int v44; // [rsp+48h] [rbp-80h]
  __int64 v45; // [rsp+50h] [rbp-78h] BYREF
  __int64 v46; // [rsp+58h] [rbp-70h]
  _OWORD v47[4]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v48; // [rsp+D8h] [rbp+10h] BYREF

  v3 = *((_DWORD *)a2 + 1);
  v6 = -2147024809;
  if ( v3 == 35 )
  {
    v12 = *((_QWORD *)this + 7);
    v6 = 0;
    v13 = *(_DWORD *)a2;
    if ( v12 )
    {
      if ( *(_DWORD *)(v12 + 116) )
      {
        if ( *((_DWORD *)this + 18) )
        {
          v14 = *((_DWORD *)this + 19);
          if ( _bittest(&v14, v13) )
          {
            v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 72LL))(
                    *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
                    9LL);
            if ( v15 )
            {
              v16 = *((_QWORD *)this + 7);
              if ( v16 )
                v17 = *(unsigned int *)(v16 + 116);
              else
                v17 = 0LL;
              v18 = *(_QWORD *)a3;
              v45 = v17;
              v46 = *((unsigned int *)this + 18);
              v48 = v18;
              v19 = CoreUICallSend(v15, &v45, 2LL, 9LL, 2, &unk_1802F5B2F, v13, &v48, v43);
              if ( v19 != -2018375675 )
                v6 = v19;
              if ( v6 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x125u, 0LL);
                goto LABEL_8;
              }
              return (unsigned int)v6;
            }
          }
        }
      }
    }
LABEL_8:
    if ( v6 < 0 )
LABEL_54:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x9Du, 0LL);
    return (unsigned int)v6;
  }
  if ( v3 != 265 )
  {
    if ( v3 == 18 )
    {
      v7 = *((_QWORD *)this + 7);
      v6 = 0;
      v8 = *(_DWORD *)a2;
      v9 = *(float *)a3;
      if ( v7 )
      {
        if ( *(_DWORD *)(v7 + 116) )
        {
          if ( *((_DWORD *)this + 18) )
          {
            v10 = *((_DWORD *)this + 19);
            if ( _bittest(&v10, v8) )
            {
              v39 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 72LL))(
                      *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
                      9LL);
              if ( v39 )
              {
                v40 = *((_QWORD *)this + 7);
                if ( v40 )
                  v41 = *(_DWORD *)(v40 + 116);
                else
                  v41 = 0;
                v45 = v41;
                v46 = *((unsigned int *)this + 18);
                v42 = CoreUICallSend(v39, &v45, 2LL, 9LL, 0, &unk_1802F5B27, v8, v9, v43);
                if ( v42 != -2018375675 )
                  v6 = v42;
                if ( v6 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xC8u, 0LL);
              }
            }
          }
        }
      }
    }
    else
    {
      switch ( v3 )
      {
        case 17:
          v6 = CPropertyChangeResource::NotifyBooleanPropertyChanged(this, *(unsigned int *)a2, *(unsigned __int8 *)a3);
          goto LABEL_8;
        case 52:
          v31 = *((_QWORD *)this + 7);
          v6 = 0;
          v32 = *(_DWORD *)a2;
          if ( !v31 )
            goto LABEL_8;
          if ( !*(_DWORD *)(v31 + 116) )
            goto LABEL_8;
          if ( !*((_DWORD *)this + 18) )
            goto LABEL_8;
          v33 = *((_DWORD *)this + 19);
          if ( !_bittest(&v33, v32) )
            goto LABEL_8;
          v34 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 72LL))(
                  *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
                  9LL);
          if ( !v34 )
            goto LABEL_8;
          v35 = *((_QWORD *)this + 7);
          if ( v35 )
            v36 = *(_DWORD *)(v35 + 116);
          else
            v36 = 0;
          v37 = *(_QWORD *)a3;
          v44 = a3[2];
          v45 = v36;
          v46 = *((unsigned int *)this + 18);
          v38 = CoreUICallSend(v34, &v45, 2LL, 9LL, 3, &unk_1802F5B35, v32, &v43, v37);
          if ( v38 != -2018375675 )
            v6 = v38;
          if ( v6 >= 0 )
            return (unsigned int)v6;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x155u, 0LL);
          break;
        case 69:
          v6 = CPropertyChangeResource::NotifyVector4PropertyChanged(this, *(unsigned int *)a2, a3);
          goto LABEL_8;
        case 70:
          v6 = CPropertyChangeResource::NotifyColorPropertyChanged(this, *(unsigned int *)a2, a3);
          goto LABEL_8;
        case 71:
          v6 = CPropertyChangeResource::NotifyQuaternionPropertyChanged(this, *(unsigned int *)a2, a3);
          goto LABEL_8;
        case 104:
          v6 = CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(this, *(unsigned int *)a2, a3);
          goto LABEL_8;
        default:
          goto LABEL_54;
      }
    }
    goto LABEL_8;
  }
  v20 = *((_QWORD *)this + 7);
  v6 = 0;
  v21 = *(_DWORD *)a2;
  if ( !v20 )
    goto LABEL_8;
  if ( !*(_DWORD *)(v20 + 116) )
    goto LABEL_8;
  if ( !*((_DWORD *)this + 18) )
    goto LABEL_8;
  v22 = *((_DWORD *)this + 19);
  if ( !_bittest(&v22, v21) )
    goto LABEL_8;
  v23 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 72LL))(
          *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
          9LL);
  if ( !v23 )
    goto LABEL_8;
  v24 = *((_QWORD *)this + 7);
  if ( v24 )
    v25 = *(_DWORD *)(v24 + 116);
  else
    v25 = 0;
  v26 = *(_OWORD *)a3;
  v27 = *((_OWORD *)a3 + 1);
  v45 = v25;
  v46 = *((unsigned int *)this + 18);
  v47[0] = v26;
  v28 = *((_OWORD *)a3 + 2);
  v47[1] = v27;
  v29 = *((_OWORD *)a3 + 3);
  v47[2] = v28;
  v47[3] = v29;
  v30 = CoreUICallSend(v23, &v45, 2LL, 9LL, 8, &unk_1802F5B53, v21, v47, v43);
  if ( v30 != -2018375675 )
    v6 = v30;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x242u, 0LL);
    goto LABEL_8;
  }
  return (unsigned int)v6;
}
