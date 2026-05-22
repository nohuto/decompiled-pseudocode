/*
 * XREFs of ?GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ @ 0x18005E760
 * Callers:
 *     ?ShellButtonRepeatCallback@GameControllerRawInputProvider@@CAJPEAX@Z @ 0x18005E6B0 (-ShellButtonRepeatCallback@GameControllerRawInputProvider@@CAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall QpcTimeConverter::GetCurrentMicroSecTime(QpcTimeConverter *this)
{
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  PerformanceCount.QuadPart = 0LL;
  if ( QueryPerformanceCounter(&PerformanceCount) && GameControllerRawInputProvider::s_qpcTime )
    return qword_180253EE8 * (PerformanceCount.QuadPart / (unsigned __int64)GameControllerRawInputProvider::s_qpcTime)
         + qword_180253EE8
         * (PerformanceCount.QuadPart % (unsigned __int64)GameControllerRawInputProvider::s_qpcTime)
         / GameControllerRawInputProvider::s_qpcTime;
  else
    return 1000LL * GetTickCount();
}
