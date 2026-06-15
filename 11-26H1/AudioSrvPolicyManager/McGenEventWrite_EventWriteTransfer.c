/*
 * XREFs of McGenEventWrite_EventWriteTransfer @ 0x1800227C8
 * Callers:
 *     McTemplateU0zqq_EventWriteTransfer @ 0x180022700 (McTemplateU0zqq_EventWriteTransfer.c)
 *     McTemplateU0zq_EventWriteTransfer @ 0x18003B164 (McTemplateU0zq_EventWriteTransfer.c)
 *     _lambda_69c3cfbf5adefb8ee9fb65f6135da2ca_::operator() @ 0x1800435D0 (_lambda_69c3cfbf5adefb8ee9fb65f6135da2ca_--operator().c)
 *     McTemplateU0qtt_EventWriteTransfer @ 0x18004541C (McTemplateU0qtt_EventWriteTransfer.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWrite_EventWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  ULONG v7; // r8d

  v5 = (unsigned __int16 *)qword_180067048;
  v6 = 0;
  if ( qword_180067048 )
  {
    UserData->Ptr = qword_180067048;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v7 = 0;
  }
  UserData->Size = v7;
  UserData->Reserved = v6;
  return EventWriteTransfer(AUDIO_EVENT_PROVIDER_Context, a2, 0LL, 0LL, UserDataCount, UserData);
}
