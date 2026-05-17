/*
 * XREFs of RtlpMuiRegLoadLicInformation @ 0x1800DDFB0
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000844C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1800DDC20 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     wcspbrk @ 0x18012DF10 (wcspbrk.c)
 *     RtlpGetWindowsPolicy @ 0x18014D1B4 (RtlpGetWindowsPolicy.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegLoadLicInformation(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  const wchar_t *v3; // r12
  const wchar_t *v4; // r15
  int v5; // r13d
  WCHAR *Heap_0; // rax
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
  const wchar_t *v24; // rbx
  char v25; // al
  int v26; // edx
  __int64 result; // rax
  int v28; // [rsp+20h] [rbp-38h]
  int v29; // [rsp+24h] [rbp-34h]
  BOOL v30; // [rsp+28h] [rbp-30h]
  int v31; // [rsp+2Ch] [rbp-2Ch]
  const wchar_t *v32; // [rsp+38h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  int v35; // [rsp+B0h] [rbp+58h] BYREF
  int v36; // [rsp+B8h] [rbp+60h]

  v1 = 0;
  v31 = -1;
  v35 = 0;
  v36 = 0;
  v2 = a1;
  v3 = 0LL;
  v4 = 0LL;
  v28 = 0;
  v5 = 0;
  v32 = 0LL;
  v29 = 0;
  v30 = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    v1 = -1073741811;
    goto LABEL_50;
  }
  v30 = (int)RtlpGetWindowsPolicy(L"WindowsExcludedProcs") >= 0;
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Number-Allowed") >= 0 )
  {
    v31 = MEMORY[0];
    RtlFreeHeap_0();
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Allowed") >= 0 )
  {
    v28 = 4;
    Heap_0 = (WCHAR *)RtlAllocateHeap_0();
    v1 = 0;
    v7 = Heap_0;
    v3 = Heap_0;
    if ( !Heap_0 )
    {
      v28 = 0;
LABEL_46:
      v1 = -1073741801;
      goto LABEL_47;
    }
    memmove(Heap_0, 0LL, 0LL);
    v8 = 0;
    v9 = wcspbrk(v3, L";");
    if ( v9 )
    {
      do
      {
        *v9 = 0;
        v10 = v9 + 1;
        RtlInitUnicodeString(&DestinationString, v7);
        v11 = RtlCultureNameToLCID(&DestinationString.Length, &v35);
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
      if ( RtlCultureNameToLCID(&DestinationString.Length, &v35) )
        ++v8;
    }
    if ( !v8 )
    {
      RtlFreeHeap_0();
      v28 = 0;
      v3 = 0LL;
    }
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Disallowed") < 0 )
    goto LABEL_29;
  v5 = 4;
  v13 = (WCHAR *)RtlAllocateHeap_0();
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
      v18 = RtlCultureNameToLCID(&DestinationString.Length, &v35);
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
    if ( RtlCultureNameToLCID(&DestinationString.Length, &v35) )
      ++v15;
  }
  if ( !v15 )
  {
    RtlFreeHeap_0();
    v5 = 0;
    v4 = 0LL;
  }
LABEL_29:
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-SKU") >= 0 )
  {
    v29 = 4;
    v20 = (wchar_t *)RtlAllocateHeap_0();
    v32 = v20;
    v21 = v20;
    if ( v20 )
    {
      memmove(v20, 0LL, 0LL);
      v22 = 0;
      v23 = wcspbrk(v21, L";");
      v32 = v21;
      if ( v23 )
      {
        v32 = v21;
        do
        {
          *v23 = 0;
          v24 = v23 + 1;
          RtlInitUnicodeString(&DestinationString, v21);
          v25 = RtlCultureNameToLCID(&DestinationString.Length, &v35);
          v26 = v22 + 1;
          v21 = v24;
          if ( !v25 )
            v26 = v22;
          v22 = v26;
          v23 = wcspbrk(v24, L";");
        }
        while ( v23 );
        v2 = a1;
      }
      if ( *v21 )
      {
        RtlInitUnicodeString(&DestinationString, v21);
        if ( RtlCultureNameToLCID(&DestinationString.Length, &v35) )
          ++v22;
      }
      if ( v22 )
      {
        v1 = 0;
      }
      else
      {
        RtlFreeHeap_0();
        v1 = 0;
        v29 = 0;
        v32 = 0LL;
      }
      goto LABEL_47;
    }
    v29 = 0;
    goto LABEL_46;
  }
LABEL_47:
  if ( v3 && v4 )
  {
    RtlFreeHeap_0();
    v4 = 0LL;
    v5 = 0;
  }
LABEL_50:
  *(_DWORD *)v2 |= 0x800u;
  *(_DWORD *)(v2 + 116) = v30;
  *(_DWORD *)(v2 + 120) = v31;
  *(_DWORD *)(v2 + 148) = v28;
  *(_QWORD *)(v2 + 136) = v32;
  *(_DWORD *)(v2 + 144) = v29;
  result = v1;
  *(_QWORD *)(v2 + 128) = v3;
  *(_QWORD *)(v2 + 152) = v4;
  *(_DWORD *)(v2 + 160) = v5;
  return result;
}
