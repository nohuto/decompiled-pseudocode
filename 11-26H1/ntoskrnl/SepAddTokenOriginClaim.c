/*
 * XREFs of SepAddTokenOriginClaim @ 0x140B2A2F4
 * Callers:
 *     SeDuplicateTokenWithPredictedClaims @ 0x14081AACC (SeDuplicateTokenWithPredictedClaims.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x140B2A218 (SeDuplicateTokenAndAddOriginClaim.c)
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403AFD64 (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     RtlUShortAdd @ 0x14047AFC0 (RtlUShortAdd.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAddTokenOriginClaim(_DWORD *a1, int a2, __int64 a3, char a4)
{
  int appended; // ebx
  _DWORD *v6; // rdi
  wchar_t *Pool2; // rax
  const UNICODE_STRING *v9; // rdi
  const wchar_t *v10; // rax
  _DWORD *v11; // rcx
  NTSTATUS v12; // eax
  __int16 v13; // cx
  USHORT v14; // bx
  _DWORD *v15; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  int v17; // [rsp+30h] [rbp-29h] BYREF
  int v18; // [rsp+34h] [rbp-25h]
  UNICODE_STRING *v19; // [rsp+38h] [rbp-21h]
  __int128 v20; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-9h] BYREF
  UNICODE_STRING v22; // [rsp+60h] [rbp+7h] BYREF
  int v23; // [rsp+70h] [rbp+17h]
  int v24; // [rsp+74h] [rbp+1Bh]
  int v25; // [rsp+78h] [rbp+1Fh]
  const UNICODE_STRING *v26; // [rsp+80h] [rbp+27h]
  USHORT pusResult; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v28; // [rsp+D0h] [rbp+77h] BYREF

  *(_QWORD *)&SourceString.Length = 1966108LL;
  pusResult = 0;
  SourceString.Buffer = L"POLICYAPPID://";
  v28 = 0LL;
  appended = 0;
  v6 = 0LL;
  DestinationString = 0LL;
  v20 = 0LL;
  if ( a2 != 536 )
  {
    DWORD2(v20) = a2;
LABEL_3:
    *(_QWORD *)&v20 = a1;
    goto LABEL_4;
  }
  v6 = a1;
  if ( *a1 )
  {
    DWORD2(v20) = 524;
    goto LABEL_3;
  }
  a1 = (_DWORD *)v20;
LABEL_4:
  if ( !a1 )
    goto LABEL_5;
  v17 = 1;
  v19 = &v22;
  v18 = 1;
  if ( a4 )
  {
    *(_DWORD *)(&v22.MaximumLength + 1) = v28;
    v10 = L"SMARTLOCKER://SMARTSCREENORIGINCLAIMNOTINHERITED";
    *(_DWORD *)&v22.Length = 6422624;
  }
  else
  {
    *(_QWORD *)&v22.Length = 4849736LL;
    v10 = L"SMARTLOCKER://SMARTSCREENORIGINCLAIM";
  }
  v11 = *(_DWORD **)(a3 + 776);
  v22.Buffer = (wchar_t *)v10;
  v23 = 16;
  v26 = (const UNICODE_STRING *)&v20;
  v25 = 1;
  v24 = 65;
  LODWORD(v28) = 4;
  appended = AuthzBasepSetSecurityAttributesToken(v11, (int *)&v28, (__int64)&v17);
  if ( appended >= 0 )
  {
LABEL_5:
    if ( v6 )
    {
      v9 = (const UNICODE_STRING *)*((_QWORD *)v6 + 66);
      RtlInitUnicodeString(&DestinationString, 0LL);
      while ( v9 )
      {
        v12 = RtlUShortAdd(0x1Cu, v9[-2].Length, &pusResult);
        appended = v12;
        if ( v12 < 0 )
          break;
        appended = RtlUShortAdd(pusResult, v13 - 26, &pusResult);
        if ( appended < 0 )
          break;
        v14 = pusResult;
        DestinationString.Length = 0;
        if ( pusResult > DestinationString.MaximumLength )
        {
          if ( DestinationString.Buffer )
            ExFreePoolWithTag(DestinationString.Buffer, 0x434F6553u);
          DestinationString.MaximumLength = v14;
          Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL);
          DestinationString.Buffer = Pool2;
          if ( !Pool2 )
          {
            appended = -1073741670;
            goto LABEL_7;
          }
        }
        RtlCopyUnicodeString(&DestinationString, &SourceString);
        appended = RtlAppendUnicodeStringToString(&DestinationString, v9 - 2);
        if ( appended < 0 )
          break;
        v15 = *(_DWORD **)(a3 + 776);
        v19 = &v22;
        v17 = 1;
        v26 = v9 - 1;
        v18 = 1;
        v22 = DestinationString;
        v23 = 3;
        v25 = 1;
        v24 = 65;
        LODWORD(v28) = 4;
        appended = AuthzBasepSetSecurityAttributesToken(v15, (int *)&v28, (__int64)&v17);
        if ( appended < 0 )
          break;
        v9 = *(const UNICODE_STRING **)&v9->Length;
      }
    }
  }
  Pool2 = DestinationString.Buffer;
LABEL_7:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x434F6553u);
  return (unsigned int)appended;
}
