/*
 * XREFs of RtlCanonicalizeDomainName @ 0x1800AB600
 * Callers:
 *     RtlEqualDomainName @ 0x1800AAD70 (RtlEqualDomainName.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlCreateUnicodeString @ 0x180028180 (RtlCreateUnicodeString.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlIpv6AddressToStringW @ 0x1800AAE20 (RtlIpv6AddressToStringW.c)
 *     RtlIpv4StringToAddressW @ 0x1800AB300 (RtlIpv4StringToAddressW.c)
 *     RtlIpv6StringToAddressExW @ 0x1800ABC40 (RtlIpv6StringToAddressExW.c)
 *     RtlpIdnToUnicodeWorker @ 0x1800AC330 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1800AD6E0 (RtlpNameprepAsciiRealWorker.c)
 *     __report_rangecheckfailure @ 0x1801268D0 (__report_rangecheckfailure.c)
 *     iswctype @ 0x18012AB80 (iswctype.c)
 *     towlower @ 0x18012D650 (towlower.c)
 *     swprintf_s @ 0x180133F00 (swprintf_s.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlCanonicalizeDomainName(PUNICODE_STRING DestinationString, unsigned __int16 *a2, BOOLEAN a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // r12d
  _UNICODE_STRING *v7; // rsi
  unsigned int v8; // eax
  const void *v9; // rdx
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  USHORT *v12; // rdi
  unsigned __int16 v13; // r15
  unsigned __int16 v14; // r13
  __int16 v15; // ax
  int v16; // esi
  int v17; // eax
  int v18; // edx
  __int16 v19; // r15
  int v20; // eax
  __int16 v21; // cx
  ULONG v22; // edi
  wchar_t *v23; // rax
  wchar_t *v24; // rbx
  unsigned int v25; // ebx
  __int64 v27; // r13
  unsigned int v28; // r15d
  PVOID Heap_0; // rdi
  PVOID v30; // rax
  void *v31; // r14
  int v32; // eax
  int v33; // r15d
  PVOID v34; // rax
  void *v35; // rdi
  int v36; // r14d
  wint_t *v37; // rdi
  __int64 v38; // r14
  _UNICODE_STRING *v39; // rcx
  unsigned __int8 v40; // al
  unsigned int v41; // ebx
  USHORT Port[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+54h] [rbp-ACh] BYREF
  int v44; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ScopeId[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v46; // [rsp+68h] [rbp-98h] BYREF
  PUNICODE_STRING DestinationStringa; // [rsp+70h] [rbp-90h]
  __int128 v48; // [rsp+78h] [rbp-88h] BYREF
  wchar_t Buffer[22]; // [rsp+88h] [rbp-78h] BYREF
  WCHAR S[65]; // [rsp+C0h] [rbp-40h] BYREF
  char v51; // [rsp+142h] [rbp+42h] BYREF
  WCHAR SourceString[256]; // [rsp+150h] [rbp+50h] BYREF
  WCHAR AddressString[256]; // [rsp+350h] [rbp+250h] BYREF
  _BYTE v54[512]; // [rsp+550h] [rbp+450h] BYREF

  v3 = 0;
  DestinationStringa = DestinationString;
  v43 = 0;
  ScopeId[0] = 0;
  v4 = 256;
  Port[0] = 0;
  v46 = 256;
  v44 = 256;
  v7 = DestinationString;
  v48 = 0LL;
  if ( a2 )
  {
    v8 = *a2;
    v9 = (const void *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int16)v8 > 0x200u )
      v8 = 512;
    v10 = (unsigned __int16)v8;
    v11 = v8;
    memmove(AddressString, v9, v8);
    if ( (unsigned __int64)(v10 + 2) <= 0x200 )
      AddressString[v11 >> 1] = 0;
    if ( (_WORD)v10 == 512 )
      return 3221227286LL;
    v7 = DestinationStringa;
  }
  if ( RtlIpv6StringToAddressExW(AddressString, (struct in6_addr *)&v48, ScopeId, Port) >= 0 && !Port[0] )
  {
    if ( (_WORD)v48
      || __PAIR32__(WORD1(v48), 0) != WORD2(v48)
      || __PAIR32__(WORD3(v48), 0) != WORD4(v48)
      || WORD5(v48) != 0xFFFF )
    {
      v22 = ScopeId[0];
      goto LABEL_32;
    }
    v22 = ScopeId[0];
    if ( ScopeId[0] )
    {
LABEL_32:
      v23 = RtlIpv6AddressToStringW((const struct in6_addr *)&v48, S);
      v24 = v23;
      if ( v22 )
        v24 = &v23[swprintf_s(v23, (&v51 - (char *)v23) >> 1, L"%%%u", v22)];
      v25 = v24 - S + 1;
      if ( v25 <= 0x100 )
      {
        memmove(SourceString, S, 2LL * v25);
        if ( !RtlCreateUnicodeString(v7, SourceString) )
          return 3221225495LL;
        return 0LL;
      }
      return 3221225485LL;
    }
    v40 = BYTE12(v48);
    v43 = HIDWORD(v48);
LABEL_75:
    v41 = ((2LL * swprintf_s(Buffer, 0x10uLL, L"%u.%u.%u.%u", v40, BYTE1(v43), BYTE2(v43), HIBYTE(v43))) >> 1) + 1;
    if ( v41 <= 0x100 )
    {
      memmove(SourceString, Buffer, 2LL * v41);
      if ( !RtlCreateUnicodeString(DestinationStringa, SourceString) )
        return 3221225495LL;
      return 0LL;
    }
    return 3221225485LL;
  }
  *(_QWORD *)ScopeId = 0LL;
  if ( RtlIpv4StringToAddressW(AddressString, a3, (LPCWSTR *)ScopeId, (struct in_addr *)&v43) >= 0 )
  {
    if ( **(_WORD **)ScopeId == 58 )
    {
      v12 = (USHORT *)(*(_QWORD *)ScopeId + 2LL);
      v13 = 0;
      v14 = 10;
      if ( *(_WORD *)(*(_QWORD *)ScopeId + 2LL) == 48 )
      {
        v15 = *(_WORD *)(*(_QWORD *)ScopeId + 4LL);
        v12 = (USHORT *)(*(_QWORD *)ScopeId + 4LL);
        v14 = 8;
        if ( v15 == 120 || v15 == 88 )
        {
          v14 = 16;
          v12 = (USHORT *)(*(_QWORD *)ScopeId + 6LL);
        }
      }
      Port[0] = *v12;
      while ( 1 )
      {
        v16 = *v12++;
        if ( !(_WORD)v16 )
          break;
        if ( (unsigned __int16)v16 < 0x80u && iswctype(v16, 4u) && (unsigned __int16)(v16 - 48) < v14 )
        {
          if ( v16 + v13 * (unsigned int)v14 - 48 > 0xFFFF )
            goto LABEL_40;
          v13 = v16 + v13 * v14 - 48;
        }
        else
        {
          if ( v14 != 16 || (unsigned __int16)v16 >= 0x80u || !iswctype(v16, 0x80u) )
            goto LABEL_40;
          v17 = iswctype(v16, 2u);
          v18 = 65;
          if ( v17 )
            v18 = 97;
          if ( v16 + 16 * (unsigned int)v13 - v18 + 10 > 0xFFFF )
            goto LABEL_40;
          v19 = 16 * v13;
          v20 = iswctype(v16, 2u);
          v21 = 65;
          if ( v20 )
            v21 = 97;
          v13 = v16 - v21 + 10 + v19;
        }
      }
      if ( !Port[0] )
        goto LABEL_40;
    }
    else
    {
      if ( **(_WORD **)ScopeId )
        goto LABEL_40;
      v13 = 0;
    }
    if ( !__ROR2__(v13, 8) )
    {
      v40 = v43;
      goto LABEL_75;
    }
  }
LABEL_40:
  v27 = *((_QWORD *)a2 + 1);
  v28 = *a2 >> 1;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x3FEuLL);
  v30 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x406uLL);
  v31 = v30;
  if ( Heap_0 && v30 )
  {
    v32 = RtlpNameprepAsciiRealWorker(0LL, v27, v28, v54, &v44, 1, Heap_0);
    v4 = v44;
    v33 = v32;
  }
  else
  {
    v33 = -1073741801;
    if ( !Heap_0 )
      goto LABEL_45;
  }
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
LABEL_45:
  if ( v31 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v31);
  if ( v33 < 0 )
    return (unsigned int)v33;
  if ( v4 )
  {
    v37 = (wint_t *)v54;
    v38 = v4;
    do
    {
      *v37 = towlower(*v37);
      ++v37;
      --v38;
    }
    while ( v38 );
  }
  v34 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x3FEuLL);
  v35 = v34;
  if ( !v34 )
    return (unsigned int)-1073741801;
  v36 = RtlpIdnToUnicodeWorker(0LL, v54, v4, SourceString, &v46, v34);
  RtlpSysVolFree(v35);
  if ( v36 < 0 )
    return (unsigned int)v36;
  if ( v46 == 256 )
    return 3221227286LL;
  if ( 2 * (unsigned __int64)v46 >= 0x200 )
    _report_rangecheckfailure();
  v39 = DestinationStringa;
  SourceString[v46] = 0;
  if ( !RtlCreateUnicodeString(v39, SourceString) )
    return (unsigned int)-1073741801;
  return v3;
}
