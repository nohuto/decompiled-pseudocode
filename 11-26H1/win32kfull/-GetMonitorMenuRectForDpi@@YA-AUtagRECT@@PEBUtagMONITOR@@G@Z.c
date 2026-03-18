/*
 * XREFs of ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1401766F4
 * Callers:
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x140175E24 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     GetMonitorMenuRectForWindow @ 0x140175FCC (GetMonitorMenuRectForWindow.c)
 *     GetMonitorMenuRect @ 0x140176008 (GetMonitorMenuRect.c)
 *     FindBestPos @ 0x14017604C (FindBestPos.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     ExpandMonitorSpaceVertex @ 0x1401768E8 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x140176948 (ScaleDPIRect.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

struct tagRECT *__fastcall GetMonitorMenuRectForDpi(
        struct tagRECT *__return_ptr retstr,
        const struct tagMONITOR *a2,
        unsigned __int16 a3)
{
  struct tagRECT v3; // xmm1
  __int64 v6; // rcx
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i v14; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v15; // [rsp+40h] [rbp-38h] BYREF

  v3 = (struct tagRECT)*((_OWORD *)a2 + 7);
  v6 = *((_QWORD *)a2 + 15);
  v15 = v3;
  if ( v3.left >= (int)v6 || v15.top >= SHIDWORD(v6) )
  {
    v9 = *GetMonitorRectForDpi(&v14, (__int64)a2, a3);
LABEL_7:
    *retstr = (struct tagRECT)v9;
    return retstr;
  }
  if ( a3 )
  {
    v10 = *((_QWORD *)a2 + 5);
    v11 = *(__m128i *)(v10 + 28);
    v12 = *(unsigned __int16 *)(v10 + 62);
    v14 = v11;
    v13 = ExpandMonitorSpaceVertex(a3, v12, v11.m128i_i64[0]);
    ScaleDPIRect(
      (unsigned int)&v15,
      (unsigned int)&v15,
      a3,
      *(unsigned __int16 *)(*((_QWORD *)a2 + 5) + 60LL),
      v13,
      v11.m128i_i64[0]);
    v9 = (__m128i)v15;
    goto LABEL_7;
  }
  *retstr = v3;
  return retstr;
}
