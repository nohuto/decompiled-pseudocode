/*
 * XREFs of LdrpCreateKey @ 0x180141D10
 * Callers:
 *     RtlpSetMachineUILanguagesImmediate @ 0x180142F3C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1801430B0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     ZwCreateKey @ 0x18015F1E0 (ZwCreateKey.c)
 */

NTSTATUS __fastcall LdrpCreateKey(_UNICODE_STRING *a1, void *a2, ULONG a3, ACCESS_MASK a4, PHANDLE KeyHandle)
{
  _OBJECT_ATTRIBUTES v6; // [rsp+40h] [rbp-38h] BYREF

  v6.ObjectName = a1;
  v6.RootDirectory = a2;
  *(_QWORD *)&v6.Length = 48LL;
  *(_QWORD *)&v6.Attributes = 64LL;
  *KeyHandle = 0LL;
  *(_OWORD *)&v6.SecurityDescriptor = 0LL;
  return ZwCreateKey(KeyHandle, a4, &v6, 0, 0LL, a3, 0LL);
}
