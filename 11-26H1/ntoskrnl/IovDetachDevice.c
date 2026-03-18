/*
 * XREFs of IovDetachDevice @ 0x140C20E4C
 * Callers:
 *     IoDetachDevice @ 0x140437B10 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x140C307F0 (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
