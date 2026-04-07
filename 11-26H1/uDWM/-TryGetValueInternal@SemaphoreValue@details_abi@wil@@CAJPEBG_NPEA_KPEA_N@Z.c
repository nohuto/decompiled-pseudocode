/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180067454
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x180092DC0 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18000BDF0 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18004D354 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800676E8 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800778A0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180081B08 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  __int64 v4; // r9
  WCHAR *v5; // rdx
  signed __int64 v6; // rcx
  WCHAR v8; // ax
  WCHAR *v9; // rax
  __int64 v10; // rdx
  WCHAR *v11; // rax
  __int64 v12; // r8
  WCHAR *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  char *v16; // r8
  WCHAR v17; // r9
  WCHAR *v18; // rax
  wil::details *v19; // rax
  wil::details *v20; // rdi
  const char *v21; // r9
  int ValueFromSemaphore; // eax
  unsigned int v24; // ebx
  wil::details *v25; // rbx
  const char *v26; // r9
  void *v27; // rdx
  int LastError; // esi
  int v29; // eax
  void *v30; // rdx
  int v31; // [rsp+20h] [rbp-E0h] BYREF
  int v32; // [rsp+24h] [rbp-DCh] BYREF
  wil::details *v33; // [rsp+28h] [rbp-D8h] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  *a3 = 0LL;
  v4 = 260LL;
  v5 = Name;
  v6 = a1 - (char *)Name;
  do
  {
    if ( v4 == -2147483386 )
      break;
    v8 = *(WCHAR *)((char *)v5 + v6);
    if ( !v8 )
      break;
    *v5++ = v8;
    --v4;
  }
  while ( v4 );
  v9 = v5 - 1;
  if ( v4 )
    v9 = v5;
  v10 = 260LL;
  *v9 = 0;
  v11 = Name;
  do
  {
    if ( !*v11 )
      break;
    ++v11;
    --v10;
  }
  while ( v10 );
  v12 = (260 - v10) & -(__int64)(v10 != 0);
  if ( v10 )
  {
    v13 = &Name[v12];
    v14 = 260 - v12;
    if ( v12 != 260 )
    {
      v15 = 2147483646LL;
      v16 = (char *)((char *)L"_p0" - (char *)v13);
      do
      {
        if ( !v15 )
          break;
        v17 = *(_WORD *)&v16[(_QWORD)v13];
        if ( !v17 )
          break;
        *v13 = v17;
        --v15;
        ++v13;
        --v14;
      }
      while ( v14 );
    }
    v18 = v13 - 1;
    if ( v14 )
      v18 = v13;
    *v18 = 0;
  }
  v19 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v20 = v19;
  if ( !v19 )
  {
    if ( GetLastError() != 2 )
      return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xCD, (unsigned int)"wil", v21);
    return 0LL;
  }
  v32 = 0;
  v31 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v19, &v32);
  v24 = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD3,
      (unsigned int)"wil",
      (const char *)(unsigned int)ValueFromSemaphore,
      v31);
LABEL_31:
    wil::details::CloseHandle(v20, v27);
    return v24;
  }
  StringCchCatW(Name, 260LL, L"h");
  v33 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v25 = v33;
  if ( std::operator==<CWindowBorder::CCachedBorderBrush>(&v33) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD9, (unsigned int)"wil", v26);
LABEL_28:
    if ( v25 )
      wil::details::CloseHandle(v25, v27);
    v24 = LastError;
    goto LABEL_31;
  }
  v29 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v25, &v31);
  LastError = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xDB, (unsigned int)"wil", (const char *)(unsigned int)v29, v31);
    goto LABEL_28;
  }
  if ( v25 )
    wil::details::CloseHandle(v25, v30);
  *a3 = v32 | (unsigned __int64)((__int64)v31 << 31);
  wil::details::CloseHandle(v20, v30);
  return 0LL;
}
