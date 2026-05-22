/*
 * XREFs of ?PossibleTouchGestureDetected@ShellGestures@InputTraceLogging@@SAXAEBURecognitionState@ShellGesturesRecognizer@@0@Z @ 0x18015D02C
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180086670 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@444@Z @ 0x180001EE4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800165E0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::ShellGestures::PossibleTouchGestureDetected(
        const struct ShellGesturesRecognizer::RecognitionState *a1,
        const struct ShellGesturesRecognizer::RecognitionState *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  const char *v15; // rax
  __int64 v16; // [rsp+50h] [rbp-28h] BYREF
  __int64 v17; // [rsp+58h] [rbp-20h] BYREF
  const char *v18; // [rsp+60h] [rbp-18h] BYREF
  __int64 v19; // [rsp+90h] [rbp+18h] BYREF
  __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  v4 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v4 > 4u && tlgKeywordOn((__int64)v4, 512LL) )
  {
    v7 = *((_QWORD *)a2 + 4);
    v20 = *((_QWORD *)a2 + 3);
    v16 = *((_QWORD *)a2 + 2);
    v8 = *((_QWORD *)a2 + 1);
    v19 = v7;
    v9 = *((_DWORD *)a1 + 1);
    v17 = v8;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                if ( v14 == 1 )
                  v15 = "DepartingContacts";
                else
                  v15 = "UNKNOWN";
              }
              else
              {
                v15 = "ContactSpread";
              }
            }
            else
            {
              v15 = "MultiContactDistance";
            }
          }
          else
          {
            v15 = "MultiContactTime";
          }
        }
        else
        {
          v15 = "SingleContactDistance";
        }
      }
      else
      {
        v15 = "SingleContactTime";
      }
    }
    else
    {
      v15 = "None";
    }
    v18 = v15;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v5,
      (__int64)&unk_1802253FF,
      v5,
      v6,
      (const unsigned __int16 **)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v20,
      (__int64)&v19);
  }
}
