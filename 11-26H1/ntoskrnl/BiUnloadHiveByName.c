/*
 * XREFs of BiUnloadHiveByName @ 0x1409D0360
 * Callers:
 *     BiUnloadHiveByHandle @ 0x1409D02C4 (BiUnloadHiveByHandle.c)
 *     BiAddStoreFromFile @ 0x1409D35AC (BiAddStoreFromFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x14053B0E0 (swprintf_s.c)
 *     ZwUnloadKey @ 0x140726F50 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x140726F70 (ZwUnloadKey2.c)
 *     BiAcquirePrivilege @ 0x1409D1D68 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409D1E1C (BiReleasePrivilege.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUnloadHiveByName(__int64 a1, int a2, char a3)
{
  unsigned __int64 v5; // rbx
  wchar_t *Pool2; // rax
  WCHAR *v7; // rdi
  int v8; // ebx
  __int64 v10; // rdx
  int v11; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v13[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-20h]
  int v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+5Ch] [rbp-14h]
  __int128 v18; // [rsp+60h] [rbp-10h]
  __int64 v19; // [rsp+A8h] [rbp+38h] BYREF

  v13[1] = 0;
  v17 = 0;
  v19 = 0LL;
  DestinationString = 0LL;
  v5 = (unsigned int)(a2 + 38);
  Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL);
  v7 = Pool2;
  if ( Pool2 )
  {
    swprintf_s(Pool2, v5 >> 1, L"%s\\%s", L"\\Registry\\Machine", a1);
    RtlInitUnicodeString(&DestinationString, v7);
    v13[0] = 48;
    p_DestinationString = &DestinationString;
    v14 = 0LL;
    v16 = 576;
    v18 = 0LL;
    v8 = BiAcquirePrivilege(18LL, &v19);
    if ( v8 >= 0 )
    {
      if ( a3 )
        v11 = ZwUnloadKey2((__int64)v13, 1LL);
      else
        v11 = ZwUnloadKey((__int64)v13, v10);
      v8 = v11;
      BiReleasePrivilege(&v19);
    }
    ExFreePoolWithTag(v7, 0x4B444342u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
