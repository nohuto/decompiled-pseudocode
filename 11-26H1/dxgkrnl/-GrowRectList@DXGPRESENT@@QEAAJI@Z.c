/*
 * XREFs of ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1402BD77C
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1402BBFE4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGPRESENT::GrowRectList(DXGPRESENT *this, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  __int64 i; // rdi
  unsigned int v5; // r8d
  unsigned __int64 v7; // rax
  __int64 v8; // rax

  v2 = a2;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v5 = 1;
    if ( *((_DWORD *)this + 17) )
      v5 = *((_DWORD *)this + 17);
    if ( (unsigned int)i >= v5 )
      return 0LL;
    if ( *((_DWORD *)this + i + 40) < (unsigned int)v2 )
      break;
LABEL_6:
    ;
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + i + 28));
  v7 = 16 * v2;
  if ( !is_mul_ok(v2, 0x10uLL) )
    v7 = -1LL;
  v8 = operator new[](v7, 0x4B677844u, 256LL);
  *((_QWORD *)this + i + 28) = v8;
  if ( v8 )
  {
    *((_DWORD *)this + i + 40) = v2;
    goto LABEL_6;
  }
  *((_DWORD *)this + i + 40) = 0;
  WdLogSingleEntry2(6LL, this, v2);
  WdLogGlobalForLineNumber = 10534;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"0x%I64x fails to allocate array of 0x%I64d RECTs",
    (__int64)this,
    v2,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
