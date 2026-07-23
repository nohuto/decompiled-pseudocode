/*
 * XREFs of _PnpSetPropertyWorker @ 0x1409ACBB4
 * Callers:
 *     _PnpSetGenericStoreProperty @ 0x1409ACB6C (_PnpSetGenericStoreProperty.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     _PnpOpenPropertiesKey @ 0x140956580 (_PnpOpenPropertiesKey.c)
 *     _RegRtlCreateKeyTransacted @ 0x140979034 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlIsPredefinedKey @ 0x140979188 (_RegRtlIsPredefinedKey.c)
 *     _PnpCtxRegSetValue @ 0x1409AD0CC (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegDeleteTree @ 0x140A3F304 (_PnpCtxRegDeleteTree.c)
 *     _RegRtlOpenPredefinedKey @ 0x140AE6AB8 (_RegRtlOpenPredefinedKey.c)
 */

__int64 __fastcall PnpSetPropertyWorker(
        __int64 a1,
        void *a2,
        _WORD *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  signed int v10; // ebx
  HANDLE v11; // rsi
  __int64 v12; // rax
  int inited; // edi
  HANDLE v14; // rsi
  __int64 v15; // rcx
  HANDLE v16; // rcx
  int v17; // edi
  int v18; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  _WORD *v23; // rax
  int pszFormat; // [rsp+28h] [rbp-E8h]
  ULONG v25; // [rsp+90h] [rbp-80h] BYREF
  ULONG Disposition; // [rsp+94h] [rbp-7Ch] BYREF
  HANDLE v27; // [rsp+98h] [rbp-78h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-68h] BYREF
  HANDLE v30; // [rsp+B0h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-28h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-18h]
  wchar_t Dst[16]; // [rsp+100h] [rbp-10h] BYREF
  wchar_t pszDest[40]; // [rsp+120h] [rbp+10h] BYREF

  v27 = a2;
  v33 = a6;
  Disposition = 0;
  v25 = 0;
  v30 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  if ( a7 > 0x7FFFFFFF )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    v22 = 85LL;
    v23 = a3;
    do
    {
      if ( !*v23 )
        break;
      ++v23;
      --v22;
    }
    while ( v22 );
    v10 = v22 == 0 ? 0xC000000D : 0;
    if ( !v22 )
      return (unsigned int)v10;
  }
  if ( a5 == 25 && a3 && *a3 )
    return (unsigned int)-1073741811;
  if ( RtlStringCchPrintfExW(pszDest, 0x27uLL, 0LL, 0LL, 0x800u, L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}") < 0 )
    goto LABEL_26;
  swprintf_s(Dst, 9uLL, L"%04lX", *(unsigned int *)(a4 + 16));
  v10 = PnpOpenPropertiesKey(a1, (__int64)v27, 0LL, 4LL, 1, pszFormat, &v30);
  if ( v10 < 0 )
  {
    v30 = 0LL;
    goto LABEL_19;
  }
  v11 = v30;
  if ( a1 && (v12 = *(_QWORD *)(a1 + 224)) != 0 )
  {
    inited = RegRtlCreateKeyTransacted(
               v30,
               pszDest,
               0,
               4u,
               0LL,
               0,
               &KeyHandle,
               &Disposition,
               *(PUNICODE_STRING *)(v12 + 8));
  }
  else
  {
    v27 = 0LL;
    memset(&ObjectAttributes, 0, 44);
    DestinationString = 0LL;
    if ( !RegRtlIsPredefinedKey((__int64)v30) || (inited = RegRtlOpenPredefinedKey(v20, &v27), inited >= 0) )
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
      if ( inited >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 704;
        if ( v27 )
          v11 = v27;
        ObjectAttributes.RootDirectory = v11;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        inited = ZwCreateKey(&KeyHandle, 4u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      }
    }
    if ( v27 )
      ZwClose(v27);
  }
  if ( inited == -1073741444 )
    goto LABEL_26;
  if ( inited < 0 )
  {
    KeyHandle = 0LL;
    v10 = inited;
    goto LABEL_19;
  }
  v14 = KeyHandle;
  if ( a1 && (v15 = *(_QWORD *)(a1 + 224)) != 0 )
  {
    v17 = RegRtlCreateKeyTransacted(KeyHandle, Dst, 0, 0x10006u, 0LL, 0, &Handle, &v25, *(PUNICODE_STRING *)(v15 + 8));
  }
  else
  {
    v27 = 0LL;
    memset(&ObjectAttributes, 0, 44);
    DestinationString = 0LL;
    if ( !RegRtlIsPredefinedKey((__int64)KeyHandle) || (v17 = RegRtlOpenPredefinedKey(v21, &v27), v17 >= 0) )
    {
      v17 = RtlInitUnicodeStringEx(&DestinationString, Dst);
      if ( v17 >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 704;
        if ( v27 )
          v14 = v27;
        ObjectAttributes.RootDirectory = v14;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v17 = ZwCreateKey(&Handle, 0x10006u, &ObjectAttributes, 0, 0LL, 0, &v25);
      }
    }
    v16 = v27;
    if ( v27 )
      ZwClose(v27);
  }
  if ( v17 == -1073741444 )
  {
LABEL_26:
    v10 = -1073741595;
LABEL_19:
    if ( Handle )
    {
      ZwClose(Handle);
      if ( v10 < 0 && v25 == 1 )
        PnpCtxRegDeleteTree(a1, KeyHandle, Dst);
    }
    goto LABEL_21;
  }
  if ( v17 >= 0 )
  {
    v18 = PnpCtxRegSetValue(v16, Handle, a3, (unsigned __int16)a5 | 0xFFFF0000, v33, a7);
    if ( v18 != -1073741444 )
    {
      if ( v18 < 0 )
        v10 = v18;
      goto LABEL_19;
    }
    goto LABEL_26;
  }
  Handle = 0LL;
  v10 = v17;
LABEL_21:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    if ( v10 < 0 && Disposition == 1 )
      PnpCtxRegDeleteTree(a1, v30, pszDest);
  }
  if ( v30 )
    ZwClose(v30);
  return (unsigned int)v10;
}
