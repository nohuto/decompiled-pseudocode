/*
 * XREFs of ??$?0VSmartObjStackRef@@@?$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14021D83C
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 */

_QWORD *__fastcall Win32HMThreadLockAlways<tagMENU>::Win32HMThreadLockAlways<tagMENU>(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdx

  v4 = *(_QWORD *)(a2 + 16);
  if ( !v4 )
    v4 = **(_QWORD **)a2;
  Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(a1, v4);
  return a1;
}
