/*
 * XREFs of ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x140054BF8
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x140055008 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 * Callees:
 *     DirectComposition::Memory::AllocateAndClear_0 @ 0x140048C08 (DirectComposition--Memory--AllocateAndClear_0.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x140056D6C (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400ABF84 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1400ABFFC (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400ADC68 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1401BA394 (-Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2.c)
 *     ?GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParentVisualMarshaler@2@VResourceHandle@@@Z @ 0x1401C6CA0 (-GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParent.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CompleteAddCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  __int64 v11; // rbp
  struct DirectComposition::CResourceMarshaler *v12; // rdi
  struct DirectComposition::CResourceMarshaler *v13; // rax
  __int64 v14; // rax
  struct DirectComposition::CResourceMarshaler *v15; // r15
  int v16; // ebx
  DirectComposition::CVisualMarshaler *v18; // rax
  struct DirectComposition::CResourceMarshaler *v19; // r14
  __int64 v20; // rax
  struct DirectComposition::CResourceMarshaler *v21; // rax
  DirectComposition::CResourceMarshaler *v22; // rax
  __int64 CrossChannelVisualChildNoRef; // rax
  struct DirectComposition::CResourceMarshaler *v24; // rax
  __int64 v25; // [rsp+40h] [rbp-28h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v13 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a1, a2);
  if ( !v13 )
  {
    v16 = -1073741790;
    goto LABEL_4;
  }
  v14 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v13 + 184LL))(v13);
  v15 = (struct DirectComposition::CResourceMarshaler *)v14;
  if ( !v14 )
    goto LABEL_3;
  if ( a7 )
  {
    v24 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a1, a7);
    if ( !v24 )
      goto LABEL_3;
    CrossChannelVisualChildNoRef = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v24 + 184LL))(v24);
  }
  else
  {
    if ( !a8 )
      goto LABEL_5;
    CrossChannelVisualChildNoRef = DirectComposition::CVisualMarshaler::GetCrossChannelVisualChildNoRef(v14);
  }
  v11 = CrossChannelVisualChildNoRef;
  if ( !CrossChannelVisualChildNoRef )
    goto LABEL_3;
LABEL_5:
  if ( a4 )
  {
    v21 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a1, a4);
    if ( !v21 )
      goto LABEL_3;
    v22 = (DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v21 + 184LL))(v21);
    v12 = v22;
    if ( !v22 )
      goto LABEL_3;
    DirectComposition::CResourceMarshaler::AddRef(v22);
    goto LABEL_12;
  }
  if ( !a5 )
  {
LABEL_3:
    v16 = -1073741811;
    goto LABEL_4;
  }
  v18 = (DirectComposition::CVisualMarshaler *)DirectComposition::Memory::AllocateAndClear_0(0x158uLL, 0x70784344u, 1);
  v19 = v18;
  if ( !v18 )
  {
    v16 = -1073741801;
    goto LABEL_4;
  }
  DirectComposition::CVisualMarshaler::CVisualMarshaler(v18);
  *(_QWORD *)v19 = &DirectComposition::CCrossChannelParentVisualMarshaler::`vftable';
  v16 = DirectComposition::CCrossChannelParentVisualMarshaler::Initialize(v19, a1, a5, a3);
  if ( v16 >= 0 && (v16 = DirectComposition::CApplicationChannel::RegisterResource(a1, v19), v16 >= 0) )
  {
    v12 = v19;
  }
  else
  {
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v19 + 208LL))(
      v19,
      a1);
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v19 + 88LL))(v19, 1LL);
  }
  if ( v16 >= 0 )
  {
LABEL_12:
    v20 = *(_QWORD *)v15;
    LOBYTE(v25) = 0;
    v16 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, struct DirectComposition::CResourceMarshaler *, _QWORD, __int64, __int64 *))(v20 + 328))(
            v15,
            a1,
            v12,
            a6,
            v11,
            &v25);
    if ( v16 >= 0 && (_BYTE)v25 )
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a1, v15);
  }
LABEL_4:
  DirectComposition::CApplicationChannel::ReleaseResource(a1, v12);
  return (unsigned int)v16;
}
