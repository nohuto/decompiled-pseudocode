/*
 * XREFs of ?_SetForInput@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@@Z @ 0x1400CFBFC
 * Callers:
 *     ?Set@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x1400CFD38 (-Set@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z.c)
 * Callees:
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x1400CCB40 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 */

void __fastcall CLastWokenThread::_SetForInput(CLastWokenThread *this, const struct tagTHREADINFO *a2)
{
  __int64 v4; // rcx

  if ( *((_BYTE *)this + 17) )
  {
    v4 = *((_QWORD *)this + 1);
    if ( *((_QWORD *)a2 + 57) != *(_QWORD *)(v4 + 456) )
    {
      ForegroundBoost::SetForegroundPriority(v4, 0, 0x10u);
      *((_BYTE *)this + 17) = 0;
      *((_QWORD *)this + 3) = 0LL;
    }
  }
  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 0;
}
