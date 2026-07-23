/*
 * XREFs of IovDetachDevice @ 0x140C26E5C
 * Callers:
 *     IoDetachDevice @ 0x140426A30 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x140C36800 (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
