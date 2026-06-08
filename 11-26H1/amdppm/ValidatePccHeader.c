/*
 * XREFs of ValidatePccHeader @ 0x140031568
 * Callers:
 *     AcquirePccInterface @ 0x1400273AC (AcquirePccInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ValidatePccHeader(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // r9d
  char v3; // al
  unsigned int v5; // eax

  v1 = -1073741811;
  if ( *(_DWORD *)a1 != 609239875 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v2 = 43;
LABEL_11:
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        2,
        1,
        v2,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids);
      return v1;
    }
    return v1;
  }
  if ( *(_WORD *)(a1 + 4) >= 0x28u )
  {
    v3 = *(_BYTE *)(a1 + 6);
    if ( v3 )
    {
      if ( v3 != 1 || *(_BYTE *)(a1 + 7) )
      {
LABEL_9:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v2 = 45;
          goto LABEL_11;
        }
        return v1;
      }
    }
    else if ( *(_BYTE *)(a1 + 7) < 6u )
    {
      goto LABEL_9;
    }
    v5 = *(_DWORD *)(a1 + 36);
    if ( v5 > *(_DWORD *)(a1 + 28) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v1;
      v2 = 46;
      goto LABEL_11;
    }
    if ( *(_DWORD *)(a1 + 32) <= v5 )
      return 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v2 = 47;
      goto LABEL_11;
    }
    return v1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v2 = 44;
    goto LABEL_11;
  }
  return v1;
}
