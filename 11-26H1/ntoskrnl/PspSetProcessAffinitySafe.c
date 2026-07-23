/*
 * XREFs of PspSetProcessAffinitySafe @ 0x140AFE330
 * Callers:
 *     PspUpdateSingleProcessAffinity @ 0x1407F70E8 (PspUpdateSingleProcessAffinity.c)
 *     PspApplyJobLimitsToProcess @ 0x140A94A08 (PspApplyJobLimitsToProcess.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x140276050 (ExAcquireFastResourceShared.c)
 *     ExInitializeFastOwnerEntry @ 0x14042FF20 (ExInitializeFastOwnerEntry.c)
 *     ExReleaseFastResourceShared @ 0x14047F770 (ExReleaseFastResourceShared.c)
 *     KeSetAffinityProcess @ 0x140505754 (KeSetAffinityProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PspSetProcessAffinitySafe(
        struct _KPROCESS *a1,
        char a2,
        struct _KAFFINITY_EX *a3,
        __int64 *a4,
        int *a5)
{
  int v9; // r15d
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v13; // si
  unsigned __int64 v14; // rdi
  __int64 Count; // r8
  __int64 v16; // r9
  int v17; // eax
  struct _KAFFINITY_EX *v18; // r10
  unsigned __int16 v19; // r11
  unsigned __int16 i; // dx
  unsigned __int64 v22; // rcx
  ULONG_PTR v23[10]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v25[33]; // [rsp+88h] [rbp-78h] BYREF

  memset_0(&v24, 0, 0x108uLL);
  memset_0(v23, 0, 0x48uLL);
  v9 = 0;
  v10 = 1;
  if ( a4 )
  {
    v24 = 2097153LL;
    memset_0(v25, 0, 0x100uLL);
    v11 = *((unsigned __int16 *)a4 + 4);
    v12 = *a4;
    if ( (unsigned __int16)v24 <= (unsigned __int16)v11 )
    {
      if ( WORD1(v24) <= (unsigned __int16)v11 )
        goto LABEL_4;
      LOWORD(v24) = v11 + 1;
    }
    v25[v11] |= v12;
LABEL_4:
    a3 = (struct _KAFFINITY_EX *)&v24;
    v13 = 1;
    goto LABEL_5;
  }
  v13 = 0;
  if ( (a2 & 2) != 0 )
    v13 = 2;
LABEL_5:
  if ( (a2 & 1) != 0 || (a1[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
  {
    v14 = 0LL;
    goto LABEL_14;
  }
  v14 = a1[1].Padding[3];
  if ( !v14
    || (ExInitializeFastOwnerEntry((__int64)v23),
        ExAcquireFastResourceShared((__int64 *)(v14 + 56), (ULONG_PTR)v23, 1),
        v17 = *(_DWORD *)(v14 + 1056),
        (v17 & 0x10) == 0) )
  {
LABEL_14:
    v9 = KeSetAffinityProcess((__int64)a1, v13, a3);
    if ( !v14 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( (v17 & 0x4000) != 0 )
  {
    Count = a3->Count;
    v16 = v14 + 728;
    v18 = (struct _KAFFINITY_EX *)(v14 + 728);
    v19 = *(_WORD *)(v14 + 728);
    if ( (unsigned __int16)Count >= v19 )
    {
      v19 = a3->Count;
      v18 = a3;
      LOWORD(Count) = *(_WORD *)(v14 + 728);
    }
    for ( i = 0; i < (unsigned __int16)Count; ++i )
    {
      v22 = a3->Bitmap[i];
      if ( (v22 & *(_QWORD *)(v16 + 8LL * i + 8)) != v22 )
        goto LABEL_31;
    }
    if ( v18 != (struct _KAFFINITY_EX *)v16 )
    {
      while ( i < v19 )
      {
        if ( a3->Bitmap[i] )
          goto LABEL_31;
        ++i;
      }
    }
    goto LABEL_14;
  }
LABEL_31:
  v10 = 0;
LABEL_15:
  ExReleaseFastResourceShared(v14 + 56, (ULONG_PTR)v23, Count, v16);
LABEL_16:
  if ( v9 >= 0 )
    *a5 = v10;
  return (unsigned int)v9;
}
