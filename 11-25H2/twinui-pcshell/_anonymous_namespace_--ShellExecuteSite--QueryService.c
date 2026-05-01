/*
 * XREFs of _anonymous_namespace_::ShellExecuteSite::QueryService @ 0x1805D52A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::ShellExecuteSite::QueryService(
        __int64 (__fastcall ***a1)(_QWORD, __int64, _QWORD *),
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rax

  *a4 = 0LL;
  v4 = *a2 - *(_QWORD *)&GUID_c2b937a9_3110_4398_8a56_f34c6342d244.Data1;
  if ( *a2 == *(_QWORD *)&GUID_c2b937a9_3110_4398_8a56_f34c6342d244.Data1 )
    v4 = a2[1] - *(_QWORD *)GUID_c2b937a9_3110_4398_8a56_f34c6342d244.Data4;
  if ( v4 )
    return 2147500034LL;
  else
    return (**a1)(a1, a3, a4);
}
