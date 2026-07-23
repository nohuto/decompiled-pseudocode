/*
 * XREFs of CmpLoadLayerVersion @ 0x14085BC98
 * Callers:
 *     CmpLoadLayerVersions @ 0x14085C0EC (CmpLoadLayerVersions.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpQueryLayerVersionString @ 0x14085C6B4 (CmpQueryLayerVersionString.c)
 *     CmpQueryLayerVersionUlong @ 0x14085C7E8 (CmpQueryLayerVersionUlong.c)
 *     RtlUnicodeStringToAnsiString @ 0x14097CC00 (RtlUnicodeStringToAnsiString.c)
 */

NTSTATUS __fastcall CmpLoadLayerVersion(_DWORD *a1, void *a2, UNICODE_STRING *a3, int a4)
{
  int v4; // ebx
  int v7; // esi
  NTSTATUS result; // eax
  int v10; // r15d
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // edx
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // edx
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  const UNICODE_STRING *v25; // r14
  int v26; // ecx
  unsigned int v27; // eax
  HANDLE v28; // r8
  int v29; // ecx
  HANDLE v30; // r8
  int v31; // eax
  HANDLE v32; // rcx
  _STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+40h] BYREF
  int v36; // [rsp+B8h] [rbp+48h] BYREF

  v4 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v7 = ~a4;
  v36 = 0;
  memset_0(a1, 0, 0x528uLL);
  if ( a3->Length > 0x7Eu )
    return -1073741562;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Length = 48;
  v10 = 1;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a3;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    *((_WORD *)a1 + 8) = a3->Length;
    *((_WORD *)a1 + 9) = 128;
    *((_QWORD *)a1 + 3) = a1 + 28;
    memset_0(a1 + 28, 0, 0x80uLL);
    memmove(*((void **)a1 + 3), a3->Buffer, a3->Length);
    if ( (int)CmpQueryLayerVersionUlong(a1, L"MajorVersion", KeyHandle) < 0 || (v11 = 8, !*a1) )
      v11 = 0;
    v12 = v11 | a1[328] & 0xFFFFFFF7;
    a1[328] = v12;
    if ( (((unsigned __int8)v7 | (unsigned __int8)v12) & 8) == 0 )
      return -2147483614;
    v13 = a1[328] ^ ((unsigned __int8)~((unsigned int)CmpQueryLayerVersionUlong(a1 + 1, L"MinorVersion", KeyHandle) >> 27) ^ (unsigned __int8)a1[328]) & 0x10;
    a1[328] = v13;
    if ( (((unsigned __int8)v7 | (unsigned __int8)v13) & 0x10) == 0 )
      return -2147483614;
    if ( (int)CmpQueryLayerVersionUlong(a1 + 2, L"BuildNumber", KeyHandle) < 0 || (v14 = 32, !a1[2]) )
      v14 = 0;
    v15 = v14 | a1[328] & 0xFFFFFFDF;
    a1[328] = v15;
    if ( (((unsigned __int8)v7 | (unsigned __int8)v15) & 0x20) == 0 )
      return -2147483614;
    v16 = a1[328] ^ ((unsigned __int8)~((unsigned int)CmpQueryLayerVersionUlong(a1 + 3, L"BuildQfe", KeyHandle) >> 25) ^ (unsigned __int8)a1[328]) & 0x40;
    a1[328] = v16;
    if ( (((unsigned __int8)v7 | (unsigned __int8)v16) & 0x40) == 0 )
      return -2147483614;
    if ( (int)CmpQueryLayerVersionString((PUNICODE_STRING)a1 + 2, (PCWSTR)a1 + 120, KeyHandle) < 0
      || (v17 = 128, !*((_WORD *)a1 + 16)) )
    {
      v17 = 0;
    }
    v18 = v17 | a1[328] & 0xFFFFFF7F;
    a1[328] = v18;
    if ( (((unsigned __int8)v7 | (unsigned __int8)v18) & 0x80) == 0 )
      return -2147483614;
    if ( (int)CmpQueryLayerVersionString((PUNICODE_STRING)a1 + 3, (PCWSTR)a1 + 133, KeyHandle) < 0
      || (v19 = 256, !*((_WORD *)a1 + 24)) )
    {
      v19 = 0;
    }
    v20 = v19 | a1[328] & 0xFFFFFEFF;
    a1[328] = v20;
    if ( (((unsigned __int16)v7 | (unsigned __int16)v20) & 0x100) == 0 )
      return -2147483614;
    if ( (int)CmpQueryLayerVersionString((PUNICODE_STRING)a1 + 4, (PCWSTR)a1 + 141, KeyHandle) < 0
      || (v21 = 512, !*((_WORD *)a1 + 32)) )
    {
      v21 = 0;
    }
    v22 = v21 | a1[328] & 0xFFFFFDFF;
    a1[328] = v22;
    if ( (((unsigned __int16)v7 | (unsigned __int16)v22) & 0x200) == 0 )
      return -2147483614;
    if ( (int)CmpQueryLayerVersionString((PUNICODE_STRING)a1 + 5, (PCWSTR)a1 + 269, KeyHandle) < 0
      || (v23 = 1024, !*((_WORD *)a1 + 40)) )
    {
      v23 = 0;
    }
    v24 = v23 | a1[328] & 0xFFFFFBFF;
    a1[328] = v24;
    if ( (((unsigned __int16)v7 | (unsigned __int16)v24) & 0x400) == 0 )
      return -2147483614;
    v25 = (const UNICODE_STRING *)(a1 + 24);
    if ( (int)CmpQueryLayerVersionString((PUNICODE_STRING)a1 + 6, (PCWSTR)a1 + 397, KeyHandle) < 0
      || (v26 = 2048, !v25->Length) )
    {
      v26 = 0;
    }
    v27 = v26 | a1[328] & 0xFFFFF7FF;
    a1[328] = v27;
    if ( ((v7 | v27) & 0x800) == 0 )
      return -2147483614;
    *(_DWORD *)&DestinationString.Length = 0x1000000;
    DestinationString.Buffer = (char *)a1 + 1050;
    if ( !*((_QWORD *)a1 + 13) || !v25->Length )
    {
      if ( !*((_QWORD *)a1 + 11) || !*((_WORD *)a1 + 40) )
      {
LABEL_40:
        *((_BYTE *)a1 + 1050) = 0;
LABEL_41:
        if ( (int)CmpQueryLayerVersionUlong(&v36, L"IsTopLevel", KeyHandle) < 0 || !v36 )
          v10 = 0;
        v28 = KeyHandle;
        a1[328] = v10 | a1[328] & 0xFFFFFFFE;
        if ( (int)CmpQueryLayerVersionUlong(&v36, L"IsChecked", v28) < 0 || (v29 = 2, !v36) )
          v29 = 0;
        v30 = KeyHandle;
        a1[328] = v29 | a1[328] & 0xFFFFFFFD;
        v31 = CmpQueryLayerVersionUlong(&v36, L"OrderNumber", v30);
        v32 = KeyHandle;
        if ( v31 >= 0 )
          v4 = v36;
        a1[327] = v4;
        ZwClose(v32);
        return 0;
      }
      v25 = (const UNICODE_STRING *)(a1 + 20);
    }
    if ( RtlUnicodeStringToAnsiString(&DestinationString, v25, 0) >= 0 )
      goto LABEL_41;
    goto LABEL_40;
  }
  return result;
}
