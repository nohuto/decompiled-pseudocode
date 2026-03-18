/*
 * XREFs of ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180099FC0
 * Callers:
 *     ?SetSourceOffset@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180099E20 (-SetSourceOffset@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180099E8C (-SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetAnimatedProperty@CDropShadow@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180099F70 (-SetAnimatedProperty@CDropShadow@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetRenderStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180282C0C (-SetRenderStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@.c)
 * Callees:
 *     ??8@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x18017FEC0 (--8@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 *     ??$AreEqual@AEBUTimeSpan@@AEBU1@U?$integral_constant@_N$00@std@@@ExpressionHelper@@YA_NAEBUTimeSpan@@0@Z @ 0x180184CD0 (--$AreEqual@AEBUTimeSpan@@AEBU1@U-$integral_constant@_N$00@std@@@ExpressionHelper@@YA_NAEBUTimeS.c)
 *     ??8D2DQuaternion@@QEBAHAEBU0@@Z @ 0x18018D7B0 (--8D2DQuaternion@@QEBAHAEBU0@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CResource::ModifyProperty(
        CResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _QWORD *a3,
        const char *a4)
{
  int v5; // eax
  char *v6; // r14
  bool v8; // zf
  char v9; // al
  unsigned __int8 v10; // bl
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_DWORD *)a2 + 1);
  v6 = (char *)this + *((_QWORD *)a2 + 1);
  if ( v5 == 35 )
  {
    v8 = *a3 == *(_QWORD *)v6;
LABEL_3:
    v9 = v8;
  }
  else
  {
    if ( v5 != 18 )
    {
      switch ( v5 )
      {
        case 17:
          v8 = *(_BYTE *)a3 == (unsigned __int8)*v6;
          goto LABEL_3;
        case 42:
          v9 = ExpressionHelper::AreEqual<TimeSpan const &,TimeSpan const &,std::integral_constant<bool,1>>(a3, v6);
          goto LABEL_4;
        case 52:
          v12 = *a3 - *(_QWORD *)v6;
          if ( *a3 == *(_QWORD *)v6 )
            v12 = *((unsigned int *)a3 + 2) - (unsigned __int64)*((unsigned int *)v6 + 2);
          v8 = v12 == 0;
          goto LABEL_3;
        case 69:
          v13 = *a3 - *(_QWORD *)v6;
          if ( *a3 == *(_QWORD *)v6 )
            v13 = a3[1] - *((_QWORD *)v6 + 1);
          v8 = v13 == 0;
          goto LABEL_3;
        case 70:
          v9 = operator==(a3, v6);
          goto LABEL_4;
        case 71:
          v9 = (unsigned int)D2DQuaternion::operator==(a3, v6) != 0;
          goto LABEL_4;
        case 104:
          v14 = *a3 - *(_QWORD *)v6;
          if ( *a3 == *(_QWORD *)v6 )
          {
            v14 = a3[1] - *((_QWORD *)v6 + 1);
            if ( !v14 )
              v14 = a3[2] - *((_QWORD *)v6 + 2);
          }
          v8 = v14 == 0;
          goto LABEL_3;
        case 265:
          v8 = memcmp_0(a3, v6, 0x40uLL) == 0;
          goto LABEL_3;
        default:
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xB4,
            (unsigned int)"onecoreuap\\windows\\DWM\\common\\comp\\ExpressionHelper.h",
            a4);
      }
    }
    v9 = *(float *)a3 == *(float *)v6;
  }
LABEL_4:
  if ( v9 )
  {
    return 0;
  }
  else
  {
    v10 = 1;
    memcpy_0(v6, a3, *((_QWORD *)a2 + 2));
  }
  return v10;
}
