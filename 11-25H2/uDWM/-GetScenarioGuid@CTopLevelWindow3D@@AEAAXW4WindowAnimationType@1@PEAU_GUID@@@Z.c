/*
 * XREFs of ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x18004B650
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180006850 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
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
                  v9 = (GUID)xmmword_1800FE938;
                else
                  v9 = GUID_NULL;
              }
              else
              {
                v9 = (GUID)xmmword_1800FA848;
              }
            }
            else
            {
              v9 = (GUID)xmmword_1800FA7A0;
            }
          }
          else
          {
            v9 = (GUID)xmmword_1800FA7C0;
          }
        }
        else
        {
          v9 = (GUID)xmmword_1800FE948;
        }
      }
      else
      {
        v9 = (GUID)xmmword_1800FA7D0;
      }
    }
    else
    {
      v9 = (GUID)xmmword_1800FA838;
    }
  }
  else
  {
    v9 = (GUID)xmmword_1800FA768;
  }
  *a3 = v9;
}
