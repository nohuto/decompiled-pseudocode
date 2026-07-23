/*
 * XREFs of MiLogFailedDriverLoad @ 0x140B54190
 * Callers:
 *     MiResolveImageReferences @ 0x14097E950 (MiResolveImageReferences.c)
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 *     MiCreateSectionForDriver @ 0x140AEEB60 (MiCreateSectionForDriver.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 *     MiIsRetryIoStatus @ 0x140467310 (MiIsRetryIoStatus.c)
 *     IoWriteErrorLogEntry @ 0x1404DF340 (IoWriteErrorLogEntry.c)
 *     IoAllocateGenericErrorLogEntry @ 0x1405CD638 (IoAllocateGenericErrorLogEntry.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlAnsiStringToUnicodeString @ 0x14097C370 (RtlAnsiStringToUnicodeString.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

void __fastcall MiLogFailedDriverLoad(unsigned __int16 *a1, unsigned __int16 *a2, const CHAR *a3, NTSTATUS a4)
{
  int v4; // edi
  __int64 v5; // r14
  NTSTATUS v6; // ebx
  __int64 v7; // rsi
  NTSTATUS v8; // r15d
  __int128 v9; // xmm0
  __int64 v10; // rcx
  int v11; // ecx
  __int128 v12; // xmm0
  int v13; // eax
  unsigned int v14; // eax
  BOOL IsRetryIoStatus; // eax
  __int64 GenericErrorLogEntry; // rax
  _WORD *v17; // rdi
  const void **v18; // r14
  char *v19; // r15
  size_t v20; // rbx
  char *v21; // rax
  UNICODE_STRING v22; // [rsp+20h] [rbp-60h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  __int128 v24; // [rsp+40h] [rbp-40h] BYREF
  __int16 v25; // [rsp+50h] [rbp-30h]
  const wchar_t *v26; // [rsp+58h] [rbp-28h]
  __int128 v27; // [rsp+60h] [rbp-20h]
  UNICODE_STRING v28; // [rsp+70h] [rbp-10h]

  v4 = *a1 + 2;
  DestinationString = 0LL;
  v5 = -1LL;
  v6 = a4;
  v7 = 1LL;
  v8 = 0;
  v9 = *(_OWORD *)a1;
  v22 = 0LL;
  v24 = v9;
  if ( !a2 || a4 != -1073741772 && (unsigned int)(a4 + 1073741214) > 1 && a4 != -1073741702 )
    goto LABEL_10;
  v10 = -1LL;
  v26 = L"cannot find";
  do
    ++v10;
  while ( aCannotFind[v10] );
  v11 = 2 * v10;
  v12 = *(_OWORD *)a2;
  v13 = v11 + *a2;
  v25 = v11;
  v7 = 3LL;
  v4 += v13 + 4;
  v27 = v12;
  if ( a3 )
  {
    if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v8 = (int)a3;
      goto LABEL_13;
    }
    RtlInitAnsiString(&DestinationString, a3);
    v14 = RtlAnsiStringToUnicodeString(&v22, &DestinationString, 1u);
    v7 = 4LL;
    v4 += v22.Length + 2;
    v28 = v22;
    if ( v14 >> 31 == 1 )
    {
LABEL_10:
      v8 = v6;
      IsRetryIoStatus = MiIsRetryIoStatus(v6, 0x1000uLL);
      v26 = L"failed to load";
      v6 = IsRetryIoStatus ? -1073741670 : -1073741204;
      do
        ++v5;
      while ( aFailedToLoad[v5] );
      v4 += 2 * v5 + 2;
      v25 = 2 * v5;
      ++v7;
    }
  }
LABEL_13:
  if ( (unsigned int)(v4 + 48) < 0xFF )
  {
    GenericErrorLogEntry = IoAllocateGenericErrorLogEntry((unsigned __int8)v4 + 48);
    v17 = (_WORD *)GenericErrorLogEntry;
    if ( GenericErrorLogEntry )
    {
      *(_DWORD *)(GenericErrorLogEntry + 16) = v8;
      v18 = (const void **)&v24 + 1;
      v19 = (char *)(GenericErrorLogEntry + 48);
      *(_DWORD *)(GenericErrorLogEntry + 12) = 1073741850;
      *(_DWORD *)(GenericErrorLogEntry + 20) = v6;
      *(_WORD *)(GenericErrorLogEntry + 6) = 48;
      do
      {
        v20 = *((unsigned __int16 *)v18 - 4);
        memmove(v19, *v18, v20);
        v18 += 2;
        v21 = &v19[2 * (v20 >> 1)];
        *(_WORD *)v21 = 32;
        v19 = v21 + 2;
        --v7;
      }
      while ( v7 );
      *(_WORD *)v21 = 0;
      v17[2] = 1;
      IoWriteErrorLogEntry(v17);
    }
  }
  if ( v22.Buffer )
    ExFreePool(v22.Buffer);
}
