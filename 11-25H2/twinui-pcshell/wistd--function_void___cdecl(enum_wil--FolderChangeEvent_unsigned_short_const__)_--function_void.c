/*
 * XREFs of wistd::function_void___cdecl(enum_wil::FolderChangeEvent_unsigned_short_const__)_::function_void___cdecl(enum_wil::FolderChangeEvent_unsigned_short_const__)___lambda_d30d699a9b0100ad99955a9d234ed237__void_ @ 0x18055F8E4
 * Callers:
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x1800C2600 (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall wistd::function_void___cdecl_enum_wil::FolderChangeEvent_unsigned_short_const____::function_void___cdecl_enum_wil::FolderChangeEvent_unsigned_short_const______lambda_d30d699a9b0100ad99955a9d234ed237__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  std::_Ref_count_base *v3; // rcx

  a1[14] = 0LL;
  a1[1] = &off_18072D990;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[2] = *a2;
  a1[3] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  a1[14] = a1 + 1;
  v3 = (std::_Ref_count_base *)a2[1];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  return a1;
}
