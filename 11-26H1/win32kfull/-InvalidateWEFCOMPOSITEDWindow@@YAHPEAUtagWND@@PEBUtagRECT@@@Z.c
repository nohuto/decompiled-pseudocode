/*
 * XREFs of ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x14011D54C
 * Callers:
 *     ?NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z @ 0x14011D4E0 (-NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x14011E010 (FlushWEFCOMPOSITEDDCEBounds.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall InvalidateWEFCOMPOSITEDWindow(struct tagWND *a1, __m128i *a2)
{
  __int64 v2; // rax
  __m128i v4; // xmm0
  unsigned int v5; // ebx
  int v6; // r8d
  int v7; // edx
  HRGN v8; // rdi
  _BYTE v10[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  __m128i v12; // [rsp+30h] [rbp-20h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v12 = *a2;
  v4 = v12;
  v6 = *(_DWORD *)(v2 + 92);
  v7 = *(_DWORD *)(v2 + 88);
  v12.m128i_i32[2] += v7;
  v12.m128i_i32[3] += v6;
  v12.m128i_i32[1] += v6;
  v12.m128i_i32[0] = v7 + _mm_cvtsi128_si32(v4);
  v8 = (HRGN)GreCreateRectRgnIndirect(&v12);
  if ( v8 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v10);
    xxxInternalInvalidate(a1, v8, 0x485u);
    if ( v10[0] )
      --*(_DWORD *)(v11 + 28);
    GreDeleteObject(v8);
    return 1;
  }
  return v5;
}
