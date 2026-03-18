/*
 * XREFs of VrpDecommissionKeyContext @ 0x140A7F5C0
 * Callers:
 *     VrpRegistryCallback @ 0x140973A30 (VrpRegistryCallback.c)
 *     VrpFreeKeyContext @ 0x140A7F588 (VrpFreeKeyContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall VrpDecommissionKeyContext(UNICODE_STRING *a1)
{
  wchar_t *Buffer; // rcx

  Buffer = a1[1].Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, 0x67655256u);
    RtlInitUnicodeString(a1 + 1, 0LL);
  }
}
