/*
 * XREFs of _RegRtlQueryValue @ 0x140A6C630
 * Callers:
 *     _SysCtxOpenControlSet @ 0x1408A2E30 (_SysCtxOpenControlSet.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall RegRtlQueryValue(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  void *v6; // rdi
  NTSTATUS result; // eax
  char *p_KeyValueInformation; // rbx
  ULONG Length; // esi
  NTSTATUS v12; // eax
  int v13; // esi
  unsigned int v14; // r8d
  unsigned int v15; // edx
  __int64 Pool2; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  char KeyValueInformation; // [rsp+48h] [rbp-D0h] BYREF

  v6 = 0LL;
  DestinationString = 0LL;
  ResultLength = 0;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    if ( a4 && *a5 > 0x80 )
    {
      Length = *a5 + 12;
      if ( Length < 0xC )
        return -1073741675;
      Pool2 = ExAllocatePool2(0x100uLL);
      v6 = (void *)Pool2;
      if ( !Pool2 )
        return -1073741801;
      p_KeyValueInformation = (char *)Pool2;
    }
    else
    {
      p_KeyValueInformation = &KeyValueInformation;
      Length = 140;
    }
    v12 = ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            p_KeyValueInformation,
            Length,
            &ResultLength);
    v13 = v12;
    if ( !v12 || v12 == -2147483643 )
    {
      v14 = *a5;
      v15 = *((_DWORD *)p_KeyValueInformation + 2);
      *a5 = v15;
      if ( v14 < v15 )
        v13 = -1073741789;
      else
        memmove(a4, p_KeyValueInformation + 12, *((unsigned int *)p_KeyValueInformation + 2));
      if ( a3 )
        *a3 = *((_DWORD *)p_KeyValueInformation + 1);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    return v13;
  }
  return result;
}
