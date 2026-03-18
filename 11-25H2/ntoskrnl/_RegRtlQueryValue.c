/*
 * XREFs of _RegRtlQueryValue @ 0x1409D7970
 * Callers:
 *     _SysCtxOpenControlSet @ 0x1408102E0 (_SysCtxOpenControlSet.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14069B420 (ZwQueryValueKey.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall RegRtlQueryValue(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  void *v6; // rdi
  NTSTATUS result; // eax
  ULONG Length; // ebp
  __int64 Pool2; // rax
  char *v12; // rbx
  NTSTATUS v13; // eax
  int v14; // ebp
  unsigned int v15; // r8d
  unsigned int v16; // edx
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  char v19; // [rsp+48h] [rbp-D0h] BYREF

  v6 = 0LL;
  DestinationString = 0LL;
  ResultLength = 0;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    if ( a4 && *a5 > 0x80 )
    {
      if ( *a5 + 12 < 0xC )
        return -1073741675;
      Length = *a5 + 12;
      Pool2 = ExAllocatePool2(0x100uLL);
      v6 = (void *)Pool2;
      if ( !Pool2 )
        return -1073741801;
      v12 = (char *)Pool2;
    }
    else
    {
      v12 = &v19;
      Length = 140;
    }
    v13 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v12, Length, &ResultLength);
    v14 = v13;
    if ( !v13 || v13 == -2147483643 )
    {
      v15 = *a5;
      v16 = *((_DWORD *)v12 + 2);
      *a5 = v16;
      if ( v15 < v16 )
        v14 = -1073741789;
      else
        memmove(a4, v12 + 12, *((unsigned int *)v12 + 2));
      if ( a3 )
        *a3 = *((_DWORD *)v12 + 1);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    return v14;
  }
  return result;
}
