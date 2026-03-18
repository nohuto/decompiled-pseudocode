/*
 * XREFs of RIMIsEssentialUsage @ 0x14016A53C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x14016A024 (RIMPopulatePointerDevice.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     Feature_TouchpadExtendedPointerInfo__private_IsEnabledDeviceUsageNoInline @ 0x1401B4C80 (Feature_TouchpadExtendedPointerInfo__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RIMIsEssentialUsage(unsigned __int16 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  int v3; // ebp
  unsigned int v4; // ebx
  int v5; // r15d
  unsigned int v6; // esi
  int v7; // edx
  int v8; // r8d
  int v9; // ecx
  char v10; // bl
  bool v11; // bp
  int v12; // edx
  int v13; // r8d
  __int64 v14; // r9
  __int16 v16; // [rsp+30h] [rbp-18h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = 0;
  if ( (unsigned int)Feature_TouchpadExtendedPointerInfo__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v5 == 1 )
    {
      if ( v3 != 1 && (unsigned int)(v3 - 4) > 1 || (unsigned __int16)(v4 - 48) > 1u )
        goto LABEL_15;
      return 1;
    }
    if ( v5 == 13 )
    {
      if ( v3 == 1 )
      {
        LOWORD(v4) = v4 - 48;
        if ( (unsigned __int16)v4 <= 0x11u )
        {
          v9 = 155649;
LABEL_8:
          if ( !_bittest(&v9, v4) )
            goto LABEL_15;
          return 1;
        }
      }
      else if ( (unsigned int)(v3 - 4) <= 1 )
      {
        LOWORD(v4) = v4 - 48;
        if ( (unsigned __int16)v4 <= 0x19u )
        {
          v9 = 50364417;
          goto LABEL_8;
        }
      }
    }
LABEL_15:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v10 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v8) + 19368);
      v16 = 36;
LABEL_68:
      LOBYTE(v13) = v11;
      LOBYTE(v12) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v13,
        v14,
        4,
        1,
        v16,
        (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
      return v6;
    }
    return v6;
  }
  if ( (_WORD)v5 == 1 )
  {
    if ( (_WORD)v4 == 48 && (_WORD)v3 == 1 || (_WORD)v4 == 49 && (_WORD)v3 == 1 || (_WORD)v4 == 48 && v3 == 4 )
      return 1;
    if ( (_WORD)v4 != 49 )
      goto LABEL_49;
    if ( v3 == 4 )
      return 1;
  }
  if ( v5 == 13 )
  {
    if ( (_WORD)v4 == 72 && v3 == 4
      || (_WORD)v4 == 73 && v3 == 4
      || (_WORD)v4 == 48 && v3 == 4
      || (_WORD)v4 == 63 && v3 == 4
      || (_WORD)v4 == 48 && (_WORD)v3 == 1
      || (_WORD)v4 == 61 && (_WORD)v3 == 1
      || (_WORD)v4 == 62 && (_WORD)v3 == 1 )
    {
      return 1;
    }
    if ( (_WORD)v4 != 65 )
    {
LABEL_54:
      if ( (_WORD)v4 == 72 && (_WORD)v3 == 5 || (_WORD)v4 == 73 && (_WORD)v3 == 5 || (_WORD)v4 == 48 && (_WORD)v3 == 5 )
        return 1;
      goto LABEL_61;
    }
    if ( (_WORD)v3 == 1 )
      return 1;
  }
  if ( (_WORD)v5 != 1 )
  {
LABEL_53:
    if ( v5 != 13 )
      goto LABEL_61;
    goto LABEL_54;
  }
LABEL_49:
  if ( (_WORD)v4 == 48 && (_WORD)v3 == 5 )
    return 1;
  if ( (_WORD)v4 == 49 )
  {
    if ( (_WORD)v3 == 5 )
      return 1;
    goto LABEL_53;
  }
LABEL_61:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v10 = 0;
  }
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v8) + 19368);
    v16 = 37;
    goto LABEL_68;
  }
  return v6;
}
