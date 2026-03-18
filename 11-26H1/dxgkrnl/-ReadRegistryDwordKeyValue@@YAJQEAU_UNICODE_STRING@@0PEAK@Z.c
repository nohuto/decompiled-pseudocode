/*
 * XREFs of ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1401E5F30
 * Callers:
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x14019FC68 (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 *     DxgDetermineBootImageMode @ 0x1401BDAC0 (DxgDetermineBootImageMode.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401DD97C (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?CloseRegistrySubkey@@YAXPEAX@Z @ 0x1403388F4 (-CloseRegistrySubkey@@YAXPEAX@Z.c)
 */

__int64 __fastcall ReadRegistryDwordKeyValue(
        struct _UNICODE_STRING *const a1,
        struct _UNICODE_STRING *const a2,
        unsigned int *a3)
{
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-19h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-9h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+70h] [rbp+27h] BYREF
  int v16; // [rsp+74h] [rbp+2Bh]
  unsigned int v17; // [rsp+7Ch] [rbp+33h]

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  *a3 = 0;
  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  KeyHandle = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
  LODWORD(v8) = v5;
  if ( v5 < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6) + 24) = v5;
    WdLogGlobalForLineNumber = 344;
  }
  else
  {
    ResultLength = 0;
    v8 = ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
    CloseRegistrySubkey(KeyHandle);
    if ( (int)v8 >= 0 && v16 == 4 )
    {
      *a3 = v17;
    }
    else
    {
      *a3 = 0;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = v8;
      WdLogGlobalForLineNumber = 339;
    }
  }
  return (unsigned int)v8;
}
