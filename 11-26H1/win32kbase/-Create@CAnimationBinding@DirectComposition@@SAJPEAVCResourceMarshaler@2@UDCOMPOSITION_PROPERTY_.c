/*
 * XREFs of ?Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCBaseAnimation@2@PEAPEAV12@@Z @ 0x14022B3D4
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCBaseAnimation@2@@Z @ 0x1401A3234 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPOSITIO.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCBaseAnimation@2@@Z @ 0x14022B458 (-Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@UDCOMPOSITION_PRO.c)
 */

__int64 __fastcall DirectComposition::CAnimationBinding::Create(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 result; // rax

  v8 = Win32AllocPoolWithQuotaZInitImpl(a1, 0x30uLL, 0x62614344u);
  v9 = v8;
  if ( !v8 )
    return 3221225495LL;
  *(_DWORD *)(v8 + 12) = 0;
  DirectComposition::CAnimationBinding::Initialize(v8, a1, a2, a3);
  result = 0LL;
  *a4 = v9;
  return result;
}
