/*
 * XREFs of _CmCreateOrdinalInstanceKey @ 0x140AE67D8
 * Callers:
 *     _CmGetDeviceSoftwareKeyPath @ 0x140956880 (_CmGetDeviceSoftwareKeyPath.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     wcstoul @ 0x14053AE50 (wcstoul.c)
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     _ultow_s @ 0x14053DA00 (_ultow_s.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     _RegRtlCreateKeyTransacted @ 0x140979034 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlIsPredefinedKey @ 0x140979188 (_RegRtlIsPredefinedKey.c)
 *     _RegRtlOpenPredefinedKey @ 0x140AE6AB8 (_RegRtlOpenPredefinedKey.c)
 */

__int64 __fastcall CmCreateOrdinalInstanceKey(
        __int64 a1,
        void *a2,
        wchar_t *a3,
        __int64 a4,
        unsigned int a5,
        HANDLE *a6)
{
  unsigned int v6; // ebx
  __int64 v9; // rdi
  unsigned int v10; // r13d
  unsigned int v11; // ecx
  unsigned int i; // esi
  int v13; // r14d
  wchar_t *j; // rdx
  unsigned int v15; // eax
  bool v16; // zf
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  __int64 v22; // rax
  int inited; // edi
  __int64 v25; // rcx
  HANDLE v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  HANDLE Handle; // [rsp+58h] [rbp-39h] BYREF
  HANDLE v30; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-19h] BYREF
  ULONG Disposition; // [rsp+100h] [rbp+6Fh] BYREF

  v6 = 0;
  Disposition = 0;
  v9 = a1;
  Handle = 0LL;
  v10 = wcstoul(L"999A", 0LL, 36);
  v11 = wcstoul(L"ZZZZ", 0LL, 36);
  a5 = v11;
  if ( v10 - 1 > 0xFFFFFFFD || v11 - 1 > 0xFFFFFFFD )
    return (unsigned int)-1073741595;
  for ( i = 0; ; i = v10 )
  {
LABEL_4:
    if ( i <= 0x270F )
    {
      if ( swprintf_s(a3, 5uLL, L"%04u", i) < 0 )
        return (unsigned int)-1073741595;
      goto LABEL_6;
    }
    if ( i >= v10 )
      break;
  }
  if ( i > v11 )
    return (unsigned int)-2147483622;
  if ( ultow_s(i, a3, 5uLL, 36) )
    return (unsigned int)-1073741595;
LABEL_6:
  v13 = 1;
  for ( j = a3; ; ++j )
  {
    v15 = *j;
    if ( !(_WORD)v15 )
      break;
    if ( v15 > 0x61 )
    {
      v16 = v15 == 101;
      v17 = v15 - 101;
    }
    else
    {
      if ( v15 == 97 || v15 == 65 )
      {
LABEL_45:
        v27 = j - a3;
        v28 = 3 - v27;
        if ( (_DWORD)v27 != 3 )
        {
          do
          {
            v13 *= 36;
            --v28;
          }
          while ( v28 );
        }
        goto LABEL_27;
      }
      v17 = v15 - 69;
      v16 = v15 == 69;
    }
    if ( v16 )
      goto LABEL_45;
    v18 = v17 - 4;
    if ( !v18 )
      goto LABEL_45;
    v19 = v18 - 6;
    if ( !v19 )
      goto LABEL_45;
    v20 = v19 - 6;
    if ( !v20 )
      goto LABEL_45;
    v21 = v20 - 1;
    if ( !v21 || v21 == 3 )
      goto LABEL_45;
  }
  if ( v9 && (v22 = *(_QWORD *)(v9 + 224)) != 0 )
  {
    inited = RegRtlCreateKeyTransacted(a2, a3, 0, 1u, 0LL, 0, &Handle, &Disposition, *(PUNICODE_STRING *)(v22 + 8));
  }
  else
  {
    v30 = 0LL;
    memset(&ObjectAttributes, 0, 44);
    DestinationString = 0LL;
    if ( !RegRtlIsPredefinedKey((__int64)a2) || (inited = RegRtlOpenPredefinedKey(v25, &v30), inited >= 0) )
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, a3);
      if ( inited >= 0 )
      {
        ObjectAttributes.Length = 48;
        v26 = a2;
        ObjectAttributes.Attributes = 704;
        if ( v30 )
          v26 = v30;
        ObjectAttributes.RootDirectory = v26;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        inited = ZwCreateKey(&Handle, 1u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      }
    }
    if ( v30 )
      ZwClose(v30);
  }
  if ( inited == -1073741444 )
  {
    return (unsigned int)-1073741595;
  }
  else if ( inited < 0 )
  {
    return (unsigned int)inited;
  }
  else
  {
    if ( Disposition != 1 )
    {
      ZwClose(Handle);
      v9 = a1;
      Handle = 0LL;
LABEL_27:
      v11 = a5;
      i += v13;
      goto LABEL_4;
    }
    *a6 = Handle;
  }
  return v6;
}
