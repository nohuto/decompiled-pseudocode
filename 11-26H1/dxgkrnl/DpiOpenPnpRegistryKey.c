/*
 * XREFs of DpiOpenPnpRegistryKey @ 0x140391650
 * Callers:
 *     DpiGetAdapterInfo @ 0x140238980 (DpiGetAdapterInfo.c)
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     DpiReadPnpRegistryValue @ 0x1403914A0 (DpiReadPnpRegistryValue.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x14042131C (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     DpiGetPnpRegistryKeyName @ 0x140391730 (DpiGetPnpRegistryKeyName.c)
 */

__int64 __fastcall DpiOpenPnpRegistryKey(__int64 a1, unsigned int a2, ACCESS_MASK a3, void **a4)
{
  __int64 v4; // rdi
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  __int64 result; // rax
  struct _UNICODE_STRING *v10; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+28h] [rbp-40h] BYREF

  v4 = (int)a2;
  v10 = 0LL;
  if ( (int)DpiGetPnpRegistryKeyName(a1, a2, &v10) < 0 )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 3944;
  }
  else
  {
    ObjectAttributes.ObjectName = v10;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    v7 = ZwOpenKey(a4, a3, &ObjectAttributes);
    v8 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry2(2LL, v4, v7);
      WdLogGlobalForLineNumber = 3963;
    }
    return v8;
  }
  return result;
}
