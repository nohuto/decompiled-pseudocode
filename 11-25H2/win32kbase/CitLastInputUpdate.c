/*
 * XREFs of CitLastInputUpdate @ 0x14007DA30
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D99B0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x14007DB28 (-CitpLastInputUpdate@@YAXGI@Z.c)
 */

void __fastcall CitLastInputUpdate(int a1, unsigned int a2, __int64 a3, char a4)
{
  int v4; // ecx
  int v5; // ecx
  unsigned __int16 v6; // cx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  v4 = a1 - 1;
  if ( v4 )
  {
    v5 = v4 - 2;
    if ( v5 )
    {
      v7 = v5 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 6;
          if ( v9 )
          {
            v10 = v9 - 2;
            if ( v10 )
            {
              if ( v10 == 4 )
              {
                if ( (a4 & 8) != 0 )
                  v6 = 0x4000;
                else
                  v6 = 256;
              }
              else
              {
                v6 = 0;
              }
            }
            else if ( (a4 & 8) != 0 )
            {
              v6 = 0x2000;
            }
            else if ( a4 >= 0 )
            {
              v6 = 8;
            }
            else
            {
              v6 = 0x8000;
            }
          }
          else if ( (a4 & 8) != 0 )
          {
            v6 = 4096;
          }
          else
          {
            v6 = 4;
          }
        }
        else
        {
          v6 = 32;
        }
      }
      else
      {
        v6 = 16;
      }
    }
    else if ( (a4 & 8) != 0 )
    {
      v6 = 2048;
    }
    else
    {
      v6 = 2;
    }
  }
  else if ( (a4 & 0x40) != 0 )
  {
    v6 = 512;
  }
  else
  {
    v6 = 1024;
    if ( (a4 & 8) == 0 )
      v6 = 1;
  }
  CitpLastInputUpdate(v6, a2);
}
