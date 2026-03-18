/*
 * XREFs of ?AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180158998
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801580A0 (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180009D20 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x180158E4C (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::AddNewContent(
        CComposeTop *this,
        struct IBitmapResource *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4)
{
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v11; // r8
  struct CShape *v13; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0;
  if ( !ShapeBoundsEmpty(a3) )
  {
    if ( *(CComposition **)this != GetCurrentFrameId() )
    {
      std::unique_ptr<CShape>::reset((__int64 (__fastcall ****)(_QWORD, __int64))this + 2, 0LL);
      *(_QWORD *)this = GetCurrentFrameId();
    }
    v13 = 0LL;
    v9 = CShape::CopyShape(a3, 0LL, &v13);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x33u, 0LL);
    }
    else
    {
      std::unique_ptr<CShape>::reset(
        (__int64 (__fastcall ****)(_QWORD, __int64))this + 2,
        (__int64 (__fastcall ***)(_QWORD, __int64))v13);
      wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)this + 1, (__int64)a2);
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)a4;
      *(_OWORD *)((char *)this + 40) = *((_OWORD *)a4 + 1);
      *(_OWORD *)((char *)this + 56) = *((_OWORD *)a4 + 2);
      *(_OWORD *)((char *)this + 72) = *((_OWORD *)a4 + 3);
      *((_DWORD *)this + 22) = *((_DWORD *)a4 + 16);
      *(_OWORD *)((char *)this + 92) = *(_OWORD *)a4;
      *(_OWORD *)((char *)this + 108) = *((_OWORD *)a4 + 1);
      *(_OWORD *)((char *)this + 124) = *((_OWORD *)a4 + 2);
      *(_OWORD *)((char *)this + 140) = *((_OWORD *)a4 + 3);
      *((_DWORD *)this + 39) = *((_DWORD *)a4 + 16);
      CMILMatrix::Invert((CComposeTop *)((char *)this + 92), v10, v11);
    }
  }
  return v8;
}
