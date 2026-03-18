/*
 * XREFs of ?Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x180129288
 * Callers:
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x18004AD90 (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F4FE0 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1801293B0 (--0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18012A1B8 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall CGDIBitmapRealization::Create(void *a1, struct _LUID a2, struct IGDIBitmapRealization **a3)
{
  CGDIBitmapRealization *v6; // rax
  CGDIBitmapRealization *v7; // rax
  CDxHandleBitmapRealization *v8; // rbx
  int v9; // edi
  unsigned int v10; // eax
  _QWORD v12[3]; // [rsp+38h] [rbp-69h] BYREF
  __int128 v13; // [rsp+50h] [rbp-51h]
  _DWORD v14[18]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+Fh]
  __m128i si128; // [rsp+B8h] [rbp+17h]

  *a3 = 0LL;
  memset_0(v14, 0, 0x90uLL);
  v14[0] = 1;
  v14[17] = 1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v13 = 0LL;
  v14[12] = 0;
  v15 = 1065353216LL;
  v12[0] = 2LL;
  v12[1] = a1;
  v12[2] = a2;
  v6 = (CGDIBitmapRealization *)operator new(0x1A8uLL);
  if ( !v6 )
  {
    v8 = 0LL;
    goto LABEL_9;
  }
  v7 = CGDIBitmapRealization::CGDIBitmapRealization(
         v6,
         (const struct CSM_BUFFER_ATTRIBUTES *)v14,
         (const struct CSM_REALIZATION_INFO *)v12);
  v8 = v7;
  if ( !v7 )
  {
LABEL_9:
    v9 = -2147024882;
    v10 = 42;
    goto LABEL_5;
  }
  CMILRefCountImpl::AddReference((CGDIBitmapRealization *)((char *)v7 + 8));
  v9 = CDxHandleBitmapRealization::Initialize(v8);
  if ( v9 >= 0 )
  {
    *a3 = (struct IGDIBitmapRealization *)(((unsigned __int64)v8 + 400) & -(__int64)(v8 != 0LL));
    return (unsigned int)v9;
  }
  v10 = 43;
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v10, 0LL);
  if ( v8 )
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease((volatile signed __int32 *)v8);
  return (unsigned int)v9;
}
