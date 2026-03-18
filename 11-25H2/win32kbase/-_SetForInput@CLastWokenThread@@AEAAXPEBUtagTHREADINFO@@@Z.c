/*
 * XREFs of ?_SetForInput@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@@Z @ 0x14009B438
 * Callers:
 *     ?Set@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x14009B158 (-Set@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z.c)
 * Callees:
 *     ?_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14009D1A0 (-_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundP.c)
 */

void __fastcall CLastWokenThread::_SetForInput(CLastWokenThread *this, const struct tagTHREADINFO *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( *((_BYTE *)this + 17) )
  {
    v4 = *((_QWORD *)this + 1);
    v5 = *(_QWORD *)(v4 + 464);
    if ( *((_QWORD *)a2 + 58) != v5 )
    {
      ForegroundBoost::_SetForegroundPriority(v5, v4, 0LL, 16LL);
      *((_QWORD *)this + 3) = 0LL;
      *((_BYTE *)this + 17) = 0;
    }
  }
  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 0;
}
