/*
 * XREFs of FsRtlAddToTunnelCacheEx @ 0x1409DE220
 * Callers:
 *     FsRtlAddToTunnelCache @ 0x1409DDFE0 (FsRtlAddToTunnelCache.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     FsRtlEmptyFreePoolList @ 0x1403C0FB0 (FsRtlEmptyFreePoolList.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlCompareUnicodeString @ 0x1409DE5A0 (RtlCompareUnicodeString.c)
 *     FsRtlPruneTunnelCache @ 0x1409DE700 (FsRtlPruneTunnelCache.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall FsRtlAddToTunnelCacheEx(
        PKGUARDED_MUTEX Mutex,
        unsigned __int64 a2,
        const UNICODE_STRING *a3,
        const UNICODE_STRING *a4,
        char a5,
        size_t Size,
        void *Src)
{
  __int64 v7; // rdi
  __int64 result; // rax
  int v9; // esi
  const UNICODE_STRING *v10; // r12
  const UNICODE_STRING *v11; // r14
  unsigned int v14; // ebx
  char *v15; // r15
  __int64 v16; // rbx
  PKGUARDED_MUTEX v17; // rsi
  LONG v18; // eax
  bool v19; // cc
  struct _FAST_MUTEX *v20; // rdx
  PKGUARDED_MUTEX *v21; // rcx
  unsigned __int16 Length; // ax
  unsigned __int16 v23; // ax
  char *v24; // rcx
  const UNICODE_STRING *v25; // rcx
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  _QWORD *v31; // rdi
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  char v34; // [rsp+20h] [rbp-58h]
  char v35; // [rsp+24h] [rbp-54h]
  _QWORD *v36[3]; // [rsp+28h] [rbp-50h] BYREF
  int v39; // [rsp+A0h] [rbp+28h]

  v7 = 0LL;
  v34 = 0;
  result = a5 & 1;
  v9 = a5 & 2;
  v10 = a4;
  v11 = a3;
  v35 = a5 & 1;
  v39 = v9;
  if ( TunnelMaxEntries )
  {
    v14 = a4->Length + 112 + Size + a3->Length;
    v36[1] = v36;
    v36[0] = v36;
    if ( v14 > 0xB0 || (v15 = (char *)ExAllocateFromNPagedLookasideList(&TunnelLookasideList)) == 0LL )
    {
      result = ExAllocatePool2(0x102uLL);
      v15 = (char *)result;
      if ( !result )
        return result;
      v34 = 1;
    }
    if ( !v9 )
      v11 = v10;
    ExAcquireFastMutex(Mutex);
    v16 = *(_QWORD *)&Mutex[1].Count;
    v17 = Mutex + 1;
    if ( v16 )
    {
      while ( 1 )
      {
        v7 = v16;
        if ( *(_QWORD *)(v16 + 48) >= a2 )
        {
          if ( *(_QWORD *)(v16 + 48) > a2 )
            goto LABEL_21;
          v18 = RtlCompareUnicodeString((PCUNICODE_STRING)(v16 + 8 * (*(_DWORD *)(v16 + 56) & 2 | 8LL)), v11, 1u);
          v19 = v18 <= 0;
          if ( !v18 )
          {
            if ( !v35 )
            {
LABEL_15:
              v10 = a4;
              break;
            }
            v25 = (const UNICODE_STRING *)(v16 + 80);
            if ( (*(_DWORD *)(v16 + 56) & 2) == 0 )
              v25 = (const UNICODE_STRING *)(v16 + 64);
            v18 = RtlCompareUnicodeString(v25, v11, 0);
            v19 = v18 <= 0;
          }
          if ( !v19 )
          {
LABEL_21:
            v17 = (PKGUARDED_MUTEX)(v16 + 8);
            goto LABEL_14;
          }
          if ( v18 >= 0 )
            goto LABEL_15;
        }
        v17 = (PKGUARDED_MUTEX)(v16 + 16);
LABEL_14:
        v16 = *(_QWORD *)&v17->Count;
        if ( !*(_QWORD *)&v17->Count )
          goto LABEL_15;
      }
    }
    *(_QWORD *)v15 = v15;
    *((_QWORD *)v15 + 1) = 0LL;
    *((_QWORD *)v15 + 2) = 0LL;
    if ( v7 )
    {
      if ( *(_QWORD *)&v17->Count )
      {
        *((_QWORD *)v15 + 2) = *(_QWORD *)(*(_QWORD *)&v17->Count + 16LL);
        *((_QWORD *)v15 + 1) = *(_QWORD *)(*(_QWORD *)&v17->Count + 8LL);
        v26 = *(_QWORD **)(*(_QWORD *)&v17->Count + 16LL);
        if ( v26 )
          *v26 = v15;
        v27 = *(_QWORD **)(*(_QWORD *)&v17->Count + 8LL);
        if ( v27 )
          *v27 = v15;
        v28 = **(_QWORD **)&v17->Count;
        if ( v28 == *(_QWORD *)&v17->Count )
        {
          *(_QWORD *)&Mutex[1].Count = v15;
        }
        else
        {
          *(_QWORD *)v15 = v28;
          v29 = **(_QWORD **)&v17->Count;
          if ( *(_QWORD *)(v29 + 8) == *(_QWORD *)&v17->Count )
            *(_QWORD *)(v29 + 8) = v15;
          else
            *(_QWORD *)(v29 + 16) = v15;
        }
        v30 = *(_QWORD *)(v7 + 24);
        v31 = (_QWORD *)(v7 + 24);
        if ( *(_QWORD **)(v30 + 8) != v31
          || (v32 = (_QWORD *)v31[1], (_QWORD *)*v32 != v31)
          || (*v32 = v30, *(_QWORD *)(v30 + 8) = v32, v33 = v36[0], *((_QWORD ***)v36[0] + 1) != v36) )
        {
LABEL_20:
          __fastfail(3u);
        }
        *v31 = v36[0];
        v31[1] = v36;
        v33[1] = v31;
        --LOWORD(Mutex[1].Event.Header.Lock);
        v36[0] = v31;
      }
      else
      {
        *(_QWORD *)v15 = v7;
        *(_QWORD *)&v17->Count = v15;
      }
    }
    else
    {
      *(_QWORD *)&Mutex[1].Count = v15;
    }
    v20 = (struct _FAST_MUTEX *)(v15 + 24);
    *((_QWORD *)v15 + 5) = MEMORY[0xFFFFF78000000014];
    v21 = *(PKGUARDED_MUTEX **)&Mutex[1].Contention;
    if ( *v21 != (PKGUARDED_MUTEX)&Mutex[1].Owner )
      goto LABEL_20;
    *(_QWORD *)&v20->Count = (char *)Mutex + 64;
    *((_QWORD *)v15 + 4) = v21;
    *v21 = v20;
    *(_QWORD *)&Mutex[1].Contention = v20;
    ++LOWORD(Mutex[1].Event.Header.Lock);
    *((_QWORD *)v15 + 6) = a2;
    *((_DWORD *)v15 + 14) = v39 != 0 ? 2 : 0;
    *((_QWORD *)v15 + 11) = v15 + 112;
    *((_QWORD *)v15 + 9) = &v15[a3->Length + 112];
    Length = a3->Length;
    *((_WORD *)v15 + 41) = a3->Length;
    *((_WORD *)v15 + 40) = Length;
    v23 = v10->Length;
    *((_WORD *)v15 + 33) = v10->Length;
    *((_WORD *)v15 + 32) = v23;
    if ( a3->Length )
      memmove(v15 + 112, a3->Buffer, a3->Length);
    if ( v10->Length )
      memmove(*((void **)v15 + 9), v10->Buffer, v10->Length);
    v24 = &v15[a3->Length + 112 + v10->Length];
    *((_QWORD *)v15 + 12) = v24;
    *((_DWORD *)v15 + 26) = Size;
    memmove(v24, Src, (unsigned int)Size);
    if ( v34 )
      *((_DWORD *)v15 + 14) |= 1u;
    FsRtlPruneTunnelCache(Mutex, v36);
    KeReleaseGuardedMutex(Mutex);
    return (__int64)FsRtlEmptyFreePoolList(v36);
  }
  return result;
}
