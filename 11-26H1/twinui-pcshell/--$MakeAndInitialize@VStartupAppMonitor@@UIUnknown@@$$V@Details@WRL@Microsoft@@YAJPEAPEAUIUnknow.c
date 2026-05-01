/*
 * XREFs of ??$MakeAndInitialize@VStartupAppMonitor@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801D6DAC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VStartupAppMonitor@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801D6D00 (-CreateInstance@-$SimpleClassFactory@VStartupAppMonitor@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@.c)
 * Callees:
 *     ??0StartupAppMonitor@@QEAA@XZ @ 0x1801D6E40 (--0StartupAppMonitor@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<StartupAppMonitor,IUnknown,>(_QWORD *a1)
{
  StartupAppMonitor *v2; // rax
  StartupAppMonitor *v3; // rbx
  unsigned int v4; // edi

  *a1 = 0LL;
  v2 = (StartupAppMonitor *)operator new(0x2A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = StartupAppMonitor::StartupAppMonitor(v2);
    v4 = (**(__int64 (__fastcall ***)(StartupAppMonitor *, GUID *, _QWORD *))v3)(
           v3,
           &GUID_00000000_0000_0000_c000_000000000046,
           a1);
    (*(void (__fastcall **)(StartupAppMonitor *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
