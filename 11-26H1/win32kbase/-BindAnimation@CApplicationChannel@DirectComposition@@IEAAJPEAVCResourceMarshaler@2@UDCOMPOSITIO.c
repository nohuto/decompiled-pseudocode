/*
 * XREFs of ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCBaseAnimation@2@@Z @ 0x1401A3234
 * Callers:
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIUDCOMPOSITION_PROPERTY_ID@@I@Z @ 0x1401BBFF8 (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIUDCOMPOSITION_PROPERT.c)
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400ADC68 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1400B53B0 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1400B5420 (-DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel@2@@Z @ 0x140191C5C (-Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel.c)
 *     ?CheckAndAddHandoff@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCBaseAnimation@2@PEAVCAnimationBinding@2@@Z @ 0x1401B95EC (-CheckAndAddHandoff@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@UDCOMPO.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1401C4660 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCBaseAnimation@2@PEAPEAV12@@Z @ 0x14022B3D4 (-Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_.c)
 *     ?Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@UDCOMPOSITION_PROPERTY_ID@@PEAVCBaseAnimation@2@@Z @ 0x14022B458 (-Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@UDCOMPOSITION_PRO.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::BindAnimation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct DirectComposition::CBaseAnimation *a4)
{
  __int64 v4; // rax
  struct _LIST_ENTRY *v5; // rsi
  _QWORD *v6; // rdi
  __int64 v8; // r15
  int v11; // ecx
  bool v12; // zf
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r13d
  _QWORD *v16; // r12
  __int64 (__fastcall ***v17)(_QWORD); // rcx
  DirectComposition::CResourceMarshaler *v18; // rax
  _QWORD *v20; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a2 + 40);
  v5 = 0LL;
  v6 = 0LL;
  v8 = 0LL;
  while ( v4 )
  {
    if ( *(_DWORD *)(v4 + 12) != a3 )
      goto LABEL_10;
    v11 = *(_DWORD *)(v4 + 8);
    if ( (v11 & 1) != 0 )
    {
      v5 = (struct _LIST_ENTRY *)v4;
      break;
    }
    if ( (v11 & 2) != 0 )
    {
      v6 = (_QWORD *)v4;
      v12 = v8 == 0;
    }
    else
    {
      if ( (v11 & 4) == 0 )
        goto LABEL_10;
      v8 = v4;
      v12 = v6 == 0LL;
    }
    if ( !v12 )
      break;
LABEL_10:
    v4 = *(_QWORD *)(v4 + 32);
  }
  v15 = DirectComposition::CApplicationChannel::CheckAndAddHandoff(a1);
  if ( (v15 & 0x80000000) != 0 )
    return v15;
  if ( v6 )
    goto LABEL_27;
  if ( v5 && (struct DirectComposition::CBaseAnimation *)v5[1].Blink != a4
    || v8 && *(struct DirectComposition::CBaseAnimation **)(v8 + 24) != a4 )
  {
LABEL_20:
    v16 = *(_QWORD **)(a1 + 376);
    v20 = 0LL;
    if ( v16 )
    {
      *(_QWORD *)(a1 + 376) = 0LL;
      DirectComposition::CAnimationBinding::Initialize(v16, a2, a3, a4);
    }
    else
    {
      v15 = DirectComposition::CAnimationBinding::Create(a2, a3, a4, &v20);
      if ( (v15 & 0x80000000) != 0 )
        return v15;
      v16 = v20;
    }
    if ( *(int *)(a1 + 24) > 2 )
    {
      *v16 = 0LL;
    }
    else
    {
      *v16 = *(_QWORD *)(a1 + 496);
      *(_QWORD *)(a1 + 496) = v16;
    }
LABEL_27:
    if ( !v5 )
    {
      if ( v8 )
        goto LABEL_31;
      goto LABEL_34;
    }
LABEL_28:
    if ( (struct DirectComposition::CBaseAnimation *)v5[1].Blink != a4 )
      DirectComposition::CApplicationChannel::NewRemovingBinding((struct _RTL_GENERIC_TABLE *)a1, v5, v13, v14);
    return v15;
  }
  if ( v5 )
    goto LABEL_28;
  if ( !v8 )
    goto LABEL_20;
LABEL_31:
  if ( *(struct DirectComposition::CBaseAnimation **)(v8 + 24) == a4 )
  {
    DirectComposition::CApplicationChannel::DiscardRemovingBinding(
      (struct DirectComposition::CAnimationBinding **)a1,
      (struct DirectComposition::CAnimationBinding *)v8);
    v17 = *(__int64 (__fastcall ****)(_QWORD))(v8 + 24);
    *(_DWORD *)(v8 + 8) = *(_DWORD *)(v8 + 8) & 0xFFFFFFFA | 1;
    v18 = (DirectComposition::CResourceMarshaler *)(**v17)(v17);
    DirectComposition::CResourceMarshaler::AddRef(v18);
    if ( v6 )
      DirectComposition::CApplicationChannel::DeleteAddingBinding((DirectComposition::CApplicationChannel *)a1, v6);
    return v15;
  }
LABEL_34:
  if ( v6 && (struct DirectComposition::CBaseAnimation *)v6[3] != a4 )
    DirectComposition::CAnimationBinding::Reassign(
      (DirectComposition::CAnimationBinding *)v6,
      a4,
      (struct _RTL_GENERIC_TABLE *)a1);
  return v15;
}
