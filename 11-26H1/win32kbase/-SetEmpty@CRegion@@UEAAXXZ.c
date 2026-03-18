/*
 * XREFs of ?SetEmpty@CRegion@@UEAAXXZ @ 0x1400438F0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall CRegion::SetEmpty(CRegion *this, __int64 a2, __int64 a3, __int64 a4)
{
  char **v4; // rbx

  v4 = (char **)*((_QWORD *)this + 2);
  if ( v4 )
  {
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 112LL))(*((_QWORD *)this + 2));
    }
    else if ( *v4 )
    {
      GreDeleteFastMutex(*v4, a2, a3, a4);
    }
    GreDeleteFastMutex((char *)v4, a2, a3, a4);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_DWORD *)this + 3) = 0;
}
