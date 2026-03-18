/*
 * XREFs of ?Matrix4x4FromPerspectiveOffCenter@CExpressionValueStack@@QEAAJXZ @ 0x180212238
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DMatrixPerspectiveOffCenter@@YAPEAUD2DMatrix@@PEAU1@MMMMMM@Z @ 0x180292DD0 (-D2DMatrixPerspectiveOffCenter@@YAPEAUD2DMatrix@@PEAU1@MMMMMM@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromPerspectiveOffCenter(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  unsigned int v3; // eax
  __int64 v4; // rbx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  unsigned int v9; // [rsp+20h] [rbp-68h]
  _OWORD v10[4]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 6 )
  {
    v3 = v1 - 5;
    *((_DWORD *)this + 24) = v3;
    v4 = *(_QWORD *)this + 72LL * (v3 - 1);
    if ( *(_DWORD *)(v4 + 64) == 18 )
    {
      if ( *(_DWORD *)(v4 + 136) == 18 )
      {
        if ( *(_DWORD *)(v4 + 208) == 18 )
        {
          if ( *(_DWORD *)(v4 + 280) == 18 )
          {
            if ( *(_DWORD *)(v4 + 352) == 18 )
            {
              if ( *(_DWORD *)(v4 + 424) == 18 )
              {
                if ( D2DMatrixPerspectiveOffCenter(
                       (struct D2DMatrix *)v10,
                       *(float *)v4,
                       *(float *)(v4 + 72),
                       *(float *)(v4 + 144),
                       *(float *)(v4 + 216),
                       *(float *)(v4 + 288),
                       *(float *)(v4 + 360)) )
                {
                  CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
                  v5 = v10[1];
                  *(_OWORD *)v4 = v10[0];
                  *(_DWORD *)(v4 + 64) = 265;
                  v6 = v10[2];
                  *(_OWORD *)(v4 + 16) = v5;
                  v7 = v10[3];
                  *(_OWORD *)(v4 + 32) = v6;
                  *(_OWORD *)(v4 + 48) = v7;
                  return 0;
                }
                v9 = 5405;
              }
              else
              {
                v9 = 5377;
              }
            }
            else
            {
              v9 = 5376;
            }
          }
          else
          {
            v9 = 5375;
          }
        }
        else
        {
          v9 = 5374;
        }
      }
      else
      {
        v9 = 5373;
      }
    }
    else
    {
      v9 = 5372;
    }
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v9,
      0LL);
    return v2;
  }
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
    0x14F7u,
    0LL);
  return v2;
}
