/*
 * XREFs of ?TsSessionMayBeDeleted@@YA_NPEAVTSSession@@@Z @ 0x18002AF4C
 * Callers:
 *     ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180027F68 (-TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z @ 0x18002C878 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z.c)
 *     _lambda_8a34b5a072e294654496d34c017ecfd7_::operator() @ 0x180043880 (_lambda_8a34b5a072e294654496d34c017ecfd7_--operator().c)
 * Callees:
 *     <none>
 */

bool __fastcall TsSessionMayBeDeleted(struct TSSession *a1)
{
  bool result; // al

  result = 0;
  if ( *((_DWORD *)a1 + 8) && *((_DWORD *)a1 + 1) == 0xFFFF && !*((_QWORD *)a1 + 2) )
    return *((_QWORD *)a1 + 5) == 0LL;
  return result;
}
