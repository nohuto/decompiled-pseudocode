/*
 * XREFs of IopIsKnownGoodLegacyFsFilter @ 0x140447340
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140446FF4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140799330 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

bool __fastcall IopIsKnownGoodLegacyFsFilter(const void **a1)
{
  __int16 v1; // bp
  const void **v2; // rdi
  unsigned int i; // ebx

  v1 = *(_WORD *)a1;
  v2 = (const void **)&off_1400041F8;
  for ( i = 0; i < 3; ++i )
  {
    if ( *((_WORD *)v2 - 4) == v1 && !memcmp(*v2, a1[1], *((unsigned __int16 *)v2 - 4)) )
      break;
    v2 += 2;
  }
  return i < 3;
}
