/*
 * XREFs of ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x140159A60
 * Callers:
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1401597F0 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     GetMonitorMenuRectForWindow @ 0x1401599E0 (GetMonitorMenuRectForWindow.c)
 *     GetMonitorMenuRect @ 0x140159A1C (GetMonitorMenuRect.c)
 *     FindBestPos @ 0x140159FA4 (FindBestPos.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140091044 (GetMonitorRectForDpi.c)
 *     ExpandMonitorSpaceVertex @ 0x140159BD0 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x140159C30 (ScaleDPIRect.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

struct tagRECT *__fastcall GetMonitorMenuRectForDpi(
        struct tagRECT *__return_ptr retstr,
        const struct tagMONITOR *a2,
        unsigned __int16 a3)
{
  struct tagRECT v3; // xmm1
  __int64 v6; // rcx
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __m128i v13; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v14; // [rsp+40h] [rbp-38h] BYREF

  v3 = (struct tagRECT)*((_OWORD *)a2 + 7);
  v6 = *((_QWORD *)a2 + 15);
  v14 = v3;
  if ( v3.left >= (int)v6 || v14.top >= SHIDWORD(v6) )
  {
    v9 = *GetMonitorRectForDpi(&v13, (__int64)a2, a3);
LABEL_7:
    *retstr = (struct tagRECT)v9;
    return retstr;
  }
  if ( a3 )
  {
    v10 = *((_QWORD *)a2 + 5);
    v11 = *(unsigned __int16 *)(v10 + 62);
    v13 = *(__m128i *)(v10 + 28);
    v12 = ExpandMonitorSpaceVertex(a3, v11, v13.m128i_i64[0]);
    ScaleDPIRect(
      (unsigned int)&v14,
      (unsigned int)&v14,
      a3,
      *(unsigned __int16 *)(*((_QWORD *)a2 + 5) + 60LL),
      v12,
      v13.m128i_i64[0]);
    v9 = (__m128i)v14;
    goto LABEL_7;
  }
  *retstr = v3;
  return retstr;
}
