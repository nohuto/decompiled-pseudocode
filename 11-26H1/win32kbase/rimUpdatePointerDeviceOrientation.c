/*
 * XREFs of rimUpdatePointerDeviceOrientation @ 0x1401C192C
 * Callers:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x14007BDA0 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimUpdatePointerDeviceOrientation(__int64 a1)
{
  int v1; // r8d
  _QWORD *v2; // r9
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  __int64 v13; // rax

  v1 = *(_DWORD *)(a1 + 224);
  v2 = *(_QWORD **)(a1 + 400);
  if ( v1 == 2 || v1 == 4 )
  {
    v4 = *(_DWORD *)(a1 + 176);
    *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 180);
    v5 = *(_DWORD *)(a1 + 188);
    *(_DWORD *)(a1 + 180) = v4;
    v6 = *(_DWORD *)(a1 + 184);
    *(_DWORD *)(a1 + 184) = v5;
    *(_DWORD *)(a1 + 188) = v6;
    v7 = *(_DWORD *)(a1 + 192);
    *(_DWORD *)(a1 + 192) = *(_DWORD *)(a1 + 196);
    v8 = *(_DWORD *)(a1 + 204);
    *(_DWORD *)(a1 + 196) = v7;
    v9 = *(_DWORD *)(a1 + 200);
    *(_DWORD *)(a1 + 200) = v8;
    *(_DWORD *)(a1 + 204) = v9;
  }
  if ( v2 )
  {
    v10 = v1 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 != 1 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 438);
            return;
          }
          v13 = v2[8];
        }
        else
        {
          v13 = v2[6];
        }
      }
      else
      {
        v13 = v2[4];
      }
    }
    else
    {
      v13 = v2[2];
    }
    v2[10] = v13;
  }
}
