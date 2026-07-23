/*
 * XREFs of CcCopyBytesToUserBuffer @ 0x1404653C0
 * Callers:
 *     CcMapAndCopyFromCache @ 0x140A718D0 (CcMapAndCopyFromCache.c)
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x1402C4930 (FsRtlIsNtstatusExpected.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     HviCopyMemory @ 0x140465548 (HviCopyMemory.c)
 *     CcCopyReadExceptionFilter @ 0x1404EDB58 (CcCopyReadExceptionFilter.c)
 *     CcLockSystemCacheBuffer @ 0x1405288CC (CcLockSystemCacheBuffer.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 */

__int64 __fastcall CcCopyBytesToUserBuffer(char *a1, char *Src, size_t Size, char a4)
{
  unsigned int v4; // ebx
  char *v5; // r13
  unsigned int v7; // edi
  struct _MDL *v8; // r12
  __int64 v9; // rcx
  unsigned int v10; // esi
  char v11; // al
  __int64 v12; // r14
  __int64 v14; // rax
  _DWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  struct _MDL *v16; // [rsp+38h] [rbp-40h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]
  char v18; // [rsp+98h] [rbp+20h]

  v18 = a4;
  v4 = Size;
  v5 = Src;
  v7 = 0;
  v15[1] = 0;
  v8 = 0LL;
  v16 = 0LL;
  v9 = 0LL;
  v17 = 0LL;
  v15[0] = 0;
  if ( a4 )
  {
    v9 = CcLockSystemCacheBuffer((_DWORD)Src, (unsigned int)&v16, Size, 0, (__int64)v15);
    v17 = v9;
    v8 = v16;
    if ( !v9 )
    {
      v7 = v15[0];
      goto LABEL_12;
    }
    a4 = v18;
  }
  while ( v4 )
  {
    v10 = 0x40000;
    if ( v4 < 0x40000 )
      v10 = v4;
    if ( a4 )
    {
      HviCopyMemory(a1, v9, v10);
      v12 = v10;
    }
    else
    {
      if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
      {
        v15[0] = 0;
        v11 = 0;
      }
      else
      {
        v15[0] = 1;
        v11 = 1;
      }
      v12 = v10;
      if ( v11 )
        RtlCopyToUser(a1, v5, v10);
      else
        RtlCopyVolatileMemory(a1, v5, v10);
    }
    v4 -= v10;
    a1 += v12;
    v14 = v12 + v17;
    a4 = v18;
    if ( !v18 )
      v14 = v17;
    v9 = v14;
    v17 = v14;
    if ( !v18 )
      v5 += v12;
  }
LABEL_12:
  if ( v8 )
  {
    MmUnlockPages(v8);
    IoFreeMdl(v8);
  }
  return v7;
}
