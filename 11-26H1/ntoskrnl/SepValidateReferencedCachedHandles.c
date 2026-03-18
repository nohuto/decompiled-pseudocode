/*
 * XREFs of SepValidateReferencedCachedHandles @ 0x140A293B8
 * Callers:
 *     SepSetTokenCachedHandles @ 0x140A286A8 (SepSetTokenCachedHandles.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlSubAuthoritySid @ 0x14047F970 (RtlSubAuthoritySid.c)
 *     RtlStringCchPrintfW @ 0x1404B0AA4 (RtlStringCchPrintfW.c)
 *     RtlGetCurrentServiceSessionId @ 0x1404CAAB0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlGetAppContainerParent @ 0x140804020 (RtlGetAppContainerParent.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x140925970 (RtlConvertSidToUnicodeString.c)
 *     SepQueryNameString @ 0x1409FBF48 (SepQueryNameString.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     RtlPrefixUnicodeString @ 0x140A29BF0 (RtlPrefixUnicodeString.c)
 *     RtlGetAppContainerSidType @ 0x140A2A020 (RtlGetAppContainerSidType.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepValidateReferencedCachedHandles(__int64 a1, PSID *a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // esi
  PSID *v5; // r12
  unsigned int v7; // edx
  int v8; // ecx
  int AppContainerSidType; // edi
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
  int AppContainerParent; // eax
  ULONG v30; // [rsp+30h] [rbp-D0h]
  unsigned int v31; // [rsp+44h] [rbp-BCh]
  int v32; // [rsp+48h] [rbp-B8h]
  PVOID Sid; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v34; // [rsp+58h] [rbp-A8h]
  int v35; // [rsp+5Ch] [rbp-A4h]
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
  v31 = 0;
  v8 = *(_DWORD *)v5;
  AppContainerSidType = 0;
  v35 = 0;
  v10 = 0LL;
  P = 0LL;
  v11 = 0;
  Sid = 0LL;
  v32 = 0;
  UnicodeString = 0LL;
  if ( !v8 )
  {
    AppContainerSidType = RtlGetAppContainerSidType(v5[1]);
    if ( AppContainerSidType < 0 )
      goto LABEL_29;
    v14 = v5[1];
    v24 = RtlSubAuthoritySid(v14, 0xBu);
    v25 = RtlSubAuthoritySid(v14, 0xAu);
    v26 = RtlSubAuthoritySid(v14, 9u);
    v27 = RtlSubAuthoritySid(v14, 8u);
    v30 = *v24;
    v4 = 0;
    AppContainerSidType = RtlStringCchPrintfW(SourceString, 0x100uLL, L"%u-%u-%u-%u", *v27, *v26, *v25, v30);
    if ( AppContainerSidType < 0 )
      goto LABEL_29;
    RtlInitUnicodeString(&UnicodeString, SourceString);
    v15 = *(unsigned int *)(a1 + 120);
    Sid = &UnicodeString;
    AppContainerSidType = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v15);
    if ( AppContainerSidType < 0 )
      goto LABEL_29;
    RtlInitUnicodeString(&DestinationString, pszDest);
    v42[0] = 1;
    RtlInitUnicodeString(&v43, L"\\Device\\NamedPipe");
    v5 = *(PSID **)&String1.Length;
    v7 = 0;
    v44 = 0;
    goto LABEL_10;
  }
  if ( v8 != 1 )
    goto LABEL_12;
  v12 = *(unsigned int *)(a1 + 120);
  Sid = v5 + 1;
  v4 = 0;
  AppContainerSidType = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v12);
  if ( AppContainerSidType < 0 )
    goto LABEL_29;
  RtlInitUnicodeString(&DestinationString, pszDest);
  v13 = *(_DWORD *)(a1 + 120);
  v11 = 1;
  v32 = 1;
  v42[0] = 1;
  if ( v13 == (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    RtlInitUnicodeString(&v43, L"\\BaseNamedObjects");
    v7 = 0;
    v44 = 1;
LABEL_10:
    v11 = 2;
    v32 = 2;
    goto LABEL_11;
  }
  v7 = 0;
LABEL_11:
  a3 = v34;
LABEL_12:
  v16 = (const UNICODE_STRING *)Sid;
  while ( 1 )
  {
    if ( v7 >= a3 )
      goto LABEL_29;
    if ( v10 )
    {
      ObfDereferenceObject(v10);
      v7 = v31;
    }
    Sid = 0LL;
    v17 = ObReferenceObjectByHandle(*(HANDLE *)(v40 + 8LL * v7), 0, 0LL, 0, &Sid, 0LL);
    v10 = Sid;
    AppContainerSidType = v17;
    if ( v17 >= 0 )
      break;
LABEL_48:
    v11 = v32;
    v7 = v31 + 1;
    a3 = v34;
    ++v31;
  }
  v18 = (char *)Sid - 48;
  v19 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Sid - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Sid - 48) >> 8)];
  if ( v19 != ObpDirectoryObjectType
    && v19 != ObpSymbolicLinkObjectType
    && (v19 != (struct _OBJECT_TYPE *)IoFileObjectType || *(_DWORD *)(*((_QWORD *)Sid + 1) + 72LL) != 17) )
  {
LABEL_28:
    AppContainerSidType = -1073741811;
    goto LABEL_29;
  }
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  AppContainerSidType = SepQueryNameString((__int64)v10, &P);
  if ( AppContainerSidType >= 0 )
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
            goto LABEL_48;
          if ( (v18[26] & 2) != 0 )
          {
            v22 = &v18[-ObpInfoMaskToOffset[v18[26] & 3]];
            if ( v22 )
            {
              if ( *((_WORD *)v22 + 5) )
              {
                String1 = *(UNICODE_STRING *)(v22 + 8);
                if ( RtlEqualUnicodeString(&String1, v16, 1u) )
                  goto LABEL_48;
                for ( i = 0; i < 5; ++i )
                {
                  if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)&AllowedCachedObjectNames[2 * i], 1u) )
                    goto LABEL_48;
                }
                if ( v35 == 1 )
                {
                  v28 = v5[1];
                  Sid = 0LL;
                  AppContainerParent = RtlGetAppContainerParent(v28, &Sid);
                  if ( AppContainerParent >= 0 )
                  {
                    String2 = 0LL;
                    AppContainerSidType = RtlConvertSidToUnicodeString(&String2, Sid, 1u);
                    if ( AppContainerSidType >= 0 )
                    {
                      LOBYTE(v4) = RtlEqualUnicodeString(&String1, &String2, 1u) != 0;
                      RtlFreeAnsiString(&String2);
                    }
                    ExFreePoolWithTag(Sid, 0);
                    if ( (_BYTE)v4 )
                    {
                      v4 = 0;
                      goto LABEL_48;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_28;
        }
        v11 = v32;
        ++v4;
      }
    }
    goto LABEL_28;
  }
LABEL_29:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)AppContainerSidType;
}
