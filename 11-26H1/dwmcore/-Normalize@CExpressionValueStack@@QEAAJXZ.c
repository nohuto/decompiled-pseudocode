/*
 * XREFs of ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x18020F6D8
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x180121D1C (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1801A0164 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x1801ABB68 (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x18021644C (-D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Normalize(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v4; // eax
  int v5; // eax
  __int128 v7; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v9; // [rsp+50h] [rbp+10h] BYREF

  v1 = *((_DWORD *)this + 24);
  if ( v1 )
  {
    v2 = 0;
    v3 = *(_QWORD *)this + 72LL * (unsigned int)(v1 - 1);
    v4 = *(_DWORD *)(v3 + 64);
    if ( v4 == 35 )
    {
      v9 = 0LL;
      D3DXVec2Normalize((struct D2DVector2 *)&v9, (const struct D2DVector2 *)v3);
      CExpressionValue::DestroyCurrent((CExpressionValue *)v3);
      *(_QWORD *)v3 = v9;
      *(_DWORD *)(v3 + 64) = 35;
    }
    else if ( v4 == 52 )
    {
      *(_QWORD *)&v7 = 0LL;
      DWORD2(v7) = 0;
      D3DXVec3Normalize((struct D2DVector3 *)&v7, (const struct D2DVector3 *)v3);
      CExpressionValue::DestroyCurrent((CExpressionValue *)v3);
      v5 = DWORD2(v7);
      *(_QWORD *)v3 = v7;
      *(_DWORD *)(v3 + 8) = v5;
      *(_DWORD *)(v3 + 64) = 52;
    }
    else
    {
      if ( v4 == 69 )
      {
        v7 = 0LL;
        D3DXVec4Normalize((struct D2DVector4 *)&v7, (const struct D2DVector4 *)v3);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v3);
        *(_DWORD *)(v3 + 64) = 69;
      }
      else
      {
        if ( v4 != 71 )
        {
          v2 = -2147467259;
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147467259,
            0xB93u,
            0LL);
          return v2;
        }
        D3DXQuaternionNormalize((struct D2DQuaternion *)&v7, (const struct D2DQuaternion *)v3);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v3);
        *(_DWORD *)(v3 + 64) = 71;
      }
      *(_OWORD *)v3 = v7;
    }
  }
  else
  {
    v2 = -2147483637;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvaluestack.cpp",
      (const char *)0x8000000BLL);
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147483637,
      0xB62u,
      0LL);
  }
  return v2;
}
