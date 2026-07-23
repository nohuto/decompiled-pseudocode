/*
 * XREFs of AslRegistryGetKey @ 0x140B32A38
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x140887580 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x140887904 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpGetMergeSdbsDisabled @ 0x140887E8C (SdbpGetMergeSdbsDisabled.c)
 *     AslpProcessMatchRegNode @ 0x1408912FC (AslpProcessMatchRegNode.c)
 *     SdbpQueryAppCompatFlagsByExeID @ 0x140B32948 (SdbpQueryAppCompatFlagsByExeID.c)
 * Callees:
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     AslRegistryBuildUserPath @ 0x14088E63C (AslRegistryBuildUserPath.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslRegistryBuildMachinePath @ 0x140B32B64 (AslRegistryBuildMachinePath.c)
 */

__int64 __fastcall AslRegistryGetKey(HANDLE *a1, const WCHAR *a2, ACCESS_MASK a3, int a4)
{
  int v6; // ebx
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  UNICODE_STRING Destination; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  *a1 = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Destination = 0LL;
  if ( a4 )
  {
    v6 = AslRegistryBuildMachinePath(&Destination, a2);
    if ( v6 >= 0 )
      goto LABEL_3;
LABEL_5:
    AslLogCallPrintf(1LL, (__int64)"AslRegistryGetKey");
    goto LABEL_6;
  }
  v6 = AslRegistryBuildUserPath(&Destination, a2);
  if ( v6 < 0 )
    goto LABEL_5;
LABEL_3:
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
  v6 = v7;
  if ( v7 >= 0 )
  {
    v6 = 0;
    *a1 = KeyHandle;
    KeyHandle = 0LL;
    goto LABEL_6;
  }
  if ( v7 != -1073741772 )
    goto LABEL_5;
LABEL_6:
  if ( Destination.Buffer )
    AslFree(v8, Destination.Buffer);
  return (unsigned int)v6;
}
