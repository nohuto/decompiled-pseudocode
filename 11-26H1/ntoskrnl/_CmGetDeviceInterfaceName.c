/*
 * XREFs of _CmGetDeviceInterfaceName @ 0x140963098
 * Callers:
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 *     IoGetDeviceInterfaceAlias @ 0x140A18390 (IoGetDeviceInterfaceAlias.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140454380 (RtlStringCchCopyExW.c)
 *     PnpIsValidGuidString @ 0x140963020 (PnpIsValidGuidString.c)
 */

int __fastcall CmGetDeviceInterfaceName(
        __int64 a1,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _DWORD *a8)
{
  int v10; // r9d
  int v11; // ecx
  __int64 v12; // rdx
  const wchar_t *i; // rax
  const wchar_t *j; // r8
  wchar_t v15; // dx
  int result; // eax
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  const wchar_t *k; // rdx
  wchar_t v22; // cx
  NTSTRSAFE_PWSTR v23; // r13
  const wchar_t *v24; // r8
  wchar_t *v25; // r11
  size_t v26; // r10
  NTSTRSAFE_PWSTR v27; // r8
  size_t v28; // r9
  int v29; // ebx
  __int64 v30; // rdx
  size_t v31; // rcx
  size_t v32; // rsi
  wchar_t v33; // ax
  __int64 v34; // rcx
  NTSTRSAFE_PWSTR v35; // rax
  int v36; // edx
  __int16 *m; // rdx
  __int16 v38; // cx
  size_t v39; // r10
  NTSTRSAFE_PWSTR v40; // rdx
  size_t v41; // r8
  size_t v42; // r15
  __int64 v43; // rbx
  size_t v44; // r9
  wchar_t v45; // ax
  __int64 v46; // rcx
  NTSTRSAFE_PWSTR v47; // rax
  NTSTRSAFE_PWSTR ppszDestEnd[2]; // [rsp+30h] [rbp-10h] BYREF
  size_t pcchRemaining; // [rsp+80h] [rbp+40h] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+88h] [rbp+48h]

  pszSrc = a2;
  ppszDestEnd[0] = 0LL;
  pcchRemaining = 0LL;
  if ( !PnpIsValidGuidString(a2) )
    return -1073741811;
  v10 = 1;
  v11 = 0;
  if ( !a3 )
    return -1073741811;
  v12 = 200LL;
  for ( i = a3; *i; ++i )
  {
    if ( !--v12 )
      return -1073741811;
  }
  for ( j = a3; ; ++j )
  {
    v15 = *j;
    if ( !*j )
      break;
    if ( (unsigned __int16)(v15 - 33) > 0x5Eu || v15 == 44 )
      return -1073741811;
    if ( v15 == 92 )
    {
      if ( !v11 )
        return -1073741811;
      v11 = 0;
      ++v10;
    }
    else
    {
      ++v11;
    }
  }
  if ( !v11 || v10 != 3 )
    return -1073741811;
  v17 = -1LL;
  if ( a4 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a4[v18] );
    if ( !v18 || v18 >= 0x104 )
      return -1073741811;
    for ( k = a4; ; ++k )
    {
      v22 = *k;
      if ( !*k )
        break;
      if ( v22 == 92 || v22 == 47 )
        return -1073741773;
    }
  }
  else
  {
    v18 = 0LL;
  }
  do
    ++v17;
  while ( a3[v17] );
  v19 = v17 + 44;
  v20 = v18 + 2;
  if ( !v18 )
    v20 = v19;
  if ( v20 > 0xFFFFFFFF )
    return -1073741675;
  if ( a8 )
    *a8 = v20;
  if ( (unsigned int)v20 > (unsigned int)cchDest )
    return -1073741789;
  v23 = pszDest;
  v24 = L"\\??\\";
  if ( !a5 )
    v24 = L"\\\\?\\";
  result = RtlStringCchCopyExW(pszDest, (unsigned int)cchDest, v24, ppszDestEnd, &pcchRemaining, 0x900u);
  if ( result >= 0 )
  {
    result = RtlStringCchCopyExW(ppszDestEnd[0], pcchRemaining, a3, ppszDestEnd, &pcchRemaining, 0x900u);
    if ( result >= 0 )
    {
      v25 = ppszDestEnd[0];
      v26 = pcchRemaining;
      if ( !ppszDestEnd[0] && pcchRemaining || pcchRemaining > 0x7FFFFFFF )
      {
        v29 = -1073741811;
        v36 = -1073741811;
        result = -1073741811;
        if ( pcchRemaining )
          goto LABEL_83;
        goto LABEL_54;
      }
      v27 = ppszDestEnd[0];
      v28 = pcchRemaining;
      v29 = -1073741811;
      if ( pcchRemaining )
      {
        v30 = 0LL;
        v31 = 2147483646 - pcchRemaining;
        v32 = pcchRemaining;
        do
        {
          if ( !(v31 + v32) )
            break;
          v33 = *(NTSTRSAFE_PWSTR)((char *)v27 + (char *)L"#" - (char *)v25);
          if ( !v33 )
            break;
          *v27 = v33;
          ++v30;
          ++v27;
          --v32;
        }
        while ( v32 );
        v34 = v30 - 1;
        v35 = v27 - 1;
        if ( v32 )
        {
          v35 = v27;
          v34 = v30;
        }
        *v35 = 0;
        v27 = &v25[v34];
        v28 = v26 - v34;
        v36 = v32 == 0 ? 0x80000005 : 0;
        if ( v32 )
        {
LABEL_53:
          v25 = v27;
          ppszDestEnd[0] = v27;
          v26 = v28;
          pcchRemaining = v28;
LABEL_54:
          result = v36;
          if ( v36 < 0 )
            return result;
          result = RtlStringCchCopyExW(v25, v26, pszSrc, ppszDestEnd, &pcchRemaining, 0x900u);
          if ( result < 0 )
            return result;
          for ( m = (__int16 *)(v23 + 4); ; ++m )
          {
            v38 = *m;
            if ( !*m )
              break;
            if ( v38 == 92 || v38 == 47 )
              *m = 35;
          }
          if ( !v18 )
            return result;
          v25 = ppszDestEnd[0];
          v39 = pcchRemaining;
          if ( (ppszDestEnd[0] || !pcchRemaining) && pcchRemaining <= 0x7FFFFFFF )
          {
            v40 = ppszDestEnd[0];
            v41 = pcchRemaining;
            if ( pcchRemaining )
            {
              v42 = 2147483646 - pcchRemaining;
              v43 = 0LL;
              v44 = pcchRemaining;
              do
              {
                if ( !(v42 + v44) )
                  break;
                v45 = *(NTSTRSAFE_PWSTR)((char *)v40 + (char *)L"\\" - (char *)v25);
                if ( !v45 )
                  break;
                *v40 = v45;
                ++v43;
                ++v40;
                --v44;
              }
              while ( v44 );
              v46 = v43 - 1;
              v47 = v40 - 1;
              if ( v44 )
              {
                v47 = v40;
                v46 = v43;
              }
              *v47 = 0;
              v40 = &v25[v46];
              v41 = v39 - v46;
              v29 = v44 == 0 ? 0x80000005 : 0;
              if ( v44 )
              {
LABEL_73:
                v25 = v40;
                v39 = v41;
                goto LABEL_74;
              }
            }
            else
            {
              v29 = ppszDestEnd[0] != 0LL ? -2147483643 : -1073741811;
            }
            if ( v39 && (2 * v39) >> 1 )
            {
              v40 = v25;
              *v25 = 0;
              v41 = (2 * v39) >> 1;
            }
            if ( v29 != -2147483643 )
              goto LABEL_74;
            goto LABEL_73;
          }
          result = -1073741811;
          if ( !pcchRemaining )
          {
LABEL_74:
            result = v29;
            if ( v29 >= 0 )
              return RtlStringCchCopyExW(v25, v39, a4, ppszDestEnd, &pcchRemaining, 0x900u);
            return result;
          }
LABEL_83:
          *v25 = 0;
          return result;
        }
      }
      else
      {
        v36 = ppszDestEnd[0] != 0LL ? -2147483643 : -1073741811;
      }
      if ( v26 && (2 * v26) >> 1 )
      {
        v27 = v25;
        *v25 = 0;
        v28 = (2 * v26) >> 1;
      }
      if ( v36 != -2147483643 )
        goto LABEL_54;
      goto LABEL_53;
    }
  }
  return result;
}
