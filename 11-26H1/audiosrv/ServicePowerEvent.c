/*
 * XREFs of ServicePowerEvent @ 0x18006E8D0
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x18006E850 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ServicePowerEvent(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 (*v2)(void); // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx

  result = 0LL;
  if ( a1 > 9 )
  {
    if ( a1 != 32787 )
      return result;
    v2 = *(__int64 (**)(void))(*(_QWORD *)g_AudioService + 96LL);
    return v2();
  }
  if ( a1 != 9 )
  {
    if ( a1 )
    {
      v3 = a1 - 2;
      if ( v3 )
      {
        v4 = v3 - 2;
        if ( !v4 )
        {
          v2 = *(__int64 (**)(void))(*(_QWORD *)g_AudioService + 88LL);
          return v2();
        }
        if ( v4 == 3 )
        {
          v2 = *(__int64 (**)(void))(*(_QWORD *)g_AudioService + 80LL);
          return v2();
        }
      }
    }
  }
  return result;
}
