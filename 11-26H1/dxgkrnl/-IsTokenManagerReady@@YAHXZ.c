/*
 * XREFs of ?IsTokenManagerReady@@YAHXZ @ 0x14001F9F0
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001EDE0 (-DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipManagerPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x140045760 (-NotifyPendingFlipManagerPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1400A2AE4 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x140027250 (DxgkGetSessionTokenManager.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 IsTokenManagerReady(void)
{
  unsigned int v0; // edi
  __int64 v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v3 = 0LL;
  if ( (int)DxgkGetSessionTokenManager(&v3) >= 0 )
  {
    v1 = v3;
    v0 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 152LL))(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  }
  return v0;
}
