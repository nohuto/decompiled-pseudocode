/*
 * XREFs of NvmeNamespaceAttemptQueueIrpForDfxPowerDown @ 0x14005C540
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401BBC8C (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     RaInsertDFxQueue @ 0x1400732C0 (RaInsertDFxQueue.c)
 */

char __fastcall NvmeNamespaceAttemptQueueIrpForDfxPowerDown(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  char v4; // bl
  __int64 v6; // rcx
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  bool v10; // zf
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  unsigned int v22; // r8d
  unsigned int v23; // r8d
  unsigned int v24; // r8d
  unsigned int v25; // r8d
  unsigned int v26; // r8d
  unsigned int v27; // r8d
  unsigned int v28; // r8d

  v3 = *(_QWORD *)(a1 + 128);
  v4 = 0;
  if ( v3 )
  {
    v6 = *(_QWORD *)(v3 + 8);
    if ( v6 )
    {
      if ( *(_BYTE *)(v6 + 41) )
      {
        if ( a3 > 0x2D93F4 )
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
                goto LABEL_18;
              default:
                return v4;
            }
            return v4;
          }
          if ( a3 != 3006340 )
          {
            if ( a3 > 0x2DD684 )
            {
              v27 = a3 - 3005444;
              if ( v27 )
              {
                v28 = v27 - 4;
                if ( v28 )
                {
                  v11 = v28 - 4;
                  v10 = v11 == 0;
                  goto LABEL_46;
                }
              }
            }
            else if ( a3 != 3004036 )
            {
              v23 = a3 - 2987004;
              if ( v23 )
              {
                v24 = v23 - 8;
                if ( v24 )
                {
                  v25 = v24 - 572;
                  if ( v25 )
                  {
                    v26 = v25 - 15296;
                    if ( v26 )
                    {
                      if ( v26 != 448 )
                        return v4;
                    }
                  }
                }
              }
            }
          }
        }
        else if ( a3 != 2986996 )
        {
          if ( a3 > 0x2D1C14 )
          {
            if ( a3 > 0x2D282C )
            {
              v20 = a3 - 2959408;
              if ( v20 )
              {
                v21 = v20 - 10224;
                if ( v21 )
                {
                  v22 = v21 - 3952;
                  if ( v22 )
                  {
                    if ( v22 != 24 )
                      return v4;
                  }
                }
              }
            }
            else if ( a3 != 2959404 )
            {
              v16 = a3 - 2956424;
              if ( v16 )
              {
                v17 = v16 - 12;
                if ( v17 )
                {
                  v18 = v17 - 56;
                  if ( v18 )
                  {
                    v19 = v18 - 692;
                    if ( v19 )
                    {
                      if ( v19 != 2216 )
                        return v4;
                    }
                  }
                }
              }
            }
          }
          else if ( a3 != 2956308 )
          {
            if ( a3 > 0x2D11D4 )
            {
              v12 = a3 - 2954232;
              if ( v12 )
              {
                v13 = v12 - 8;
                if ( v13 )
                {
                  v14 = v13 - 640;
                  if ( v14 )
                  {
                    if ( v14 != 1408 )
                      return v4;
                  }
                }
              }
            }
            else if ( a3 != 2953684 )
            {
              v7 = a3 - 315396;
              if ( v7 )
              {
                v8 = v7 - 4;
                if ( v8 )
                {
                  v9 = v8 - 12;
                  if ( v9 )
                  {
                    v11 = v9 - 48;
                    v10 = v11 == 0;
LABEL_46:
                    if ( !v10 && v11 != 4 )
                      return v4;
                  }
                }
              }
            }
          }
        }
LABEL_18:
        v4 = 1;
        RaInsertDFxQueue(*(_QWORD *)(a1 + 8), a2);
        return v4;
      }
    }
  }
  return 0;
}
