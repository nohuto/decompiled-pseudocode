/*
 * XREFs of ??0CForegroundLaunch@@QEAA@XZ @ 0x1402479E0
 * Callers:
 *     ?Initialize@ForegroundLaunch@@YAJXZ @ 0x14028EDFC (-Initialize@ForegroundLaunch@@YAJXZ.c)
 * Callees:
 *     IsCurrentSessionServiceSession @ 0x1400D8C14 (IsCurrentSessionServiceSession.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14019EB54 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

CForegroundLaunch *__fastcall CForegroundLaunch::CForegroundLaunch(CForegroundLaunch *this)
{
  BOOL v2; // eax

  *(_QWORD *)this = 0LL;
  memset_0((char *)this + 8, 0, 0x50uLL);
  *((_DWORD *)this + 22) = 0;
  `vector constructor iterator'(
    (char *)this + 96,
    32LL,
    10LL,
    (void (__fastcall *)(char *))CForegroundLaunch::PID_LAUNCH_POLICY::PID_LAUNCH_POLICY);
  *((_BYTE *)this + 416) = 1;
  *((_QWORD *)this + 53) = (char *)this + 424;
  *((_QWORD *)this + 54) = (char *)this + 424;
  v2 = IsCurrentSessionServiceSession();
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 440) = v2;
  return this;
}
