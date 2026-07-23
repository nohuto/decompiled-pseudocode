/*
 * XREFs of VrpDecommissionKeyContext @ 0x140A85430
 * Callers:
 *     VrpRegistryCallback @ 0x140935A40 (VrpRegistryCallback.c)
 *     VrpFreeKeyContext @ 0x140A853F8 (VrpFreeKeyContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
