/*
 * XREFs of ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x140323610
 * Callers:
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x14003D504 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkPresent @ 0x140323BB0 (DxgkPresent.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Get@?$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z @ 0x14004C144 (-Get@-$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z.c)
 *     ?Get@?$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z @ 0x140051600 (-Get@-$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x140194BE4 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 */

__int64 __fastcall DXGPRESENT::CopyPresentArgs(DXGPRESENT *this, struct DXGCONTEXT *a2, struct _D3DKMT_PRESENT *a3)
{
  char CurrentThreadPreviousMode; // r8
  _OWORD *v7; // rcx
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rax
  unsigned __int64 SubRectCnt; // rcx
  unsigned __int64 v10; // rax
  unsigned int v11; // edx
  signed int v12; // r14d
  RECT *v13; // r14
  size_t v14; // r8
  RECT *pSrcSubRects; // rdx
  D3DKMT_PRESENT_RGNS *v16; // r14
  unsigned __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // r15d
  __int64 v21; // rdx
  unsigned int v22; // r15d
  struct _D3DKMT_MOVE_RECT *v23; // r13
  void *v24; // rax
  void *v25; // r12
  void *v26; // rdx
  volatile void **v27; // rsi
  unsigned __int64 v28; // rax
  unsigned int Size; // [rsp+50h] [rbp-58h]
  unsigned int Sizea; // [rsp+50h] [rbp-58h]
  unsigned __int64 v31; // [rsp+58h] [rbp-50h]
  char v32; // [rsp+C8h] [rbp+20h]

  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v32 = CurrentThreadPreviousMode;
  if ( (a3->Flags.Value & 0x400000) != 0 )
  {
    v7 = (_OWORD *)((char *)this + 448);
    pPresentRegions = a3->pPresentRegions;
    if ( CurrentThreadPreviousMode == 1 )
    {
      RtlCopyFromUser(v7, a3->pPresentRegions, 0x20uLL);
    }
    else
    {
      *v7 = *(_OWORD *)&pPresentRegions->DirtyRectCount;
      *((_OWORD *)this + 29) = *(_OWORD *)&pPresentRegions->MoveRectCount;
    }
  }
  if ( a3->pSrcSubRects )
  {
    SubRectCnt = a3->SubRectCnt;
    v31 = SubRectCnt;
    v10 = 16LL * (unsigned int)SubRectCnt;
    v11 = -1;
    if ( v10 <= 0xFFFFFFFF )
      v11 = 16 * SubRectCnt;
    Size = v11;
    v12 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v10 > 0xFFFFFFFF )
    {
      WdLogSingleEntry4(2LL, v12, a2, SubRectCnt, 16LL);
      WdLogGlobalForLineNumber = 11710;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x from 0x%I64x due to multiplication overflow 0x%I64d x 0x%I64d",
        v12,
        (__int64)a2,
        a3->SubRectCnt,
        16LL,
        0LL);
      return (unsigned int)v12;
    }
    v13 = (RECT *)((char *)this + 480);
    if ( (unsigned int)SubRectCnt > 0x10 )
    {
      v13 = (RECT *)*((_QWORD *)this + 92);
      if ( (unsigned int)SubRectCnt > *((_DWORD *)this + 186) )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v13);
        v28 = 16 * v31;
        if ( !is_mul_ok(v31, 0x10uLL) )
          v28 = -1LL;
        v13 = (RECT *)operator new[](v28, 0x4B677844u, 256LL);
        *((_QWORD *)this + 92) = v13;
        *((_DWORD *)this + 186) = v13 != 0LL ? v31 : 0;
        v11 = Size;
      }
    }
    if ( !v13 )
    {
      WdLogSingleEntry3(6LL, -1073741801LL, a2, a3->SubRectCnt);
      WdLogGlobalForLineNumber = 11720;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"0x%I64x from 0x%I64x SubRectCnt = 0x%I64d",
        -1073741801LL,
        (__int64)a2,
        a3->SubRectCnt,
        0LL,
        0LL);
      return 3221225495LL;
    }
    v14 = v11;
    pSrcSubRects = (RECT *)a3->pSrcSubRects;
    if ( v32 == 1 )
      RtlCopyFromUser(v13, pSrcSubRects, v14);
    else
      memmove(v13, pSrcSubRects, v14);
    a3->pSrcSubRects = v13;
  }
  if ( (a3->Flags.Value & 0x400000) == 0 )
  {
    v16 = 0LL;
LABEL_17:
    a3->pPresentRegions = v16;
    return 0LL;
  }
  v16 = (D3DKMT_PRESENT_RGNS *)((char *)this + 448);
  v18 = 16LL * *((unsigned int *)this + 112);
  v19 = -1;
  if ( v18 <= 0xFFFFFFFF )
    v19 = 16 * *((_DWORD *)this + 112);
  Sizea = v19;
  v20 = v18 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v18 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11751;
    return v20;
  }
  else
  {
    v21 = *((unsigned int *)this + 116);
    v22 = 24 * v21;
    if ( (unsigned __int64)(24 * v21) > 0xFFFFFFFF )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 11759;
      return 3221225621LL;
    }
    if ( v22 + v19 < v22 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 11767;
      return 3221225621LL;
    }
    if ( !(v22 + v19) )
    {
      *((_QWORD *)this + 59) = 0LL;
      *((_QWORD *)this + 57) = 0LL;
      goto LABEL_17;
    }
    v23 = (struct _D3DKMT_MOVE_RECT *)CCachedData<_D3DKMT_MOVE_RECT,4>::Get((__int64)this + 752, v21);
    v24 = (void *)CCachedData<tagRECT,16>::Get((__int64)this + 864, v16->DirtyRectCount);
    v25 = v24;
    if ( v23 && v24 )
    {
      if ( v16->DirtyRectCount )
      {
        v26 = (void *)*((_QWORD *)this + 57);
        if ( v32 == 1 )
          RtlCopyFromUser(v24, v26, Sizea);
        else
          memmove(v24, v26, Sizea);
        *((_QWORD *)this + 57) = v25;
      }
      else
      {
        *((_QWORD *)this + 57) = 0LL;
      }
      if ( *((_DWORD *)this + 116) )
      {
        v27 = (volatile void **)((char *)this + 472);
        if ( v32 == 1 )
          ProbeForRead(*v27, v22, 1u);
        TranslateAndCopyDWMMoveRegionToDDAMoveRegions(
          *((_DWORD *)this + 116),
          (const struct _D3DKMT_MOVE_RECT *)*v27,
          v23);
        *v27 = v23;
      }
      else
      {
        *((_QWORD *)this + 59) = 0LL;
      }
      goto LABEL_17;
    }
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 11780;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to alloc buffer for kernel copy of meta data.",
      11780LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741801LL;
  }
}
