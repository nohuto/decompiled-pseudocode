/*
 * XREFs of VrpCreateNamespaceNodePlaceholderKey @ 0x14094B508
 * Callers:
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408195FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14094A72C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x140A71EB8 (VrpPreLoadKey.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateKey @ 0x14069B4E0 (ZwCreateKey.c)
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
