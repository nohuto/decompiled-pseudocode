/*
 * XREFs of ?Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCBaseAnimation@2@@Z @ 0x14022B458
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCBaseAnimation@2@@Z @ 0x1401A3234 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPOSITIO.c)
 *     ?Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCBaseAnimation@2@PEAPEAV12@@Z @ 0x14022B3D4 (-Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_.c)
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400ADC68 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall DirectComposition::CAnimationBinding::Initialize(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  DirectComposition::CResourceMarshaler *v4; // rax

  *(_DWORD *)(a1 + 12) = a3;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = a1;
  *(_QWORD *)(a1 + 24) = a4;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a4 + 8);
  *(_QWORD *)(a4 + 8) = a1;
  *(_DWORD *)(a1 + 8) = 2;
  v4 = (DirectComposition::CResourceMarshaler *)(**(__int64 (__fastcall ***)(__int64))a4)(a4);
  return DirectComposition::CResourceMarshaler::AddRef(v4);
}
