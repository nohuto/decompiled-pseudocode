/*
 * XREFs of ?GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z @ 0x1401F42C8
 * Callers:
 *     DpiRectContainsRectWithSubpixel @ 0x14002C5C4 (DpiRectContainsRectWithSubpixel.c)
 * Callees:
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14002BD18 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14002C4D4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1401F43FC (ScaleDpiOffsetWithSubpixel.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall GetDpiRectWithSubpixel(
        const struct tagRECT *a1,
        const float *a2,
        const struct tagWND *a3,
        const struct tagWND *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8)
{
  __int128 v8; // xmm1
  __int64 v9; // rcx
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  float v16; // xmm1_4
  int v17; // [rsp+20h] [rbp-30h] BYREF
  int v18; // [rsp+24h] [rbp-2Ch]
  __int128 v19; // [rsp+28h] [rbp-28h] BYREF
  __int128 v20; // [rsp+38h] [rbp-18h] BYREF

  v8 = (__int128)*a1;
  v9 = *(_QWORD *)&a1->right;
  v13 = v8;
  v14 = v9 - v8;
  v17 = v9 - v8;
  v15 = HIDWORD(v9) - DWORD1(v8);
  v18 = HIDWORD(v9) - DWORD1(v8);
  v19 = v8;
  v20 = 0LL;
  if ( a2 )
    v20 = *(_OWORD *)a2;
  if ( a3 && a4 && a3 != a4 )
  {
    LogicalToPhysicalInPlaceRectWithSubpixel(a4, (int *)&v19, (float *)&v20);
    PhysicalToLogicalInPlaceRectWithSubpixel(a3, (int *)&v19, (float *)&v20);
    ScaleDpiOffsetWithSubpixel(&v17, (float *)&v20 + 2, a3, a4);
    v13 = v19;
    v15 = v18;
    v14 = v17;
  }
  v16 = (float)SDWORD1(v19) + *((float *)&v20 + 1);
  *a5 = (float)v13 + *(float *)&v20;
  *a6 = v16;
  *a7 = (float)((float)v14 + *a5) + *((float *)&v20 + 2);
  *a8 = (float)((float)v15 + *a6) + *((float *)&v20 + 3);
}
