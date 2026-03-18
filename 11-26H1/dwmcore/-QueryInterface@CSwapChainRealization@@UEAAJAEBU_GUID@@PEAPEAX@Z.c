/*
 * XREFs of ?QueryInterface@CSwapChainRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802ADFC0
 * Callers:
 *     ?QueryInterface@CSwapChainRealization@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AE050 (-QueryInterface@CSwapChainRealization@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSwapChainRealization@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AE060 (-QueryInterface@CSwapChainRealization@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSwapChainRealization::QueryInterface(
        CSwapChainRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  int v5; // edi
  __int64 v6; // rax

  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v5 = (*(__int64 (__fastcall **)(CSwapChainRealization *))(*(_QWORD *)this + 272LL))(this);
      if ( v5 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v5;
      }
    }
    else
    {
      *a3 = this;
      v5 = 0;
    }
    CMILRefCountImpl::AddReference((CSwapChainRealization *)((char *)this + 24));
  }
  return (unsigned int)v5;
}
