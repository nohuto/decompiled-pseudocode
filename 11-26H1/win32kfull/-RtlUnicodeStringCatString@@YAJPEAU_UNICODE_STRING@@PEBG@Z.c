/*
 * XREFs of ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x14016E6B4
 * Callers:
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x14016E3F4 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x14016E560 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ReadTiltCalibrationData @ 0x140298F18 (ReadTiltCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x14029940C (WriteTiltCalibrationData.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1402CA1C0 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringCatString(struct _UNICODE_STRING *a1, WCHAR *a2)
{
  unsigned __int64 Length; // r8
  USHORT MaximumLength; // ax
  unsigned int v6; // ecx
  __int64 v7; // rbx
  unsigned __int64 v8; // r8
  WCHAR *v9; // r9
  __int16 v10; // ax
  unsigned __int64 v11; // rdx

  Length = a1->Length;
  if ( (Length & 1) != 0 )
    return (unsigned int)-1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( (unsigned __int16)Length > MaximumLength )
    return (unsigned int)-1073741811;
  if ( MaximumLength == 0xFFFF )
    return (unsigned int)-1073741811;
  v6 = 0;
  if ( !a1->Buffer && ((_WORD)Length || MaximumLength) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v7 = 0x7FFFLL;
    v8 = Length >> 1;
    v9 = &a1->Buffer[v8];
    v10 = 0;
    v11 = ((unsigned __int64)a1->MaximumLength >> 1) - v8;
    if ( v11 )
    {
      while ( v7 )
      {
        if ( *a2 )
        {
          *v9++ = *a2++;
          --v7;
          ++v10;
          if ( --v11 )
            continue;
        }
        if ( v11 || !v7 )
          break;
        goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      if ( *a2 )
        v6 = -2147483643;
    }
    a1->Length = 2 * (v8 + v10);
  }
  return v6;
}
