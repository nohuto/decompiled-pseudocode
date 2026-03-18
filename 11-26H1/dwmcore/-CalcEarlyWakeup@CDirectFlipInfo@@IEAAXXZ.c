/*
 * XREFs of ?CalcEarlyWakeup@CDirectFlipInfo@@IEAAXXZ @ 0x1800D50D8
 * Callers:
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1800D4F00 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDirectFlipInfo::CalcEarlyWakeup(CDirectFlipInfo *this)
{
  CComposition *v1; // rax
  int v3; // ecx
  int v4; // ecx

  v1 = g_pComposition;
  *((_BYTE *)this + 108) = 0;
  if ( *(_QWORD *)(*((_QWORD *)v1 + 77) + 32LL) - *(_QWORD *)(*((_QWORD *)v1 + 77) + 24LL) == 8LL )
  {
    v3 = *((_DWORD *)this + 13) - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 2 )
          return;
      }
      else if ( *((_BYTE *)this + 106)
             || (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2)) != 2 )
      {
        return;
      }
    }
    *((_BYTE *)this + 108) = 1;
  }
}
