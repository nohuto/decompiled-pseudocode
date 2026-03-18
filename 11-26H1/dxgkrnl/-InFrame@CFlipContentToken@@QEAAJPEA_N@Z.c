/*
 * XREFs of ?InFrame@CFlipContentToken@@QEAAJPEA_N@Z @ 0x1400554B0
 * Callers:
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x14001A938 (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 *     ?InFrame@CFlipContentToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1400A5780 (-InFrame@CFlipContentToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N_K@Z @ 0x1400680AC (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N_K@Z.c)
 */

__int64 __fastcall CFlipContentToken::InFrame(CFlipContentToken *this, bool *a2)
{
  __int64 v2; // rsi
  int v5; // edi
  bool v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 6);
  *((_DWORD *)this + 6) = 3;
  v7 = 0;
  v5 = CPushLock::AcquireLockExclusive((CPushLock *)(v2 + 48));
  if ( v5 >= 0 )
  {
    v5 = CCompositionSurface::NotifyTokenInFrame((CCompositionSurface *)(v2 + 40), this, &v7, 0LL);
    CPushLock::ReleaseLock((CPushLock *)(v2 + 48));
    if ( v5 >= 0 )
    {
      *((_BYTE *)this + 224) = v7 | *((_BYTE *)this + 224) & 0xFE;
      *a2 = 1;
    }
  }
  return (unsigned int)v5;
}
