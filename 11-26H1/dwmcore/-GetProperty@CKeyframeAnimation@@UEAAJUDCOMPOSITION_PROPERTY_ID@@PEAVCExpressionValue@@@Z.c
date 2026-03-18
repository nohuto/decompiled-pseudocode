/*
 * XREFs of ?GetProperty@CKeyframeAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180279BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180003D24 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x180046570 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 */

__int64 __fastcall CKeyframeAnimation::GetProperty(__int64 a1, int a2, CExpressionValue *a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  unsigned int v7; // ebx
  int v8; // xmm6_4
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  int v12; // eax
  float v13; // xmm6_4
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  int v16; // [rsp+78h] [rbp+10h] BYREF
  void *v17; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2 - 16;
  if ( !v4 )
  {
    v13 = (float)*(int *)(a1 + 368);
    goto LABEL_20;
  }
  v5 = v4 - 14;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 2 )
      {
        v7 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x8AFu, 0LL);
        return v7;
      }
      v8 = *(_DWORD *)(a1 + 412);
    }
    else
    {
      v8 = *(_DWORD *)(a1 + 408);
    }
    CExpressionValue::DestroyCurrent(a3);
    *(_DWORD *)a3 = v8;
    *((_DWORD *)a3 + 16) = 18;
    return 0;
  }
  if ( *(_QWORD *)(a1 + 304) )
  {
    v13 = CKeyframeAnimation::GetAnimationTimeLength((CKeyframeAnimation *)a1) * 1000.0;
LABEL_20:
    CExpressionValue::DestroyCurrent(a3);
    *(float *)a3 = v13;
    *((_DWORD *)a3 + 16) = 42;
    return 0;
  }
  if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 4LL) )
  {
    v11 = *(_QWORD *)(v9 + 56);
    if ( v11 )
    {
      v17 = *(void **)(v11 + 72);
      v12 = *(_DWORD *)(v11 + 28);
    }
    else
    {
      v17 = &unk_1802F34A8;
      v12 = 0;
    }
    v16 = v12;
    v15 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v11,
      (__int64)&unk_1803B4D7A,
      v9,
      v10,
      (__int64)&v15,
      (__int64)&v16,
      &v17);
  }
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 42;
  *(_DWORD *)a3 = 0;
  v7 = -2147418113;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147418113, 0x898u, 0LL);
  return v7;
}
