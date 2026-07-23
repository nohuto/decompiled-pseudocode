/*
 * XREFs of BiUnloadHiveByName @ 0x1409A1340
 * Callers:
 *     BiUnloadHiveByHandle @ 0x1409A12A4 (BiUnloadHiveByHandle.c)
 *     BiAddStoreFromFile @ 0x1409A458C (BiAddStoreFromFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     ZwUnloadKey @ 0x14072BB20 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x14072BB40 (ZwUnloadKey2.c)
 *     BiAcquirePrivilege @ 0x1409A2D48 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409A2DFC (BiReleasePrivilege.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUnloadHiveByName(__int64 a1, int a2, char a3)
{
  unsigned __int64 v5; // rbx
  wchar_t *Pool2; // rax
  WCHAR *v7; // rdi
  int v8; // ebx
  NTSTATUS v10; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+38h] BYREF

  *(&TargetKey.Length + 1) = 0;
  *(&TargetKey.Attributes + 1) = 0;
  v13 = 0LL;
  DestinationString = 0LL;
  v5 = (unsigned int)(a2 + 38);
  Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL);
  v7 = Pool2;
  if ( Pool2 )
  {
    swprintf_s(Pool2, v5 >> 1, L"%s\\%s", L"\\Registry\\Machine", a1);
    RtlInitUnicodeString(&DestinationString, v7);
    TargetKey.Length = 48;
    TargetKey.ObjectName = &DestinationString;
    TargetKey.RootDirectory = 0LL;
    TargetKey.Attributes = 576;
    *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
    v8 = BiAcquirePrivilege(18LL, &v13);
    if ( v8 >= 0 )
    {
      if ( a3 )
        v10 = ZwUnloadKey2(&TargetKey, 1u);
      else
        v10 = ZwUnloadKey(&TargetKey);
      v8 = v10;
      BiReleasePrivilege(&v13);
    }
    ExFreePoolWithTag(v7, 0x4B444342u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
