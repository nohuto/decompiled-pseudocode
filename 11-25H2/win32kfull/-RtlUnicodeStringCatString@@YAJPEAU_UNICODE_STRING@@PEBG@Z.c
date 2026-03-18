/*
 * XREFs of ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x140145BB8
 * Callers:
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1401454B0 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x14014561C (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ReadTiltCalibrationData @ 0x1402715B4 (ReadTiltCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x140271AA4 (WriteTiltCalibrationData.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1402AE400 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringCatString(struct _UNICODE_STRING *a1, WCHAR *a2)
{
  unsigned __int64 Length; // r9
  USHORT MaximumLength; // ax
  unsigned int v6; // ecx
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  WCHAR *v10; // rbx
  __int16 v11; // ax
  unsigned __int64 v12; // r8

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
    v7 = Length;
    v8 = 0x7FFFLL;
    v9 = v7 >> 1;
    v10 = &a1->Buffer[v9];
    v11 = 0;
    v12 = ((unsigned __int64)a1->MaximumLength >> 1) - v9;
    if ( v12 )
    {
      while ( v8 )
      {
        if ( *a2 )
        {
          *v10++ = *a2++;
          --v8;
          ++v11;
          if ( --v12 )
            continue;
        }
        if ( v12 || !v8 )
          break;
        goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      if ( *a2 )
        v6 = -2147483643;
    }
    a1->Length = 2 * (v11 + v9);
  }
  return v6;
}
