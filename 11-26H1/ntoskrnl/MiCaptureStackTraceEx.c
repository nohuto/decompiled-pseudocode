/*
 * XREFs of MiCaptureStackTraceEx @ 0x14050EB9C
 * Callers:
 *     MiAddMdlTracker @ 0x1404F3E20 (MiAddMdlTracker.c)
 *     MiInsertPteTracker @ 0x1405033CC (MiInsertPteTracker.c)
 * Callees:
 *     MiCaptureStackTraceCallout @ 0x140260E6C (MiCaptureStackTraceCallout.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

_BOOL8 __fastcall MiCaptureStackTraceEx(_QWORD *a1, unsigned int a2)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v5 = 0LL;
  memset_0(a1, 0, 0xA0uLL);
  if ( (struct _KTHREAD *)qword_140E360B8 == KeGetCurrentThread() )
  {
    a1[2] = 305419896LL;
  }
  else
  {
    a1[2] = 305419895LL;
    *((_QWORD *)&v5 + 1) = a2 | 0x200000000LL;
    *(_QWORD *)&v5 = a1;
    MiCaptureStackTraceCallout((__int64)&v5);
  }
  return (_DWORD)v6 != 0;
}
