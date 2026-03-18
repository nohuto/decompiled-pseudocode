/*
 * XREFs of ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x140152674
 * Callers:
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x140152270 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x14015232C (InvalidateWEFCOMPOSITEDDCEs.c)
 *     ?NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z @ 0x140152600 (-NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x140030AC0 (xxxInternalInvalidate.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall InvalidateWEFCOMPOSITEDWindow(struct tagWND *a1, __m128i *a2)
{
  __int64 v2; // rax
  __m128i v4; // xmm0
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rdx
  HRGN v8; // rdi
  _BYTE v10[16]; // [rsp+20h] [rbp-38h] BYREF
  __m128i v11; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v11 = *a2;
  v4 = v11;
  v6 = *(unsigned int *)(v2 + 92);
  v7 = *(unsigned int *)(v2 + 88);
  v11.m128i_i32[2] += v7;
  v11.m128i_i32[0] = v7 + _mm_cvtsi128_si32(v4);
  v11.m128i_i32[3] += v6;
  v11.m128i_i32[1] += v6;
  v8 = (HRGN)GreCreateRectRgnIndirect(&v11, v7, v6);
  if ( v8 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v10);
    xxxInternalInvalidate(a1, v8, 0x485u);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v10);
    GreDeleteObject(v8);
    return 1;
  }
  return v5;
}
