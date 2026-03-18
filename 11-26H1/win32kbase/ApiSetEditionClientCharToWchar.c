/*
 * XREFs of ApiSetEditionClientCharToWchar @ 0x1402273FC
 * Callers:
 *     xxxInternalToUnicode @ 0x1400E7610 (xxxInternalToUnicode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionClientCharToWchar(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v3; // si
  unsigned __int16 v4; // bx
  int (*v5)(void); // rax
  __int64 v6; // rcx
  unsigned __int16 (__fastcall *v7)(_QWORD, _QWORD); // rax

  v3 = a1;
  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5472LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v7 = *(unsigned __int16 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 5480LL);
      if ( v7 )
        return v7(v3, a2);
    }
  }
  return v4;
}
