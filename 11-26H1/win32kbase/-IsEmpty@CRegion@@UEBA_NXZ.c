/*
 * XREFs of ?IsEmpty@CRegion@@UEBA_NXZ @ 0x140120230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

char __fastcall CRegion::IsEmpty(CRegion *this)
{
  int v1; // r8d
  int v2; // edx
  int v3; // r8d
  char v4; // bl
  __int64 v5; // rax
  int v6; // edx

  v1 = *((_DWORD *)this + 3);
  v2 = 0;
  if ( !v1 )
    return 1;
  v3 = v1 - 1;
  if ( !v3 )
    return 0;
  v4 = 1;
  if ( v3 == 1 )
  {
    v5 = *((_QWORD *)this + 2);
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 32LL))(v5);
    }
    else if ( *(_DWORD *)(v5 + 24) == 1 )
    {
      v6 = 1;
    }
    else
    {
      LOBYTE(v2) = *(_DWORD *)(v5 + 16) > 0x38u;
      v6 = v2 + 2;
    }
    return v6 == 1;
  }
  return v4;
}
