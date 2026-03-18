/*
 * XREFs of ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1402B27C4
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1402B1274 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x14029C71C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1402B32A4 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402B3610 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1402B5448 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 *     ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1402B5E3C (-GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        struct DXGDXGIKEYEDMUTEX *a3,
        struct _PRODUCER_INFO *a4,
        int *a5,
        int *a6)
{
  int v6; // r13d
  __int64 v10; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  int v12; // ecx
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // r14
  void *Buffer; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  struct _D3DKMT_PRESENT_RGNS *v20; // rcx
  struct _D3DKMT_PRESENT_RGNS *v21; // r12
  int v22; // eax
  const wchar_t *v23; // r9
  __int64 v25; // rcx
  unsigned int v26; // edx
  const wchar_t *v27; // r9
  __int64 v28; // rax
  UINT *v29; // rcx
  const RECT *DirtyRectData; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // [rsp+28h] [rbp-61h]
  union _LARGE_INTEGER v35; // [rsp+58h] [rbp-31h] BYREF
  struct _D3DKMT_PRESENT_RGNS v36; // [rsp+60h] [rbp-29h] BYREF
  struct DXGDXGIKEYEDMUTEX *v37; // [rsp+80h] [rbp-9h]
  struct tagRECT v38; // [rsp+88h] [rbp-1h] BYREF

  v6 = 0;
  v37 = a3;
  LODWORD(v10) = 0;
  if ( a5 )
    *a5 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = *(_DWORD *)a2;
  v35 = PerformanceCounter;
  if ( v12 )
  {
    if ( (unsigned int)(v12 - 1) <= 1 )
    {
      *(LARGE_INTEGER *)a4 = PerformanceCounter;
      v13 = *(_OWORD *)*((_QWORD *)a2 + 4);
      *((_DWORD *)a4 + 5) = 1;
      *(_OWORD *)((char *)a4 + 24) = v13;
      if ( *(_DWORD *)a2 == 2 )
      {
        v14 = *((_QWORD *)a2 + 3);
        v15 = (unsigned int)(*(_DWORD *)(v14 + 8) * *(_DWORD *)(v14 + 12));
        Buffer = AUTOEXPANDALLOCATION::GetBuffer(
                   *((AUTOEXPANDALLOCATION **)a4 + 11),
                   *(_DWORD *)(v14 + 8) * *(_DWORD *)(v14 + 12),
                   0);
        v17 = *((_QWORD *)a2 + 3);
        if ( Buffer )
        {
          memmove(Buffer, *(const void **)(v17 + 24), (unsigned int)v15);
          v18 = *((_QWORD *)a2 + 3);
          *((_OWORD *)a4 + 3) = *(_OWORD *)v18;
          *((_OWORD *)a4 + 4) = *(_OWORD *)(v18 + 16);
          *((_QWORD *)a4 + 10) = *(_QWORD *)(v18 + 32);
          *((_QWORD *)a4 + 9) = 0LL;
          *((_DWORD *)a4 + 10) = 1;
        }
        else
        {
          WdLogSingleEntry2(6LL, v15, *(unsigned int *)(v17 + 16));
          v34 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 16LL);
          WdLogGlobalForLineNumber = 1842;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate 0x%I64x bytes for new pointer shape on source 0x%I64x",
            v15,
            v34,
            0LL,
            0LL,
            0LL);
          LODWORD(v10) = -1073741801;
        }
      }
    }
    return (unsigned int)v10;
  }
  v19 = *((unsigned int *)this + 10);
  memset(&v36, 0, sizeof(v36));
  v38 = 0LL;
  if ( (_DWORD)v19 != 1 || *((_DWORD *)this + 70) == 1 || (*((_DWORD *)a2 + 6) & 4) != 0 )
  {
    WdLogSingleEntry2(4LL, *((int *)this + 70), v19);
    v25 = *((_QWORD *)a2 + 1);
    v26 = *((_DWORD *)a2 + 7);
    WdLogGlobalForLineNumber = 1685;
    LODWORD(v10) = GetAllocationSize(*(struct DXGDEVICE **)(v25 + 16), v26, &v38);
    if ( (int)v10 < 0 )
    {
      WdLogSingleEntry0(2LL);
      v27 = L"Failed to find source surface size";
      v28 = 1691LL;
      goto LABEL_35;
    }
    v36.DirtyRectCount = 1;
    v36.pDirtyRects = &v38;
    v21 = &v36;
    *((_DWORD *)this + 70) = 0;
  }
  else
  {
    v20 = (struct _D3DKMT_PRESENT_RGNS *)*((_QWORD *)a2 + 5);
    v21 = v20;
    if ( !v20->DirtyRectCount && !v20->MoveRectCount )
      v6 = 1;
  }
  if ( !v37 )
  {
    if ( *((_DWORD *)a4 + 4) == 2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1780;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pFrameInfo->PresentUpdateStatus != PRODUCER_INFO_PRESENT_UPDATE_READY",
        1780LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !v6 )
    {
      if ( !(unsigned int)DDAMetaData::CombineNewMetaData(
                            *((DDAMetaData **)a4 + 1),
                            v21,
                            &v35,
                            *((_DWORD *)a2 + 6) & 1,
                            a6) )
      {
        WdLogSingleEntry0(2LL);
        v27 = L"Failed to combine present regions to metadata";
        v28 = 1792LL;
        goto LABEL_35;
      }
      *((_DWORD *)a4 + 4) = 1;
    }
    if ( *((_DWORD *)a4 + 4) == 1 )
      LODWORD(v10) = 259;
    if ( a5 )
      *a5 = 0;
    return (unsigned int)v10;
  }
  if ( v6
    || (unsigned int)DDAMetaData::CombineNewMetaData(*((DDAMetaData **)a4 + 1), v21, &v35, *((_DWORD *)a2 + 6) & 1, a6) )
  {
    if ( *((_DWORD *)a4 + 4) == 1 )
    {
      v29 = (UINT *)*((_QWORD *)a4 + 1);
      *(&v36.DirtyRectCount + 1) = 0;
      *(&v36.MoveRectCount + 1) = 0;
      v36.DirtyRectCount = v29[6];
      DirtyRectData = DDAMetaData::GetDirtyRectData((DDAMetaData *)v29, v36.DirtyRectCount);
      v31 = *((_QWORD *)a4 + 1);
      v36.pDirtyRects = DirtyRectData;
      v36.MoveRectCount = *(_DWORD *)(v31 + 44);
      v32 = *((unsigned int *)this + 11);
      v36.pMoveRects = **(const D3DKMT_MOVE_RECT ***)(v31 + 48);
      v33 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
              this,
              a2,
              *((_DWORD *)a2 + 7),
              *(_DWORD *)(*((_QWORD *)this + v32 + 6) + 92LL),
              &v36);
      v10 = v33;
      if ( v33 < 0 )
      {
        WdLogSingleEntry1(2LL);
        v23 = L"Failed to copy pixel data from accumulated + new present rgns, Status 0x%I64x";
        WdLogGlobalForLineNumber = 1742;
        goto LABEL_19;
      }
    }
    else
    {
      if ( v6 )
      {
        if ( a5 )
          *a5 = 0;
        return (unsigned int)v10;
      }
      v22 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
              this,
              a2,
              *((_DWORD *)a2 + 7),
              *(_DWORD *)(*((_QWORD *)this + *((unsigned int *)this + 11) + 6) + 92LL),
              v21);
      v10 = v22;
      if ( v22 < 0 )
      {
        WdLogSingleEntry1(2LL);
        v23 = L"Failed to copy pixel data from new present rgns, Status 0x%I64x";
        WdLogGlobalForLineNumber = 1761;
LABEL_19:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v23, v10, 0LL, 0LL, 0LL, 0LL);
        return (unsigned int)v10;
      }
    }
    *((_DWORD *)a4 + 4) = 2;
    return (unsigned int)v10;
  }
  WdLogSingleEntry0(2LL);
  v27 = L"Failed to combine present regions to metadata";
  v28 = 1724LL;
LABEL_35:
  WdLogGlobalForLineNumber = v28;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v27, v28, 0LL, 0LL, 0LL, 0LL);
  return 3221225473LL;
}
