/*
 * XREFs of RIMIsEssentialUsage @ 0x140180360
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1401E1634 (RIMPopulatePointerDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     Feature_TouchpadExtendedPointerInfo__private_IsEnabledDeviceUsageNoInline @ 0x1401E2140 (Feature_TouchpadExtendedPointerInfo__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RIMIsEssentialUsage(unsigned __int16 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  int v3; // esi
  unsigned int v4; // ebx
  int v5; // r15d
  unsigned int v6; // ebp
  __int64 v7; // rdx
  int v8; // ecx
  bool v9; // bl
  bool v10; // si
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r9
  __int16 v15; // [rsp+30h] [rbp-18h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = 0;
  if ( (unsigned int)Feature_TouchpadExtendedPointerInfo__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v5 != 1 )
    {
      if ( v5 != 13 )
        goto LABEL_15;
      if ( v3 == 1 )
      {
        LOWORD(v4) = v4 - 48;
        if ( (unsigned __int16)v4 > 0x11u )
          goto LABEL_15;
        v8 = 155649;
      }
      else
      {
        if ( (unsigned int)(v3 - 4) > 1 )
          goto LABEL_15;
        LOWORD(v4) = v4 - 48;
        if ( (unsigned __int16)v4 > 0x19u )
          goto LABEL_15;
        v8 = 50364417;
      }
      if ( _bittest(&v8, v4) )
        return 1;
LABEL_15:
      v9 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v7) + 19336);
        v15 = 36;
LABEL_70:
        LOBYTE(v12) = v10;
        LOBYTE(v11) = v9;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v11,
          v12,
          v13,
          4,
          1,
          v15,
          (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
        return v6;
      }
      return v6;
    }
    if ( v3 != 1 && (unsigned int)(v3 - 4) > 1 || (unsigned __int16)(v4 - 48) > 1u )
      goto LABEL_15;
    return 1;
  }
  if ( (_WORD)v5 == 1 )
  {
    if ( (_WORD)v4 == 48 && (_WORD)v3 == 1 || (_WORD)v4 == 49 && (_WORD)v3 == 1 || (_WORD)v4 == 48 && v3 == 4 )
      return 1;
    if ( (_WORD)v4 != 49 )
      goto LABEL_50;
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
LABEL_55:
      if ( (_WORD)v4 == 72 && (_WORD)v3 == 5 || (_WORD)v4 == 73 && (_WORD)v3 == 5 || (_WORD)v4 == 48 && (_WORD)v3 == 5 )
        return 1;
      goto LABEL_62;
    }
    if ( (_WORD)v3 == 1 )
      return 1;
  }
  if ( (_WORD)v5 != 1 )
  {
LABEL_54:
    if ( v5 != 13 )
      goto LABEL_62;
    goto LABEL_55;
  }
LABEL_50:
  if ( (_WORD)v4 == 48 && (_WORD)v3 == 5 )
    return 1;
  if ( (_WORD)v4 == 49 )
  {
    if ( (_WORD)v3 == 5 )
      return 1;
    goto LABEL_54;
  }
LABEL_62:
  v9 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v7) + 19336);
    v15 = 37;
    goto LABEL_70;
  }
  return v6;
}
