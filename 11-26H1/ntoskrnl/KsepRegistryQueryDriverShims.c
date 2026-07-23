/*
 * XREFs of KsepRegistryQueryDriverShims @ 0x1409D8644
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x140A38400 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     KsepRegistryQuerySZ @ 0x1407C22EC (KsepRegistryQuerySZ.c)
 *     KsepStringConcatenate @ 0x1409D7A8C (KsepStringConcatenate.c)
 *     KsepRegistryCloseKey @ 0x1409D8784 (KsepRegistryCloseKey.c)
 */

__int64 __fastcall KsepRegistryQueryDriverShims(_WORD *a1, void *a2, void *a3, _QWORD *a4)
{
  HANDLE v6; // rdi
  int SZ; // ebx
  __int64 v9; // [rsp+30h] [rbp-40h] BYREF
  void *v10; // [rsp+38h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  KeyHandle = a3;
  v6 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v9 = 0LL;
  v10 = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  SZ = KsepStringConcatenate(
         (__int64)&v9,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Driver",
         a1,
         1);
  if ( SZ >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SZ = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( SZ >= 0 )
    {
      v6 = KeyHandle;
      _InterlockedIncrement((volatile signed __int32 *)&AlpcpMessageLogLock.WaitBlockList);
    }
  }
  if ( v10 )
    KsepPoolFreePaged(v10);
  if ( SZ >= 0 )
    SZ = KsepRegistryQuerySZ(v6, L"Shims", 7, a2, 0x800uLL, a4);
  if ( SZ == -1073741772 )
    SZ = -1073741275;
  KsepRegistryCloseKey(v6);
  return (unsigned int)SZ;
}
