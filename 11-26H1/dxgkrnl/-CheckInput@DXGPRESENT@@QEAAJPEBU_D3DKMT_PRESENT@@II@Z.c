/*
 * XREFs of ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x14038DB04
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DXGPRESENT::CheckInput(DXGPRESENT *this, const struct _D3DKMT_PRESENT *a2, LONG a3, LONG a4)
{
  unsigned int v5; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r10d
  LONG left; // ecx
  LONG right; // edx
  LONG top; // r8d
  LONG bottom; // r9d
  int v14; // ecx
  SIZE_T v15; // rbx
  LONG v17; // ecx
  LONG v18; // edx
  UINT *v19; // rbx
  UINT *v20; // rdx
  void *v21; // rcx
  UINT SubRectCnt; // eax
  RECT SrcRect; // xmm1
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+28h] [rbp-40h]

  v5 = *((_DWORD *)this + 1) & 0xFFFFFFFB;
  *((_DWORD *)this + 1) = v5;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( *(_BYTE *)&Value < 0
    && ((left = a2->SrcRect.left, right = a2->SrcRect.right, right <= left)
     || (top = a2->SrcRect.top, bottom = a2->SrcRect.bottom, bottom <= top)
     || left >= a3
     || top >= a4
     || right <= 0
     || bottom <= 0)
    || (*(_BYTE *)&Value & 0x40) != 0
    && ((v17 = a2->DstRect.right, v17 <= a2->DstRect.left)
     || (v18 = a2->DstRect.bottom, v18 <= a2->DstRect.top)
     || v17 <= 0
     || v18 <= 0) )
  {
    *((_DWORD *)this + 1) = v5 | 4;
    return 0LL;
  }
  v14 = *((_DWORD *)this + 18);
  if ( v14 == Value
    && *((_DWORD *)this + 19) == a3
    && *((_DWORD *)this + 20) == a4
    && *((_DWORD *)this + 29) == a2->SubRectCnt
    && ((v14 & 0x80u) == 0 || RtlCompareMemory((char *)this + 100, &a2->SrcRect, 0x10uLL) == 16)
    && ((*((_DWORD *)this + 18) & 0x40) == 0 || RtlCompareMemory((char *)this + 84, &a2->DstRect, 0x10uLL) == 16) )
  {
    v15 = 16LL * *((unsigned int *)this + 29);
    if ( v15 == RtlCompareMemory(*((const void **)this + 15), a2->pSrcSubRects, v15) )
      return 0LL;
  }
  v19 = (UINT *)((char *)this + 116);
  v20 = (UINT *)((char *)this + 116);
  if ( *((_DWORD *)this + 29) >= a2->SubRectCnt )
  {
LABEL_25:
    if ( *((_DWORD *)this + 19) == a3 )
    {
      if ( *((_DWORD *)this + 20) == a4 )
      {
LABEL_27:
        v21 = (void *)*((_QWORD *)this + 15);
        *((_DWORD *)this + 18) = a2->Flags.0;
        SubRectCnt = a2->SubRectCnt;
        *v19 = SubRectCnt;
        memmove(v21, a2->pSrcSubRects, 16LL * SubRectCnt);
        *(RECT *)((char *)this + 84) = a2->DstRect;
        SrcRect = a2->SrcRect;
        *((_DWORD *)this + 1) |= 8u;
        *(RECT *)((char *)this + 100) = SrcRect;
        return 0LL;
      }
      v19 = v20;
    }
    *((_DWORD *)this + 1) |= 0x40u;
    *((_DWORD *)this + 19) = a3;
    *((_DWORD *)this + 20) = a4;
    goto LABEL_27;
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 15));
  v24 = 16LL * a2->SubRectCnt;
  if ( !is_mul_ok(a2->SubRectCnt, 0x10uLL) )
    v24 = -1LL;
  v25 = operator new[](v24, 0x4B677844u, 256LL);
  *((_QWORD *)this + 15) = v25;
  if ( v25 )
  {
    v20 = (UINT *)((char *)this + 116);
    goto LABEL_25;
  }
  *v19 = 0;
  WdLogSingleEntry2(6LL, this, a2->SubRectCnt);
  v26 = a2->SubRectCnt;
  WdLogGlobalForLineNumber = 10612;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"0x%I64x fails to allocate array of 0x%I64d RECTs",
    (__int64)this,
    v26,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
