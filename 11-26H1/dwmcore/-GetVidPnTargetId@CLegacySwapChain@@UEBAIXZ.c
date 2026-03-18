/*
 * XREFs of ?GetVidPnTargetId@CLegacySwapChain@@UEBAIXZ @ 0x18019D5F0
 * Callers:
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x180034184 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 * Callees:
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@0IPEAPEAUIDXGIOutputDWM@@@Z @ 0x18019D6C0 (-GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@0IPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::GetVidPnTargetId(CLegacySwapChain *this)
{
  unsigned int v3; // r9d
  struct _LUID v4; // r8
  struct _LUID v5; // rdx
  int DXGIOutput; // eax
  struct IDXGIOutputDWM *v7; // rbx
  struct IDXGIOutputDWM *v8; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v9[12]; // [rsp+40h] [rbp-E8h] BYREF
  int v10; // [rsp+4Ch] [rbp-DCh]

  if ( *((_DWORD *)this + 15) == -1 )
  {
    v3 = *((_DWORD *)this + 12);
    v4 = *(struct _LUID *)((char *)this + 52);
    v5 = (struct _LUID)*((_QWORD *)this + 10);
    v8 = 0LL;
    DXGIOutput = CDisplayManager::GetDXGIOutput(this, v5, v4, v3, &v8);
    v7 = v8;
    if ( DXGIOutput >= 0 )
    {
      memset_0(v9, 0, 0xC8uLL);
      if ( (*(int (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)v7 + 32LL))(v7, v9) >= 0 )
        *((_DWORD *)this + 15) = v10;
    }
    if ( v7 )
      (*(void (__fastcall **)(struct IDXGIOutputDWM *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return *((unsigned int *)this + 15);
}
