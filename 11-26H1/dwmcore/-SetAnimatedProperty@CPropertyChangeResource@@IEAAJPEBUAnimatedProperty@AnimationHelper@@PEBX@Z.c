/*
 * XREFs of ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180023DF0
 * Callers:
 *     CRectangleGeometry::_lambda_9_::_lambda_invoker_cdecl_ @ 0x180024560 (CRectangleGeometry--_lambda_9_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector3@@@Z @ 0x180025070 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??8@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x18017FEC0 (--8@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 *     ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180183FD0 (-NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2D.c)
 *     ??$AreEqual@AEBUTimeSpan@@AEBU1@U?$integral_constant@_N$00@std@@@ExpressionHelper@@YA_NAEBUTimeSpan@@0@Z @ 0x180184CD0 (--$AreEqual@AEBUTimeSpan@@AEBU1@U-$integral_constant@_N$00@std@@@ExpressionHelper@@YA_NAEBUTimeS.c)
 *     ??8D2DQuaternion@@QEBAHAEBU0@@Z @ 0x18018D7B0 (--8D2DQuaternion@@QEBAHAEBU0@@Z.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector4@@@Z @ 0x180190108 (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVe.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     ?NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@_N@Z @ 0x180267DD4 (-NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@_N@Z.c)
 *     ?NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBU_D3DCOLORVALUE@@@Z @ 0x180267ECC (-NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBU_D3DCOL.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DQuaternion@@@Z @ 0x180267FD4 (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::SetAnimatedProperty(
        CPropertyChangeResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _QWORD *a3,
        const char *a4)
{
  int v4; // eax
  char *v5; // r15
  int v9; // edi
  bool v10; // zf
  char v11; // al
  unsigned __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // ebx
  float v17; // xmm6_4
  int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // ebx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // xmm0_8
  int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // ebx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // edx
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // edx
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // [rsp+40h] [rbp-88h] BYREF
  __int64 v45; // [rsp+48h] [rbp-80h]
  _OWORD v46[4]; // [rsp+50h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  __int64 v48; // [rsp+D0h] [rbp+8h] BYREF

  v4 = *((_DWORD *)a2 + 1);
  v5 = (char *)this + *((_QWORD *)a2 + 1);
  v9 = 0;
  if ( v4 == 35 )
  {
    v10 = *a3 == *(_QWORD *)v5;
LABEL_3:
    v11 = v10;
  }
  else
  {
    if ( v4 != 18 )
    {
      switch ( v4 )
      {
        case 17:
          v10 = *(_BYTE *)a3 == (unsigned __int8)*v5;
          goto LABEL_3;
        case 42:
          v11 = ExpressionHelper::AreEqual<TimeSpan const &,TimeSpan const &,std::integral_constant<bool,1>>(
                  a3,
                  (char *)this + *((_QWORD *)a2 + 1));
          goto LABEL_4;
        case 52:
          v13 = *a3 - *(_QWORD *)v5;
          if ( *a3 == *(_QWORD *)v5 )
            v13 = *((unsigned int *)a3 + 2) - (unsigned __int64)*((unsigned int *)v5 + 2);
          v10 = v13 == 0;
          goto LABEL_3;
        case 69:
          v42 = *a3 - *(_QWORD *)v5;
          if ( *a3 == *(_QWORD *)v5 )
            v42 = a3[1] - *((_QWORD *)v5 + 1);
          v10 = v42 == 0;
          goto LABEL_3;
        case 70:
          v11 = operator==(a3, (char *)this + *((_QWORD *)a2 + 1));
          goto LABEL_4;
        case 71:
          v11 = (unsigned int)D2DQuaternion::operator==(a3, (char *)this + *((_QWORD *)a2 + 1)) != 0;
          goto LABEL_4;
        case 104:
          v43 = *a3 - *(_QWORD *)v5;
          if ( *a3 == *(_QWORD *)v5 )
          {
            v43 = a3[1] - *((_QWORD *)v5 + 1);
            if ( !v43 )
              v43 = a3[2] - *((_QWORD *)v5 + 2);
          }
          v10 = v43 == 0;
          goto LABEL_3;
        case 265:
          v10 = memcmp_0(a3, (char *)this + *((_QWORD *)a2 + 1), 0x40uLL) == 0;
          goto LABEL_3;
        default:
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xB4,
            (unsigned int)"onecoreuap\\windows\\DWM\\common\\comp\\ExpressionHelper.h",
            a4);
      }
    }
    v11 = *(float *)a3 == *(float *)v5;
  }
LABEL_4:
  if ( !v11 )
  {
    memcpy_0(v5, a3, *((_QWORD *)a2 + 2));
    if ( *((_QWORD *)this + 6) )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    (*(void (__fastcall **)(CPropertyChangeResource *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
    v14 = *((_DWORD *)a2 + 1);
    v9 = -2147024809;
    switch ( v14 )
    {
      case 35:
        v19 = *((_QWORD *)this + 7);
        v9 = 0;
        v20 = *(_DWORD *)a2;
        if ( v19 )
        {
          if ( *(_DWORD *)(v19 + 116) )
          {
            if ( *((_DWORD *)this + 18) )
            {
              v21 = *((_DWORD *)this + 19);
              if ( _bittest(&v21, v20) )
              {
                v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 72LL))(
                        *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
                        9LL);
                if ( v22 )
                {
                  v23 = *((_QWORD *)this + 7);
                  if ( v23 )
                    v24 = *(_DWORD *)(v23 + 116);
                  else
                    v24 = 0;
                  v25 = *a3;
                  v44 = v24;
                  v45 = *((unsigned int *)this + 18);
                  v48 = v25;
                  v26 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64, __int16, void *, unsigned int, __int64 *))CoreUICallSend)(
                          v22,
                          &v44,
                          2LL,
                          9LL,
                          2,
                          &unk_1802F5B2F,
                          v20,
                          &v48);
                  if ( v26 != -2018375675 )
                    v9 = v26;
                  if ( v9 >= 0 )
                    return (unsigned int)v9;
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x125u, 0LL);
                }
              }
            }
          }
        }
        break;
      case 265:
        v27 = *((_QWORD *)this + 7);
        v9 = 0;
        v28 = *(_DWORD *)a2;
        if ( v27 )
        {
          if ( *(_DWORD *)(v27 + 116) )
          {
            if ( *((_DWORD *)this + 18) )
            {
              v29 = *((_DWORD *)this + 19);
              if ( _bittest(&v29, v28) )
              {
                v30 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 72LL))(
                        *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
                        9LL);
                if ( v30 )
                {
                  v31 = *((_QWORD *)this + 7);
                  if ( v31 )
                    v32 = *(_DWORD *)(v31 + 116);
                  else
                    v32 = 0;
                  v33 = *(_OWORD *)a3;
                  v34 = *((_OWORD *)a3 + 1);
                  v44 = v32;
                  v45 = *((unsigned int *)this + 18);
                  v46[0] = v33;
                  v35 = *((_OWORD *)a3 + 2);
                  v46[1] = v34;
                  v36 = *((_OWORD *)a3 + 3);
                  v46[2] = v35;
                  v46[3] = v36;
                  v37 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64, __int16, void *, unsigned int, _OWORD *))CoreUICallSend)(
                          v30,
                          &v44,
                          2LL,
                          9LL,
                          8,
                          &unk_1802F5B53,
                          v28,
                          v46);
                  if ( v37 != -2018375675 )
                    v9 = v37;
                  if ( v9 >= 0 )
                    return (unsigned int)v9;
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x242u, 0LL);
                }
              }
            }
          }
        }
        break;
      case 18:
        v15 = *((_QWORD *)this + 7);
        v9 = 0;
        v16 = *(_DWORD *)a2;
        v17 = *(float *)a3;
        if ( v15 )
        {
          if ( *(_DWORD *)(v15 + 116) )
          {
            if ( *((_DWORD *)this + 18) )
            {
              v18 = *((_DWORD *)this + 19);
              if ( _bittest(&v18, v16) )
              {
                v38 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 72LL))(
                        *(_QWORD *)(*((_QWORD *)this + 3) + 6384LL),
                        9LL);
                if ( v38 )
                {
                  v39 = *((_QWORD *)this + 7);
                  if ( v39 )
                    v40 = *(_DWORD *)(v39 + 116);
                  else
                    v40 = 0;
                  v44 = v40;
                  v45 = *((unsigned int *)this + 18);
                  v41 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64, _WORD, void *, unsigned int, _QWORD))CoreUICallSend)(
                          v38,
                          &v44,
                          2LL,
                          9LL,
                          0,
                          &unk_1802F5B27,
                          v16,
                          v17);
                  if ( v41 != -2018375675 )
                    v9 = v41;
                  if ( v9 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC8u, 0LL);
                }
              }
            }
          }
        }
        break;
      default:
        switch ( v14 )
        {
          case 17:
            v9 = CPropertyChangeResource::NotifyBooleanPropertyChanged(
                   this,
                   *(unsigned int *)a2,
                   *(unsigned __int8 *)a3);
            goto LABEL_21;
          case 52:
            v9 = CPropertyChangeResource::NotifyVector3PropertyChanged(this, *(unsigned int *)a2, a3);
            goto LABEL_21;
          case 69:
            v9 = CPropertyChangeResource::NotifyVector4PropertyChanged(this, *(unsigned int *)a2, a3);
            goto LABEL_21;
          case 70:
            v9 = CPropertyChangeResource::NotifyColorPropertyChanged(this, *(unsigned int *)a2, a3);
            goto LABEL_21;
          case 71:
            v9 = CPropertyChangeResource::NotifyQuaternionPropertyChanged(this, *(unsigned int *)a2, a3);
            goto LABEL_21;
          case 104:
            v9 = CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(this, *(unsigned int *)a2, a3);
            goto LABEL_21;
          default:
            goto LABEL_22;
        }
    }
LABEL_21:
    if ( v9 < 0 )
    {
LABEL_22:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x9Du, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x66u, 0LL);
    }
  }
  return (unsigned int)v9;
}
