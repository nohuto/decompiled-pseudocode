/*
 * XREFs of RtlpMuiRegLoadLicInformation @ 0x14071FC10
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x1408A9168 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     wcspbrk @ 0x140538B34 (wcspbrk.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlCultureNameToLCID @ 0x140779FB0 (RtlCultureNameToLCID.c)
 *     RtlpGetWindowsPolicy @ 0x1408A776C (RtlpGetWindowsPolicy.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpMuiRegLoadLicInformation(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  wchar_t *v3; // r12
  wchar_t *v4; // r15
  int v5; // r13d
  WCHAR *Pool2; // rax
  const WCHAR *v7; // rsi
  int v8; // r14d
  wchar_t *v9; // rax
  const wchar_t *v10; // rbx
  char v11; // al
  int v12; // edx
  WCHAR *v13; // rax
  const WCHAR *v14; // rsi
  int v15; // r14d
  wchar_t *v16; // rax
  const wchar_t *v17; // rbx
  char v18; // al
  int v19; // edx
  wchar_t *v20; // rax
  const wchar_t *v21; // rsi
  int v22; // r14d
  wchar_t *v23; // rax
  wchar_t *v24; // rbx
  const wchar_t *v25; // rbx
  char v26; // al
  int v27; // edx
  __int64 result; // rax
  int v29; // [rsp+20h] [rbp-38h]
  int v30; // [rsp+24h] [rbp-34h]
  BOOL v31; // [rsp+28h] [rbp-30h]
  __int64 v32; // [rsp+2Ch] [rbp-2Ch]
  const wchar_t *v33; // [rsp+38h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  int v36; // [rsp+B0h] [rbp+58h] BYREF
  int v37; // [rsp+B8h] [rbp+60h]

  v1 = 0;
  LODWORD(v32) = -1;
  v36 = 0;
  v37 = 0;
  v2 = a1;
  v3 = 0LL;
  v4 = 0LL;
  v29 = 0;
  v5 = 0;
  v33 = 0LL;
  v30 = 0;
  v31 = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    v1 = -1073741811;
    goto LABEL_50;
  }
  v31 = (int)RtlpGetWindowsPolicy(L"WindowsExcludedProcs") >= 0;
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Number-Allowed") >= 0 )
  {
    v32 = MEMORY[0];
    ExFreePoolWithTag(0LL, 0);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Allowed") >= 0 )
  {
    v29 = 4;
    Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
    v1 = 0;
    v7 = Pool2;
    v3 = Pool2;
    if ( !Pool2 )
    {
      v29 = 0;
LABEL_46:
      v1 = -1073741801;
      goto LABEL_47;
    }
    memmove(Pool2, 0LL, 0LL);
    v8 = 0;
    v9 = wcspbrk(v3, L";");
    if ( v9 )
    {
      do
      {
        *v9 = 0;
        v10 = v9 + 1;
        RtlInitUnicodeString(&DestinationString, v7);
        v11 = RtlCultureNameToLCID(&DestinationString, &v36);
        v12 = v8 + 1;
        v7 = v10;
        if ( !v11 )
          v12 = v8;
        v8 = v12;
        v9 = wcspbrk(v10, L";");
      }
      while ( v9 );
      v2 = a1;
      v1 = 0;
    }
    if ( *v7 )
    {
      RtlInitUnicodeString(&DestinationString, v7);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v36) )
        ++v8;
    }
    if ( !v8 )
    {
      ExFreePoolWithTag(v3, 0);
      v29 = 0;
      v3 = 0LL;
    }
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Disallowed") < 0 )
    goto LABEL_29;
  v5 = 4;
  v13 = (WCHAR *)ExAllocatePool2(0x100uLL);
  v14 = v13;
  v4 = v13;
  if ( !v13 )
  {
    v5 = 0;
    goto LABEL_46;
  }
  memmove(v13, 0LL, 0LL);
  v15 = 0;
  v16 = wcspbrk(v4, L";");
  if ( v16 )
  {
    do
    {
      *v16 = 0;
      v17 = v16 + 1;
      RtlInitUnicodeString(&DestinationString, v14);
      v18 = RtlCultureNameToLCID(&DestinationString, &v36);
      v19 = v15 + 1;
      v14 = v17;
      if ( !v18 )
        v19 = v15;
      v15 = v19;
      v16 = wcspbrk(v17, L";");
    }
    while ( v16 );
    v2 = a1;
    v1 = 0;
  }
  if ( *v14 )
  {
    RtlInitUnicodeString(&DestinationString, v14);
    if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v36) )
      ++v15;
  }
  if ( !v15 )
  {
    ExFreePoolWithTag(v4, 0);
    v5 = 0;
    v4 = 0LL;
  }
LABEL_29:
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-SKU") >= 0 )
  {
    v30 = 4;
    v20 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v33 = v20;
    v21 = v20;
    if ( v20 )
    {
      memmove(v20, 0LL, 0LL);
      v22 = 0;
      v23 = wcspbrk(v21, L";");
      v24 = (wchar_t *)v21;
      v33 = v21;
      if ( v23 )
      {
        v33 = v21;
        do
        {
          *v23 = 0;
          v25 = v23 + 1;
          RtlInitUnicodeString(&DestinationString, v21);
          v26 = RtlCultureNameToLCID(&DestinationString, &v36);
          v27 = v22 + 1;
          v21 = v25;
          if ( !v26 )
            v27 = v22;
          v22 = v27;
          v23 = wcspbrk(v25, L";");
        }
        while ( v23 );
        v2 = a1;
        v24 = (wchar_t *)v33;
      }
      if ( *v21 )
      {
        RtlInitUnicodeString(&DestinationString, v21);
        if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v36) )
          ++v22;
      }
      if ( v22 )
      {
        v1 = 0;
      }
      else
      {
        ExFreePoolWithTag(v24, 0);
        v1 = 0;
        v30 = 0;
        v33 = 0LL;
      }
      goto LABEL_47;
    }
    v30 = 0;
    goto LABEL_46;
  }
LABEL_47:
  if ( v3 && v4 )
  {
    ExFreePoolWithTag(v4, 0);
    v4 = 0LL;
    v5 = 0;
  }
LABEL_50:
  *(_DWORD *)v2 |= 0x800u;
  *(_DWORD *)(v2 + 116) = v31;
  *(_DWORD *)(v2 + 120) = v32;
  *(_DWORD *)(v2 + 148) = v29;
  *(_QWORD *)(v2 + 136) = v33;
  *(_DWORD *)(v2 + 144) = v30;
  result = v1;
  *(_QWORD *)(v2 + 128) = v3;
  *(_QWORD *)(v2 + 152) = v4;
  *(_DWORD *)(v2 + 160) = v5;
  return result;
}
