/*
 * XREFs of ?SetParentVisible@CAccent@@QEAAX_N@Z @ 0x1800805E0
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18000FB1C (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAccent::SetParentVisible(CAccent *this, char a2)
{
  unsigned int v2; // eax

  if ( a2 != *((_BYTE *)this + 333) )
  {
    v2 = *((_DWORD *)this + 60) - 3;
    *((_BYTE *)this + 333) = a2;
    if ( v2 <= 1 )
    {
      if ( a2 )
        (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
    }
  }
}
