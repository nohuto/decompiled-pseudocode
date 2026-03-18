/*
 * XREFs of ?CheckAndAddHandoff@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCBaseAnimation@2@PEAVCAnimationBinding@2@@Z @ 0x1401B95EC
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCBaseAnimation@2@@Z @ 0x1401A3234 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPOSITIO.c)
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400ADC68 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1400AE4E0 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z @ 0x14023C0C8 (-GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CheckAndAddHandoff(
        union _SLIST_HEADER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD),
        __int64 a5)
{
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  DirectComposition::CAnimationMarshaler *v16; // rbx
  _DWORD v18[10]; // [rsp+20h] [rbp-28h] BYREF
  bool v19; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  v9 = (**a4)(a4);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 96LL))(v9);
  v11 = v10;
  if ( v10 && *(_DWORD *)(v10 + 156) )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(a1);
    v12 = 0LL;
    v18[0] = 0;
    if ( a5
      && (v13 = (***(__int64 (__fastcall ****)(_QWORD))(a5 + 24))(*(_QWORD *)(a5 + 24)), (v12 = v13) != 0)
      && (v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 176LL))(v13)) != 0 )
    {
      v18[0] = *(_DWORD *)(v14 + 72);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)a2 + 320LL))(a2, a3, v18);
      if ( !v12 )
      {
LABEL_13:
        *(_DWORD *)(v11 + 176) = v18[0];
        return v8;
      }
    }
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 96LL))(v12);
    v16 = (DirectComposition::CAnimationMarshaler *)v15;
    if ( v15 )
    {
      if ( *(_QWORD *)(v11 + 168) || (*(_DWORD *)(v11 + 32) & 0x1000) != 0 || v15 == v11 )
        return (unsigned int)-1073741811;
      *(_QWORD *)(v11 + 168) = v15;
      DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)(v15 + 16));
      v19 = 0;
      DirectComposition::CAnimationMarshaler::GetAnimationTimeState(
        v16,
        &v19,
        (__int64 *)(v11 + 184),
        (unsigned __int64 *)(v11 + 192));
      *(_BYTE *)(v11 + 200) = v19 | *(_BYTE *)(v11 + 200) & 0xFE;
      *((_DWORD *)v16 + 8) |= 0x1000u;
    }
    goto LABEL_13;
  }
  return v8;
}
