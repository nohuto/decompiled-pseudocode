/*
 * XREFs of SepValidateReferencedCachedHandles @ 0x140A3C458
 * Callers:
 *     SepSetTokenCachedHandles @ 0x140A3B748 (SepSetTokenCachedHandles.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     RtlGetCurrentServiceSessionId @ 0x1404C44E0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlGetAppContainerParent @ 0x140809AC0 (RtlGetAppContainerParent.c)
 *     RtlConvertSidToUnicodeString @ 0x140901480 (RtlConvertSidToUnicodeString.c)
 *     SepQueryNameString @ 0x140920B48 (SepQueryNameString.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     RtlGetAppContainerSidType @ 0x140A3D0C0 (RtlGetAppContainerSidType.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepValidateReferencedCachedHandles(__int64 a1, PSID *a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // esi
  PSID *v5; // r12
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // edi
  PVOID v10; // r14
  unsigned int v11; // r15d
  __int64 v12; // r9
  int v13; // ebx
  PSID v14; // r12
  __int64 v15; // r9
  const UNICODE_STRING *v16; // r13
  NTSTATUS v17; // eax
  char *v18; // rbx
  struct _OBJECT_TYPE *v19; // rax
  __int64 v20; // r15
  char *v22; // rbx
  unsigned int i; // ebx
  PULONG v24; // rsi
  PULONG v25; // rdi
  PULONG v26; // rbx
  PULONG v27; // rax
  PSID v28; // rcx
  ULONG v29; // [rsp+30h] [rbp-D0h]
  char v30; // [rsp+40h] [rbp-C0h]
  unsigned int v31; // [rsp+44h] [rbp-BCh]
  int v32; // [rsp+48h] [rbp-B8h]
  PVOID AppContainerSidParent; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v34; // [rsp+58h] [rbp-A8h]
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+5Ch] [rbp-A4h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+98h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v42[8]; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING v43; // [rsp+B8h] [rbp-48h] BYREF
  char v44; // [rsp+C8h] [rbp-38h]
  wchar_t pszDest[256]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t SourceString[256]; // [rsp+2D0h] [rbp+1D0h] BYREF

  v4 = 0;
  *(_QWORD *)&String1.Length = a2;
  v5 = a2;
  v40 = a4;
  v34 = a3;
  v7 = 0;
  v30 = 0;
  v31 = 0;
  v8 = *(_DWORD *)v5;
  v9 = 0;
  AppContainerSidType = NotAppContainerSidType;
  v10 = 0LL;
  P = 0LL;
  v11 = 0;
  AppContainerSidParent = 0LL;
  v32 = 0;
  UnicodeString = 0LL;
  if ( !v8 )
  {
    v9 = RtlGetAppContainerSidType(v5[1], &AppContainerSidType);
    if ( v9 < 0 )
      goto LABEL_31;
    v14 = v5[1];
    if ( AppContainerSidType == ParentAppContainerSidType )
    {
      v9 = RtlConvertSidToUnicodeString(&UnicodeString, v14, 1u);
      if ( v9 < 0 )
        goto LABEL_31;
      v30 = 1;
    }
    else
    {
      v24 = RtlSubAuthoritySid(v14, 0xBu);
      v25 = RtlSubAuthoritySid(v14, 0xAu);
      v26 = RtlSubAuthoritySid(v14, 9u);
      v27 = RtlSubAuthoritySid(v14, 8u);
      v29 = *v24;
      v4 = 0;
      v9 = RtlStringCchPrintfW(SourceString, 0x100uLL, L"%u-%u-%u-%u", *v27, *v26, *v25, v29);
      if ( v9 < 0 )
        goto LABEL_31;
      RtlInitUnicodeString(&UnicodeString, SourceString);
    }
    v15 = *(unsigned int *)(a1 + 120);
    AppContainerSidParent = &UnicodeString;
    v9 = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v15);
    if ( v9 < 0 )
      goto LABEL_31;
    RtlInitUnicodeString(&DestinationString, pszDest);
    v42[0] = 1;
    RtlInitUnicodeString(&v43, L"\\Device\\NamedPipe");
    v5 = *(PSID **)&String1.Length;
    v7 = 0;
    v44 = 0;
    goto LABEL_12;
  }
  if ( v8 != 1 )
    goto LABEL_14;
  v12 = *(unsigned int *)(a1 + 120);
  AppContainerSidParent = v5 + 1;
  v4 = 0;
  v9 = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v12);
  if ( v9 < 0 )
    goto LABEL_31;
  RtlInitUnicodeString(&DestinationString, pszDest);
  v13 = *(_DWORD *)(a1 + 120);
  v11 = 1;
  v32 = 1;
  v42[0] = 1;
  if ( v13 == RtlGetCurrentServiceSessionId() )
  {
    RtlInitUnicodeString(&v43, L"\\BaseNamedObjects");
    v7 = 0;
    v44 = 1;
LABEL_12:
    v11 = 2;
    v32 = 2;
    goto LABEL_13;
  }
  v7 = 0;
LABEL_13:
  a3 = v34;
LABEL_14:
  v16 = (const UNICODE_STRING *)AppContainerSidParent;
  while ( 1 )
  {
    if ( v7 >= a3 )
      goto LABEL_31;
    if ( v10 )
    {
      ObfDereferenceObject(v10);
      v7 = v31;
    }
    AppContainerSidParent = 0LL;
    v17 = ObReferenceObjectByHandle(*(HANDLE *)(v40 + 8LL * v7), 0, 0LL, 0, &AppContainerSidParent, 0LL);
    v10 = AppContainerSidParent;
    v9 = v17;
    if ( v17 >= 0 )
      break;
LABEL_53:
    v11 = v32;
    v7 = v31 + 1;
    a3 = v34;
    ++v31;
  }
  v18 = (char *)AppContainerSidParent - 48;
  v19 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)AppContainerSidParent - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)AppContainerSidParent - 48) >> 8)];
  if ( v19 != ObpDirectoryObjectType
    && v19 != ObpSymbolicLinkObjectType
    && (v19 != (struct _OBJECT_TYPE *)IoFileObjectType
     || *(_DWORD *)(*((_QWORD *)AppContainerSidParent + 1) + 72LL) != 17) )
  {
LABEL_30:
    v9 = -1073741811;
    goto LABEL_31;
  }
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  v9 = SepQueryNameString((__int64)v10, &P);
  if ( v9 >= 0 )
  {
    if ( P && *((_WORD *)P + 1) )
    {
      String2 = *(UNICODE_STRING *)P;
      while ( v4 < v11 )
      {
        v20 = 3LL * v4;
        if ( RtlPrefixUnicodeString((UNICODE_STRING *)((char *)&DestinationString + 24 * v4), &String2, 1u) )
        {
          v4 = 0;
          if ( !v42[8 * v20] )
            goto LABEL_53;
          if ( (v18[26] & 2) != 0 )
          {
            v22 = &v18[-ObpInfoMaskToOffset[v18[26] & 3]];
            if ( v22 )
            {
              if ( *((_WORD *)v22 + 5) )
              {
                String1 = *(UNICODE_STRING *)(v22 + 8);
                if ( RtlEqualUnicodeString(&String1, v16, 1u) )
                  goto LABEL_53;
                for ( i = 0; i < 5; ++i )
                {
                  if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)&AllowedCachedObjectNames[2 * i], 1u) )
                    goto LABEL_53;
                }
                if ( AppContainerSidType == ChildAppContainerSidType )
                {
                  v28 = v5[1];
                  AppContainerSidParent = 0LL;
                  if ( RtlGetAppContainerParent(v28, &AppContainerSidParent) >= 0 )
                  {
                    String2 = 0LL;
                    v9 = RtlConvertSidToUnicodeString(&String2, AppContainerSidParent, 1u);
                    if ( v9 >= 0 )
                    {
                      LOBYTE(v4) = RtlEqualUnicodeString(&String1, &String2, 1u) != 0;
                      RtlFreeAnsiString(&String2);
                    }
                    ExFreePoolWithTag(AppContainerSidParent, 0);
                    if ( (_BYTE)v4 )
                    {
                      v4 = 0;
                      goto LABEL_53;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_30;
        }
        v11 = v32;
        ++v4;
      }
    }
    goto LABEL_30;
  }
LABEL_31:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( v30 && UnicodeString.Buffer )
    ExFreePool(UnicodeString.Buffer);
  return (unsigned int)v9;
}
