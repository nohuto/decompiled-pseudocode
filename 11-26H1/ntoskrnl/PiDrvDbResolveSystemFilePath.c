/*
 * XREFs of PiDrvDbResolveSystemFilePath @ 0x1407B7A4C
 * Callers:
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407B7138 (PiDrvDbResolveFilePathKeyValues.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     PiDrvDbFindSystemFilePathToken @ 0x1407B55B8 (PiDrvDbFindSystemFilePathToken.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 */

__int64 __fastcall PiDrvDbResolveSystemFilePath(
        unsigned __int16 *a1,
        char a2,
        UNICODE_STRING *a3,
        const UNICODE_STRING *a4,
        UNICODE_STRING *String1,
        PUNICODE_STRING Destination)
{
  bool v6; // r13
  NTSTATUS appended; // ebx
  const UNICODE_STRING *v10; // r15
  unsigned __int64 v12; // rsi
  unsigned __int64 SystemFilePathToken; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int16 v16; // r10
  wchar_t *v17; // r9
  unsigned __int16 v18; // dx
  unsigned int v19; // ebx
  void *Pool2; // rsi
  wchar_t *Buffer; // rdx
  char v23; // [rsp+20h] [rbp-30h]
  unsigned int Length; // [rsp+24h] [rbp-2Ch]
  bool v25; // [rsp+28h] [rbp-28h]
  int v26; // [rsp+2Ch] [rbp-24h]
  UNICODE_STRING Source; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v28; // [rsp+40h] [rbp-10h]
  int v30; // [rsp+98h] [rbp+48h]
  const UNICODE_STRING *v31; // [rsp+A0h] [rbp+50h]
  unsigned __int16 Destinationa; // [rsp+B8h] [rbp+68h]

  v31 = a3;
  v6 = 0;
  v23 = 0;
  v25 = 0;
  Length = 0;
  v26 = a2 & 2;
  appended = 0;
  v10 = 0LL;
  v28 = 0LL;
  if ( (a2 & 2) != 0 && a3 )
    v6 = RtlEqualUnicodeString(a3, &PiDrvDbSystemRootNt, 1u) != 0;
  v30 = a2 & 1;
  if ( (a2 & 1) != 0 && String1 && a4 )
    v25 = RtlEqualUnicodeString(String1, a4, 1u) != 0;
  Destination->Length = 0;
  for ( Source = *(UNICODE_STRING *)a1; *Source.Buffer; Source = v28 )
  {
    v12 = 0LL;
    if ( v26 )
    {
      if ( v31 && !v6 )
      {
        SystemFilePathToken = PiDrvDbFindSystemFilePathToken((__int128 *)&Source, &PiDrvDbSystemRootNt.Length, a3);
        if ( SystemFilePathToken )
        {
          v10 = v31;
          v12 = SystemFilePathToken;
          Length = 22;
        }
        else
        {
          v6 = 1;
        }
      }
      if ( a4 && !v23 )
      {
        v14 = PiDrvDbFindSystemFilePathToken((__int128 *)&Source, &PiDrvDbSystemRootWin32.Length, a3);
        if ( v14 )
        {
          if ( !v12 || v14 < v12 )
          {
            v12 = v14;
            Length = 24;
            v10 = a4;
          }
        }
        else
        {
          v23 = 1;
        }
      }
    }
    if ( v30 && a4 && !v25 && String1 && String1->Length > 2u )
    {
      v15 = PiDrvDbFindSystemFilePathToken((__int128 *)&Source, &String1->Length, a3);
      if ( v15 )
      {
        if ( !v12 || v15 < v12 )
        {
          v12 = v15;
          v10 = a4;
          Length = String1->Length;
        }
        goto LABEL_31;
      }
      v25 = 1;
    }
    if ( !v12 )
      break;
LABEL_31:
    a3 = (UNICODE_STRING *)*a1;
    v16 = 2 * ((__int64)(v12 - (unsigned __int64)Source.Buffer) >> 1);
    Destinationa = v16;
    Source.Length = v16;
    v17 = (wchar_t *)(v12 + 2 * ((unsigned __int64)Length >> 1));
    v28.Buffer = v17;
    LOWORD(a3) = (_WORD)a3 - 2 * ((__int64)(unsigned int)((_DWORD)v17 - *((_DWORD *)a1 + 2)) >> 1);
    v18 = (unsigned __int16)a3;
    v28.Length = (unsigned __int16)a3;
    v28.MaximumLength = (_WORD)a3 + 2;
    if ( *v17 )
    {
      if ( *v17 != 92 )
        continue;
      if ( v10->Buffer[((unsigned __int64)v10->Length >> 1) - 1] == 92 )
      {
        v28.MaximumLength = (unsigned __int16)a3;
        v18 = (_WORD)a3 - 2;
        v28.Buffer = v17 + 1;
        v28.Length = (_WORD)a3 - 2;
      }
    }
    v19 = v18 + Destination->Length + v16 + 2 + v10->Length;
    if ( v19 > 0xFFFE )
      return (unsigned int)-2147483643;
    if ( v19 > Destination->MaximumLength )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      Buffer = Destination->Buffer;
      if ( Buffer )
      {
        if ( Destination->Length )
          memmove(Pool2, Buffer, Destination->Length);
        ExFreePool(Destination->Buffer);
      }
      v16 = Destinationa;
      Destination->Buffer = (wchar_t *)Pool2;
      Destination->MaximumLength = v19;
    }
    if ( v16 )
    {
      appended = RtlAppendUnicodeStringToString(Destination, &Source);
      if ( appended < 0 )
        return (unsigned int)appended;
    }
    appended = RtlAppendUnicodeStringToString(Destination, v10);
    if ( appended < 0 )
      return (unsigned int)appended;
  }
  if ( Destination->Length )
  {
    if ( Source.Length )
      return (unsigned int)RtlAppendUnicodeStringToString(Destination, &Source);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)appended;
}
