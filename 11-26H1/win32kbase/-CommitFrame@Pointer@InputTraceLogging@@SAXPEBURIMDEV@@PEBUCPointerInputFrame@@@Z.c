/*
 * XREFs of ?CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x140063230
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140061060 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x140063DB0 (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1400633FC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Pointer::CommitFrame(const struct RIMDEV *a1, const struct CPointerInputFrame *a2)
{
  const struct CPointerInputFrame *v2; // r8
  const struct RIMDEV *v3; // r9
  int v4; // edx
  void *v5; // rdx
  const struct RIMDEV *v6; // [rsp+50h] [rbp-10h] BYREF
  const struct RIMDEV *v7; // [rsp+58h] [rbp-8h] BYREF
  int v8; // [rsp+70h] [rbp+10h] BYREF
  int v9; // [rsp+80h] [rbp+20h] BYREF
  __int64 v10; // [rsp+88h] [rbp+28h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(*((_QWORD *)a1 + 57) + 24LL);
  if ( v4 == 1 || (unsigned int)(v4 - 2) <= 2 )
  {
    if ( (unsigned int)dword_1402A9E40 <= 4
      || (qword_1402A9E50 & 0x20) == 0
      || (qword_1402A9E58 & 0x20) != qword_1402A9E58 )
    {
      return;
    }
    v5 = &unk_140289311;
    goto LABEL_11;
  }
  if ( (unsigned int)(v4 - 5) <= 1 )
  {
    if ( (unsigned int)dword_1402A9E40 > 4
      && (qword_1402A9E50 & 0x20) != 0
      && (qword_1402A9E58 & 0x20) == qword_1402A9E58 )
    {
      v8 = *((_DWORD *)v2 + 12);
      v9 = *((_DWORD *)v2 + 10);
      v10 = *((_QWORD *)v2 + 9);
      v6 = (const struct RIMDEV *)*((_QWORD *)v2 + 27);
      v7 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1402A9E40,
        (unsigned int)&unk_14028988F,
        (_DWORD)v2,
        (_DWORD)a1,
        (__int64)&v7,
        (__int64)&v6,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8);
    }
    return;
  }
  if ( v4 == 7 )
  {
    if ( (unsigned int)dword_1402A9E40 <= 4
      || (qword_1402A9E50 & 0x20) == 0
      || (qword_1402A9E58 & 0x20) != qword_1402A9E58 )
    {
      return;
    }
    v5 = &unk_1402898EA;
LABEL_11:
    v8 = *((_DWORD *)v2 + 12);
    v9 = *((_DWORD *)v2 + 10);
    v10 = *((_QWORD *)v2 + 9);
    v7 = (const struct RIMDEV *)*((_QWORD *)v2 + 27);
    v6 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1402A9E40,
      (_DWORD)v5,
      (_DWORD)v2,
      (_DWORD)v3,
      (__int64)&v6,
      (__int64)&v7,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8);
    return;
  }
  if ( (unsigned int)dword_1402A9E40 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1402A9E40, 32LL) )
  {
    v5 = &unk_140289945;
    goto LABEL_11;
  }
}
