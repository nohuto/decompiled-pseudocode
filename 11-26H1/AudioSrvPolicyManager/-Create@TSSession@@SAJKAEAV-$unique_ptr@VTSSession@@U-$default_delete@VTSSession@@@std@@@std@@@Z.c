/*
 * XREFs of ?Create@TSSession@@SAJKAEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@Z @ 0x180017AAC
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCEndpointVolumeStateManager@@UIEndpointVolumeStateManager@@AEAPEAUIVolumeProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointVolumeStateManager@@AEAPEAUIVolumeProvider@@@Z @ 0x18002A800 (--$MakeAndInitialize@VCEndpointVolumeStateManager@@UIEndpointVolumeStateManager@@AEAPEAUIVolumeP.c)
 *     ??0TSSession@@AEAA@XZ @ 0x18002D2B8 (--0TSSession@@AEAA@XZ.c)
 *     ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x18002EA3C (--1-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??R?$default_delete@VTSSession@@@std@@QEBAXPEAVTSSession@@@Z @ 0x18004399C (--R-$default_delete@VTSSession@@@std@@QEBAXPEAVTSSession@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TSSession::Create(int a1, TSSession **a2)
{
  TSSession *v4; // rax
  TSSession *v5; // rbx
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  TSSession *v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  TSSession *v13; // [rsp+40h] [rbp+18h] BYREF
  struct IVolumeProvider *v14; // [rsp+48h] [rbp+20h] BYREF

  v4 = (TSSession *)operator new[](0x460uLL, (const struct std::nothrow_t *)&std::nothrow);
  try
  {
    v13 = v4;
    if ( v4 )
      v5 = TSSession::TSSession(v4);
    else
      v5 = 0LL;
    v13 = v5;
    if ( v5 )
    {
      *(_DWORD *)v5 = a1;
      v8 = *((_QWORD *)v5 + 130);
      *((_QWORD *)v5 + 130) = 0LL;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v14 = g_VolumeProvider;
      v9 = Microsoft::WRL::Details::MakeAndInitialize<CEndpointVolumeStateManager,IEndpointVolumeStateManager,IVolumeProvider * &>(
             (char *)v5 + 1040,
             &v14);
      v10 = v9;
      if ( v9 >= 0 )
      {
        v13 = 0LL;
        v11 = *a2;
        *a2 = v5;
        if ( v11 )
          std::default_delete<TSSession>::operator()();
        std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v13);
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBD,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v9);
        std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v13);
        result = v10;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBA,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)0x8007000ELL);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC3,
                           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                           v6);
  }
  return result;
}
