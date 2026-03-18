/*
 * XREFs of ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14013F630
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x14000912C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     ?_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z @ 0x14013F040 (-_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z.c)
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x14013F240 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ReadTiltCalibrationData @ 0x140298F18 (ReadTiltCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x14029940C (WriteTiltCalibrationData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringCopy(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2)
{
  USHORT Length; // r8
  unsigned __int64 MaximumLength; // rax
  PWSTR Buffer; // rbx
  unsigned int v7; // ecx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r11
  __int16 v10; // dx
  USHORT v11; // ax
  PWSTR v12; // r10
  unsigned __int64 v13; // r8

  Length = a1->Length;
  if ( (a1->Length & 1) != 0 )
    return (unsigned int)-1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( Length > (unsigned __int16)MaximumLength )
    return (unsigned int)-1073741811;
  if ( (_WORD)MaximumLength == 0xFFFF )
    return (unsigned int)-1073741811;
  Buffer = a1->Buffer;
  v7 = 0;
  if ( !Buffer && (Length || (_WORD)MaximumLength) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v8 = a2->Length;
    v9 = MaximumLength >> 1;
    v10 = 0;
    if ( (v8 & 1) != 0
      || (v11 = a2->MaximumLength, (v11 & 1) != 0)
      || (unsigned __int16)v8 > v11
      || v11 == 0xFFFF
      || (v12 = a2->Buffer) == 0LL && ((_WORD)v8 || v11) )
    {
      v7 = -1073741811;
    }
    else
    {
      v13 = v8 >> 1;
      if ( v9 )
      {
        while ( v13 )
        {
          --v13;
          *Buffer++ = *v12++;
          ++v10;
          if ( !--v9 )
            goto LABEL_14;
        }
      }
      else
      {
LABEL_14:
        if ( v13 )
          v7 = -2147483643;
      }
    }
    a1->Length = 2 * v10;
  }
  return v7;
}
