/*
 * XREFs of SdbpQueryAppCompatFlagsByExeID @ 0x140B32948
 * Callers:
 *     SdbGetEntryFlags @ 0x140B4CAA0 (SdbGetEntryFlags.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslRegistryGetKey @ 0x140B32A38 (AslRegistryGetKey.c)
 *     AslRegistryGetUInt32 @ 0x140B32C48 (AslRegistryGetUInt32.c)
 */

__int64 __fastcall SdbpQueryAppCompatFlagsByExeID(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  int Key; // eax
  unsigned int v7; // ebx
  int UInt32; // eax
  bool v9; // zf
  int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+54h] [rbp+Ch]
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  v12 = HIDWORD(a1);
  v11 = 0;
  Handle = 0LL;
  Key = AslRegistryGetKey(
          &Handle,
          L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags",
          2147483904LL,
          a3);
  v7 = Key;
  if ( Key < 0 )
  {
    if ( Key == -1073741772 )
      goto LABEL_4;
    goto LABEL_8;
  }
  UInt32 = AslRegistryGetUInt32(&v11, Handle, a2);
  v7 = UInt32;
  if ( UInt32 >= 0 )
  {
    v7 = 0;
    goto LABEL_4;
  }
  if ( UInt32 != -1073741772 )
LABEL_8:
    AslLogCallPrintf(1LL, (__int64)"SdbpQueryAppCompatFlagsByExeID");
LABEL_4:
  v9 = Handle == 0LL;
  *a4 = v11;
  if ( !v9 )
    ZwClose(Handle);
  return v7;
}
