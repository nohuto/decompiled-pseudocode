/*
 * XREFs of ?IncrementCounter@CDwmNotifyBatch@@IEAA_NPEAUtagWND@@@Z @ 0x1402E6A00
 * Callers:
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x1400469A0 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     ??0CDwmSwpNotifyBatch@@QEAA@PEAUtagSMWP@@@Z @ 0x140046A10 (--0CDwmSwpNotifyBatch@@QEAA@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14000FD08 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatchProp@@@Z @ 0x1402E690C (--$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatch.c)
 *     DwmAsyncWindowNotifyBatchStart @ 0x14034790C (DwmAsyncWindowNotifyBatchStart.c)
 */

char __fastcall CDwmNotifyBatch::IncrementCounter(CDwmNotifyBatch *this, struct tagWND *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  void *v10; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  if ( CWindowProp::GetProp<CDwmWindowNotifyBatchProp>((__int64)a2, &v11) )
  {
    v8 = v11;
  }
  else
  {
    v5 = (_QWORD *)Win32AllocPoolZInit(40LL, 1651405653LL);
    v8 = (__int64)v5;
    if ( !v5 )
      return 0;
    v5[1] = 0LL;
    v5[2] = 0LL;
    v5[3] = 0LL;
    v5[4] = 0LL;
    *v5 = &CDwmWindowNotifyBatchProp::`vftable';
    *((_WORD *)v5 + 12) = *(_WORD *)(W32GetUserSessionState(v7, v6) + 42290);
    *(_QWORD *)(v8 + 28) = 0LL;
    *(_DWORD *)(v8 + 36) = 0;
    if ( !(unsigned int)CWindowProp::SetProp((CWindowProp *)v8, (unsigned __int64)a2) )
    {
      Win32FreePool((void *)v8);
      return 0;
    }
  }
  if ( !*(_DWORD *)(v8 + 28) )
  {
    v10 = (void *)ReferenceDwmApiPort(v4, v3);
    DwmAsyncWindowNotifyBatchStart(v10);
  }
  ++*(_DWORD *)(v8 + 28);
  return 1;
}
