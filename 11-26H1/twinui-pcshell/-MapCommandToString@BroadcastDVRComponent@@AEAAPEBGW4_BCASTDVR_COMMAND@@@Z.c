/*
 * XREFs of ?MapCommandToString@BroadcastDVRComponent@@AEAAPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x1800C60B4
 * Callers:
 *     ?ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z @ 0x1800C5CA0 (-ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall BroadcastDVRComponent::MapCommandToString(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  if ( !a2 )
    return L"OPEN_GAMEBAR";
  v2 = a2 - 1;
  if ( !v2 )
    return L"RECORD_THAT";
  v3 = v2 - 1;
  if ( !v3 )
    return L"START_RECORD";
  v4 = v3 - 1;
  if ( !v4 )
    return L"STOP_RECORD";
  v5 = v4 - 1;
  if ( !v5 )
    return L"TAKE_SCREENSHOT";
  v6 = v5 - 1;
  if ( !v6 )
    return L"START_BROADCAST";
  v7 = v6 - 1;
  if ( !v7 )
    return L"STOP_BROADCAST";
  if ( v7 == 3 )
    return L"DEVELOPER_START_BROADCAST";
  return L"UNKNOWN";
}
