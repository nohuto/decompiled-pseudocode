/*
 * XREFs of AslRegistryGetKey @ 0x180098F30
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x18008E3FC (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x18008E830 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpGetMergeSdbsDisabled @ 0x18008F004 (SdbpGetMergeSdbsDisabled.c)
 *     AslpProcessMatchRegNode @ 0x1800A0D28 (AslpProcessMatchRegNode.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslRegistryBuildMachinePath @ 0x180098D5C (AslRegistryBuildMachinePath.c)
 */

__int64 __fastcall AslRegistryGetKey(void **a1, const WCHAR *a2, ACCESS_MASK a3)
{
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  const char *v8; // r9
  __int64 v9; // r8
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  *a1 = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Destination = 0LL;
  v6 = AslRegistryBuildMachinePath(&Destination, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = "AslRegistryBuildMachinePath failed %x for %ws";
    v9 = 1718LL;
LABEL_3:
    AslLogCallPrintf(1LL, "AslRegistryGetKey", v9, v8, v6, a2);
    goto LABEL_8;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v7 = 0;
    *a1 = KeyHandle;
    KeyHandle = 0LL;
  }
  else if ( v6 != -1073741772 )
  {
    v8 = "NtOpenKey failed %x for %ws";
    v9 = 1761LL;
    goto LABEL_3;
  }
LABEL_8:
  if ( Destination.Buffer )
    AslFree(NtCurrentPeb()->ProcessHeap, Destination.Buffer);
  return v7;
}
