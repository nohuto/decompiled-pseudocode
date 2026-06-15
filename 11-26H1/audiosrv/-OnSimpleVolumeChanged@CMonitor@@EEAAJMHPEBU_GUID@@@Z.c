/*
 * XREFs of ?OnSimpleVolumeChanged@CMonitor@@EEAAJMHPEBU_GUID@@@Z @ 0x180121E20
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     WPP_SF_gd @ 0x180122B08 (WPP_SF_gd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitor::OnSimpleVolumeChanged(CMonitor *this, float a2, int a3, const struct _GUID *a4)
{
  char *v7; // rax
  _QWORD *v8; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_gd(*((_QWORD *)WPP_GLOBAL_Control + 2));
  }
  v7 = (char *)operator new[](0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( !v7 )
    goto LABEL_16;
  *(float *)v7 = a2;
  *((_DWORD *)v7 + 1) = a3;
  *(struct _GUID *)(v7 + 8) = *a4;
  *((_QWORD *)v7 + 3) = this;
  if ( this )
    (*(void (__fastcall **)(CMonitor *))(*(_QWORD *)this + 8LL))(this);
  v8[4] = 0LL;
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitor::DoHandleSimpleVolumeChanged, v8, 0LL);
  v8[4] = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
LABEL_16:
    v8 = 0LL;
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
      0x24u,
      (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
      LastError);
  }
LABEL_17:
  free(v8);
  return 0LL;
}
