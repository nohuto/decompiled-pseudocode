/*
 * XREFs of GetFirstHardwareId @ 0x14007DF74
 * Callers:
 *     LogDriverInfoStream @ 0x14007C864 (LogDriverInfoStream.c)
 * Callees:
 *     <none>
 */

void __fastcall GetFirstHardwareId(_UNICODE_STRING *HardwareIds)
{
  wchar_t *Buffer; // rdx
  int i; // eax
  unsigned __int16 v3; // ax

  Buffer = HardwareIds->Buffer;
  if ( Buffer )
  {
    if ( *Buffer )
    {
      for ( i = 0; i < HardwareIds->Length >> 1; ++i )
      {
        if ( !*Buffer )
        {
          v3 = 2 * i;
          HardwareIds->Length = v3;
          HardwareIds->MaximumLength = v3 + 2;
          return;
        }
        ++Buffer;
      }
    }
    else
    {
      *(_DWORD *)&HardwareIds->Length = 0x20000;
    }
  }
  else
  {
    RtlInitUnicodeString(HardwareIds, 0LL);
  }
}
