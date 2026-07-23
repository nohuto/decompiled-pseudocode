/*
 * XREFs of PiConfigureDevice @ 0x1407A7A70
 * Callers:
 *     PnpDeviceActionWorker @ 0x14047C410 (PnpDeviceActionWorker.c)
 * Callees:
 *     PpDevCfgProcessDeviceClass @ 0x1407AEE54 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1407AF25C (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x1407AF9D4 (PpDevCfgProcessDeviceReset.c)
 *     PpDevCfgProcessDevice @ 0x140B466DC (PpDevCfgProcessDevice.c)
 */

__int64 __fastcall PiConfigureDevice(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL) + 300LL);
  if ( v2 == 789 || v2 == 790 )
    return 3221225558LL;
  v3 = v2 - 768;
  if ( v3 )
  {
    v4 = v3 - 16;
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
            if ( (unsigned int)(v7 - 2) >= 2 )
            {
              v8 = *(_DWORD *)(a1 + 24) - 21;
              if ( !v8 )
                return PpDevCfgProcessDevice(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL), 0LL, 0LL);
              v9 = v8 - 1;
              if ( !v9 )
                return PpDevCfgProcessDeviceClass(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL));
              v10 = v9 - 1;
              if ( !v10 )
                return PpDevCfgProcessDeviceExtensions(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL));
              if ( v10 == 1 )
                return PpDevCfgProcessDeviceReset(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL));
            }
          }
        }
      }
    }
  }
  return 3221225473LL;
}
