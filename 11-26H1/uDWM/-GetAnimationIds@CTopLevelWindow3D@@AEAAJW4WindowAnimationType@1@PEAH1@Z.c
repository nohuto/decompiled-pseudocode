/*
 * XREFs of ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x180069E1C
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::GetAnimationIds(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx

  v4 = 0;
  if ( a2 > 10 )
  {
    v11 = a2 - 11;
    if ( !v11 )
    {
      *a3 = 99;
      goto LABEL_10;
    }
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( !v14 )
        {
          *a3 = 34;
          *a4 = 2;
          return v4;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
          *a3 = 34;
          goto LABEL_10;
        }
        if ( v15 != 3 )
          goto LABEL_23;
      }
    }
LABEL_14:
    *a3 = 104;
    goto LABEL_10;
  }
  if ( a2 == 10 )
  {
    *a3 = 98;
    goto LABEL_10;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    *a3 = 100;
    goto LABEL_10;
  }
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_14;
  v7 = v6 - 1;
  if ( !v7 )
  {
    *a3 = 94;
    goto LABEL_10;
  }
  v8 = v7 - 1;
  if ( !v8 )
    goto LABEL_14;
  v9 = v8 - 1;
  if ( !v9 )
  {
    *a3 = 95;
    goto LABEL_10;
  }
  if ( v9 != 1 )
  {
LABEL_23:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x88u, 0LL);
    return v4;
  }
  *a3 = 101;
LABEL_10:
  *a4 = 1;
  return v4;
}
