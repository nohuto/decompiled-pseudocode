/*
 * XREFs of HalpUsbLegacyDeviceHandoff @ 0x14059CA40
 * Callers:
 *     HalpUsbLegacyScanBusForHandoff @ 0x14059CBB8 (HalpUsbLegacyScanBusForHandoff.c)
 * Callees:
 *     HalpRegisterUsbController @ 0x14059C9B4 (HalpRegisterUsbController.c)
 */

__int64 __fastcall HalpUsbLegacyDeviceHandoff(__int64 a1, unsigned int a2, int a3, unsigned __int16 *a4)
{
  __int64 result; // rax
  char v8; // r9

  result = *a4;
  if ( *(_DWORD *)a4 == 1896906886 )
    return result;
  if ( *((_BYTE *)a4 + 11) == 12 && *((_BYTE *)a4 + 10) == 3 && !*((_BYTE *)a4 + 9) )
  {
    if ( (_WORD)result == 0x8086 )
    {
      v8 = 1;
LABEL_9:
      result = HalpRegisterUsbController(a2, a3, 0, v8);
      goto LABEL_10;
    }
    if ( (_WORD)result == 4358 )
    {
      v8 = 0;
      goto LABEL_9;
    }
  }
LABEL_10:
  if ( *((_BYTE *)a4 + 11) == 12 && *((_BYTE *)a4 + 10) == 3 && *((_BYTE *)a4 + 9) == 16 )
    return HalpRegisterUsbController(a2, a3, 16, 0);
  return result;
}
