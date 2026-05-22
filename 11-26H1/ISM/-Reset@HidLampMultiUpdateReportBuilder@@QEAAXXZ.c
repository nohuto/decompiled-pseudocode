/*
 * XREFs of ?Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ @ 0x1800225D4
 * Callers:
 *     ?Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z @ 0x180021860 (-Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180083B54 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 */

void __fastcall HidLampMultiUpdateReportBuilder::Reset(HidLampMultiUpdateReportBuilder *this)
{
  __int64 v1; // r8

  v1 = *((int *)this + 4);
  *((_QWORD *)this + 3) = 0LL;
  memset_0(*((void **)this + 4), 0, 4 * v1);
  memset_0(*((void **)this + 5), 0, *((int *)this + 4));
  memset_0(*((void **)this + 6), 0, *((int *)this + 4));
  memset_0(*((void **)this + 7), 0, *((int *)this + 4));
  memset_0(*((void **)this + 8), 0, *((int *)this + 4));
}
