/*
 * XREFs of SdbpGetMergeSdbsDisabled @ 0x18008F004
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x18008E3FC (SdbpGetManifestedMergeStubAlloc.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbpGetMergeSdbsSupported @ 0x18008F10C (SdbpGetMergeSdbsSupported.c)
 *     AslRegistryGetKey @ 0x180098F30 (AslRegistryGetKey.c)
 *     AslRegistryGetUInt32 @ 0x18009922C (AslRegistryGetUInt32.c)
 */

__int64 __fastcall SdbpGetMergeSdbsDisabled(_DWORD *a1)
{
  unsigned int v2; // ebx
  int Key; // eax
  char *v4; // rdi
  int UInt32; // eax
  int v7; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  Handle = 0LL;
  if ( (unsigned int)SdbpGetMergeSdbsSupported() )
  {
    Key = AslRegistryGetKey(
            &Handle,
            L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\SdbUpdates",
            2147483904LL);
    v4 = (char *)Handle;
    v2 = Key;
    if ( Key >= 0 )
    {
      UInt32 = AslRegistryGetUInt32(&v7, Handle, L"DisableDoubleQuerySdbs");
      v2 = UInt32;
      if ( UInt32 == -1073741772 )
      {
        v2 = 0;
        *a1 = 0;
      }
      else if ( UInt32 >= 0 )
      {
        v2 = 0;
        *a1 = v7 != 0;
      }
      else
      {
        AslLogCallPrintf(1LL, "SdbpGetMergeSdbsDisabled", 1106LL, "Failed to query reg value.");
      }
    }
    else if ( Key != -1073741772 )
    {
      AslLogCallPrintf(
        1LL,
        "SdbpGetMergeSdbsDisabled",
        1094LL,
        "AslRegistryGetKey failed to open SdbUpdates key [%x]",
        Key);
    }
    if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      ZwClose(v4);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return v2;
}
