/*
 * XREFs of ?EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ @ 0x140083134
 * Callers:
 *     NtDxgkVailConnect @ 0x140210E60 (NtDxgkVailConnect.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z @ 0x14020E290 (-EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::EnableVmBusChannel(DXGVAILOBJECT *this)
{
  struct DXGVMBUSCHANNEL *v2; // rcx
  __int64 result; // rax

  if ( !DXGFASTMUTEX::IsOwner((DXGVAILOBJECT *)((char *)this + 40)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 339;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_VailMutex.IsOwner()", 339LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (struct DXGVMBUSCHANNEL *)*((_QWORD *)this + 14);
  result = 3221225473LL;
  if ( v2 )
    return EnableVmBusChannel(v2, 0);
  return result;
}
