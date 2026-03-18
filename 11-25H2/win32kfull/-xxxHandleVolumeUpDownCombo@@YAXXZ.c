/*
 * XREFs of ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x14028B0FC
 * Callers:
 *     ?xxxHandleVolumeUpDownKey@@YAXE_N@Z @ 0x1401D27B4 (-xxxHandleVolumeUpDownKey@@YAXE_N@Z.c)
 * Callees:
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x14021DA40 (-xxxUserBeep@@YAHKK_N@Z.c)
 *     ?VolumeUpDownComboSupported@@YA_NXZ @ 0x14028ABD8 (-VolumeUpDownComboSupported@@YA_NXZ.c)
 */

void xxxHandleVolumeUpDownCombo(void)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rdx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = W32GetUserSessionState(v2, v1) + 66776;
  v6 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 )
  {
    if ( PerformanceCounter.QuadPart > *(_QWORD *)(v5 + 8) )
    {
      v4 = gliQpcFreq;
      *(_QWORD *)(v5 + 8) = PerformanceCounter.QuadPart + 2LL * gliQpcFreq;
      v6 = 0;
    }
  }
  else
  {
    v3 = gliQpcFreq;
    v4 = PerformanceCounter.QuadPart + 2LL * gliQpcFreq;
    *(_QWORD *)(v5 + 8) = v4;
  }
  v7 = v6 + 1;
  *(_DWORD *)v5 = v7;
  if ( v7 >= 3 )
  {
    if ( VolumeUpDownComboSupported(v4, v3) )
    {
      xxxUserBeep(494LL, 200LL, 1);
      LOBYTE(v8) = 1;
      xxxDisplayDiagBlackScreenDetected(2LL, v8);
    }
    *(_DWORD *)v5 = 0;
  }
}
