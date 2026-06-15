/*
 * XREFs of ?terminate@details@gsl@@YAXXZ @ 0x1800B0D84
 * Callers:
 *     ??$?0_K@?$storage_type@V?$extent_type@$0?0@details@gsl@@@?$span@H$0?0@gsl@@QEAA@PEAH_K@Z @ 0x180059FD0 (--$-0_K@-$storage_type@V-$extent_type@$0-0@details@gsl@@@-$span@H$0-0@gsl@@QEAA@PEAH_K@Z.c)
 *     ??0EffectPackConfiguration@@QEAA@U_GUID@@@Z @ 0x180059FFC (--0EffectPackConfiguration@@QEAA@U_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall gsl::details::terminate(gsl::details *this, __int64 a2, __int64 a3)
{
  _o_terminate(this, a2, a3);
  __debugbreak();
  JUMPOUT(0x1800B0D95LL);
}
