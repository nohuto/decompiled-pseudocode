/*
 * XREFs of ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x18012945C
 * Callers:
 *     ??0CGDISectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x180129204 (--0CGDISectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUC.c)
 * Callees:
 *     ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x18012A06C (--0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 */

CSectionBitmapRealization *__fastcall CSectionBitmapRealization::CSectionBitmapRealization(
        CSectionBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        const struct CSM_SYSMEM_SECTION_INFO *a4,
        bool a5)
{
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  CSectionBitmapRealization *result; // rax

  CBitmapRealization::CBitmapRealization(this, 0LL);
  v7 = *(_OWORD *)a4;
  v8 = *((_QWORD *)a4 + 2);
  *(_QWORD *)this = &CSectionBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CGDISectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 10) = &CSectionBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 11) = &CGDISectionBitmapRealization::`vftable'{for `IRemotableBitmapRealization'};
  *((_QWORD *)this + 41) = &CGDISectionBitmapRealization::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 42) = &CGDISectionBitmapRealization::`vftable'{for `IPixelColor'};
  *((_QWORD *)this + 43) = 0LL;
  *((_BYTE *)this + 384) = a5;
  result = this;
  *((_OWORD *)this + 22) = v7;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 46) = v8;
  return result;
}
