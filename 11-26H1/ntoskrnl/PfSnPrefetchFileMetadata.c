/*
 * XREFs of PfSnPrefetchFileMetadata @ 0x140989940
 * Callers:
 *     PfSnPrefetchMetadata @ 0x140A594B8 (PfSnPrefetchMetadata.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     NtWaitForSingleObject @ 0x14092A200 (NtWaitForSingleObject.c)
 *     NtResetEvent @ 0x140989AA0 (NtResetEvent.c)
 */

__int64 __fastcall PfSnPrefetchFileMetadata(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        HANDLE EventHandle)
{
  unsigned int v6; // r10d
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v13; // r15
  unsigned int v14; // r14d
  int v15; // r13d
  int v16; // ebx
  size_t Size; // [rsp+38h] [rbp-60h]
  __int128 v18; // [rsp+60h] [rbp-38h] BYREF

  v6 = 0;
  v18 = 0LL;
  if ( a5 )
  {
    v10 = *(_DWORD *)(a3 + 4);
    if ( v10 <= a4 || v10 - a4 < a5 )
    {
      return (unsigned int)-1073741701;
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 96) & 7 | (8 * (*(_DWORD *)(a1 + 100) & 7 | 8));
      if ( a4 || a5 > 0x300 )
      {
        v13 = *(_QWORD *)(a1 + 80);
        v14 = 0;
        *(_QWORD *)v13 = 3LL;
        *(_QWORD *)(v13 + 8) = v11;
        while ( v14 < a5 )
        {
          v15 = 768;
          if ( a5 - v14 < 0x300 )
            v15 = a5 - v14;
          *(_DWORD *)(v13 + 4) = v15;
          memmove((void *)(v13 + 16), (const void *)(a3 + 8 * (v14 + a4 + 2LL)), (unsigned int)(8 * v15));
          v16 = 8 * *(_DWORD *)(v13 + 4) + 16;
          NtResetEvent(EventHandle, 0LL);
          LODWORD(Size) = v16;
          v6 = IopXxxControlFile(a2, EventHandle, 0LL, 0LL, &v18, 0x90120u, (unsigned int *)v13, Size, 0LL, 0, 0);
          if ( v6 == 259 )
          {
            NtWaitForSingleObject(EventHandle, 0, 0LL);
            v6 = v18;
          }
          if ( (v6 & 0xC0000000) == 0xC0000000 )
            break;
          v14 += v15;
        }
      }
      else
      {
        *(_QWORD *)(a3 + 8) = v11;
        *(_DWORD *)(a3 + 4) = a5;
        NtResetEvent(EventHandle, 0LL);
        LODWORD(Size) = 8 * a5 + 16;
        v6 = IopXxxControlFile(a2, EventHandle, 0LL, 0LL, &v18, 0x90120u, (unsigned int *)a3, Size, 0LL, 0, 0);
        if ( v6 == 259 )
        {
          NtWaitForSingleObject(EventHandle, 0, 0LL);
          v6 = v18;
        }
        *(_DWORD *)(a3 + 4) = v10;
      }
    }
  }
  return v6;
}
