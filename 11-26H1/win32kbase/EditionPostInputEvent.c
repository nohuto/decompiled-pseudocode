/*
 * XREFs of EditionPostInputEvent @ 0x140162660
 * Callers:
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1401625DC (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     PostEvent @ 0x14021BE38 (PostEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EditionPostInputEvent(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // ebp
  __int64 (__fastcall *v10)(_QWORD, __int64, __int64, _QWORD, __int64, __int64); // rax

  v9 = a1;
  v10 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                                                                 + 48)
                                                                                     + 4352LL);
  if ( v10 )
    return v10(v9, a2, a3, a4, a5, a6);
  else
    return 3221225659LL;
}
