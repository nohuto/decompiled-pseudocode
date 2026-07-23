/*
 * XREFs of PfpQueryFileExtentsRequest @ 0x1407C88FC
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140A5C19C (PfQuerySuperfetchInformation.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1407281E0 (ZwQueryInformationFile.c)
 *     ZwFsControlFile @ 0x1407286E0 (ZwFsControlFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1407288E0 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     PfpPrefetchSharedCleanup @ 0x140987F6C (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedDeref @ 0x14098804C (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedInitialize @ 0x140988084 (PfpPrefetchSharedInitialize.c)
 *     PfpPrefetchSharedStart @ 0x1409880CC (PfpPrefetchSharedStart.c)
 *     PfpOpenHandleClose @ 0x14098B268 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x14098BDF0 (PfpOpenHandleCreate.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpQueryFileExtentsRequest(__int64 a1, char a2, _DWORD *a3)
{
  void *Pool2; // r14
  _DWORD *v6; // r12
  __int64 v7; // rsi
  NTSTATUS inited; // ebx
  __int64 v9; // rax
  __m128i v10; // xmm7
  __m128i v11; // xmm6
  unsigned int v12; // ebx
  volatile void *v13; // xmm0_8
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  ULONG OutputBufferLength; // r15d
  NTSTATUS v17; // eax
  ULONG Information; // r13d
  _DWORD *OutputBuffer; // rax
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  __int64 v22; // rax
  int v25; // [rsp+54h] [rbp-144h]
  ULONG v26; // [rsp+70h] [rbp-128h]
  __int64 FileInformation; // [rsp+78h] [rbp-120h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-118h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-108h] BYREF
  __int64 InputBuffer; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-F0h]
  _DWORD *v32; // [rsp+B0h] [rbp-E8h]
  HANDLE v33; // [rsp+B8h] [rbp-E0h] BYREF
  __int128 v34; // [rsp+C0h] [rbp-D8h]
  __int64 v35; // [rsp+D0h] [rbp-C8h]
  HANDLE FileHandle; // [rsp+D8h] [rbp-C0h] BYREF
  __int128 v37; // [rsp+E0h] [rbp-B8h]
  __int64 v38; // [rsp+F0h] [rbp-A8h]
  __m128i v39; // [rsp+108h] [rbp-90h]
  volatile void *Address[2]; // [rsp+118h] [rbp-80h]
  ULONG v41[2]; // [rsp+128h] [rbp-70h]
  __int128 FsInformation; // [rsp+130h] [rbp-68h] BYREF
  __int64 v43; // [rsp+140h] [rbp-58h]

  v32 = a3;
  v31 = a1;
  IoStatusBlock = 0LL;
  InputBuffer = 0LL;
  FileInformation = 0LL;
  FsInformation = 0LL;
  v43 = 0LL;
  DestinationString = 0LL;
  Pool2 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  FileHandle = 0LL;
  v37 = 0LL;
  v38 = 0x200000000LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0x200000000LL;
  v25 = 1;
  if ( *(_DWORD *)(a1 + 24) < 0x38u )
  {
LABEL_2:
    inited = -1073741306;
    goto LABEL_54;
  }
  if ( a2 )
    ProbeForWrite(*(volatile void **)(a1 + 16), 0x38uLL, 8u);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(__m128i *)v9;
  v11 = *(__m128i *)(v9 + 16);
  v39 = v11;
  *(_OWORD *)Address = *(_OWORD *)(v9 + 32);
  *(_QWORD *)v41 = *(_QWORD *)(v9 + 48);
  if ( _mm_cvtsi128_si32(v10) != 2 )
  {
    inited = -1073741735;
    goto LABEL_54;
  }
  v12 = _mm_cvtsi128_si32(v11);
  if ( (v12 & 1) != 0 || v12 - 1 > 0xFFFFF || (v11.m128i_i8[4] & 1) != 0 || !v11.m128i_i32[1] || v11.m128i_i32[1] >= v12 )
    goto LABEL_53;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
  {
LABEL_13:
    inited = -1073741670;
    goto LABEL_54;
  }
  v13 = (volatile void *)_mm_srli_si128(v10, 8).m128i_u64[0];
  if ( a2 )
    ProbeForRead(v13, v12, 2u);
  memmove(Pool2, (const void *)v13, v12);
  if ( *((_WORD *)Pool2 + (v12 >> 1) - 1)
    || (v14 = (unsigned __int64)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 4)) >> 1,
        *((_WORD *)Pool2 + v14) != 92) )
  {
LABEL_53:
    inited = -1073741811;
    goto LABEL_54;
  }
  v15 = ExAllocatePool2(0x40uLL);
  v7 = v15;
  if ( !v15 )
    goto LABEL_13;
  PfpPrefetchSharedInitialize(v15);
  *(_DWORD *)(v7 + 56) = 15;
  *(_DWORD *)(v7 + 60) = 150;
  inited = PfpPrefetchSharedStart((struct _KTHREAD *)v7);
  if ( inited >= 0 )
  {
    *((_WORD *)Pool2 + v14) = 0;
    inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)Pool2);
    if ( inited >= 0 )
    {
      OutputBufferLength = 32;
      inited = PfpOpenHandleCreate(
                 (unsigned int)&FileHandle,
                 v7,
                 (unsigned int)&DestinationString,
                 0,
                 1048960,
                 32,
                 0,
                 0LL);
      if ( inited >= 0 )
      {
        *((_WORD *)Pool2 + v14) = 92;
        inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)Pool2);
        if ( inited >= 0 )
        {
          inited = PfpOpenHandleCreate(
                     (unsigned int)&v33,
                     v7,
                     (unsigned int)&DestinationString,
                     0,
                     1048704,
                     32,
                     128,
                     (__int64)&FileHandle);
          if ( inited >= 0 )
          {
            v17 = ZwQueryVolumeInformationFile(
                    FileHandle,
                    &IoStatusBlock,
                    &FsInformation,
                    0x18u,
                    FileFsVolumeInformation);
            inited = v17;
            if ( v17 == 259 )
              KeBugCheckEx(0x191u, 0x1104uLL, 0LL, 0LL, 0LL);
            if ( (v17 & 0xC0000000) != 0xC0000000 )
            {
              LODWORD(Address[0]) = DWORD2(FsInformation);
              Information = v41[0];
              v26 = v41[0];
              if ( v41[0] > 0x20 )
                OutputBufferLength = v41[0];
              while ( 1 )
              {
                if ( OutputBufferLength > 0xA00000 )
                  goto LABEL_2;
                if ( v6 )
                  ExFreePoolWithTag(v6, 0);
                OutputBuffer = (_DWORD *)ExAllocatePool2(0x100uLL);
                v6 = OutputBuffer;
                if ( !OutputBuffer )
                  goto LABEL_13;
                v20 = ZwFsControlFile(
                        v33,
                        0LL,
                        0LL,
                        0LL,
                        &IoStatusBlock,
                        0x90073u,
                        &InputBuffer,
                        8u,
                        OutputBuffer,
                        OutputBufferLength);
                inited = v20;
                if ( v20 == 259 )
                  KeBugCheckEx(0x191u, 0x1142uLL, 0LL, 0LL, 0LL);
                if ( v20 >= 0 )
                  break;
                if ( v20 == -1073741807 )
                  goto LABEL_39;
                if ( v20 != -2147483643 )
                  goto LABEL_54;
                OutputBufferLength *= 2;
              }
              Information = IoStatusBlock.Information;
              v41[0] = IoStatusBlock.Information;
              if ( *v6 )
              {
                inited = 0;
LABEL_43:
                v22 = *(_QWORD *)(v31 + 16);
                *(__m128i *)v22 = v10;
                *(__m128i *)(v22 + 16) = v11;
                *(_OWORD *)(v22 + 32) = *(_OWORD *)Address;
                *(_QWORD *)(v22 + 48) = *(_QWORD *)v41;
                if ( inited == -1073741807 )
                {
                  v25 = 0;
                }
                else if ( v26 >= Information )
                {
                  if ( a2 )
                    ProbeForWrite(Address[1], Information, 8u);
                  memmove((void *)Address[1], v6, Information);
                }
                else
                {
                  v25 = 0;
                  inited = -1073741789;
                }
                *v32 = 56;
                goto LABEL_54;
              }
LABEL_39:
              v21 = ZwQueryInformationFile(v33, &IoStatusBlock, &FileInformation, 8u, FileInternalInformation);
              inited = v21;
              if ( v21 == 259 )
                KeBugCheckEx(0x191u, 0x117DuLL, 0LL, 0LL, 0LL);
              if ( v21 >= 0 )
              {
                v39.m128i_i64[1] = FileInformation;
                inited = -1073741807;
                v11 = v39;
                goto LABEL_43;
              }
            }
          }
        }
      }
    }
  }
LABEL_54:
  if ( v25 && (inited == -1073741807 || inited == -1073741789) )
    inited = -1073741823;
  if ( (v35 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&v33, v7);
  if ( (v38 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&FileHandle, v7);
  if ( v7 )
  {
    PfpPrefetchSharedCleanup(v7);
    PfpPrefetchSharedDeref(v7);
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)inited;
}
