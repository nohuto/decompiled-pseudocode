/*
 * XREFs of IopInitializeResourceMap @ 0x140CCA408
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlCmEncodeMemIoResource @ 0x14061D140 (RtlCmEncodeMemIoResource.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     IopWriteResourceList @ 0x140AFB6B4 (IopWriteResourceList.c)
 *     IopCreateRegistryKeyEx @ 0x140AFB79C (IopCreateRegistryKeyEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     MmInitializeMemoryLimits @ 0x140D01728 (MmInitializeMemoryLimits.c)
 */

void __fastcall IopInitializeResourceMap(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  unsigned int *v3; // r14
  int v4; // ebx
  _QWORD *v5; // r9
  __int64 v6; // r10
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rax
  int v9; // ecx
  ULONG_PTR v10; // r15
  _DWORD *Pool2; // rax
  _DWORD *v12; // r12
  unsigned int v13; // r13d
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v14; // rdi
  ULONGLONG v15; // rbx
  ULONGLONG v16; // r15
  unsigned __int64 v17; // rax
  unsigned int v18; // [rsp+38h] [rbp-59h]
  HANDLE Handle; // [rsp+40h] [rbp-51h] BYREF
  __int128 v20; // [rsp+48h] [rbp-49h] BYREF
  __int128 v21; // [rsp+58h] [rbp-39h]
  __int128 v22; // [rsp+68h] [rbp-29h]
  char v23; // [rsp+78h] [rbp-19h]
  UNICODE_STRING v24; // [rsp+80h] [rbp-11h] BYREF
  UNICODE_STRING v25; // [rsp+90h] [rbp-1h] BYREF
  _DWORD *v26; // [rsp+A0h] [rbp+Fh]
  ULONG_PTR v27; // [rsp+A8h] [rbp+17h]
  __int64 v28; // [rsp+B0h] [rbp+1Fh]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp+27h] BYREF

  v28 = a1;
  v1 = a1;
  Handle = 0LL;
  v25 = 0LL;
  DestinationString = 0LL;
  v24 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"System Resources");
  v2 = 0;
LABEL_2:
  v18 = v2;
  while ( 1 )
  {
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        RtlInitUnicodeString(&v25, L"Reserved");
        RtlInitUnicodeString(&v24, L".Translated");
        v21 = 0LL;
        BYTE6(v21) = 1;
        BYTE10(v21) = 1;
        v20 = 0LL;
        v23 = 0;
        v22 = 0LL;
        v3 = (unsigned int *)MmInitializeMemoryLimits(v1, &v20);
        if ( !v3 )
          goto LABEL_39;
      }
      else
      {
        RtlInitUnicodeString(&v25, L"Loader Reserved");
        RtlInitUnicodeString(&v24, L".Raw");
        v21 = 0LL;
        v20 = 0LL;
        BYTE3(v20) = 1;
        v22 = 0LL;
        HIWORD(v21) = 257;
        BYTE6(v20) = 1;
        LOBYTE(v22) = 1;
        WORD2(v22) = 257;
        WORD3(v21) = 257;
        BYTE10(v21) = 1;
        BYTE13(v21) = 1;
        v23 = 0;
        v3 = (unsigned int *)MmInitializeMemoryLimits(v1, &v20);
        if ( !v3 )
          return;
      }
    }
    else
    {
      RtlInitUnicodeString(&v25, L"Physical Memory");
      RtlInitUnicodeString(&v24, L".Translated");
      v3 = (unsigned int *)MmPhysicalMemoryBlock;
    }
    if ( !*v3 )
    {
      if ( v2 )
        goto LABEL_38;
      v2 = 1;
      goto LABEL_2;
    }
    v4 = 0;
    v5 = v3 + 6;
    v6 = *v3;
    do
    {
      v7 = *v5 << 12;
      if ( v7 == (unsigned __int64)(unsigned int)(16 * *(_DWORD *)v5) << 8
        || v7 == (unsigned __int64)(unsigned int)(v7 >> 16) << 16
        || v7 == (v7 & 0xFFFFFFFF00000000uLL)
        || v7 <= 0xFFFFF000 )
      {
        ++v4;
      }
      else
      {
        v8 = (v7 - 4294963201u) / 0xFFFFF000 + 1;
        v9 = v8 + v4;
        v4 += v8 + 1;
        if ( v7 == 4294963200u * v8 )
          v4 = v9;
      }
      v5 += 2;
      --v6;
    }
    while ( v6 );
    v10 = (unsigned int)(20 * (v4 + 1));
    v27 = v10;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v10, 0x20207050u);
    v26 = Pool2;
    v12 = Pool2;
    if ( !Pool2 )
      break;
    v13 = 0;
    *Pool2 = 1;
    Pool2[4] = v4;
    v14 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(Pool2 + 5);
    if ( !*v3 )
      goto LABEL_35;
    do
    {
      v15 = *(_QWORD *)&v3[4 * v13 + 4] << 12;
      v16 = *(_QWORD *)&v3[4 * v13 + 6] << 12;
      if ( RtlCmEncodeMemIoResource(v14, 3u, v16, v15) >= 0 )
      {
        v14->ShareDisposition = 1;
LABEL_32:
        ++v14;
        goto LABEL_33;
      }
      if ( v16 > 0xFFFFF000 )
      {
        v17 = (v16 - 4294963201u) / 0xFFFFF000 + 1;
        v16 += 0xFFFFFFFF00001000uLL * v17;
        do
        {
          v14->u.Generic.Start.QuadPart = v15;
          v15 += 4294963200LL;
          *(_WORD *)&v14->Type = 259;
          v14->u.Generic.Length = -4096;
          ++v14;
          --v17;
        }
        while ( v17 );
      }
      if ( v16 )
      {
        *(_WORD *)&v14->Type = 259;
        v14->u.Generic.Start.QuadPart = v15;
        v14->u.Generic.Length = v16;
        goto LABEL_32;
      }
LABEL_33:
      ++v13;
    }
    while ( v13 < *v3 );
    v2 = v18;
    v12 = v26;
    LODWORD(v10) = v27;
LABEL_35:
    if ( (int)IopCreateRegistryKeyEx(
                &Handle,
                0LL,
                (UNICODE_STRING *)&KiSystemServiceTraceCallbackLock.Header.WaitListHead,
                0x2001Fu,
                1u,
                0LL) >= 0 )
    {
      IopWriteResourceList((__int64)Handle, (__int64)&DestinationString, (__int64)&v25, &v24, v12, v10);
      ZwClose(Handle);
    }
    ExFreePoolWithTag(v12, 0);
    if ( v2 )
LABEL_38:
      ExFreePoolWithTag(v3, 0);
LABEL_39:
    v18 = ++v2;
    if ( v2 >= 3 )
      return;
    v1 = v28;
  }
  if ( v2 )
    ExFreePoolWithTag(v3, 0);
}
