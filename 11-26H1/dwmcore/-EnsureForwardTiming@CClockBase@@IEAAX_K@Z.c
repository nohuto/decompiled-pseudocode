/*
 * XREFs of ?EnsureForwardTiming@CClockBase@@IEAAX_K@Z @ 0x180186BE0
 * Callers:
 *     ?UpdateTiming@CDefaultClock@@UEAA_KXZ @ 0x180186960 (-UpdateTiming@CDefaultClock@@UEAA_KXZ.c)
 *     ?UpdateTiming@CMonitorClock@@UEAA_KXZ @ 0x1801869C0 (-UpdateTiming@CMonitorClock@@UEAA_KXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CClockBase::EnsureForwardTiming(CClockBase *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // r11
  unsigned __int64 v4; // r8
  LARGE_INTEGER v5; // rcx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 5);
  if ( v2 < a2 )
    ModuleFailFastForHRESULT(-2147023498, retaddr);
  if ( qword_1803DE888 )
  {
    v4 = *((_QWORD *)this + 3);
    v5.QuadPart = v4 - qword_1803DE888;
    if ( qword_1803DE888 >= v4 )
      v5.QuadPart = qword_1803DE888 - v4;
    if ( v5.QuadPart > (unsigned __int64)g_qpcFrequency.QuadPart )
      ModuleFailFastForHRESULT(-2003303168, retaddr);
  }
  if ( v2 < qword_1803DE898 )
  {
    if ( qword_1803DE898 - v2 >= g_qpcFrequency.QuadPart )
      ModuleFailFastForHRESULT(-2003304293, retaddr);
    v10 = qword_1803DE898 + (*((_QWORD *)this + 3) >> 1);
    *((_QWORD *)this + 5) = qword_1803DE898;
    *((_QWORD *)this + 6) = v10;
  }
  else
  {
    v6 = *((_OWORD *)this + 1);
    v7 = *((_OWORD *)this + 2);
    CClockBase::s_prevClockSetTime = a2;
    CClockBase::s_prevClock = v6;
    v8 = *((_OWORD *)this + 3);
    unk_1803DE890 = v7;
    v9 = *((_OWORD *)this + 4);
    xmmword_1803DE8A0 = v8;
    qword_1803DE8C0 = *((_QWORD *)this + 10);
    xmmword_1803DE8B0 = v9;
  }
}
