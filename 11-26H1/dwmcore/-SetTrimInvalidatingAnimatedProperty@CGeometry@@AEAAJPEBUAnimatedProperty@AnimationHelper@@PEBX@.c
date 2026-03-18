/*
 * XREFs of ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180022AA0
 * Callers:
 *     CGeometry::_lambda_8_::_lambda_invoker_cdecl_ @ 0x1801B7DC0 (CGeometry--_lambda_8_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ??8@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x18017FEC0 (--8@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 *     ??$AreEqual@AEBUTimeSpan@@AEBU1@U?$integral_constant@_N$00@std@@@ExpressionHelper@@YA_NAEBUTimeSpan@@0@Z @ 0x180184CD0 (--$AreEqual@AEBUTimeSpan@@AEBU1@U-$integral_constant@_N$00@std@@@ExpressionHelper@@YA_NAEBUTimeS.c)
 *     ??8D2DQuaternion@@QEBAHAEBU0@@Z @ 0x18018D7B0 (--8D2DQuaternion@@QEBAHAEBU0@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry::SetTrimInvalidatingAnimatedProperty(
        CGeometry *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _QWORD *a3,
        const char *a4)
{
  int v5; // eax
  char *v6; // rdi
  bool v9; // zf
  char v10; // al
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rbx
  unsigned __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = *((_DWORD *)a2 + 1);
  v6 = (char *)this + *((_QWORD *)a2 + 1);
  if ( v5 == 35 )
  {
    v9 = *a3 == *(_QWORD *)v6;
LABEL_3:
    v10 = v9;
  }
  else
  {
    if ( v5 != 18 )
    {
      switch ( v5 )
      {
        case 17:
          v9 = *(_BYTE *)a3 == (unsigned __int8)*v6;
          goto LABEL_3;
        case 42:
          v10 = ExpressionHelper::AreEqual<TimeSpan const &,TimeSpan const &,std::integral_constant<bool,1>>(a3, v6);
          goto LABEL_4;
        case 52:
          v12 = *a3 - *(_QWORD *)v6;
          if ( *a3 == *(_QWORD *)v6 )
            v12 = *((unsigned int *)a3 + 2) - (unsigned __int64)*((unsigned int *)v6 + 2);
          v9 = v12 == 0;
          goto LABEL_3;
        case 69:
          v16 = *a3 - *(_QWORD *)v6;
          if ( *a3 == *(_QWORD *)v6 )
            v16 = a3[1] - *((_QWORD *)v6 + 1);
          v9 = v16 == 0;
          goto LABEL_3;
        case 70:
          v10 = operator==(a3, v6);
          goto LABEL_4;
        case 71:
          v10 = (unsigned int)D2DQuaternion::operator==(a3, v6) != 0;
          goto LABEL_4;
        case 104:
          v17 = *a3 - *(_QWORD *)v6;
          if ( *a3 == *(_QWORD *)v6 )
          {
            v17 = a3[1] - *((_QWORD *)v6 + 1);
            if ( !v17 )
              v17 = a3[2] - *((_QWORD *)v6 + 2);
          }
          v9 = v17 == 0;
          goto LABEL_3;
        case 265:
          v9 = memcmp_0(a3, v6, 0x40uLL) == 0;
          goto LABEL_3;
        default:
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xB4,
            (unsigned int)"onecoreuap\\windows\\DWM\\common\\comp\\ExpressionHelper.h",
            a4);
      }
    }
    v10 = *(float *)a3 == *(float *)v6;
  }
LABEL_4:
  if ( !v10 )
  {
    memcpy_0(v6, a3, *((_QWORD *)a2 + 2));
    if ( *((_QWORD *)this + 6) )
      CResource::InvalidateConsumingAnimationsInternal(this, *(unsigned int *)a2);
    v15 = *((_DWORD *)this + 10);
    *(_WORD *)((char *)this + 133) = 257;
    *((_DWORD *)this + 10) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(v15 + 4)) & 0xC;
    if ( (((unsigned __int8)v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(v15 + 4)) & 0xC) & 0xC) != 4
      || !(*(unsigned int (__fastcall **)(CGeometry *, _QWORD, _QWORD))(*(_QWORD *)this + 184LL))(this, 0LL, 0LL) )
    {
      goto LABEL_14;
    }
    if ( (*((_QWORD *)this + 4) & 3) != 0 )
    {
      if ( (*((_QWORD *)this + 4) & 3LL) == 1 )
      {
        v13 = (_QWORD *)(*((_QWORD *)this + 4) & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_19;
      }
      if ( (*((_QWORD *)this + 4) & 3LL) == 2 )
      {
        v13 = 0LL;
        goto LABEL_19;
      }
      if ( (*((_QWORD *)this + 4) & 3LL) != 3 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v13 = (_QWORD *)((char *)this + 32);
LABEL_19:
    v14 = detail::pointer_buffer_impl<CResource *,0>::last((__int64 *)this + 4);
    while ( v13 != (_QWORD *)v14 )
      (*(void (__fastcall **)(CGeometry *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 88LL))(this, *v13++, 0LL, 0LL);
LABEL_14:
    *((_DWORD *)this + 10) ^= ((unsigned __int8)*((_DWORD *)this + 10) ^ (unsigned __int8)(4
                                                                                         * (*((_DWORD *)this + 10) >> 2)
                                                                                         - 4)) & 0xC;
  }
  return 0LL;
}
