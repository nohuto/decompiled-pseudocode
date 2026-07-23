/*
 * XREFs of VrpCreateNamespaceNodePlaceholderKey @ 0x14093ADA8
 * Callers:
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14093A55C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14093B160 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpPreLoadKey @ 0x140B1D3C8 (VrpPreLoadKey.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 */

__int64 __fastcall VrpCreateNamespaceNodePlaceholderKey(__int64 a1)
{
  NTSTATUS v2; // edi
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+90h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  Disposition = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  if ( *(_WORD *)(a1 + 40) )
  {
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(a1 + 40);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( v2 >= 0 && Disposition == 1 )
      *(_DWORD *)(a1 + 56) |= 0x40000000u;
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v2;
}
