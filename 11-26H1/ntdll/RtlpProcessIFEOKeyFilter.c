/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x1800D3784
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D34B8 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlCompareUnicodeStrings @ 0x180083D00 (RtlCompareUnicodeStrings.c)
 *     RtlPrefixUnicodeString @ 0x1800A72E0 (RtlPrefixUnicodeString.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     NtEnumerateKey @ 0x18015F580 (NtEnumerateKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, unsigned int a2, __int128 *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rsi
  _BYTE *v7; // r14
  size_t v8; // rax
  HANDLE v9; // rcx
  __int64 result; // rax
  __int128 v11; // xmm0
  size_t v12; // rax
  __int16 v13; // ax
  unsigned int v14; // r13d
  _BYTE *v15; // rax
  int v16; // edi
  size_t v17; // rax
  int v18; // ecx
  int v19; // eax
  __int64 Heap_0; // rax
  int v21; // eax
  HANDLE *v22; // rsi
  int v23; // [rsp+30h] [rbp-D0h]
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  const wchar_t *v26; // [rsp+40h] [rbp-C0h]
  int v27; // [rsp+48h] [rbp-B8h]
  __int128 v28; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-98h]
  HANDLE *v31; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v32; // [rsp+78h] [rbp-88h]
  __int128 v33; // [rsp+80h] [rbp-80h] BYREF
  __int128 v34; // [rsp+90h] [rbp-70h]
  __int128 v35; // [rsp+A0h] [rbp-60h]
  _BYTE v36[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v37; // [rsp+B4h] [rbp-4Ch]
  int v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+BCh] [rbp-44h]

  v3 = 0;
  v31 = a1;
  v30 = a2;
  v24 = 0;
  Handle = 0LL;
  *(_QWORD *)&v35 = 0LL;
  v26 = L"UseFilter";
  DWORD2(v35) = 0;
  v33 = 0LL;
  v6 = 0LL;
  v27 = 544;
  v34 = 0LL;
  v7 = v36;
  HIDWORD(v25) = 0;
  v8 = wcslen(L"UseFilter");
  if ( v8 > 0x7FFE )
    return 3221225734LL;
  v9 = *a1;
  LOWORD(v25) = 2 * v8;
  WORD1(v25) = 2 * v8 + 2;
  result = NtQueryValueKey(v9, &v25, 2LL, v36, 544, &v24);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 || (_DWORD)result == -1073741789 || (_DWORD)result == -2147483643 )
      return v3;
    return result;
  }
  if ( v37 != 4 || v38 != 4 || !v39 )
    return 0LL;
  v11 = *a3;
  v25 = 0LL;
  v26 = L"\\??\\";
  v28 = v11;
  v12 = wcslen(L"\\??\\");
  if ( v12 > 0x7FFE )
    return 3221225734LL;
  LOWORD(v25) = 2 * v12;
  WORD1(v25) = 2 * v12 + 2;
  if ( RtlPrefixUnicodeString((unsigned __int16 *)&v25, (__int64)&v28, 1) )
  {
    v13 = v28 - 8;
    v32 = (unsigned __int16 *)(*((_QWORD *)&v28 + 1) + 8LL);
  }
  else
  {
    v32 = (unsigned __int16 *)*((_QWORD *)&v28 + 1);
    v13 = v28;
  }
  LOWORD(v23) = v13;
  v14 = 0;
  v15 = v36;
  *(_QWORD *)&v28 = v36;
  while ( 1 )
  {
    v16 = NtEnumerateKey(*v31, v14, 0LL, v15, v27, &v24, v23);
    if ( v16 >= 0 )
    {
      LOWORD(v25) = *(_WORD *)(v28 + 12);
      WORD1(v25) = *(_WORD *)(v28 + 12);
      v26 = (const wchar_t *)(v28 + 16);
      LODWORD(v33) = 48;
      DWORD2(v34) = 576;
      v35 = 0LL;
      *((_QWORD *)&v33 + 1) = *v31;
      *(_QWORD *)&v34 = &v25;
      v16 = NtOpenKey(&Handle, v30, &v33);
      if ( v16 >= 0 )
        break;
    }
LABEL_35:
    ++v14;
    if ( v16 < 0 )
      goto LABEL_36;
LABEL_31:
    v15 = (_BYTE *)v28;
  }
  v25 = 0LL;
  v26 = L"FilterFullPath";
  v17 = wcslen(L"FilterFullPath");
  if ( v17 > 0x7FFE )
  {
    v16 = -1073741562;
    NtClose(Handle);
    goto LABEL_36;
  }
  v18 = v27;
  LOWORD(v25) = 2 * v17;
  WORD1(v25) = 2 * v17 + 2;
  while ( 1 )
  {
    v19 = NtQueryValueKey(Handle, &v25, 2LL, v7, v18, &v24);
    v16 = v19;
    if ( v19 != -2147483643 && v19 != -1073741789 )
    {
      Heap_0 = v28;
      v18 = v27;
      goto LABEL_24;
    }
    if ( v6 )
      RtlFreeHeap_0();
    if ( !NtCurrentPeb()->ProcessHeap )
      break;
    Heap_0 = RtlAllocateHeap_0();
    v6 = Heap_0;
    if ( !Heap_0 )
      goto LABEL_47;
    v18 = v24;
    v7 = (_BYTE *)Heap_0;
    v27 = v24;
    *(_QWORD *)&v28 = Heap_0;
LABEL_24:
    if ( v16 != -2147483643 )
    {
      *(_QWORD *)&v28 = Heap_0;
      v27 = v18;
      if ( v16 != -1073741789 )
        goto LABEL_26;
    }
  }
  v6 = 0LL;
LABEL_47:
  v16 = -1073741801;
LABEL_26:
  if ( v16 < 0 )
  {
    NtClose(Handle);
    v21 = 0;
    if ( v16 != -1073741772 )
      v21 = v16;
    v16 = v21;
    goto LABEL_35;
  }
  if ( *((_DWORD *)v7 + 1) != 1
    || *((_DWORD *)v7 + 2) > 0xFFFEu
    || (unsigned int)RtlCompareUnicodeStrings(
                       v32,
                       (unsigned __int64)(unsigned __int16)v23 >> 1,
                       v7 + 12,
                       (unsigned __int64)(unsigned __int16)(*((_WORD *)v7 + 4) - 2) >> 1,
                       1) )
  {
    NtClose(Handle);
    ++v14;
    goto LABEL_31;
  }
LABEL_36:
  if ( v6 )
    RtlFreeHeap_0();
  if ( v16 >= 0 )
  {
    v22 = v31;
    NtClose(*v31);
    *v22 = Handle;
  }
  if ( v16 != -2147483622 )
    return (unsigned int)v16;
  return v3;
}
