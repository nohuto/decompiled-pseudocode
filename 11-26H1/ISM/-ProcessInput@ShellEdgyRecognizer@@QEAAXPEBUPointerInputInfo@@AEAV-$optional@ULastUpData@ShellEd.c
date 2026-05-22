/*
 * XREFs of ?ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x18005231C
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180086670 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4555@Z @ 0x1800082B4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U3@U3@U3@@-$_tlgW.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     ?GetPointerInfoTimePoint@QpcTimeConverter@@QEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@PEBUtagPOINTER_INFO@@@Z @ 0x180052610 (-GetPointerInfoTimePoint@QpcTimeConverter@@QEBA-AV-$time_point@Usteady_clock@chrono@std@@V-$dura.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180052670 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?DetectInOutIn@ShellEdgyRecognizer@@AEAA_NAEBV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x18005269C (-DetectInOutIn@ShellEdgyRecognizer@@AEAA_NAEBV-$optional@ULastUpData@ShellEdgyRecognizer@@@std@@.c)
 *     ?HitTestEdgyRegion@ShellEdgyRecognizer@@QEAA?AW4EdgyLocation@1@UtagPOINT@@@Z @ 0x180052720 (-HitTestEdgyRegion@ShellEdgyRecognizer@@QEAA-AW4EdgyLocation@1@UtagPOINT@@@Z.c)
 *     ?CheckForGesture@ShellEdgyRecognizer@@AEAA?AW4GestureRecognizerState@@XZ @ 0x180093C64 (-CheckForGesture@ShellEdgyRecognizer@@AEAA-AW4GestureRecognizerState@@XZ.c)
 *     _o_atan2_0 @ 0x18009AB18 (_o_atan2_0.c)
 *     ?EdgyLocationToString@ShellEdgyRecognizer@@AEAAPEBGXZ @ 0x18015EA4C (-EdgyLocationToString@ShellEdgyRecognizer@@AEAAPEBGXZ.c)
 *     ?FailureReasonToString@ShellEdgyRecognizer@@AEAAPEBGXZ @ 0x18015EA98 (-FailureReasonToString@ShellEdgyRecognizer@@AEAAPEBGXZ.c)
 */

void __fastcall ShellEdgyRecognizer::ProcessInput(ShellEdgyRecognizer *this, __int64 a2, __int64 a3)
{
  char v3; // r12
  __int64 v4; // r14
  int v5; // r15d
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  BOOL v13; // esi
  bool v14; // zf
  __int64 v15; // xmm1_8
  int v16; // r8d
  ShellEdgyRecognizer *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // [rsp+60h] [rbp-9h] BYREF
  __int64 v22; // [rsp+68h] [rbp-1h] BYREF
  const WCHAR *v23; // [rsp+70h] [rbp+7h] BYREF
  const WCHAR *v24; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v25; // [rsp+80h] [rbp+17h] BYREF
  __int64 v26; // [rsp+90h] [rbp+27h]
  int v27; // [rsp+D0h] [rbp+67h] BYREF
  int v28; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( *(_DWORD *)this == 3 || *(_DWORD *)this == 1 )
    return;
  v8 = a2 + 320;
  gsl::details::extent_type<-1>::extent_type<-1>(&v25, *(unsigned int *)(a2 + 316));
  if ( (_QWORD)v25 != -1LL && (v8 || !(_QWORD)v25) )
  {
    v5 = 0;
    v3 = 0;
    v4 = v8 + 144 * v25;
    if ( v8 != v4 )
    {
      v8 += 12LL;
      goto LABEL_9;
    }
    goto LABEL_7;
  }
  _o_terminate(v9);
  __debugbreak();
LABEL_29:
  QpcTimeConverter::GetPointerInfoTimePoint((char *)this + 64, &v25, v8 - 12);
  v14 = *(_BYTE *)(a3 + 24) == 0;
  *((_QWORD *)&v25 + 1) = *(_QWORD *)(v8 + 4);
  v26 = *(_QWORD *)(v8 + 44);
  v15 = v26;
  *(_OWORD *)a3 = v25;
  *(_QWORD *)(a3 + 16) = v15;
  if ( v14 )
    *(_BYTE *)(a3 + 24) = 1;
  while ( 1 )
  {
    v8 += 144LL;
    if ( v8 - 12 == v4 )
      break;
LABEL_9:
    if ( (*(_BYTE *)v8 & 4) != 0 )
    {
      ++v5;
      if ( (*(_DWORD *)v8 & 0x2000) != 0 )
      {
        if ( !*(_DWORD *)this )
        {
          *((_DWORD *)this + 5) = *(_DWORD *)(v8 + 44);
          *((_DWORD *)this + 6) = *(_DWORD *)(v8 + 48);
          *((_QWORD *)this + 4) = *(_QWORD *)QpcTimeConverter::GetPointerInfoTimePoint((char *)this + 64, &v27, v8 - 12);
        }
        *((_DWORD *)this + 10) = *(_DWORD *)(v8 + 44);
        *((_DWORD *)this + 11) = *(_DWORD *)(v8 + 48);
        v3 = 1;
        *((_QWORD *)this + 6) = *(_QWORD *)QpcTimeConverter::GetPointerInfoTimePoint((char *)this + 64, &v28, v8 - 12);
        *((_QWORD *)this + 7) = *(_QWORD *)(v8 + 4);
      }
    }
    if ( (*(_DWORD *)v8 & 0x40000) != 0 )
      goto LABEL_29;
  }
  if ( !v3 || v5 != 1 || (unsigned __int8)ShellEdgyRecognizer::DetectInOutIn(this, a3) )
    goto LABEL_7;
  if ( *(_DWORD *)this )
  {
    if ( *(_DWORD *)this != 2 )
      return;
    goto LABEL_22;
  }
  v10 = ShellEdgyRecognizer::HitTestEdgyRegion(this, *(_QWORD *)((char *)this + 20));
  if ( !v10 )
  {
LABEL_7:
    *(_DWORD *)this = 1;
    return;
  }
  *((_DWORD *)this + 1) = v10;
  *(_DWORD *)this = 2;
LABEL_22:
  v11 = ShellEdgyRecognizer::CheckForGesture(this);
  *(_DWORD *)this = v11;
  if ( ((v11 - 1) & 0xFFFFFFFD) == 0 )
  {
    v12 = *(_QWORD *)((char *)this + 12);
    v22 = v12;
    v13 = v11 == 3;
    if ( v12 )
    {
      o_atan2_0();
      _o_lround();
    }
    if ( (unsigned int)dword_180251248 > 5 && tlgKeywordOn((__int64)&dword_180251248, 0x200000000000LL) )
    {
      v21 = HIDWORD(v22);
      v27 = v16;
      v28 = v12;
      v23 = ShellEdgyRecognizer::FailureReasonToString(this);
      LODWORD(v22) = v13;
      v24 = ShellEdgyRecognizer::EdgyLocationToString(v17);
      *(_QWORD *)&v25 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v18,
        (__int64)&unk_180225CDB,
        v19,
        v20,
        (__int64)&v25,
        &v24,
        (__int64)&v22,
        &v23,
        (__int64)&v21,
        (__int64)&v28,
        (__int64)&v27);
    }
  }
}
