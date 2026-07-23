/*
 * XREFs of EtwpCalculateUpdateNotification @ 0x140915B30
 * Callers:
 *     EtwpNotifyDisallowedGuidChange @ 0x14091555C (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpCopySchematizedFilters @ 0x140912C88 (EtwpCopySchematizedFilters.c)
 *     EtwpGetSchematizedFilterSize @ 0x140915E60 (EtwpGetSchematizedFilterSize.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140916200 (EtwpComputeRegEntryEnableInfo.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

bool __fastcall EtwpCalculateUpdateNotification(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        char a5,
        char a6,
        int a7,
        __int64 *a8)
{
  int v8; // r15d
  __int16 v11; // bx
  __int64 v12; // rdx
  unsigned __int16 v13; // cx
  __int16 v14; // r14
  _OWORD *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int128 v18; // xmm0
  int SchematizedFilterSize; // eax
  unsigned __int16 v20; // r14
  __int64 v21; // rdi
  int v22; // eax
  int v23; // ebx
  unsigned int v24; // edi
  _DWORD *v25; // rax
  _DWORD *v26; // rbx
  __int64 v28; // rax
  int v29; // r15d
  __int64 Pool2; // rax
  __int128 Source2; // [rsp+20h] [rbp-59h] BYREF
  __int128 v32; // [rsp+30h] [rbp-49h]
  __m256i v33; // [rsp+40h] [rbp-39h]
  _OWORD v34[2]; // [rsp+60h] [rbp-19h] BYREF
  __int128 v35; // [rsp+80h] [rbp+7h]
  __int64 v36; // [rsp+90h] [rbp+17h]

  v8 = 0;
  if ( a5 )
  {
    v11 = 0;
    v12 = 106LL;
    if ( !a6 )
      v12 = 102LL;
  }
  else
  {
    v12 = 104LL;
    v28 = 100LL;
    if ( !a6 )
    {
      v28 = 104LL;
      v12 = 100LL;
    }
    v11 = *(_WORD *)(v28 + a1);
  }
  v13 = *(_WORD *)(a1 + v12);
  v14 = *(_WORD *)(a1 + 98) & 8;
  if ( v14 )
  {
    if ( v13 || a7 != 1 )
      goto LABEL_28;
    if ( !a3 )
      return 0;
  }
  else
  {
    if ( (a2 & a3) == 0 && (v13 & a2) == 0 )
      return 0;
    if ( a5 != 2 && a4 == v13 && !v11 && !*(_WORD *)(a1 + 102) && !*(_WORD *)(a1 + 106) )
    {
LABEL_28:
      *a8 = 0LL;
      return 1;
    }
  }
  memset_0(&Source2, 0, 0x78uLL);
  v15 = (_OWORD *)*a8;
  v16 = *(_QWORD *)(a1 + 32);
  v17 = *(unsigned __int16 *)(a1 + 100);
  Source2 = *(_OWORD *)*a8;
  v32 = v15[1];
  v33 = *(__m256i *)((_BYTE *)v15 + 1);
  *(_QWORD *)&v34[0] = *((_QWORD *)v15 + 8);
  v18 = *(_OWORD *)(v16 + 40);
  *(_QWORD *)((char *)&Source2 + 4) = 0x100000078LL;
  *(_OWORD *)&v33.m256i_u64[1] = v18;
  SchematizedFilterSize = EtwpGetSchematizedFilterSize(v16, v17);
  if ( SchematizedFilterSize )
    DWORD1(Source2) = SchematizedFilterSize + 136;
  EtwpComputeRegEntryEnableInfo(a1, (char *)v34 + 8);
  if ( v14 )
  {
    LODWORD(v36) = 0;
    *((_QWORD *)&v35 + 1) = 0LL;
  }
  if ( !v15 || *((_DWORD *)v15 + 1) == DWORD1(Source2) && RtlCompareMemory(v15, &Source2, 0x78uLL) == 120 )
  {
    if ( *a8 )
      return 1;
  }
  else
  {
    *a8 = 0LL;
  }
  v20 = *(_WORD *)(a1 + 100);
  v21 = *(_QWORD *)(a1 + 32);
  v22 = EtwpGetSchematizedFilterSize(v21, v20);
  v23 = v22;
  if ( v22 )
  {
    v29 = v22 + 136;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return 0;
    *(_DWORD *)(Pool2 + 8) = 1;
    *(_OWORD *)Pool2 = Source2;
    *(_OWORD *)(Pool2 + 16) = v32;
    *(__m256i *)(Pool2 + 32) = v33;
    *(_OWORD *)(Pool2 + 64) = v34[0];
    *(_OWORD *)(Pool2 + 80) = v34[1];
    *(_OWORD *)(Pool2 + 96) = v35;
    *(_QWORD *)(Pool2 + 112) = v36;
    *(_DWORD *)(Pool2 + 116) = 1;
    *a8 = Pool2;
    *(_DWORD *)(Pool2 + 8) = 1;
    *(_DWORD *)(*a8 + 4) = v29;
    *(_DWORD *)(Pool2 + 132) = 0x80000000;
    *(_DWORD *)(Pool2 + 128) = v23;
    *(_QWORD *)(Pool2 + 120) = 136LL;
    EtwpCopySchematizedFilters((char *)(Pool2 + 136), v21, v20);
    return 1;
  }
  else
  {
    v24 = DWORD1(Source2);
    *a8 = 0LL;
    v25 = (_DWORD *)ExAllocatePool2(0x100uLL);
    v26 = v25;
    if ( v25 )
    {
      memmove(v25, &Source2, v24);
      v26[2] = 1;
      *a8 = (__int64)v26;
    }
    else
    {
      v8 = -1073741801;
    }
    return v8 >= 0;
  }
}
