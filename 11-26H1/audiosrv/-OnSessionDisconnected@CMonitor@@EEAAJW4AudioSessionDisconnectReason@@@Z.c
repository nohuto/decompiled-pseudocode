/*
 * XREFs of ?OnSessionDisconnected@CMonitor@@EEAAJW4AudioSessionDisconnectReason@@@Z @ 0x180121C90
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_ @ 0x1800CC908 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitor::OnSessionDisconnected(CMonitor *this, enum AudioSessionDisconnectReason a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
  }
  v4 = operator new[](0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
    goto LABEL_16;
  *(_DWORD *)v4 = a2;
  v4[1] = this;
  if ( this )
    (*(void (__fastcall **)(CMonitor *))(*(_QWORD *)this + 8LL))(this);
  v5[2] = 0LL;
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitor::DoHandleSessionDisconnect, v5, 0LL);
  v5[2] = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
LABEL_16:
    v5 = 0LL;
    goto LABEL_17;
  }
  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x21u,
      (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
      LastError);
  }
LABEL_17:
  free(v5);
  return 0LL;
}
