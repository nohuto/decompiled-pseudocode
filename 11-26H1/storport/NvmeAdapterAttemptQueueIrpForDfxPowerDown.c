/*
 * XREFs of NvmeAdapterAttemptQueueIrpForDfxPowerDown @ 0x140122F00
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     RaInsertDFxQueue @ 0x1400732C0 (RaInsertDFxQueue.c)
 */

char __fastcall NvmeAdapterAttemptQueueIrpForDfxPowerDown(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  char v4; // bl
  __int64 v5; // rax
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  unsigned int v19; // r8d

  v3 = *(_QWORD *)(a1 + 160);
  v4 = 0;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 8);
    if ( v5 )
    {
      if ( *(_BYTE *)(v5 + 65) )
      {
        if ( a3 > 0x2D9CD4 )
        {
          if ( a3 > 0x2DDF84 )
          {
            switch ( a3 )
            {
              case 0x2DDF88u:
              case 0x2DDF8Cu:
              case 0x2DDF94u:
              case 0x2DDF98u:
              case 0x2DDF9Cu:
              case 0x2DDFA0u:
              case 0x2DDFA4u:
              case 0x2DDFACu:
              case 0x2DDFB0u:
                goto LABEL_15;
              default:
                return v4;
            }
            return v4;
          }
          if ( a3 != 3006340 )
          {
            if ( a3 > 0x2DDC04 )
            {
              v17 = a3 - 3005448;
              if ( v17 )
              {
                v18 = v17 - 4;
                if ( v18 )
                {
                  v19 = v18 - 4;
                  if ( v19 )
                  {
                    if ( v19 != 200 )
                      return v4;
                  }
                }
              }
            }
            else if ( a3 != 3005444 && a3 != 2989282 && a3 != 3002880 && a3 != 3003328 && a3 != 3004036 )
            {
              return v4;
            }
          }
        }
        else if ( a3 != 2989268 )
        {
          if ( a3 > 0x2D1CA0 )
          {
            if ( a3 > 0x2D5F90 )
            {
              v14 = a3 - 2973608;
              if ( v14 )
              {
                v15 = v14 - 13388;
                if ( v15 )
                {
                  v16 = v15 - 8;
                  if ( v16 )
                  {
                    if ( v16 != 2260 )
                      return v4;
                  }
                }
              }
            }
            else if ( a3 != 2973584 && a3 != 2956492 && a3 != 2957184 && a3 != 2969620 && a3 != 2972893 )
            {
              return v4;
            }
          }
          else if ( a3 != 2956448 )
          {
            if ( a3 > 0x2D1680 )
            {
              v11 = a3 - 2956288;
              if ( v11 )
              {
                v12 = v11 - 20;
                if ( v12 )
                {
                  v13 = v12 - 128;
                  if ( v13 )
                  {
                    if ( v13 != 4 )
                      return v4;
                  }
                }
              }
            }
            else if ( a3 != 2954880 )
            {
              v6 = a3 - 315400;
              if ( v6 )
              {
                v7 = v6 - 48;
                if ( v7 )
                {
                  v8 = v7 - 2638236;
                  if ( v8 )
                  {
                    v9 = v8 - 548;
                    if ( v9 )
                    {
                      if ( v9 != 8 )
                        return v4;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_15:
        v4 = 1;
        RaInsertDFxQueue(*(_QWORD *)(a1 + 8), a2);
        return v4;
      }
    }
  }
  return 0;
}
