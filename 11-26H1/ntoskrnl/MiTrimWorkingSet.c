/*
 * XREFs of MiTrimWorkingSet @ 0x1403BA50C
 * Callers:
 *     MiWalkAllWorkingSets @ 0x1402A9370 (MiWalkAllWorkingSets.c)
 *     MiWalkAllHardLimitWorkingSets @ 0x1402A996C (MiWalkAllHardLimitWorkingSets.c)
 *     MiForcedTrim @ 0x1403B9340 (MiForcedTrim.c)
 *     MiPeriodicTrimWorkingSet @ 0x1403B9E10 (MiPeriodicTrimWorkingSet.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403BC020 (MiEmptyWorkingSetInitiate.c)
 * Callees:
 *     MiComputeHardTrimSize @ 0x1402ED1E8 (MiComputeHardTrimSize.c)
 *     MiFastTrimWorkingSet @ 0x14031F690 (MiFastTrimWorkingSet.c)
 *     MiTrimmedEnough @ 0x1403BAA50 (MiTrimmedEnough.c)
 *     MiLogTrimWs @ 0x1403BAAAC (MiLogTrimWs.c)
 *     MiEmptyWorkingSetConverge @ 0x1403BAD38 (MiEmptyWorkingSetConverge.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MiTrimWorkingSet(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned __int64 v10; // rdx
  int v11; // ecx
  unsigned int v12; // ecx
  ULONG *v13; // rax
  int v14; // eax
  bool v15; // zf
  _QWORD *v16; // r10
  __int64 *v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int8 v23; // di
  char v24; // r14
  __int64 v26; // rcx
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r12
  int v29; // r8d
  int v30; // [rsp+40h] [rbp-208h] BYREF
  unsigned int v31; // [rsp+44h] [rbp-204h]
  char v32; // [rsp+49h] [rbp-1FFh]
  __int64 v33; // [rsp+60h] [rbp-1E8h]
  __int64 v34; // [rsp+70h] [rbp-1D8h]
  __int64 (__fastcall *v36)(__int64, ULONG_PTR, int); // [rsp+E8h] [rbp-160h]
  __int64 (__fastcall *v37)(); // [rsp+F0h] [rbp-158h]
  int *v38; // [rsp+F8h] [rbp-150h]
  int v39; // [rsp+100h] [rbp-148h] BYREF
  unsigned __int64 v40; // [rsp+108h] [rbp-140h]
  __int64 v41; // [rsp+110h] [rbp-138h]
  __int64 v42; // [rsp+120h] [rbp-128h]
  __int64 v43; // [rsp+128h] [rbp-120h]
  __int64 v44; // [rsp+130h] [rbp-118h]
  unsigned __int64 v45; // [rsp+138h] [rbp-110h]
  __int64 v46; // [rsp+158h] [rbp-F0h]

  memset_0(&v39, 0, 0x100uLL);
  memset_0(&v30, 0, 0xC0uLL);
  v10 = 0LL;
  if ( (a6 & 0x10) != 0 )
  {
    if ( (a6 & 0x40) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 136);
      v11 = v39 | 0x8000;
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 152);
      v11 = v39;
    }
    if ( v10 <= a3 )
      return 0LL;
    a2 = v10 - a3;
  }
  else
  {
    v11 = v39;
  }
  v12 = a5 & 0xF | v11 & 0xFFFFFFF0;
  v39 = v12;
  if ( (a6 & 2) != 0 )
  {
    v12 |= 0x200u;
    v39 = v12;
  }
  if ( (a6 & 4) != 0 )
  {
    v12 |= 0x400u;
    v39 = v12;
  }
  if ( (a6 & 1) != 0 )
  {
    v12 |= 0x800u;
    v39 = v12;
  }
  if ( (a6 & 8) != 0 )
  {
    v12 |= 0x1000u;
    v39 = v12;
  }
  if ( (a6 & 0x10) != 0 )
  {
    v45 = v10;
    v39 = v12 | 0x4000;
  }
  if ( (a6 & 0x80u) == 0 && (*(_DWORD *)(a1 + 184) & 0x10) != 0 )
  {
    v27 = *(_QWORD *)(a1 + 128);
    v28 = *(_QWORD *)(a1 + 136);
    if ( v28 > MiComputeHardTrimSize(v27, 0x5Au, 0x64u) )
      a2 = v28 - MiComputeHardTrimSize(v27, v29 - 15, v29 - 15 + 35);
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v13 = &MiSystemPartition;
  else
    v13 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
  if ( v13[4539] )
    v39 |= 0x100u;
  v14 = *(_DWORD *)(a1 + 184);
  if ( (v14 & 0xF) == 0 )
  {
    if ( *(_QWORD *)(a1 + 624) )
    {
LABEL_26:
      v46 = 1LL;
      goto LABEL_27;
    }
    v15 = (*(_QWORD *)(a1 - 656) & 0xFFFFFFFFFFFFFFFCuLL) == 0;
LABEL_25:
    if ( v15 )
      goto LABEL_27;
    goto LABEL_26;
  }
  if ( _bittest64(&MiFlags, 0x26u) )
  {
    v15 = (v14 & 0x40) == 0;
    goto LABEL_25;
  }
LABEL_27:
  v16 = *(_QWORD **)(a1 + 16);
  v44 = 0LL;
  if ( a5 < 8 )
  {
    v17 = (__int64 *)(a1 + 8 * (a5 + 7LL));
    v18 = 8 - a5;
    do
    {
      v19 = *v17++;
      v20 = v44 + v19;
      v44 = v20;
      --v18;
    }
    while ( v18 );
    if ( v20 )
    {
      if ( (v39 & 0x4000) != 0 && a2 > v45 )
        a2 = v45;
      v21 = -1LL;
      v40 = a2;
      v30 = 14;
      v33 = a1;
      v32 = a4;
      v31 = v31 & 0xFFFF0FFF | ((a5 & 0xF) << 12);
      v38 = &v39;
      v36 = MiTrimPte;
      v37 = MiTrimWorkingSetTail;
      v22 = v34;
      if ( !*v16 )
        v22 = -1LL;
      v34 = v22;
      if ( (a6 & 0x26) != 0 )
      {
        MiEmptyWorkingSetConverge(&v30, a6);
      }
      else
      {
        v23 = 8;
        do
        {
          --v23;
          v24 = 8;
          while ( v24 != v23 )
          {
            if ( *(_QWORD *)(a1 + 8LL * (unsigned __int8)--v24 + 56) )
            {
              LOBYTE(v21) = v24;
              v31 = v31 & 0xFFFF0FFF | ((v23 & 0xF) << 12);
              MiFastTrimWorkingSet((__int64)&v30, v21, 0);
              if ( (unsigned int)MiTrimmedEnough(a1, &v39) )
              {
                v23 = a5;
                break;
              }
            }
          }
        }
        while ( v23 != a5 );
      }
    }
  }
  if ( (a6 & 0x20) == 0
    && stru_140E36558.FirstArgument
    && *(_DWORD *)stru_140E36558.FirstArgument
    && (*((_BYTE *)stru_140E36558.FirstArgument + 16) & 1) != 0 )
  {
    v26 = *((_QWORD *)stru_140E36558.FirstArgument + 3);
    if ( (v26 & 1) == v26 )
      MiLogTrimWs(v26, a1, v42, v43, v41, v44, a5, a6);
  }
  return v41;
}
