/*
 * XREFs of ?SendInputToTargetApp@MPCHandProcessor@@AEAAXPEAUIMPCTarget@@0PEAULegacyInputInfo@@@Z @ 0x1800C11B4
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800C0E40 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsDetectedOrLostReport@MPCHandProcessor@@MEAA_NPEAULegacyInputInfo@@@Z @ 0x1800C01D0 (-IsDetectedOrLostReport@MPCHandProcessor@@MEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x1800C5C74 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCHandProcessor::SendInputToTargetApp(
        MPCHandProcessor *this,
        struct IMPCTarget *a2,
        struct IMPCTarget *a3,
        struct LegacyInputInfo *a4)
{
  _BYTE *v4; // rbx
  bool v8; // di
  char v9; // al
  int v10; // eax
  unsigned int v11; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  bool v13; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
    return;
  v4 = (char *)this + 3568;
  if ( *((_DWORD *)a4 + 16) != 5 )
  {
    if ( *((_DWORD *)a4 + 16) != 4 || *v4 )
      goto LABEL_4;
LABEL_13:
    v8 = 1;
    goto LABEL_5;
  }
  if ( *v4 )
    goto LABEL_13;
LABEL_4:
  v8 = 0;
LABEL_5:
  v13 = v8;
  if ( !v8 )
  {
    MPCInputProviderBase::ProcessSourceDetectedAndLost(this, a2, a3, &v13, v11);
    v8 = v13;
  }
  v9 = v8 | MPCHandProcessor::IsDetectedOrLostReport(this, a4);
  if ( *v4 && !v9 )
  {
    v10 = (*(__int64 (__fastcall **)(struct IMPCTarget *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 24LL))(a3, a4);
    if ( v10 == -2147417853 )
    {
      *v4 = 0;
    }
    else if ( v10 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x262,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
        (const char *)(unsigned int)v10);
    }
  }
}
