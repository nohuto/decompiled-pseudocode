/*
 * XREFs of AdtpBuildPrivilegeAuditString @ 0x140AE50FC
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14041F85C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpPackageParameters @ 0x14046EBC0 (AdtpPackageParameters.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     AdtpLookupKnownPrivilegeNameQuickly @ 0x1404DC188 (AdtpLookupKnownPrivilegeNameQuickly.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall AdtpBuildPrivilegeAuditString(
        unsigned int *a1,
        UNICODE_STRING *a2,
        __int64 *a3,
        __int64 a4,
        unsigned int *a5,
        _BYTE *a6)
{
  unsigned int v6; // eax
  UNICODE_STRING *v9; // r15
  unsigned __int16 v11; // bx
  __int64 v12; // rdx
  unsigned int v13; // r8d
  __int64 Pool2; // rsi
  unsigned int v15; // r14d
  char *v16; // rcx
  char *v17; // rbx
  size_t Length; // r13
  wchar_t *Buffer; // rdx
  __int64 v20; // rbx
  unsigned __int16 v21; // cx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING v24; // [rsp+30h] [rbp-30h]
  void *Src[2]; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v26; // [rsp+50h] [rbp-10h] BYREF
  _WORD *v27; // [rsp+A0h] [rbp+40h]

  v6 = *a1;
  *(_DWORD *)(&v24.MaximumLength + 1) = 0;
  v9 = a2;
  DestinationString = 0LL;
  v26 = 0LL;
  *(_OWORD *)Src = 0LL;
  if ( !v6 )
  {
    if ( a3 )
    {
      a3[1] = 4LL;
      *a3 = (__int64)L"-";
    }
    else if ( a2 )
    {
      RtlInitUnicodeString(a2, L"-");
    }
    return 0LL;
  }
  if ( v6 > 0x42 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, L"\r\n\t\t\t");
  RtlInitUnicodeString(&v26, L"?");
  v11 = (unsigned __int16)(*(_WORD *)a1 * (AdtpWellKnownPrivilegeMaxLen + DestinationString.Length)
                         - DestinationString.Length
                         + 2) >> 1;
  if ( a4 )
  {
    v12 = *a5;
    v13 = v12 + v11;
    if ( v13 < 0x400 )
    {
      Pool2 = a4 + 2 * v12;
      *a5 = v13;
LABEL_6:
      v24.Buffer = (wchar_t *)Pool2;
      v15 = 0;
      v24.MaximumLength = 2 * v11;
      v16 = (char *)Pool2;
      if ( *a1 )
      {
        do
        {
          v17 = v16;
          v27 = v16;
          if ( (unsigned int)AdtpLookupKnownPrivilegeNameQuickly(&a1[2 * v15 + 2 + v15], Src) )
          {
            Length = v26.Length;
            Buffer = v26.Buffer;
          }
          else
          {
            Length = LOWORD(Src[0]);
            Buffer = (wchar_t *)Src[1];
          }
          memmove(v17, Buffer, Length);
          v16 = &v17[Length];
          if ( v15 < *a1 - 1 )
          {
            v20 = DestinationString.Length;
            memmove(v16, DestinationString.Buffer, DestinationString.Length);
            v16 = (char *)v27 + v20 + Length;
          }
          ++v15;
        }
        while ( v15 < *a1 );
        v9 = a2;
      }
      *(_WORD *)v16 = 0;
      v21 = (_WORD)v16 - Pool2;
      v24.Length = v21;
      if ( a3 )
      {
        *a3 = Pool2;
        a3[1] = (unsigned int)v21 + 2;
      }
      else
      {
        *v9 = v24;
      }
      return 0LL;
    }
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    *a6 = 1;
    goto LABEL_6;
  }
  return 3221225495LL;
}
