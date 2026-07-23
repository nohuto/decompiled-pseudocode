/*
 * XREFs of RtlpMuiRegLoadLicInformation @ 0x1800DAF20
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180053B7C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1800DAB90 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     wcspbrk @ 0x18012DC80 (wcspbrk.c)
 *     RtlpGetWindowsPolicy @ 0x18014D064 (RtlpGetWindowsPolicy.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegLoadLicInformation(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  wchar_t *v3; // r12
  wchar_t *v4; // r15
  unsigned int v5; // r13d
  WCHAR *Heap_0; // rax
  const WCHAR *v7; // rsi
  int v8; // r14d
  wchar_t *v9; // rax
  const wchar_t *v10; // rbx
  BOOLEAN v11; // al
  int v12; // edx
  WCHAR *v13; // rax
  const WCHAR *v14; // rsi
  int v15; // r14d
  wchar_t *v16; // rax
  const wchar_t *v17; // rbx
  BOOLEAN v18; // al
  int v19; // edx
  wchar_t *v20; // rax
  const wchar_t *v21; // rsi
  int v22; // r14d
  wchar_t *v23; // rax
  wchar_t *v24; // rbx
  const wchar_t *v25; // rbx
  BOOLEAN v26; // al
  int v27; // edx
  __int64 result; // rax
  int v29; // [rsp+20h] [rbp-38h]
  int v30; // [rsp+24h] [rbp-34h]
  BOOL v31; // [rsp+28h] [rbp-30h]
  __int64 v32; // [rsp+2Ch] [rbp-2Ch]
  const wchar_t *v33; // [rsp+38h] [rbp-20h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  size_t Size; // [rsp+A8h] [rbp+50h] BYREF
  DWORD Lcid; // [rsp+B0h] [rbp+58h] BYREF
  ULONG Type; // [rsp+B8h] [rbp+60h] BYREF

  v1 = 0;
  LODWORD(v32) = -1;
  Lcid = 0;
  Type = 0;
  v2 = a1;
  LODWORD(Size) = 0;
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
    goto LABEL_55;
  }
  v31 = (int)RtlpGetWindowsPolicy(L"WindowsExcludedProcs", &Type, (PULONG)&Size) >= 0;
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Number-Allowed", &Type, (PULONG)&Size) >= 0 )
  {
    v32 = MEMORY[0];
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0LL);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Allowed", &Type, (PULONG)&Size) >= 0 )
  {
    v29 = Size + 4;
    if ( (_DWORD)Size == -4
      || (Heap_0 = (WCHAR *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(Size + 4)),
          v1 = 0,
          v7 = Heap_0,
          (v3 = Heap_0) == 0LL) )
    {
      v29 = 0;
LABEL_51:
      v1 = -1073741801;
      goto LABEL_52;
    }
    memmove(Heap_0, 0LL, (unsigned int)Size);
    v8 = 0;
    v9 = wcspbrk(v3, L";");
    if ( v9 )
    {
      do
      {
        *v9 = 0;
        v10 = v9 + 1;
        RtlInitUnicodeString(&DestinationString, v7);
        v11 = RtlCultureNameToLCID(&DestinationString, &Lcid);
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
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
        ++v8;
    }
    if ( !v8 )
    {
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v3);
      v29 = 0;
      v3 = 0LL;
    }
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Disallowed", &Type, (PULONG)&Size) < 0 )
    goto LABEL_31;
  v5 = Size + 4;
  if ( (_DWORD)Size == -4 )
  {
    v4 = 0LL;
    goto LABEL_47;
  }
  v13 = (WCHAR *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v5);
  v14 = v13;
  v4 = v13;
  if ( !v13 )
  {
LABEL_47:
    v5 = 0;
    goto LABEL_51;
  }
  memmove(v13, 0LL, (unsigned int)Size);
  v15 = 0;
  v16 = wcspbrk(v4, L";");
  if ( v16 )
  {
    do
    {
      *v16 = 0;
      v17 = v16 + 1;
      RtlInitUnicodeString(&DestinationString, v14);
      v18 = RtlCultureNameToLCID(&DestinationString, &Lcid);
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
    if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
      ++v15;
  }
  if ( !v15 )
  {
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v4);
    v5 = 0;
    v4 = 0LL;
  }
LABEL_31:
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-SKU", &Type, (PULONG)&Size) >= 0 )
  {
    v30 = Size + 4;
    if ( (_DWORD)Size == -4 )
    {
      v33 = 0LL;
    }
    else
    {
      v20 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(Size + 4));
      v33 = v20;
      v21 = v20;
      if ( v20 )
      {
        memmove(v20, 0LL, (unsigned int)Size);
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
            v26 = RtlCultureNameToLCID(&DestinationString, &Lcid);
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
          if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
            ++v22;
        }
        if ( v22 )
        {
          v1 = 0;
        }
        else
        {
          RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v24);
          v1 = 0;
          v30 = 0;
          v33 = 0LL;
        }
        goto LABEL_52;
      }
    }
    v30 = 0;
    goto LABEL_51;
  }
LABEL_52:
  if ( v3 && v4 )
  {
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v4);
    v4 = 0LL;
    v5 = 0;
  }
LABEL_55:
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
