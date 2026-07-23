/*
 * XREFs of MiCreatePagefile @ 0x1408714A0
 * Callers:
 *     MiCreatePagingFile @ 0x140871844 (MiCreatePagingFile.c)
 *     MmStoreRegister @ 0x140883A7C (MmStoreRegister.c)
 *     MiCreateSpecialPurposeMemoryPageFile @ 0x14088488C (MiCreateSpecialPurposeMemoryPageFile.c)
 * Callees:
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     MiAllocateModWriterEntry @ 0x140398980 (MiAllocateModWriterEntry.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlSetAllBits @ 0x1403EE130 (RtlSetAllBits.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiInitializePagefileBitmapsCache @ 0x140445150 (MiInitializePagefileBitmapsCache.c)
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     MiReservePageHash @ 0x140714C3C (MiReservePageHash.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1408713F8 (MiCreatePageFileSpaceBitmaps.c)
 *     MiDeletePagefile @ 0x140871A84 (MiDeletePagefile.c)
 */

_BYTE *__fastcall MiCreatePagefile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        UNICODE_STRING *a6,
        int a7,
        char a8)
{
  unsigned int v11; // r15d
  ULONG v12; // r13d
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  _BYTE *v15; // r14
  ULONG v16; // esi
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // r9
  UNICODE_STRING *v22; // rcx
  __int16 v23; // cx
  __int64 v24; // rsi
  int v25; // eax
  __int64 v26; // rax
  unsigned int i; // ebx
  _DWORD *ModWriterEntry; // rax
  int v29; // ecx
  int v30; // eax
  unsigned __int64 v31; // rax
  __int64 PageFileSpaceBitmaps; // rax
  __int64 v33; // rdi
  _RTL_BITMAP *v34; // rdi
  int v35; // eax
  __int64 v36; // rax
  _BYTE v39[256]; // [rsp+30h] [rbp-138h] BYREF

  memset_0(v39, 0, sizeof(v39));
  v11 = 2;
  v12 = (a8 & 2) != 0 ? 5 : 2;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 0x100uLL, 1716545869, CurrentProcessorColor | 0x80000000);
  v15 = v39;
  if ( PoolMm )
    v15 = (_BYTE *)PoolMm;
  *(_DWORD *)v15 = a4;
  *((_DWORD *)v15 + 2) = a4;
  v16 = a4 - v12;
  *((_DWORD *)v15 + 3) = v16;
  *((_DWORD *)v15 + 5) = v16;
  *((_QWORD *)v15 + 3) = a2;
  *((_QWORD *)v15 + 24) = a3;
  *((_DWORD *)v15 + 1) = a5;
  v17 = dword_140FBF21C;
  *((_DWORD *)v15 + 23) = dword_140FBF21C;
  if ( (a8 & 2) != 0 )
    v18 = -1;
  else
    v18 = 4 * v17;
  *((_DWORD *)v15 + 26) = v18;
  *((_QWORD *)v15 + 28) = a1;
  InitializeSListHead((PSLIST_HEADER)v15 + 3);
  v22 = (UNICODE_STRING *)(v15 + 64);
  *((_QWORD *)v15 + 26) = 0LL;
  *((_QWORD *)v15 + 27) = 0LL;
  if ( a6 )
    *v22 = *a6;
  else
    RtlInitUnicodeString(v22, 0LL);
  if ( a7 < 0 )
  {
    v23 = 176;
LABEL_19:
    *((_WORD *)v15 + 86) |= v23;
    goto LABEL_20;
  }
  if ( (a8 & 2) != 0 )
  {
    *((_WORD *)v15 + 86) |= 0x60u;
    goto LABEL_20;
  }
  if ( (a8 & 4) != 0 )
  {
    *((_WORD *)v15 + 86) |= 0x8A0u;
    *((_QWORD *)v15 + 29) = 0LL;
    *((_QWORD *)v15 + 30) = 0LL;
    goto LABEL_20;
  }
  if ( (a7 & 0x40000000) != 0 )
    *((_WORD *)v15 + 86) |= 0x20u;
  if ( (a7 & 0x2000000) != 0 )
  {
    v23 = 128;
    goto LABEL_19;
  }
LABEL_20:
  if ( (a7 & 0x1000000) != 0 )
    *((_WORD *)v15 + 86) |= 0x400u;
  if ( (a8 & 1) != 0 )
    *((_WORD *)v15 + 86) |= 0x200u;
  if ( (a7 & 0x3C000000) != 0 )
    *((_DWORD *)v15 + 42) = (a7 & 0x3C000000u) >> 26;
  if ( v15 == v39 )
    goto LABEL_50;
  v24 = *((unsigned int *)v15 + 23);
  if ( a7 >= 0 )
  {
    if ( (a8 & 2) != 0 )
    {
      v11 = 4;
    }
    else if ( (a8 & 4) != 0 )
    {
      v11 = KeNumberProcessors_0;
      if ( !(_DWORD)KeNumberProcessors_0 )
        goto LABEL_38;
    }
  }
  else
  {
    v11 = 1;
  }
  v25 = MmGetCurrentProcessorColor();
  v26 = ExAllocatePoolMm(64LL, 8LL * v11, 2001561933, v25 | 0x80000000);
  *((_QWORD *)v15 + 4) = v26;
  if ( !v26 )
    goto LABEL_50;
  for ( i = 0; i < v11; ++i )
  {
    ModWriterEntry = MiAllocateModWriterEntry(a1, v24, 0);
    if ( !ModWriterEntry )
      goto LABEL_50;
    ModWriterEntry[10] |= 0x20u;
    *((_QWORD *)ModWriterEntry + 7) = a1;
    *((_QWORD *)ModWriterEntry + 8) = v15;
    v19 = i;
    *(_QWORD *)(*((_QWORD *)v15 + 4) + 8LL * i) = ModWriterEntry;
    ++*((_DWORD *)v15 + 10);
  }
LABEL_38:
  v29 = 0;
  v30 = 0;
  if ( (a8 & 4) == 0 )
  {
    LOBYTE(v29) = (a8 & 2) == 0;
    v30 = v29;
  }
  if ( v30 )
  {
    v31 = MiReservePageHash(*((_DWORD *)v15 + 1), v19, v20, v21);
    if ( !v31 )
      goto LABEL_50;
    *((_QWORD *)v15 + 23) = v31;
  }
  PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps(*((_DWORD *)v15 + 1));
  v33 = PageFileSpaceBitmaps;
  if ( PageFileSpaceBitmaps )
  {
    *((_QWORD *)v15 + 10) = PageFileSpaceBitmaps;
    RtlSetAllBits((PRTL_BITMAP)(PageFileSpaceBitmaps + 8));
    RtlClearBits((PRTL_BITMAP)(v33 + 8), v12, *(_DWORD *)v15 - v12);
    v34 = (_RTL_BITMAP *)(v33 + 24);
    RtlSetAllBits(v34);
    if ( (a8 & 2) == 0 )
      RtlClearBits(v34, v12, *(_DWORD *)v15 - v12);
    *((_DWORD *)v15 + 22) = v12;
    if ( (a8 & 2) != 0 )
      return v15;
    v35 = MmGetCurrentProcessorColor();
    v36 = ExAllocatePoolMm(64LL, 0x7000uLL, 1665296717, v35 | 0x80000000);
    *((_QWORD *)v15 + 20) = v36;
    if ( v36 )
    {
      MiInitializePagefileBitmapsCache((__int64)v15);
      return v15;
    }
  }
LABEL_50:
  MiDeletePagefile(v15);
  return 0LL;
}
