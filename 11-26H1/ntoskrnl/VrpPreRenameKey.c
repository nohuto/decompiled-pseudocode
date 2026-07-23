/*
 * XREFs of VrpPreRenameKey @ 0x1408AC300
 * Callers:
 *     VrpRegistryCallback @ 0x140935A40 (VrpRegistryCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall VrpPreRenameKey(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 *v4; // rcx
  GUID ActivityId; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-58h] BYREF
  _DWORD *v8; // [rsp+60h] [rbp-38h]
  __int64 v9; // [rsp+68h] [rbp-30h]
  __int64 v10; // [rsp+70h] [rbp-28h]
  _DWORD v11[2]; // [rsp+78h] [rbp-20h] BYREF

  v2 = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v3 = *(_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(v3 + 36) & 0x20000000) != 0 )
  {
    if ( (unsigned int)dword_140E0A5C0 > 5 )
    {
      if ( *(_QWORD *)(v3 + 24) )
        v4 = (__int64 *)(v3 + 16);
      else
        v4 = &EmptyUnicodeString;
      v9 = 2LL;
      v8 = v11;
      v10 = v4[1];
      v11[0] = *(unsigned __int16 *)v4;
      v11[1] = 0;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E0A5C0,
        (unsigned __int8 *)byte_14005BAE8,
        &ActivityId,
        0LL,
        4u,
        &v7);
    }
    return (unsigned int)-1073741790;
  }
  return v2;
}
