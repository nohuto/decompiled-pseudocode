/*
 * XREFs of ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x1801090F4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x18010A3A4 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     ?SetProperty@CManipulationTransform@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18021A580 (-SetProperty@CManipulationTransform@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_T.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CManipulationTransform::ProcessSetComponents(
        CManipulationTransform *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS *a3)
{
  int v3; // xmm1_4
  int v5; // xmm0_4
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // xmm1_4
  int v10; // xmm0_4
  int v11; // eax
  int v12; // xmm1_4
  int v13; // xmm0_4
  int v14; // eax
  int v15; // xmm1_4
  int v16; // xmm0_4
  int v17; // eax
  int v19; // [rsp+30h] [rbp-20h] BYREF
  int v20; // [rsp+34h] [rbp-1Ch]
  int v21; // [rsp+38h] [rbp-18h]

  v3 = *((_DWORD *)a3 + 3);
  v19 = *((_DWORD *)a3 + 2);
  v5 = *((_DWORD *)a3 + 4);
  v20 = v3;
  v21 = v5;
  v7 = CManipulationTransform::SetProperty(this, 1LL, 52LL, &v19);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x58u, 0LL);
  }
  else
  {
    v9 = *((_DWORD *)a3 + 6);
    v19 = *((_DWORD *)a3 + 5);
    v10 = *((_DWORD *)a3 + 7);
    v20 = v9;
    v21 = v10;
    v11 = CManipulationTransform::SetProperty(this, 2LL, 52LL, &v19);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x5Bu, 0LL);
    }
    else
    {
      v12 = *((_DWORD *)a3 + 9);
      v19 = *((_DWORD *)a3 + 8);
      v13 = *((_DWORD *)a3 + 10);
      v20 = v12;
      v21 = v13;
      v14 = CManipulationTransform::SetProperty(this, 3LL, 52LL, &v19);
      v8 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x5Eu, 0LL);
      }
      else
      {
        v15 = *((_DWORD *)a3 + 12);
        v19 = *((_DWORD *)a3 + 11);
        v16 = *((_DWORD *)a3 + 13);
        v20 = v15;
        v21 = v16;
        v17 = CManipulationTransform::SetProperty(this, 4LL, 52LL, &v19);
        v8 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x61u, 0LL);
        }
        else
        {
          if ( *((_BYTE *)this + 272) )
          {
            CManipulationTransform::CalculateMatrixFromDelta(
              (CManipulationTransform *)((char *)this + 160),
              (CManipulationTransform *)((char *)this + 184),
              (CManipulationTransform *)((char *)this + 196),
              (CManipulationTransform *)((char *)this + 208));
            *((_BYTE *)this + 272) = 0;
          }
          return 0;
        }
      }
    }
  }
  return v8;
}
