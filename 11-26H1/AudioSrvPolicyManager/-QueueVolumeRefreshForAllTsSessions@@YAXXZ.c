/*
 * XREFs of ?QueueVolumeRefreshForAllTsSessions@@YAXXZ @ 0x180043E7C
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x1800243E0 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 *     _lambda_69c3cfbf5adefb8ee9fb65f6135da2ca_::operator() @ 0x1800435D0 (_lambda_69c3cfbf5adefb8ee9fb65f6135da2ca_--operator().c)
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void QueueVolumeRefreshForAllTsSessions(void)
{
  int v0; // eax
  __int64 v1[9]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1[0] = (__int64)off_180053210;
  v1[7] = (__int64)v1;
  v0 = QueueGenericWorkItem(v1);
  if ( v0 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1459LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v0);
}
