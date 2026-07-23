/*
 * XREFs of AdtpBuildSidListString @ 0x140896560
 * Callers:
 *     AdtpPackageParameters @ 0x14046EBC0 (AdtpPackageParameters.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlConvertSidToUnicodeString @ 0x140901480 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x1409019EC (RtlLengthSidAsUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildSidListString(unsigned int *a1, __int64 a2, wchar_t **a3, __int64 a4, _DWORD *a5, char *a6)
{
  NTSTATUS v6; // ebx
  char v7; // r15
  unsigned int v9; // r12d
  unsigned int v10; // esi
  unsigned int v11; // r13d
  void **v12; // r14
  void *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  wchar_t *Pool2; // r14
  unsigned int *v17; // rcx
  unsigned int v18; // esi
  PSID *v19; // r12
  NTSTATUS appended; // eax
  unsigned int v21; // eax
  ULONG StringLength; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING Destination; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int *v25; // [rsp+38h] [rbp-C8h]
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  char *v29; // [rsp+60h] [rbp-A0h]
  char v30; // [rsp+70h] [rbp-90h] BYREF

  v6 = 0;
  v28 = a4;
  v7 = 0;
  v29 = a6;
  v25 = a1;
  v27 = a5;
  UnicodeString = 0LL;
  Destination = 0LL;
  if ( a1 && (v9 = *a1) != 0 )
  {
    v10 = 1;
    v11 = 0;
    v12 = (void **)(*((_QWORD *)a1 + 1) + 8LL);
    while ( v11 < v9 )
    {
      v13 = *v12;
      StringLength = 0;
      RtlLengthSidAsUnicodeString(v13, &StringLength);
      if ( v10 + (StringLength >> 1) + 7 < v10 )
      {
        v6 = -1073741675;
        goto LABEL_26;
      }
      v6 = 0;
      ++v11;
      v12 += 2;
      v10 += (StringLength >> 1) + 7;
    }
    if ( v10 <= 0x7FFF )
    {
      v14 = (unsigned int)*v27;
      if ( (unsigned int)v14 + v10 >= 0x400 )
      {
        Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
        {
          v6 = -1073741801;
          goto LABEL_26;
        }
        v7 = 1;
      }
      else
      {
        v15 = v28;
        *v27 = v14 + v10;
        Pool2 = (wchar_t *)(v15 + 2 * v14);
      }
      v17 = v25;
      Destination.MaximumLength = 2 * v10;
      UnicodeString.MaximumLength = 512;
      v18 = 0;
      Destination.Buffer = Pool2;
      v19 = (PSID *)(*((_QWORD *)v25 + 1) + 8LL);
      UnicodeString.Buffer = (wchar_t *)&v30;
      while ( v18 < *v17 )
      {
        v6 = RtlConvertSidToUnicodeString(&UnicodeString, *v19, 0);
        if ( v6 < 0 )
          goto LABEL_22;
        RtlAppendUnicodeToString(&Destination, L"\r\n\t\t%{");
        RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
        appended = RtlAppendUnicodeToString(&Destination, L"}");
        v17 = v25;
        ++v18;
        v19 += 2;
        v6 = appended;
      }
      if ( a3 )
      {
        v21 = Destination.Length + 2;
        *a3 = Pool2;
        a3[1] = (wchar_t *)v21;
      }
      if ( v6 < 0 )
      {
LABEL_22:
        if ( v7 )
        {
          ExFreePoolWithTag(Pool2, 0);
          v7 = 0;
        }
      }
    }
    else
    {
      v6 = -1073741811;
    }
  }
  else if ( a3 )
  {
    a3[1] = (wchar_t *)4;
    *a3 = L"-";
  }
LABEL_26:
  *v29 = v7;
  return (unsigned int)v6;
}
