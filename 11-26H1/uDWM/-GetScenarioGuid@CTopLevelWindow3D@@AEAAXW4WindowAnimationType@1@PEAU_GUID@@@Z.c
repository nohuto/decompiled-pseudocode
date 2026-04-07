/*
 * XREFs of ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x1800691C8
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow3D::GetScenarioGuid(__int64 a1, int a2, GUID *a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  GUID v9; // xmm0
  int v10; // edx

  v3 = a2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              v10 = v8 - 6;
              if ( v10 )
              {
                if ( v10 == 1 )
                  v9 = (GUID)xmmword_1800F9EF0;
                else
                  v9 = GUID_NULL;
              }
              else
              {
                v9 = (GUID)xmmword_1800F6788;
              }
            }
            else
            {
              v9 = (GUID)xmmword_1800F6748;
            }
          }
          else
          {
            v9 = (GUID)xmmword_1800F6758;
          }
        }
        else
        {
          v9 = (GUID)xmmword_1800F9F00;
        }
      }
      else
      {
        v9 = (GUID)xmmword_1800F6768;
      }
    }
    else
    {
      v9 = (GUID)xmmword_1800F6778;
    }
  }
  else
  {
    v9 = (GUID)xmmword_1800F6738;
  }
  *a3 = v9;
}
