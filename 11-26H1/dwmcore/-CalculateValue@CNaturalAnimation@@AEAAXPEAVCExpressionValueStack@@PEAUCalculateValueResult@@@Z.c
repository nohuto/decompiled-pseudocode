/*
 * XREFs of ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180044E70
 * Callers:
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180045210 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResul.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800041E4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemp.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18010D710 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x18013A09C (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18017B44C (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ??$emplace@AEBQEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@std@@_N@1@AEBQEAVCBaseExpression@@@Z @ 0x1801A0F64 (--$emplace@AEBQEAVCBaseExpression@@@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compa.c)
 *     ?Update@CVector3Force@@QEAA?AUD2DVector3@@MPEAVCExpressionValueStack@@@Z @ 0x1801A6C68 (-Update@CVector3Force@@QEAA-AUD2DVector3@@MPEAVCExpressionValueStack@@@Z.c)
 *     ?IsInMotion@CScalarForceEvaluator@@QEBA_NXZ @ 0x1801BE990 (-IsInMotion@CScalarForceEvaluator@@QEBA_NXZ.c)
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801C8FC8 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ @ 0x1801CA34C (-CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ.c)
 *     ?GetStopValue@CNaturalAnimation@@AEAA?ATInternalValue@1@XZ @ 0x1801DAC04 (-GetStopValue@CNaturalAnimation@@AEAA-ATInternalValue@1@XZ.c)
 *     ?PeekStackValue@CNaturalAnimation@@AEAA?ATInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x18027BD60 (-PeekStackValue@CNaturalAnimation@@AEAA-ATInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z @ 0x18028EA1C (-ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z.c)
 */

void __fastcall CNaturalAnimation::CalculateValue(
        CNaturalAnimation *this,
        struct CExpressionValueStack *a2,
        struct CalculateValueResult *a3)
{
  bool v3; // di
  _BYTE *v4; // rsi
  int v8; // eax
  char v9; // dl
  __int64 v10; // r8
  float v11; // xmm6_4
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // xmm0_8
  int v15; // eax
  __int64 StopValue; // rax
  CNaturalAnimation *v17; // xmm0_8
  __int64 v18; // r8
  int *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  CNaturalAnimation *v25; // [rsp+88h] [rbp-29h] BYREF
  int v26; // [rsp+90h] [rbp-21h]
  __int64 v27; // [rsp+98h] [rbp-19h] BYREF
  int v28; // [rsp+A0h] [rbp-11h]
  int v29; // [rsp+A8h] [rbp-9h]
  int v30; // [rsp+ACh] [rbp-5h]
  int v31; // [rsp+B0h] [rbp-1h]
  int v32; // [rsp+B4h] [rbp+3h]
  int v33; // [rsp+B8h] [rbp+7h]
  int v34; // [rsp+BCh] [rbp+Bh]
  float v35; // [rsp+C0h] [rbp+Fh]
  _BYTE v36[32]; // [rsp+C8h] [rbp+17h] BYREF

  v3 = 0;
  *(_BYTE *)a3 = 0;
  v4 = (char *)this + 532;
  if ( *(_QWORD *)(*((_QWORD *)this + 3) + 880LL) != *((_QWORD *)this + 47) && (*v4 & 8) == 0 )
  {
    v8 = *((_DWORD *)this + 38);
    if ( v8 != 18 && v8 != 35 && v8 != 52 )
    {
LABEL_22:
      if ( (*((_BYTE *)this + 532) & 8) != 0 )
      {
        v21 = *((_QWORD *)this + 3);
        v25 = this;
        std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::emplace<CBaseExpression * const &>(
          *(_QWORD *)(v21 + 816) + 560LL,
          v36,
          &v25);
      }
      return;
    }
    if ( CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(*((_QWORD *)this + 48) + 16LL))
      || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v10 + 84)) )
    {
      *v4 = v9 | 4;
    }
    if ( CNaturalAnimation::GenerateVector3Basis(this) )
      CVector3ForceEvaluator::ChangeBasis(
        (CVector3ForceEvaluator *)(*((_QWORD *)this + 48) + 16LL),
        (CNaturalAnimation *)((char *)this + 404));
    v11 = CNaturalAnimation::CalculateAnimationElapsedTimeInSeconds(this);
    CVector3Force::Update(*((_QWORD *)this + 48), &v27);
    if ( CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(*((_QWORD *)this + 48) + 16LL))
      || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v12 + 84))
      || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v13 + 152)) )
    {
      *(_BYTE *)a3 = 1;
      if ( (*v4 & 8) == 0 )
      {
        v25 = 0LL;
        v26 = 0;
        D3DXVec3TransformCoord(
          (struct D2DVector3 *)&v25,
          (const struct D2DVector3 *)&v27,
          (CNaturalAnimation *)((char *)this + 468));
        v22 = v26;
        *(_QWORD *)((char *)this + 292) = v25;
        *((_DWORD *)this + 75) = v22;
        *((float *)this + 73) = *((float *)this + 73) + *((float *)this + 76);
        *((float *)this + 74) = *((float *)this + 77) + *((float *)this + 74);
        *((float *)this + 75) = *((float *)this + 78) + *((float *)this + 75);
        v23 = *((_DWORD *)this + 75);
        v25 = *(CNaturalAnimation **)((char *)this + 292);
        v26 = v23;
        CNaturalAnimation::PushValueToStack(this, &v25, a2);
LABEL_18:
        if ( *((_DWORD *)this + 55) )
        {
          v18 = CNaturalAnimation::PeekStackValue(this, v36, a2);
          if ( (unsigned int)dword_1803DC880 > 4 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1803DC880, 4LL, v18) )
            {
              v30 = v19[1];
              v31 = *v19;
              v32 = v28;
              v33 = HIDWORD(v27);
              v34 = v27;
              LODWORD(v25) = *((_DWORD *)this + 55);
              v20 = (unsigned int)v19[2];
              v35 = v11;
              v29 = v20;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
                v20,
                (__int64)&unk_1803B51F5);
            }
          }
        }
        goto LABEL_22;
      }
    }
    else
    {
      *(_BYTE *)a3 = 0;
    }
    v14 = *((_QWORD *)this + 38);
    *((_BYTE *)this + 532) = *v4 | 8;
    v15 = *((_DWORD *)this + 78);
    *(_QWORD *)((char *)this + 292) = v14;
    *((_DWORD *)this + 75) = v15;
    StopValue = CNaturalAnimation::GetStopValue(this, v36);
    v17 = *(CNaturalAnimation **)StopValue;
    LODWORD(StopValue) = *(_DWORD *)(StopValue + 8);
    v25 = v17;
    v26 = StopValue;
    CNaturalAnimation::PushValueToStack(this, &v25, a2);
    if ( (*((_BYTE *)this + 216) & 2) != 0 )
      CBaseExpression::NotifyAnimationCompleted(this);
    *((_BYTE *)this + 216) &= ~1u;
    goto LABEL_18;
  }
  if ( (*v4 & 8) == 0 )
    v3 = (*v4 & 0x40) != 0;
  *(_BYTE *)a3 = v3;
  v24 = *((_DWORD *)this + 75);
  v27 = *(_QWORD *)((char *)this + 292);
  v28 = v24;
  CNaturalAnimation::PushValueToStack(this, &v27, a2);
}
