/*
 * XREFs of SpRegOpenRedirectedKey @ 0x14083A6F0
 * Callers:
 *     ExpOsProductCacheProviderHelper @ 0x140838DA8 (ExpOsProductCacheProviderHelper.c)
 *     sub_1408390BC @ 0x1408390BC (sub_1408390BC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     SpRegOpenKey @ 0x14083A654 (SpRegOpenKey.c)
 *     RtlGetPersistedStateLocation @ 0x140A10D20 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SpRegOpenRedirectedKey(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *Pool2; // rdi
  int PersistedStateLocation; // eax
  int v6; // ebx
  int v7; // ebx
  UNICODE_STRING *p_DestinationString; // rcx
  HANDLE v9; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE v12; // [rsp+70h] [rbp+20h] BYREF
  int v13; // [rsp+78h] [rbp+28h] BYREF
  int v14; // [rsp+7Ch] [rbp+2Ch]

  v14 = HIDWORD(a2);
  Pool2 = 0LL;
  v12 = 0LL;
  v13 = 0;
  DestinationString = 0LL;
  PersistedStateLocation = RtlGetPersistedStateLocation(off_140FD55D8, 0LL, 0, (__int64)&v13);
  v6 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    v7 = v13;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v6 = RtlGetPersistedStateLocation(off_140FD55D8, Pool2, v7, (__int64)&v13);
    if ( v6 < 0 )
    {
LABEL_15:
      ExFreePoolWithTag(Pool2, 0x20534C53u);
      return (unsigned int)v6;
    }
    RtlInitUnicodeString(&DestinationString, (PCWSTR)Pool2);
    p_DestinationString = &DestinationString;
  }
  else
  {
    if ( PersistedStateLocation != -1073741772 )
    {
      if ( PersistedStateLocation < 0 )
        return (unsigned int)v6;
      goto LABEL_11;
    }
    p_DestinationString = (UNICODE_STRING *)&unk_140FD55E0;
  }
  v6 = SpRegOpenKey(p_DestinationString, &v12);
  if ( v6 < 0 )
  {
    v9 = v12;
    goto LABEL_12;
  }
LABEL_11:
  v9 = 0LL;
  *a3 = v12;
LABEL_12:
  if ( v9 )
    ZwClose(v9);
  if ( Pool2 )
    goto LABEL_15;
  return (unsigned int)v6;
}
