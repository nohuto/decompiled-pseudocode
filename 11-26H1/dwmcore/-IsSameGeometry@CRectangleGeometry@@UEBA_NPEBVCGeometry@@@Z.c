/*
 * XREFs of ?IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x180196490
 * Callers:
 *     <none>
 * Callees:
 *     ??8CRoundedRectangleGeometryData@@QEBA_NAEBU0@@Z @ 0x180196500 (--8CRoundedRectangleGeometryData@@QEBA_NAEBU0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CRectangleGeometry::IsSameGeometry(CRectangleGeometry *this, const struct CGeometry *a2)
{
  char v2; // bl

  v2 = 0;
  if ( a2 && (*(unsigned __int8 (__fastcall **)(const struct CGeometry *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 103LL) )
    return (unsigned __int8)CRoundedRectangleGeometryData::operator==((char *)this + 136, (char *)a2 + 136) != 0;
  return v2;
}
