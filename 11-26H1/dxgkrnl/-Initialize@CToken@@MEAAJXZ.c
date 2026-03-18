/*
 * XREFs of ?Initialize@CToken@@MEAAJXZ @ 0x1400198A0
 * Callers:
 *     ?Initialize@CFlipContentToken@@QEAAJIPEBUtagRECT@@@Z @ 0x1400199F0 (-Initialize@CFlipContentToken@@QEAAJIPEBUtagRECT@@@Z.c)
 *     ?InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z @ 0x1400A267C (-InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CToken::Initialize(CToken *this)
{
  int v2; // edi
  int v4; // edx
  int v5; // r8d

  *((_DWORD *)this + 6) = 0;
  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2650;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          2650,
          v4,
          v5,
          0LL,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2650LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v2 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL) + 40LL))((char *)this + 96);
  if ( v2 < 0 )
    (*(void (__fastcall **)(CToken *))(*(_QWORD *)this + 56LL))(this);
  return (unsigned int)v2;
}
