/*
 * XREFs of ??$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIProcessMemoryReport@System@Windows@@AEA_K1@Z @ 0x18000F7A8
 * Callers:
 *     ?GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z @ 0x18000F6A0 (-GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z.c)
 * Callees:
 *     ??0CProcessMemoryReport@System@Windows@@QEAA@XZ @ 0x18000F87C (--0CProcessMemoryReport@System@Windows@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEventTargetArray@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001281C (--1-$MakeAllocator@VEventTargetArray@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180012D28 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CProcessMemoryReport,Windows::System::IProcessMemoryReport,unsigned __int64 &,unsigned __int64 &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  Windows::System::CProcessMemoryReport *v6; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (Windows::System::CProcessMemoryReport *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 )
    return 2147942414LL;
  v8 = Windows::System::CProcessMemoryReport::CProcessMemoryReport(v6);
  v9 = *a3;
  v10 = v8;
  v11 = *a2;
  v15 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 72LL))(v8, v11, v9);
  v13 = *(_QWORD *)v10;
  if ( v12 < 0 )
  {
    (*(void (__fastcall **)(__int64))(v13 + 16))(v10);
    Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::EventTargetArray>::~MakeAllocator<Microsoft::WRL::Details::EventTargetArray>(&v15);
    return (unsigned int)v12;
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))v13)(
            v10,
            &GUID_087305a8_9b70_4782_8741_3a982b6ce5e4,
            a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    return v14;
  }
}
