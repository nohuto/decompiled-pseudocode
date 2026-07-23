/*
 * XREFs of IopErrorLogThread @ 0x140AD8FC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     IopErrorLogGetEntry @ 0x1404D9F8C (IopErrorLogGetEntry.c)
 *     IopErrorLogRequeueEntry @ 0x1404FFFF0 (IopErrorLogRequeueEntry.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     EtwWriteErrorLogEntry @ 0x140AD93D0 (EtwWriteErrorLogEntry.c)
 *     IopErrorLogConnectSession @ 0x140AD9780 (IopErrorLogConnectSession.c)
 *     IopErrorLogQueueRequest @ 0x140AD97D8 (IopErrorLogQueueRequest.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_KAFFINITY_EX *IopErrorLogThread()
{
  _KAFFINITY_EX *result; // rax
  unsigned __int64 *v1; // rsi
  __int64 v2; // r12
  unsigned __int16 Length; // di
  wchar_t *Buffer; // rbx
  __int16 v5; // ax
  const WCHAR *v6; // rdx
  UNICODE_STRING *v7; // r14
  __int64 v8; // rcx
  char v9; // r15
  wchar_t *v10; // rcx
  signed __int64 v11; // rbx
  __int64 v12; // rdx
  wchar_t v13; // ax
  wchar_t *v14; // rax
  unsigned __int64 v15; // r9
  signed __int64 v16; // rdx
  __int64 v17; // r8
  wchar_t v18; // ax
  wchar_t *v19; // rax
  int v20; // eax
  void *v21; // rcx
  int v22; // eax
  __int64 Pool2; // rax
  __int16 v24; // r9
  unsigned int DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  __int16 DestinationString_4; // [rsp+4Ch] [rbp-BCh]
  UNICODE_STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A8h]
  char *v29; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING v30; // [rsp+70h] [rbp-98h] BYREF
  _KAFFINITY_EX *v31; // [rsp+80h] [rbp-88h]
  wchar_t Str1[256]; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v33; // [rsp+288h] [rbp+180h] BYREF
  _BYTE P[272]; // [rsp+398h] [rbp+290h] BYREF
  _WORD v35[256]; // [rsp+4A8h] [rbp+3A0h] BYREF

  DestinationString_8 = 0LL;
  DestinationString_4 = 0;
  v30 = 0LL;
  v29 = 0LL;
  result = (_KAFFINITY_EX *)IopErrorLogConnectSession();
  if ( (_BYTE)result )
  {
    while ( 1 )
    {
      DestinationString = 0;
      result = IopErrorLogGetEntry();
      v31 = result;
      if ( !result )
        return result;
      v1 = &result[-1].StaticBitmap[31];
      v2 = result->StaticBitmap[2];
      LODWORD(v28) = WORD1(result[-1].StaticBitmap[31]) - 48;
      if ( !v2 )
        break;
      RtlInitUnicodeString(&DestinationString_8, 0LL);
      if ( *(_QWORD *)(v2 + 64) )
        DestinationString_8 = *(UNICODE_STRING *)(v2 + 56);
      Length = DestinationString_8.Length;
      if ( DestinationString_8.Length )
        goto LABEL_7;
      DestinationString = 0;
      if ( (int)ObQueryNameStringMode(v2, (__int64)&v33, 0x110u, &DestinationString, 0) < 0 || !DestinationString )
      {
        v6 = &word_140B8A320;
        goto LABEL_14;
      }
      DestinationString_8 = v33;
LABEL_15:
      Length = DestinationString_8.Length;
      if ( !DestinationString_8.Length )
      {
        Buffer = DestinationString_8.Buffer;
        goto LABEL_17;
      }
LABEL_7:
      Buffer = &DestinationString_8.Buffer[((unsigned __int64)Length >> 1) - 1];
      if ( *Buffer == 92 )
        goto LABEL_11;
      do
      {
        if ( Buffer == DestinationString_8.Buffer )
          break;
        --Buffer;
      }
      while ( *Buffer != 92 );
      if ( *Buffer == 92 )
LABEL_11:
        ++Buffer;
      v5 = LOWORD(DestinationString_8.Buffer) - (_WORD)Buffer;
      DestinationString_8.Buffer = Buffer;
      Length += v5;
      DestinationString_8.Length = Length;
LABEL_17:
      DestinationString = 0;
      v7 = (UNICODE_STRING *)P;
      v8 = v1[3];
      v9 = 0;
      if ( v8
        && ((v22 = ObQueryNameStringMode(v8, (__int64)P, 0x110u, &DestinationString, 0), v22 != -1073741820)
         || (Pool2 = ExAllocatePool2(0x100uLL), (v7 = (UNICODE_STRING *)Pool2) != 0LL)
         && (v9 = 1,
             v22 = ObQueryNameStringMode(v1[3], Pool2, DestinationString, &DestinationString, 0),
             v22 != -1073741820))
        && v22 >= 0
        && DestinationString )
      {
        v30 = *v7;
      }
      else
      {
        RtlInitUnicodeString(&v30, &word_140B8A320);
      }
      Str1[0] = 0;
      v35[0] = 0;
      if ( Buffer )
      {
        v10 = Str1;
        v11 = (char *)Buffer - (char *)Str1;
        v12 = 256LL;
        do
        {
          if ( !(((unsigned __int64)Length >> 1) + v12 - 256) )
            break;
          v13 = *(wchar_t *)((char *)v10 + v11);
          if ( !v13 )
            break;
          *v10++ = v13;
          --v12;
        }
        while ( v12 );
        v14 = v10 - 1;
        if ( v12 )
          v14 = v10;
        *v14 = 0;
      }
      if ( v30.Buffer )
      {
        v15 = (unsigned __int64)v30.Length >> 1;
        v10 = v35;
        v16 = (char *)v30.Buffer - (char *)v35;
        v17 = 256LL;
        do
        {
          if ( !(v17 + v15 - 256) )
            break;
          v18 = *(wchar_t *)((char *)v10 + v16);
          if ( !v18 )
            break;
          *v10++ = v18;
          --v17;
        }
        while ( v17 );
        v19 = v10 - 1;
        if ( v17 )
          v19 = v10;
        *v19 = 0;
      }
      if ( v9 == 1 )
        ExFreePoolWithTag(v7, 0);
      v20 = *((_DWORD *)v1 + 15);
      if ( (v20 == 1074004005 || v20 == 1074004004) && !wcsicmp(Str1, L"NTFS") )
      {
        v24 = *((_WORD *)v1 + 46);
        *((_WORD *)v1 + 25) -= v24;
        DestinationString_4 = v24;
        v29 = (char *)(v1 + 16);
      }
      if ( (int)EtwWriteErrorLogEntry(
                  (_DWORD)v10,
                  (int)v1 + 48,
                  v28,
                  (int)v1 + 40,
                  (__int64)Str1,
                  (__int64)v35,
                  DestinationString_4,
                  (__int64)v29) < 0 )
      {
        IopErrorLogRequeueEntry(v31);
        return (_KAFFINITY_EX *)IopErrorLogQueueRequest();
      }
      _InterlockedAdd(&IopErrorLogAllocation, -*((unsigned __int16 *)v1 + 1));
      v21 = (void *)v1[3];
      if ( v21 )
        ObfDereferenceObject(v21);
      if ( v2 )
        ObfDereferenceObject((PVOID)v1[4]);
      ExFreePoolWithTag(v1, 0);
    }
    v6 = L"Application Popup";
LABEL_14:
    RtlInitUnicodeString(&DestinationString_8, v6);
    goto LABEL_15;
  }
  return result;
}
