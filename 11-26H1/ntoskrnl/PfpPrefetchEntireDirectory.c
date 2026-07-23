/*
 * XREFs of PfpPrefetchEntireDirectory @ 0x140A58878
 * Callers:
 *     PfSnPrefetchMetadata @ 0x140A594B8 (PfSnPrefetchMetadata.c)
 * Callees:
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     IopQueryXxxInformation @ 0x140989BF0 (IopQueryXxxInformation.c)
 *     PfpOpenHandleClose @ 0x14098B268 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x14098BDF0 (PfpOpenHandleCreate.c)
 */

__int64 PfpPrefetchEntireDirectory(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5, ...)
{
  __int64 v8; // r9
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rsi
  int v12; // edi
  ULONG_PTR v13; // rdi
  size_t Size; // [rsp+40h] [rbp-31h]
  __int64 v16; // [rsp+68h] [rbp-9h] BYREF
  __int64 v17[2]; // [rsp+70h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+Fh] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+88h] [rbp+17h]
  __int64 v20; // [rsp+98h] [rbp+27h]
  va_list va; // [rsp+F0h] [rbp+7Fh] BYREF

  va_start(va, a5);
  v16 = 0LL;
  v8 = *(_QWORD *)(a5 + 8);
  v9 = *(_QWORD *)(a5 + 16);
  Handle = 0LL;
  v20 = 0x200000000LL;
  *(_OWORD *)v17 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v10 = PfpOpenHandleCreate((__int64)&Handle, a1, v9, v8, 1048577, 16417, 0, a2);
  v11 = v20;
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( a4 )
    {
      v13 = BugCheckParameter2[0];
      if ( (int)IopQueryXxxInformation(
                  (struct _FILE_OBJECT *)BugCheckParameter2[0],
                  6,
                  8,
                  0,
                  (__int64)&v16,
                  (__int64 *)va,
                  1) >= 0 )
      {
        *(_QWORD *)(a4 + 12) = v16;
        *(_QWORD *)a4 = *(_QWORD *)(v13 + 24);
        *(_DWORD *)(a4 + 8) = v11;
      }
    }
    LODWORD(Size) = 8 * a3[1] + 16;
    v12 = IopXxxControlFile(Handle, 0LL, 0LL, 0LL, v17, 0x90120u, a3, Size, 0LL, 0, 0);
    if ( v12 >= 0 )
      v12 = 0;
  }
  if ( (v11 & 0x400000000LL) != 0 )
    PfpOpenHandleClose((__int64)&Handle, a1);
  return (unsigned int)v12;
}
