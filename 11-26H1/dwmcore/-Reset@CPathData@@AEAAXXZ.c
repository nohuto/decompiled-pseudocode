/*
 * XREFs of ?Reset@CPathData@@AEAAXXZ @ 0x18020AAD4
 * Callers:
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x18020AA8C (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPathData::Reset(CPathData *this)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = _InterlockedExchange64((volatile __int64 *)this + 7, 0LL);
  v2 = *((_QWORD *)this + 2);
  if ( v2 != *((_QWORD *)this + 3) )
    *((_QWORD *)this + 3) = v2;
  *((_QWORD *)this + 6) = 0LL;
  *((_BYTE *)this + 66) = 0;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
