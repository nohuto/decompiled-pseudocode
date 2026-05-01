/*
 * XREFs of shell::TaskScheduler::AddTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___ @ 0x1805DA580
 * Callers:
 *     ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x1805DF0C8 (-_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ @ 0x1801E7314 (-InternalAddRef@-$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall shell::TaskScheduler::AddTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  volatile int *v5; // rdx
  _QWORD *v6; // rbx
  unsigned int v7; // edi

  v4 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v4;
  if ( v4 )
  {
    v4[5] = 1LL;
    *((_DWORD *)v4 + 12) = 0;
    v4[7] = 0LL;
    *((_DWORD *)v4 + 16) = 0;
    *v4 = &off_180730C38;
    v4[1] = &CRunnableTask::`vftable'{for `IServiceProvider'};
    v4[2] = &CRunnableTask::`vftable'{for `IQueryContinue'};
    v4[3] = &CRunnableTask::`vftable'{for `IObjectWithCancelEvent'};
    v4[4] = &CRunnableTask::`vftable'{for `ITestRunnableTask'};
    v4[9] = *(_QWORD *)a2;
    Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalAddRef(v4 + 9, v5);
    *((_BYTE *)v6 + 80) = *(_BYTE *)(a2 + 8);
    *((_DWORD *)v6 + 21) = *(_DWORD *)(a2 + 12);
    *((_DWORD *)v6 + 22) = *(_DWORD *)(a2 + 16);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, __int64, int))(**(_QWORD **)(a1 + 16) + 24LL))(
           *(_QWORD *)(a1 + 16),
           v6,
           a1,
           a1,
           0x10000000);
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v7;
}
