/*
 * XREFs of DpOpenSpbResource @ 0x14039D540
 * Callers:
 *     <none>
 * Callees:
 *     RESOURCE_HUB_STRING_PRINTF @ 0x1400681BC (RESOURCE_HUB_STRING_PRINTF.c)
 *     RESOURCE_HUB_UNICODE_STRING_PRINTF @ 0x140069C48 (RESOURCE_HUB_UNICODE_STRING_PRINTF.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DpiCreateSpbResourceRecord @ 0x14018F864 (DpiCreateSpbResourceRecord.c)
 */

__int64 __fastcall DpOpenSpbResource(
        __int64 a1,
        __int64 a2,
        const UNICODE_STRING *a3,
        ACCESS_MASK a4,
        ULONG ShareAccess,
        ULONG OpenOptions,
        _QWORD *a7)
{
  int v9; // ebx
  __int64 result; // rax
  __int64 v12; // r14
  int v13; // eax
  _DWORD *v14; // r8
  unsigned __int16 Length; // ax
  int v16; // ebx
  _DWORD *v17; // r9
  __int64 i; // rcx
  __int64 v19; // rdx
  int v20; // [rsp+34h] [rbp-9Dh]
  PVOID P[2]; // [rsp+38h] [rbp-99h] BYREF
  void *FileHandle; // [rsp+48h] [rbp-89h] BYREF
  struct _EX_RUNDOWN_REF *v23; // [rsp+50h] [rbp-81h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-79h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-49h] BYREF
  unsigned __int16 v26[20]; // [rsp+98h] [rbp-39h] BYREF

  v20 = HIDWORD(a2);
  *(_OWORD *)P = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v9 = a2;
  FileHandle = 0LL;
  v23 = 0LL;
  IoStatusBlock = 0LL;
  if ( KeGetCurrentIrql() )
  {
    v16 = -1073741811;
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    WdLogGlobalForLineNumber = 522;
  }
  else
  {
    if ( !a1
      || (v12 = *(_QWORD *)(a1 + 64)) == 0
      || *(_DWORD *)(v12 + 16) != 1953656900
      || (v13 = *(_DWORD *)(v12 + 20), v13 != 3) && v13 != 2 )
    {
      WdLogSingleEntry1(3LL);
      result = 3221225711LL;
      WdLogGlobalForLineNumber = 541;
      return result;
    }
    v14 = *(_DWORD **)(v12 + 1312);
    if ( !v14 )
      goto LABEL_8;
    v19 = 0LL;
LABEL_28:
    if ( (unsigned int)v19 >= *v14 )
    {
LABEL_8:
      WdLogSingleEntry1(3LL);
      result = 3221225712LL;
      WdLogGlobalForLineNumber = 580;
      return result;
    }
    v17 = &v14[9 * v19];
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v17[4] )
      {
        v19 = (unsigned int)(v19 + 1);
        goto LABEL_28;
      }
      if ( LOBYTE(v17[5 * i + 5]) == 0x84 && v17[5 * i + 7] == v9 && v17[5 * i + 8] == v20 )
        break;
    }
    if ( a3 )
      Length = a3->Length;
    else
      Length = 0;
    WORD1(P[0]) = Length + 80;
    P[1] = (PVOID)ExAllocatePool2(256LL, (unsigned __int16)(Length + 80), 1953656900LL);
    if ( P[1] )
    {
      v16 = RESOURCE_HUB_STRING_PRINTF(v26, 0x22uLL, L"%0*I64x");
      if ( v16 >= 0 )
        v16 = RESOURCE_HUB_UNICODE_STRING_PRINTF((__int64)P, L"%s%s", L"\\Device\\RESOURCE_HUB\\", v26);
      if ( v16 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 618;
      }
      else
      {
        if ( a3 )
        {
          if ( *a3->Buffer != 92 )
            RtlAppendUnicodeToString((PUNICODE_STRING)P, L"\\");
          RtlAppendUnicodeStringToString((PUNICODE_STRING)P, a3);
        }
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v16 = ZwOpenFile(&FileHandle, a4, &ObjectAttributes, &IoStatusBlock, ShareAccess, OpenOptions);
        if ( v16 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 683;
        }
        else
        {
          v16 = DpiCreateSpbResourceRecord(v12, (__int64)FileHandle, &v23);
          if ( v16 >= 0 )
          {
            *a7 = v23;
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 701;
          }
        }
      }
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0);
    }
    else
    {
      v16 = -1073741801;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 600;
    }
  }
  return (unsigned int)v16;
}
