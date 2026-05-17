/*
 * XREFs of OpenIptDevice @ 0x18015AA90
 * Callers:
 *     GetProcessIptTrace @ 0x18015A84C (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18015A95C (GetProcessIptTraceSize.c)
 * Callees:
 *     ZwCreateFile @ 0x18015F9E0 (ZwCreateFile.c)
 */

NTSTATUS __fastcall OpenIptDevice(HANDLE *a1)
{
  struct _IO_STATUS_BLOCK v2; // [rsp+60h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES v3; // [rsp+70h] [rbp-38h] BYREF

  *(_QWORD *)&v3.Length = 48LL;
  v3.ObjectName = (PUNICODE_STRING)&unk_1801C5758;
  memset(&v3.Attributes, 0, 24);
  v3.RootDirectory = 0LL;
  v2 = 0LL;
  return NtCreateFile(a1, 0x120089u, &v3, &v2, 0LL, 0x80u, 1u, 1u, 0x4Cu, 0LL, 0);
}
