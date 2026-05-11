/*
 * XREFs of PinGetCategoryForBridgePin @ 0x140030978
 * Callers:
 *     PinBuildDescriptors @ 0x14003F668 (PinBuildDescriptors.c)
 * Callees:
 *     PinGetTerminalUnit @ 0x14003FCF4 (PinGetTerminalUnit.c)
 */

__int64 __fastcall PinGetCategoryForBridgePin(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 i; // rdx
  int v6; // ecx
  GUID v7; // xmm0
  int v8; // eax
  GUID v9; // xmm0

  result = PinGetTerminalUnit(a1 + 80);
  v4 = result;
  for ( i = 0LL; (unsigned int)i < 0xA; i = (unsigned int)(i + 1) )
  {
    result = *((unsigned __int16 *)&RemapTable + 4 * i);
    if ( *(_DWORD *)(a1 + 40) == (_DWORD)result )
    {
      result = *((unsigned __int16 *)&RemapTable + 4 * i + 1);
      if ( *(_DWORD *)(a1 + 44) == (_DWORD)result )
      {
        v6 = *((_DWORD *)&RemapTable + 2 * i + 1);
        goto LABEL_8;
      }
    }
  }
  LOBYTE(v6) = 0;
LABEL_8:
  *(GUID *)v3 = GUID_NULL;
  if ( !v4 )
    return result;
  if ( *(_DWORD *)(v4 + 68) == 2305 )
  {
    v7 = KSCATEGORY_AUDIO;
LABEL_30:
    *(GUID *)v3 = v7;
    return result;
  }
  v8 = *(unsigned __int16 *)(v4 + 68) - 537781792;
  *(_DWORD *)(v3 + 4) = 298907407;
  *(_DWORD *)v3 = v8;
  *(_DWORD *)(v3 + 8) = -1610606663;
  *(_DWORD *)(v3 + 12) = -1775164727;
  if ( (v6 & 1) != 0 )
  {
    if ( *(_QWORD *)v3 == *(_QWORD *)&KSNODETYPE_SPEAKER.Data1
      && *(_QWORD *)(v3 + 8) == *(_QWORD *)KSNODETYPE_SPEAKER.Data4 )
    {
      v9 = KSNODETYPE_COMMUNICATION_SPEAKER;
LABEL_24:
      *(GUID *)v3 = v9;
      goto LABEL_25;
    }
    if ( *(_QWORD *)v3 == *(_QWORD *)&KSNODETYPE_MICROPHONE.Data1
      && *(_QWORD *)(v3 + 8) == *(_QWORD *)KSNODETYPE_MICROPHONE.Data4 )
    {
      v9 = KSNODETYPE_PERSONAL_MICROPHONE;
      goto LABEL_24;
    }
  }
  else if ( (v6 & 2) != 0
         && (*(_QWORD *)v3 == *(_QWORD *)&KSNODETYPE_SPEAKER.Data1
          && *(_QWORD *)(v3 + 8) == *(_QWORD *)KSNODETYPE_SPEAKER.Data4
          || *(_QWORD *)v3 == *(_QWORD *)&KSNODETYPE_MICROPHONE.Data1
          && *(_QWORD *)(v3 + 8) == *(_QWORD *)KSNODETYPE_MICROPHONE.Data4) )
  {
    v9 = KSNODETYPE_HANDSET;
    goto LABEL_24;
  }
LABEL_25:
  result = *(_QWORD *)&KSNODETYPE_HEADSET.Data1;
  if ( *(_QWORD *)v3 == *(_QWORD *)&KSNODETYPE_HEADSET.Data1 )
  {
    result = *(_QWORD *)KSNODETYPE_HEADSET.Data4;
    if ( *(_QWORD *)(v3 + 8) == *(_QWORD *)KSNODETYPE_HEADSET.Data4 )
    {
      if ( *(_DWORD *)(v4 + 20) )
        v7 = KSNODETYPE_COMMUNICATION_SPEAKER;
      else
        v7 = KSNODETYPE_PERSONAL_MICROPHONE;
      goto LABEL_30;
    }
  }
  return result;
}
