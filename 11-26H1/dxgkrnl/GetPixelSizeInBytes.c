/*
 * XREFs of GetPixelSizeInBytes @ 0x140398A6C
 * Callers:
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x14039763C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall GetPixelSizeInBytes(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v1 = a1 - 21;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      v3 = v2 - 9;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          v5 = v4 - 1;
          if ( v5 )
          {
            v6 = v5 - 2;
            if ( v6 )
            {
              v7 = v6 - 1;
              if ( !v7 )
                return 8LL;
              v8 = v7 - 77;
              if ( !v8 )
                return 8LL;
              if ( v8 != 6 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 7396;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"Invalid D3D Pixel format!",
                  7396LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                return 0LL;
              }
            }
          }
        }
      }
    }
  }
  return 4LL;
}
