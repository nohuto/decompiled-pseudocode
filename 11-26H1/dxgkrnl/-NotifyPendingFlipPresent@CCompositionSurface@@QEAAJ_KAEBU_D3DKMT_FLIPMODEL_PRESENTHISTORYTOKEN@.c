/*
 * XREFs of ?NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N2@Z @ 0x14003DAE0
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001F0D0 (-NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionSurface::NotifyPendingFlipPresent(
        CCompositionSurface *this,
        __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        bool *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  _QWORD **v8; // rcx
  _QWORD *i; // rax
  _QWORD *v10; // rdi

  v5 = 0;
  if ( *((_DWORD *)this + 30) )
  {
    v8 = (_QWORD **)((char *)this + 104);
    for ( i = *v8; i != v8; i = (_QWORD *)*i )
    {
      v10 = i - 3;
      if ( *(i - 1) == a2 )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v10 + 8LL))(i - 3) != 2 )
          return (unsigned int)-1073741811;
        (*(void (__fastcall **)(_QWORD *, const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *, bool *, bool *))(*v10 + 72LL))(
          v10,
          a3,
          a4,
          a5);
        return v5;
      }
    }
  }
  return (unsigned int)-1073741811;
}
