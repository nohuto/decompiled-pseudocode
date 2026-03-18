/*
 * XREFs of ?_SetForAsfw@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@_N@Z @ 0x14009B498
 * Callers:
 *     ?Set@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x14009B158 (-Set@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z.c)
 * Callees:
 *     ?_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14009D1A0 (-_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundP.c)
 */

void __fastcall CLastWokenThread::_SetForAsfw(CLastWokenThread *this, const struct tagTHREADINFO *a2, char a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rsi
  _BYTE *v7; // rdi

  v4 = *((_QWORD *)this + 1);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 464);
  else
    v5 = 0LL;
  v6 = *((_QWORD *)a2 + 58);
  v7 = (char *)this + 17;
  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = a3;
  if ( v5 == v6 )
  {
    if ( *v7 )
      return;
  }
  else if ( *((_BYTE *)this + 17) )
  {
    ForegroundBoost::_SetForegroundPriority(*(_QWORD *)(v4 + 464), v4, 0LL, 16LL);
    *((_QWORD *)this + 3) = 0LL;
    *v7 = 0;
  }
  if ( v6 )
  {
    ForegroundBoost::_SetForegroundPriority(
      *(_QWORD *)(*((_QWORD *)this + 1) + 464LL),
      *((_QWORD *)this + 1),
      1LL,
      16LL);
    *((_QWORD *)this + 3) = MEMORY[0xFFFFF78000000014];
    *v7 = 1;
  }
}
