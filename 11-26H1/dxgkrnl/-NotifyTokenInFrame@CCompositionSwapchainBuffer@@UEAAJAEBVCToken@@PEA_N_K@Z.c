/*
 * XREFs of ?NotifyTokenInFrame@CCompositionSwapchainBuffer@@UEAAJAEBVCToken@@PEA_N_K@Z @ 0x1400A57A0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z @ 0x14003A9D0 (-NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionSwapchainBuffer::NotifyTokenInFrame(
        CCompositionSwapchainBuffer *this,
        const struct CToken *a2,
        bool *a3)
{
  unsigned int v4; // ebx
  const struct CToken *v6; // rdi
  int v7; // eax
  const struct CFlipContentToken *v8; // rdx

  v4 = 0;
  *a3 = 0;
  v6 = a2;
  v7 = (*(__int64 (__fastcall **)(const struct CToken *))(*(_QWORD *)a2 + 64LL))(a2);
  v8 = v6;
  if ( v7 != 4 )
    v8 = 0LL;
  if ( v8 )
  {
    return (unsigned int)CCompositionSwapchainBuffer::NotifyFlipContentTokenInFrame(this, v8, a3);
  }
  else
  {
    if ( (*(unsigned int (__fastcall **)(const struct CToken *))(*(_QWORD *)v6 + 64LL))(v6) != 5 )
      v6 = 0LL;
    if ( v6 )
    {
      *a3 = *((_BYTE *)this + 744);
      *((_BYTE *)this + 744) = 0;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v4;
}
