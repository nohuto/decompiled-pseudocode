/*
 * XREFs of ?IsSameGeometry@CRegionGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x1800E27D0
 * Callers:
 *     <none>
 * Callees:
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x1800E2864 (--9@YA_NAEBUtagRECT@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CRegionGeometry::IsSameGeometry(CRegionGeometry *this, const struct CGeometry *a2)
{
  char v2; // bl
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = 0;
  if ( a2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(const struct CGeometry *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 105LL) )
    {
      v5 = *((_QWORD *)this + 18);
      v6 = *((_QWORD *)this + 17);
      v7 = *((_QWORD *)a2 + 17);
      if ( *((_QWORD *)a2 + 18) - v7 == v5 - v6 )
      {
        v2 = 1;
        while ( v6 != v5 )
        {
          if ( (unsigned __int8)operator!=(v6, v7) )
            return 0;
          v6 = v9 + 16;
          v7 = v8 + 16;
        }
      }
    }
  }
  return v2;
}
