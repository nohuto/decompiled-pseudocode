/*
 * XREFs of ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18006D060
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z @ 0x1800F7150 (-DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z @ 0x1800F7160 (-DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18002DE18 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x18003F830 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x18006D330 (-DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x18006D3CC (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 *     ?DeliverInput@NonBamoInputDeliveryServer@@SAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x18006D688 (-DeliverInput@NonBamoInputDeliveryServer@@SAJPEBUtagMsgRoutingInfo@@PEBX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x180097584 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x180097698 (-ScreenPointToRelative@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800F6F60 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMInputTarget::DeliverInput(DWMInputTarget *this, struct InputInfo *a2)
{
  const struct tagMsgRoutingInfo *v5; // r14
  unsigned __int64 v6; // rcx
  const char *v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rbx
  float *v14; // rax
  float *v15; // rax
  const struct std::nothrow_t *v16; // rdx
  const struct std::nothrow_t *v17; // rdx
  unsigned __int64 v18; // [rsp+20h] [rbp-60h] BYREF
  int v19; // [rsp+28h] [rbp-58h] BYREF
  int v20; // [rsp+30h] [rbp-50h] BYREF
  void *v21; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v22[4]; // [rsp+40h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v19 = 0;
  (*(void (__fastcall **)(char *, int *))(*((_QWORD *)this + 5) + 40LL))((char *)this + 40, &v19);
  if ( (v19 & *(_DWORD *)a2) == 0 && v19 )
    return 2147549443LL;
  v5 = (DWMInputTarget *)((char *)this + 80);
  v22[0] = 0LL;
  if ( *((_DWORD *)this + 20) || *((_DWORD *)this + 21) || *((_QWORD *)this + 11) || *((_QWORD *)this + 12) )
    goto LABEL_11;
  v6 = *((_QWORD *)this + 13) - _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  if ( !v6 )
    v6 = *((_QWORD *)this + 14);
  if ( v6 )
  {
LABEL_11:
    InputTraceLogging::ISM::DeliverInput(a2);
    v8 = *(_DWORD *)a2;
    if ( (*(_DWORD *)a2 & 0x100003B) != 0 )
    {
      if ( !a2 )
      {
        v9 = 323LL;
LABEL_14:
        v10 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
          (const char *)0x80070057LL,
          v18);
        return v10;
      }
      if ( *((_QWORD *)this + 15) )
      {
        v11 = DWMInputTarget::AddDwmInputRoutingData(this, a2);
        v12 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x148,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
            (const char *)(unsigned int)v11,
            v18);
          return v12;
        }
        v8 = *(_DWORD *)a2;
      }
      else
      {
        *(_QWORD *)((char *)a2 + 244) = 0LL;
        *(_QWORD *)((char *)a2 + 236) = 1065353216LL;
        *((_QWORD *)a2 + 32) = 1065353216LL;
        *(_QWORD *)((char *)a2 + 276) = 1065353216LL;
        *((_DWORD *)a2 + 74) = 1065353216;
        *((_DWORD *)a2 + 63) = 0;
        *((_QWORD *)a2 + 33) = 0LL;
        *((_DWORD *)a2 + 68) = 0;
        *(_QWORD *)((char *)a2 + 284) = 0LL;
        *((_DWORD *)a2 + 73) = 0;
      }
    }
    else if ( !a2 )
    {
      v9 = 359LL;
      goto LABEL_14;
    }
    if ( v8 == 0x4000 )
    {
      v13 = *((_QWORD *)this + 15);
      if ( v13 )
      {
        if ( !*(_BYTE *)(v13 + 480) )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x172,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
            v7);
        *((_QWORD *)a2 + 4) = *(_QWORD *)(LegacyInputSinkData::GetCompositionInputQueue(v13 + 48, 1u) + 8);
        LegacyInputSinkData::GetTransform(v13 + 48, v22);
        if ( *((_BYTE *)a2 + 60) )
        {
          v18 = _mm_unpacklo_ps(
                  (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 11)),
                  (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 12))).m128_u64[0];
          v14 = (float *)CInputTransform::ScreenPointToRelative(&v20, &v18, v22);
          v18 = __PAIR64__((int)v14[1], (int)*v14);
          *(_QWORD *)((char *)a2 + 52) = v18;
        }
        if ( *((_BYTE *)a2 + 80) )
        {
          v18 = _mm_unpacklo_ps(
                  (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 16)),
                  (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 17))).m128_u64[0];
          v15 = (float *)CInputTransform::ScreenPointToRelative(&v20, &v18, v22);
          v18 = __PAIR64__((int)v15[1], (int)*v15);
          *(_QWORD *)((char *)a2 + 52) = v18;
        }
      }
    }
    InputEventPayloadBuffer::InputEventPayloadBuffer(&v20, 5LL, a2);
    v10 = NonBamoInputDeliveryServer::DeliverInput(v5, v21, v20);
    InputETW::InputTarget::DeliverInputReport(a2);
    if ( (v10 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x198,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
        (const char *)v10,
        v18);
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v21, v17);
      return v10;
    }
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v21, v16);
  }
  return 0LL;
}
