/*
 * XREFs of ?InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1401626FC
 * Callers:
 *     DoPrediction @ 0x1401626C0 (DoPrediction.c)
 * Callees:
 *     ?vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z @ 0x140162588 (-vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x140163590 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall InitializeContactPrediction(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagHPD_PREDICTION_INFO *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 y; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14[2]; // [rsp+38h] [rbp-10h] BYREF
  struct tagHID_POINTER_DEVICE_INFO *v15; // [rsp+90h] [rbp+48h] BYREF
  struct tagPOINT v16; // [rsp+98h] [rbp+50h] BYREF
  struct tagPOINT v17; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+60h] BYREF

  v17 = a3;
  v16 = a2;
  v15 = a1;
  memset_0(a4, 0, 0x1B0uLL);
  memset_0((char *)a4 + 864, 0, 0x1B0uLL);
  memset_0((char *)a4 + 432, 0, 0x1B0uLL);
  memset_0((char *)a4 + 1296, 0, 0x1B0uLL);
  v15 = 0LL;
  v18 = 0LL;
  v13 = 0LL;
  v14[0] = 0LL;
  Prediction::tagRlsFilter::vInit((__int64)a4, v14, &v13, &v18, &v15);
  *((_OWORD *)a4 + 108) = 0LL;
  v9 = (__int64)a3.x << 32;
  *((_OWORD *)a4 + 109) = 0LL;
  *((_OWORD *)a4 + 116) = 0LL;
  *((_QWORD *)a4 + 268) = v9;
  *((_QWORD *)a4 + 272) = v9;
  *((_QWORD *)a4 + 276) = 0LL;
  v15 = 0LL;
  v18 = 0LL;
  v14[0] = 0LL;
  v13 = 0LL;
  Prediction::tagRlsFilter::vInit((__int64)a4 + 864, &v13, v14, &v18, &v15);
  *((_OWORD *)a4 + 112) = 0LL;
  *((_OWORD *)a4 + 113) = 0LL;
  v10 = (__int64)a2.x << 32;
  *((_OWORD *)a4 + 118) = 0LL;
  *((_QWORD *)a4 + 270) = v10;
  *((_QWORD *)a4 + 274) = v10;
  *((_QWORD *)a4 + 278) = 0LL;
  v15 = 0LL;
  v18 = 0LL;
  v14[0] = 0LL;
  v13 = 0LL;
  Prediction::tagRlsFilter::vInit((__int64)a4 + 432, &v13, v14, &v18, &v15);
  y = v17.y;
  *((_OWORD *)a4 + 110) = 0LL;
  y <<= 32;
  *((_OWORD *)a4 + 111) = 0LL;
  *((_OWORD *)a4 + 117) = 0LL;
  *((_QWORD *)a4 + 269) = y;
  *((_QWORD *)a4 + 273) = y;
  *((_QWORD *)a4 + 277) = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  v18 = 0LL;
  v14[0] = 0LL;
  Prediction::tagRlsFilter::vInit((__int64)a4 + 1296, v14, &v18, &v15, &v17);
  v12 = v16.y;
  *((_OWORD *)a4 + 114) = 0LL;
  v12 <<= 32;
  *((_OWORD *)a4 + 115) = 0LL;
  *((_OWORD *)a4 + 119) = 0LL;
  *((_QWORD *)a4 + 271) = v12;
  *((_QWORD *)a4 + 275) = v12;
  *((_QWORD *)a4 + 279) = 0LL;
  *((_QWORD *)a4 + 262) = 0LL;
  *((_QWORD *)a4 + 263) = 0LL;
  *((_QWORD *)a4 + 264) = 0LL;
  *((_QWORD *)a4 + 265) = 0LL;
  memset_0((char *)a4 + 1924, 0, 0x54uLL);
  *((_DWORD *)a4 + 480) = 3;
  memset_0((char *)a4 + 2012, 0, 0x54uLL);
  *((_DWORD *)a4 + 502) = 3;
  v17.x = 0;
  v16 = 0LL;
  v15 = 0LL;
  Prediction::tagRlsFilter::Filter(a4, &v18, &v15, &v16, &v17);
  v16 = 0LL;
  v15 = 0LL;
  Prediction::tagRlsFilter::Filter((char *)a4 + 432, &v18, &v15, &v16, &v17);
  v16 = 0LL;
  v15 = 0LL;
  Prediction::tagRlsFilter::Filter((char *)a4 + 864, &v18, &v15, &v16, &v17);
  v16 = 0LL;
  v15 = 0LL;
  Prediction::tagRlsFilter::Filter((char *)a4 + 1296, &v18, &v15, &v16, &v17);
  *a5 = a2;
  *a6 = a3;
}
