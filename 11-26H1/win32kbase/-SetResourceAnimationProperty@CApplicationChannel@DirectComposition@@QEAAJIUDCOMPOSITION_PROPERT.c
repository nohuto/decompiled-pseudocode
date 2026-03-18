/*
 * XREFs of ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIUDCOMPOSITION_PROPERTY_ID@@I@Z @ 0x1401BBFF8
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCBaseAnimation@2@@Z @ 0x1401A3234 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPOSITIO.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceAnimationProperty(
        DirectComposition::CApplicationChannel *a1,
        int a2,
        unsigned int a3,
        int a4)
{
  struct DirectComposition::CResourceMarshaler *v7; // rax
  struct DirectComposition::CBaseAnimation *v8; // r14
  struct DirectComposition::CResourceMarshaler *v9; // rax
  __int64 v10; // rsi
  unsigned __int8 (__fastcall *v12)(__int64, _QWORD, _QWORD); // rdi
  unsigned int v13; // eax

  v7 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a1, a4);
  if ( !v7 )
    return 3221225485LL;
  v8 = (struct DirectComposition::CBaseAnimation *)(*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v7 + 216LL))(v7);
  if ( !v8 )
    return 3221225485LL;
  v9 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a1, a2);
  v10 = (__int64)v9;
  if ( !v9 )
    return 3221225506LL;
  v12 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 304LL);
  v13 = (*(__int64 (__fastcall **)(struct DirectComposition::CBaseAnimation *))(*(_QWORD *)v8 + 8LL))(v8);
  if ( v12(v10, a3, v13) )
    return DirectComposition::CApplicationChannel::BindAnimation((__int64)a1, v10, a3, v8);
  else
    return 3221225485LL;
}
