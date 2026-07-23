/*
 * XREFs of SmDecompressBuffer @ 0x140463934
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x140987060 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     RtlDecompressBufferEx @ 0x140463B30 (RtlDecompressBufferEx.c)
 *     crc32 @ 0x14047DD24 (crc32.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall SmDecompressBuffer(__int64 a1, unsigned int a2, UCHAR **a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // ebx
  __int64 v9; // rdx
  int v11; // ecx
  ULONG CompressedBufferSize; // r14d
  UCHAR *v13; // rsi
  size_t v14; // rdi
  __int64 v15; // rdx
  UCHAR *v16; // r12
  int v17; // r15d
  _DWORD *v19; // rbx
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v22; // [rsp+40h] [rbp-58h] BYREF
  int v23[21]; // [rsp+44h] [rbp-54h] BYREF
  ULONG FinalUncompressedSize; // [rsp+A8h] [rbp+10h] BYREF
  UCHAR **v25; // [rsp+B0h] [rbp+18h]
  _DWORD *v26; // [rsp+B8h] [rbp+20h]

  v26 = a4;
  v25 = a3;
  v5 = 0;
  FinalUncompressedSize = 0;
  v23[0] = 0;
  v9 = 8LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741246;
  v11 = *(_DWORD *)a1;
  CompressedBufferSize = a2 - 8;
  if ( (v11 & 0xFFFFFF) != 0x4D414D )
    return (unsigned int)-1073741672;
  if ( v11 < 0 )
  {
    if ( CompressedBufferSize >= 4 )
    {
      v19 = (_DWORD *)(a1 + 8);
      v22 = 0;
      v13 = (UCHAR *)(a1 + 12);
      CompressedBufferSize -= 4;
      v20 = crc32(0LL, a1, 8LL);
      v21 = crc32(v20, &v22, 4LL);
      if ( (unsigned int)crc32(v21, v13, CompressedBufferSize) == *v19 )
      {
        v5 = 0;
        goto LABEL_5;
      }
    }
    return (unsigned int)-1073741246;
  }
  v13 = (UCHAR *)(a1 + 8);
LABEL_5:
  v14 = *(unsigned int *)(a1 + 4);
  if ( a5 && (unsigned int)v14 > *a5 )
    return (unsigned int)-1073739516;
  v16 = (UCHAR *)guard_dispatch_icall_no_overrides((unsigned int)v14, v9);
  if ( !v16 )
    return (unsigned int)-1073741670;
  v17 = *(_BYTE *)(a1 + 3) & 0x7F;
  if ( (_BYTE)v17 )
  {
    if ( v17 == 1 )
    {
      v5 = -1073741811;
      goto LABEL_12;
    }
    if ( (unsigned __int16)v17 > 8u )
    {
      v5 = -1073741217;
      goto LABEL_12;
    }
    v5 = guard_dispatch_icall_no_overrides(0LL, v23);
    if ( v5 < 0 )
      goto LABEL_12;
    v5 = RtlDecompressBufferEx(v17, v16, v14, v13, CompressedBufferSize, &FinalUncompressedSize, 0LL);
    if ( v5 < 0 )
      goto LABEL_12;
    if ( (_DWORD)v14 == FinalUncompressedSize )
    {
      v5 = 0;
LABEL_16:
      *v25 = v16;
      *v26 = v14;
      return (unsigned int)v5;
    }
  }
  else if ( CompressedBufferSize == (_DWORD)v14 )
  {
    memmove(v16, v13, v14);
    FinalUncompressedSize = v14;
    goto LABEL_16;
  }
  v5 = -1073741246;
LABEL_12:
  guard_dispatch_icall_no_overrides(v16, v15);
  return (unsigned int)v5;
}
