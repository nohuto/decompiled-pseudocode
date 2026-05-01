/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180005BC0
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x180005880 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 *     ?GetShared@?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFeatureStateData@23@XZ @ 0x1800058F0 (-GetShared@-$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFe.c)
 * Callees:
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180005EC0 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800060EC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001315C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180013180 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18001C080 (__security_check_cookie.c)
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
  __int64 v10; // rcx
  WCHAR *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  wil::details *v14; // rax
  wil::details *v15; // rdi
  unsigned int v16; // r8d
  const char *v17; // r9
  WCHAR *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  char *v22; // r9
  WCHAR v23; // r8
  WCHAR *v24; // rax
  int ValueFromSemaphore; // eax
  unsigned int v26; // r8d
  unsigned int v27; // ebx
  __int64 v28; // rcx
  WCHAR *v29; // rax
  wil::details *v30; // rax
  unsigned int v31; // r8d
  const char *v32; // r9
  wil::details *v33; // rbx
  unsigned int LastError; // ebx
  void *v35; // rdx
  WCHAR *v36; // rdx
  __int64 v37; // rbp
  char *v38; // rcx
  WCHAR v39; // ax
  WCHAR *v40; // rax
  int v41; // eax
  void *v42; // rdx
  unsigned int v43; // r8d
  unsigned int v44; // esi
  void *v45; // rdx
  void *v46; // rdx
  void *v47; // rdx
  void *v48; // rdx
  int v49; // [rsp+20h] [rbp-248h] BYREF
  int v50[3]; // [rsp+24h] [rbp-244h] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

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
  v10 = 260LL;
  if ( v4 )
    v9 = v5;
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
  v12 = 2147483646LL;
  v13 = 260 - v10;
  if ( v10 )
  {
    v19 = &Name[v13];
    v20 = 260 - v13;
    if ( v13 != 260 )
    {
      v21 = 2147483646LL;
      v22 = (char *)((char *)L"_p0" - (char *)v19);
      do
      {
        if ( !v21 )
          break;
        v23 = *(WCHAR *)((char *)v19 + (_QWORD)v22);
        if ( !v23 )
          break;
        *v19 = v23;
        --v21;
        ++v19;
        --v20;
      }
      while ( v20 );
    }
    v24 = v19 - 1;
    if ( v20 )
      v24 = v19;
    *v24 = 0;
  }
  v14 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v15 = v14;
  if ( v14 )
  {
    v50[0] = 0;
    v49 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v14, v50);
    v27 = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD3, v26, (const char *)(unsigned int)ValueFromSemaphore, v49);
      wil::details::CloseHandle(v15, v48);
      return v27;
    }
    else
    {
      v28 = 260LL;
      v29 = Name;
      do
      {
        if ( !*v29 )
          break;
        ++v29;
        --v28;
      }
      while ( v28 );
      if ( v28 )
      {
        v36 = &Name[260 - v28];
        v37 = v28;
        v38 = (char *)((char *)L"h" - (char *)v36);
        do
        {
          if ( !v12 )
            break;
          v39 = *(WCHAR *)((char *)v36 + (_QWORD)v38);
          if ( !v39 )
            break;
          *v36 = v39;
          --v12;
          ++v36;
          --v37;
        }
        while ( v37 );
        v40 = v36 - 1;
        if ( v37 )
          v40 = v36;
        *v40 = 0;
      }
      v30 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
      v33 = v30;
      if ( v30 )
      {
        v41 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v30, &v49);
        v44 = v41;
        if ( v41 < 0 )
        {
          wil::details::in1diag3::Return_Hr(retaddr, (void *)0xDB, v43, (const char *)(unsigned int)v41, v49);
          wil::details::CloseHandle(v33, v46);
          wil::details::CloseHandle(v15, v47);
          return v44;
        }
        else
        {
          wil::details::CloseHandle(v33, v42);
          *a3 = v50[0] | (unsigned __int64)((__int64)v49 << 31);
          wil::details::CloseHandle(v15, v45);
          return 0LL;
        }
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD9, v31, v32);
        wil::details::CloseHandle(v15, v35);
        return LastError;
      }
    }
  }
  else if ( GetLastError() == 2 )
  {
    return 0LL;
  }
  else
  {
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xCD, v16, v17);
  }
}
