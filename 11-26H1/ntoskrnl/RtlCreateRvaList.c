/*
 * XREFs of RtlCreateRvaList @ 0x140A20C94
 * Callers:
 *     MiParseImageLoadConfig @ 0x14099D9D0 (MiParseImageLoadConfig.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpCompressRvaList @ 0x140A20E50 (RtlpCompressRvaList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlCreateRvaList(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *Src,
        unsigned __int64 a6,
        __int64 **a7)
{
  unsigned __int64 v7; // rsi
  __int64 v8; // r14
  __int64 *v10; // rdi
  int v11; // ebx
  __int64 v12; // rbp
  __int64 v13; // rbx
  unsigned __int64 v14; // r15
  __int64 Pool2; // rax
  __int64 v16; // r8
  __int64 v17; // rbx
  const void *v18; // rdx
  char *v19; // r15
  __int64 v21; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+90h] [rbp+18h] BYREF
  int v23; // [rsp+94h] [rbp+1Ch]

  v23 = HIDWORD(a3);
  v7 = 0LL;
  v8 = a4;
  v22 = 0;
  v21 = 0LL;
  v10 = 0LL;
  v11 = RtlpCompressRvaList(
          0,
          a1,
          (unsigned int)MiImageRvaRawEnumFirst,
          (unsigned int)MiImageRvaRawEnumNext,
          0LL,
          (__int64)&v21,
          (__int64)&v22);
  if ( v11 >= 0 )
  {
    v12 = v22;
    if ( (unsigned int)v8 > 1 )
      v7 = (((unsigned __int64)((unsigned int)v8 * v22) + 63) >> 3) & 0x1FFFFFFFFFFFFFF8LL;
    v13 = v21;
    v14 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    a6 = v7 + v14 + 4 * (v8 + 16);
    Pool2 = ExAllocatePool2(0x100uLL);
    v10 = (__int64 *)Pool2;
    if ( Pool2 )
    {
      v16 = a6;
      *(_QWORD *)(Pool2 + 24) = v13;
      v17 = Pool2 + 64;
      *(_QWORD *)Pool2 = v12;
      *(_DWORD *)(Pool2 + 8) = v8;
      *(_QWORD *)(Pool2 + 16) = Pool2 + 64;
      memset_0((void *)(Pool2 + 64), 0, v16 - 64);
      v18 = Src;
      v19 = (char *)(v17 + v14);
      if ( Src )
      {
        v10[6] = (__int64)v19;
        memmove(v19, v18, 4 * v8);
        v19 += 4 * v8;
      }
      if ( v7 )
      {
        v10[5] = (__int64)v19;
        v10[4] = (unsigned int)(v8 * v12);
      }
      v11 = RtlpCompressRvaList(
              (_DWORD)v10,
              a1,
              (unsigned int)MiImageRvaRawEnumFirst,
              (unsigned int)MiImageRvaRawEnumNext,
              v10[2],
              (__int64)&v21,
              (__int64)&v22);
      if ( v11 < 0 )
      {
        ExFreePoolWithTag(v10, 0x4C617652u);
        v10 = 0LL;
      }
    }
    else
    {
      v11 = -1073741670;
    }
  }
  *a7 = v10;
  return (unsigned int)v11;
}
