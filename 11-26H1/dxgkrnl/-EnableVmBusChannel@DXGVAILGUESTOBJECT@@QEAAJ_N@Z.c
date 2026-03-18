/*
 * XREFs of ?EnableVmBusChannel@DXGVAILGUESTOBJECT@@QEAAJ_N@Z @ 0x1400830A0
 * Callers:
 *     ?VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ @ 0x14020E8F8 (-VailEnsureConnection@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z @ 0x14020E290 (-EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z.c)
 */

__int64 __fastcall DXGVAILGUESTOBJECT::EnableVmBusChannel(DXGVAILGUESTOBJECT *this)
{
  struct DXGVMBUSCHANNEL *v2; // rcx
  __int64 result; // rax

  if ( !DXGFASTMUTEX::IsOwner((DXGVAILGUESTOBJECT *)((char *)this + 16)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 485;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_VailMutex.IsOwner()", 485LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (struct DXGVMBUSCHANNEL *)*((_QWORD *)this + 9);
  result = 3221225473LL;
  if ( v2 )
    return EnableVmBusChannel(v2, 1);
  return result;
}
