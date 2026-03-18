/*
 * XREFs of ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z @ 0x14003BA84
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001F0D0 (-NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

char __fastcall CCompositionSurface::CheckBinding(
        CCompositionSurface *this,
        __int64 a2,
        enum CompositionBufferType *a3,
        HWND *a4,
        bool *a5)
{
  _QWORD **v6; // rcx
  _QWORD *i; // rax
  _BYTE *v8; // rbx

  *(_DWORD *)a3 = 0;
  *a4 = 0LL;
  *a5 = 0;
  if ( *((_DWORD *)this + 30) )
  {
    v6 = (_QWORD **)((char *)this + 104);
    for ( i = *v6; i != v6; i = (_QWORD *)*i )
    {
      v8 = i - 3;
      if ( *(i - 1) == a2 )
      {
        *(_DWORD *)a3 = (*(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)v8 + 8LL))(i - 3);
        *a4 = (HWND)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v8 + 32LL))(v8);
        *a5 = v8[40];
        return 1;
      }
    }
  }
  return 0;
}
