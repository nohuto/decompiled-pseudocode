/*
 * XREFs of PfpPrefetchDirectoryStream @ 0x14097F5AC
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x14097F124 (PfpVolumePrefetchMetadata.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x14034A628 (MmQueryMemoryListInformation.c)
 *     PfpCheckPrefetchAbort @ 0x1404B8380 (PfpCheckPrefetchAbort.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     PfpOpenHandleClose @ 0x14098B268 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x14098BDF0 (PfpOpenHandleCreate.c)
 *     PfpAvailablePagesForPrefetch @ 0x140A59E14 (PfpAvailablePagesForPrefetch.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x140A59E4C (PfpUpdateRepurposedByPrefetch.c)
 */

__int64 PfpPrefetchDirectoryStream(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // r13
  __int64 Src; // r14
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  unsigned int v10; // esi
  int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v14; // r8d
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rax
  int v20; // esi
  size_t Size; // [rsp+38h] [rbp-90h]
  __int64 v22[2]; // [rsp+60h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-58h] BYREF
  __int128 v24; // [rsp+78h] [rbp-50h]
  __int64 v25; // [rsp+88h] [rbp-40h]
  unsigned int v26; // [rsp+D0h] [rbp+8h]
  __int64 v27; // [rsp+E8h] [rbp+20h] BYREF
  va_list va; // [rsp+E8h] [rbp+20h]
  __int64 v29; // [rsp+F0h] [rbp+28h]
  __int64 v30; // [rsp+F8h] [rbp+30h]
  va_list va1; // [rsp+100h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v27 = va_arg(va1, _QWORD);
  v29 = va_arg(va1, _QWORD);
  v30 = va_arg(va1, _QWORD);
  v3 = a1[5];
  Src = a1[3];
  *(_OWORD *)v22 = 0LL;
  Handle = 0LL;
  v7 = v29;
  v24 = 0LL;
  v25 = 0x200000000LL;
  v8 = *a1;
  v9 = 0LL;
  LODWORD(v27) = 0;
  v10 = *(unsigned __int16 *)(v8 + 30);
  *(_DWORD *)Src = 4;
  v26 = v10;
  LODWORD(v8) = v30;
  *(_QWORD *)(Src + 8) = (8 * (v10 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
  v11 = PfpOpenHandleCreate((unsigned int)&Handle, v3, *(_QWORD *)(v7 + 16), *(_QWORD *)(v7 + 8), 1048577, v8, 0, a2);
  if ( v11 >= 0 )
  {
    if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
      MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, a1 + 6, 0xB0u, 0, (__int64 *)va);
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= *(_DWORD *)(a3 + 16) )
        goto LABEL_7;
      *(_DWORD *)(Src + 4) = 0;
      if ( v12 >= *(_DWORD *)(a3 + 16) )
        goto LABEL_7;
      v14 = 0;
      do
      {
        v15 = *(_QWORD *)(a3 + 24);
        v16 = *(_QWORD *)(v15 + 16LL * v12);
        v17 = v9;
        v18 = v16 + *(unsigned int *)(v15 + 16LL * v12 + 8);
        if ( v16 >= v9 )
          v17 = *(_QWORD *)(v15 + 16LL * v12);
        while ( v17 < v18 )
        {
          *(_QWORD *)(Src + 8LL * v14 + 16) = v17;
          v19 = v17 + 4096;
          v17 += 4096LL;
          v14 = *(_DWORD *)(Src + 4) + 1;
          *(_DWORD *)(Src + 4) = v14;
          if ( v14 >= *((_DWORD *)a1 + 8) )
          {
            v9 = v19;
            break;
          }
        }
        if ( v14 >= *((_DWORD *)a1 + 8) )
          break;
        ++v12;
      }
      while ( v12 < *(_DWORD *)(a3 + 16) );
      if ( !v14 )
      {
LABEL_7:
        v11 = 0;
        goto LABEL_8;
      }
      if ( (unsigned int)PfpCheckPrefetchAbort(a1)
        || (*(_DWORD *)(*a1 + 80LL) & 4) != 0 && !(unsigned int)PfpAvailablePagesForPrefetch(a1 + 6, v10) )
      {
        v11 = -1073741248;
        goto LABEL_8;
      }
      LODWORD(Size) = 8 * *(_DWORD *)(Src + 4) + 16;
      v20 = IopXxxControlFile(Handle, 0LL, 0LL, 0LL, v22, 0x90120u, (unsigned int *)Src, Size, 0LL, 0, 0);
      if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(Src + 4));
      if ( v20 < 0 )
        break;
      if ( v20 == 259 )
        KeBugCheckEx(0x191u, 0x162AuLL, 0LL, 0LL, 0LL);
      v10 = v26;
    }
    v11 = 0;
    if ( v20 != -1073741807 )
      v11 = v20;
  }
LABEL_8:
  if ( (v25 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&Handle, v3);
  return (unsigned int)v11;
}
