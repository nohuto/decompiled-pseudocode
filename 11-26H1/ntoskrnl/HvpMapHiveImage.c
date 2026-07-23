/*
 * XREFs of HvpMapHiveImage @ 0x140863984
 * Callers:
 *     HvpMapHiveImageFromFile @ 0x140B535DC (HvpMapHiveImageFromFile.c)
 * Callees:
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpReadHiveDataFromFile @ 0x140863AEC (HvpReadHiveDataFromFile.c)
 *     HvpFreeBin @ 0x1408BDE7C (HvpFreeBin.c)
 *     HvpProtectBinPartial @ 0x1408BFB2C (HvpProtectBinPartial.c)
 *     HvpPointMapEntriesToBuffer @ 0x1408E3AD0 (HvpPointMapEntriesToBuffer.c)
 *     HvpAllocateBin @ 0x140A8F15C (HvpAllocateBin.c)
 */

__int64 HvpMapHiveImage(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, ...)
{
  __int64 v3; // r15
  void *v4; // rdi
  int v5; // r14d
  int v7; // eax
  int Bin; // ebx
  unsigned int i; // esi
  const void *v10; // rdi
  const void *v11; // rdx
  int v12; // r8d
  int v13; // eax
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+18h] BYREF
  void *v17; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v19; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, void *);
  v19 = va_arg(va1, _QWORD);
  v16 = a3;
  v3 = *(_QWORD *)(BugCheckParameter2 + 56);
  v4 = 0LL;
  v17 = 0LL;
  v5 = 0;
  v15 = 0LL;
  v16 = 0;
  while ( 1 )
  {
    v7 = HvpReadHiveDataFromFile(v19, &v15, &v16);
    Bin = v7;
    if ( v7 < 0 )
      break;
    for ( i = 0; i < v16; i += 4096 )
    {
      v10 = (const void *)(v15 + i);
      Bin = HvpAllocateBin(BugCheckParameter2, 4096, 0, 825445699, (__int64)va);
      if ( Bin < 0 )
      {
        v4 = v17;
        v13 = 16;
        goto LABEL_13;
      }
      v11 = v10;
      v4 = v17;
      memmove(v17, v11, 0x1000uLL);
      Bin = HvpProtectBinPartial(BugCheckParameter2, (_DWORD)v4, v12, 0, 4096, 0);
      if ( Bin < 0 )
      {
        v13 = 32;
        goto LABEL_13;
      }
      HvpPointMapEntriesToBuffer(BugCheckParameter2, 1, 0LL);
      v4 = 0LL;
      v5 += 4096;
      v17 = 0LL;
    }
  }
  if ( v7 == -1073741807 )
  {
    return 0;
  }
  else
  {
    v13 = 0;
LABEL_13:
    SetFailureLocation(v3, 0, 7, Bin, v13);
    if ( v4 )
      HvpFreeBin(BugCheckParameter2, 4096LL);
  }
  return (unsigned int)Bin;
}
