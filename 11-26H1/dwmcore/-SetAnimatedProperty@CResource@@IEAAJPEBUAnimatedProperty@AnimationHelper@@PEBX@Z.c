/*
 * XREFs of ?SetAnimatedProperty@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18018E6FC
 * Callers:
 *     CLineGeometry::_lambda_7_::_lambda_invoker_cdecl_ @ 0x18018E6F0 (CLineGeometry--_lambda_7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ??8@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x18017FEC0 (--8@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 *     ??$AreEqual@AEBUTimeSpan@@AEBU1@U?$integral_constant@_N$00@std@@@ExpressionHelper@@YA_NAEBUTimeSpan@@0@Z @ 0x180184CD0 (--$AreEqual@AEBUTimeSpan@@AEBU1@U-$integral_constant@_N$00@std@@@ExpressionHelper@@YA_NAEBUTimeS.c)
 *     ??8D2DQuaternion@@QEBAHAEBU0@@Z @ 0x18018D7B0 (--8D2DQuaternion@@QEBAHAEBU0@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResource::SetAnimatedProperty(
        CResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        float *a3)
{
  int v4; // r9d
  float *v5; // rdi
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  bool v11; // zf
  bool v12; // al
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rcx
  int v16; // r9d
  int v17; // r9d
  __int64 v18; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_DWORD *)a2 + 1);
  v5 = (float *)((char *)this + *((_QWORD *)a2 + 1));
  if ( v4 > 69 )
  {
    v16 = v4 - 70;
    if ( !v16 )
    {
      v12 = operator==(a3, v5);
      goto LABEL_8;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      v12 = D2DQuaternion::operator==(a3, v5);
      goto LABEL_8;
    }
    v14 = (unsigned int)(v17 - 33);
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 == 161 )
      {
        v11 = memcmp_0(a3, v5, 0x40uLL) == 0;
        goto LABEL_7;
      }
LABEL_28:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xB4,
        (unsigned int)"onecoreuap\\windows\\DWM\\common\\comp\\ExpressionHelper.h",
        (const char *)v14);
    }
    v18 = *(_QWORD *)a3 - *(_QWORD *)v5;
    if ( *(_QWORD *)a3 == *(_QWORD *)v5 )
    {
      v18 = *((_QWORD *)a3 + 1) - *((_QWORD *)v5 + 1);
      if ( !v18 )
        v18 = *((_QWORD *)a3 + 2) - *((_QWORD *)v5 + 2);
    }
LABEL_35:
    v11 = v18 == 0;
    goto LABEL_7;
  }
  if ( v4 == 69 )
  {
    v18 = *(_QWORD *)a3 - *(_QWORD *)v5;
    if ( *(_QWORD *)a3 == *(_QWORD *)v5 )
      v18 = *((_QWORD *)a3 + 1) - *((_QWORD *)v5 + 1);
    goto LABEL_35;
  }
  v8 = v4 - 17;
  if ( !v8 )
  {
    v11 = *(_BYTE *)a3 == *(_BYTE *)v5;
    goto LABEL_7;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 17;
    if ( !v10 )
    {
      v11 = *(_QWORD *)a3 == *(_QWORD *)v5;
LABEL_7:
      v12 = v11;
      goto LABEL_8;
    }
    v14 = (unsigned int)(v10 - 7);
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 == 10 )
      {
        v15 = *(_QWORD *)a3 - *(_QWORD *)v5;
        if ( *(_QWORD *)a3 == *(_QWORD *)v5 )
          v15 = *((unsigned int *)a3 + 2) - (unsigned __int64)*((unsigned int *)v5 + 2);
        v11 = v15 == 0;
        goto LABEL_7;
      }
      goto LABEL_28;
    }
    v12 = ExpressionHelper::AreEqual<TimeSpan const &,TimeSpan const &,std::integral_constant<bool,1>>(a3, v5);
  }
  else
  {
    v12 = *a3 == *v5;
  }
LABEL_8:
  if ( !v12 )
  {
    memcpy_0(v5, a3, *((_QWORD *)a2 + 2));
    if ( *((_QWORD *)this + 6) )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    (*(void (__fastcall **)(CResource *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
  }
  return 0LL;
}
