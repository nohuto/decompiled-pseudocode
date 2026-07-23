/*
 * XREFs of PiDrvDbResolveSystemFilePath @ 0x1407BAAAC
 * Callers:
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407BA198 (PiDrvDbResolveFilePathKeyValues.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PiDrvDbFindSystemFilePathToken @ 0x1407B8618 (PiDrvDbFindSystemFilePathToken.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall PiDrvDbResolveSystemFilePath(
        __int16 *a1,
        char a2,
        const UNICODE_STRING *a3,
        const UNICODE_STRING *a4,
        UNICODE_STRING *String1,
        PUNICODE_STRING Destination)
{
  bool v6; // r13
  NTSTATUS appended; // ebx
  const UNICODE_STRING *v10; // r15
  PWCHAR v12; // rsi
  PWCHAR SystemFilePathToken; // rax
  PWCHAR v14; // rax
  PWCHAR v15; // rax
  __int16 v16; // r8
  unsigned __int16 v17; // r10
  wchar_t *v18; // r9
  unsigned __int16 v19; // r8
  unsigned __int16 v20; // dx
  unsigned int v21; // ebx
  void *Pool2; // rsi
  wchar_t *Buffer; // rdx
  char v25; // [rsp+20h] [rbp-30h]
  unsigned int Length; // [rsp+24h] [rbp-2Ch]
  bool v27; // [rsp+28h] [rbp-28h]
  int v28; // [rsp+2Ch] [rbp-24h]
  UNICODE_STRING Source; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v30; // [rsp+40h] [rbp-10h]
  int v32; // [rsp+98h] [rbp+48h]
  unsigned __int16 Destinationa; // [rsp+B8h] [rbp+68h]

  v6 = 0;
  v25 = 0;
  v27 = 0;
  Length = 0;
  v28 = a2 & 2;
  appended = 0;
  v10 = 0LL;
  v30 = 0LL;
  if ( (a2 & 2) != 0 && a3 )
    v6 = RtlEqualUnicodeString(a3, &PiDrvDbSystemRootNt, 1u) != 0;
  v32 = a2 & 1;
  if ( (a2 & 1) != 0 && String1 && a4 )
    v27 = RtlEqualUnicodeString(String1, a4, 1u) != 0;
  Destination->Length = 0;
  for ( Source = *(UNICODE_STRING *)a1; *Source.Buffer; Source = v30 )
  {
    v12 = 0LL;
    if ( v28 )
    {
      if ( a3 && !v6 )
      {
        SystemFilePathToken = PiDrvDbFindSystemFilePathToken(&Source, (UNICODE_STRING *)&PiDrvDbSystemRootNt);
        if ( SystemFilePathToken )
        {
          v10 = a3;
          v12 = SystemFilePathToken;
          Length = 22;
        }
        else
        {
          v6 = 1;
        }
      }
      if ( a4 && !v25 )
      {
        v14 = PiDrvDbFindSystemFilePathToken(&Source, (UNICODE_STRING *)&PiDrvDbSystemRootWin32);
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
          v25 = 1;
        }
      }
    }
    if ( v32 && a4 && !v27 && String1 && String1->Length > 2u )
    {
      v15 = PiDrvDbFindSystemFilePathToken(&Source, String1);
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
      v27 = 1;
    }
    if ( !v12 )
      break;
LABEL_31:
    v16 = *a1;
    v17 = 2 * (v12 - Source.Buffer);
    Destinationa = v17;
    Source.Length = v17;
    v18 = &v12[(unsigned __int64)Length >> 1];
    v30.Buffer = v18;
    v19 = v16 - 2 * ((__int64)(unsigned int)((_DWORD)v18 - *((_DWORD *)a1 + 2)) >> 1);
    v20 = v19;
    v30.Length = v19;
    v30.MaximumLength = v19 + 2;
    if ( *v18 )
    {
      if ( *v18 != 92 )
        continue;
      if ( v10->Buffer[((unsigned __int64)v10->Length >> 1) - 1] == 92 )
      {
        v30.MaximumLength = v19;
        v20 = v19 - 2;
        v30.Buffer = v18 + 1;
        v30.Length = v19 - 2;
      }
    }
    v21 = v20 + Destination->Length + v17 + 2 + v10->Length;
    if ( v21 > 0xFFFE )
      return (unsigned int)-2147483643;
    if ( v21 > Destination->MaximumLength )
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
      v17 = Destinationa;
      Destination->Buffer = (wchar_t *)Pool2;
      Destination->MaximumLength = v21;
    }
    if ( v17 )
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
