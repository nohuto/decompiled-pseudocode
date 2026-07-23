/*
 * XREFs of MiCreateImageMapHeader @ 0x140A63364
 * Callers:
 *     MiCreateNewSection @ 0x140A63860 (MiCreateNewSection.c)
 * Callees:
 *     CcZeroEndOfLastPage @ 0x1403110A8 (CcZeroEndOfLastPage.c)
 *     PsIsCurrentThreadPrefetching @ 0x140494CE0 (PsIsCurrentThreadPrefetching.c)
 *     MiCopyHeaderIfResident @ 0x1404AE5F4 (MiCopyHeaderIfResident.c)
 *     MiFlushDataSection @ 0x1404B705C (MiFlushDataSection.c)
 *     MiAllocateEntireImageFileExtents @ 0x1408730F8 (MiAllocateEntireImageFileExtents.c)
 *     MiCreateMdl @ 0x140A63630 (MiCreateMdl.c)
 *     MiDeleteImageCreationMdls @ 0x140A63794 (MiDeleteImageCreationMdls.c)
 *     FsRtlGetFileSize @ 0x140A64360 (FsRtlGetFileSize.c)
 *     MiReadImageHeaders @ 0x140A64D58 (MiReadImageHeaders.c)
 */

signed int __fastcall MiCreateImageMapHeader(__int64 a1)
{
  struct _FILE_OBJECT *v1; // r14
  LARGE_INTEGER *v2; // rdx
  int v3; // ebx
  struct _FILE_OBJECT *v5; // rcx
  signed int result; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 Mdl; // rax
  __int64 v10; // rsi
  int v11; // eax
  int v12; // eax
  int v13; // edx
  unsigned __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  _WORD **v19; // rax
  _WORD *v20; // rax
  __int128 v21; // [rsp+20h] [rbp-28h] BYREF
  int v22; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(struct _FILE_OBJECT **)a1;
  v2 = (LARGE_INTEGER *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(struct _FILE_OBJECT **)a1;
  v22 = 0;
  result = FsRtlGetFileSize(v5, v2);
  if ( result < 0 )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 33;
    if ( result == -1073741638 )
      return -1073741792;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 44) )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 34;
      return -1073741792;
    }
    v7 = *(unsigned int *)(a1 + 24);
    v8 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 48) = 1LL;
    Mdl = MiCreateMdl(v8, v7, 4096LL, 1LL, v21);
    v10 = Mdl;
    if ( !Mdl )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 35;
      return -1073741670;
    }
    *(_QWORD *)(Mdl + 16) = 0LL;
    *(_QWORD *)(a1 + 72) = Mdl;
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(Mdl + 48);
    CcZeroEndOfLastPage(v1);
    v11 = MiFlushDataSection((__int64)v1, &v22);
    if ( v11 == -1073741740 )
      return -1073741740;
    if ( v11 < 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)&stru_140E2ED08.SchedulerApcFill5[64], 1u);
      v12 = 1;
    }
    else
    {
      v12 = v22;
    }
    if ( v12 )
      *(_DWORD *)(a1 + 12) |= 1u;
    v13 = *(_DWORD *)(a1 + 12);
    if ( (v13 & 1) != 0 || (v3 & 0x40) != 0 )
    {
      v13 |= 2u;
      *(_DWORD *)(a1 + 12) = v13;
    }
    if ( (v13 & 2) != 0 && PsIsCurrentThreadPrefetching() )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 37;
      return -1073740749;
    }
    *(_QWORD *)(a1 + 112) = *(_QWORD *)(a1 + 40);
    if ( (v3 & 0x4000) != 0 )
    {
      if ( (v3 & 0x20000) != 0 )
        *(_QWORD *)(a1 + 112) = 4096LL;
      result = MiAllocateEntireImageFileExtents(v1, *(_QWORD *)(a1 + 112), 0LL, (__int64 *)(a1 + 64));
      if ( result < 0 )
      {
        *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 38;
        return result;
      }
    }
    else if ( (unsigned int)MiCopyHeaderIfResident((__int64)v1, *(_QWORD *)(a1 + 88)) )
    {
      *(_QWORD *)(a1 + 32) = 4096LL;
    }
    else if ( (*(_DWORD *)(a1 + 12) & 2) == 0
           && ((v3 & 0x20) != 0 || (v3 & 0x200) != 0 && *(_DWORD *)(a1 + 40) <= 0x20000u)
           && !v1->SectionObjectPointer->DataSectionObject )
    {
      v14 = ((unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
      if ( v14 > 1 )
      {
        v15 = MiCreateMdl(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 24), v14 << 12, 0LL, v21);
        if ( v15 )
        {
          MiDeleteImageCreationMdls(*(PMDL *)(a1 + 72));
          *(_QWORD *)(v15 + 16) = 0LL;
          v10 = v15;
          *(_QWORD *)(a1 + 80) = v15;
          *(_QWORD *)(a1 + 72) = v15;
          *(_QWORD *)(a1 + 88) = -1LL;
          *(_QWORD *)(a1 + 48) = v14;
        }
      }
    }
    if ( !*(_QWORD *)(a1 + 32) )
    {
      v16 = *(_QWORD *)(a1 + 64);
      v21 = 0LL;
      result = MiReadImageHeaders(v1, v16, v10, &v21);
      if ( result < 0 )
      {
        *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 40;
        return result;
      }
      v17 = *((_QWORD *)&v21 + 1);
      v18 = *(_QWORD *)(a1 + 48) << 12;
      *(_QWORD *)(a1 + 32) = *((_QWORD *)&v21 + 1);
      if ( v17 != v18 && v17 < 0x40 )
      {
        *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 41;
        return -1073741521;
      }
    }
    v19 = (_WORD **)(v10 + 32);
    if ( (*(_BYTE *)(v10 + 10) & 4) == 0 )
      v19 = (_WORD **)(v10 + 24);
    v20 = *v19;
    *(_QWORD *)(a1 + 104) = v20;
    return *v20 != 23117 ? 0xC000012F : 0;
  }
  return result;
}
