/*
 * XREFs of NVMeCopyFirmwareRevision @ 0x140001EC0
 * Callers:
 *     FormInquiryStandardData @ 0x140001F50 (FormInquiryStandardData.c)
 *     NVMeGetRichDeviceDescription @ 0x14001E830 (NVMeGetRichDeviceDescription.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeCopyFirmwareRevision(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r11
  unsigned int v4; // r10d
  int v5; // ebx
  __int64 result; // rax
  unsigned __int8 *v8; // rdx
  int v9; // ecx

  v3 = 0LL;
  v4 = 7;
  v5 = 0;
  for ( result = 7LL; result >= 0; --result )
  {
    if ( (unsigned __int8)(*(_BYTE *)(a1 + result + 64) - 33) <= 0x5Du && ++v5 == a3 )
      break;
    if ( !result )
      break;
    --v4;
  }
  if ( v4 < 8 )
  {
    v8 = (unsigned __int8 *)(a1 + (int)v4 + 64LL);
    do
    {
      v9 = *v8;
      result = (unsigned int)(v9 - 33);
      if ( (unsigned __int8)(v9 - 33) <= 0x5Du )
      {
        *(_BYTE *)(v3 + a2) = v9;
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= a3 )
          break;
      }
      ++v4;
      ++v8;
    }
    while ( v4 < 8 );
  }
  return result;
}
