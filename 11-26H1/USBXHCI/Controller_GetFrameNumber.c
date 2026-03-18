/*
 * XREFs of Controller_GetFrameNumber @ 0x140015370
 * Callers:
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x140015174 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Controller_TranslateFrameNumberToQpcValue @ 0x1400162F8 (Controller_TranslateFrameNumberToQpcValue.c)
 *     Controller_CheckForFrameOverlowEventFromIsr @ 0x14002AFB0 (Controller_CheckForFrameOverlowEventFromIsr.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x140040C4C (Controller_DetectFrameMicroframeBoundary.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall Controller_GetFrameNumber(__int64 a1, int a2, unsigned int *a3, int *a4)
{
  __int64 v8; // rdx
  unsigned int v9; // r9d
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rtt
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rdx
  unsigned int v19; // r8d
  int v20; // eax

  v8 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(a1 + 844) / 10000LL;
  v9 = a2 + **(_DWORD **)(*(_QWORD *)(a1 + 88) + 40LL);
  if ( a4 )
    *a4 = v9 & 7;
  v10 = v9 >> 3;
  v11 = v10 & 0x7FF;
  if ( a3 )
    *a3 = v11;
  _m_prefetchw((const void *)(a1 + 832));
  v12 = *(_QWORD *)(a1 + 832);
  do
  {
    v13 = v12;
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 832), v12, v12);
  }
  while ( v13 != v12 );
  v14 = ((_DWORD)v12 << 11) - (v12 >> 21) + v8;
  v15 = (((_WORD)v12 << 11) - (unsigned __int16)(v12 >> 21) + (_WORD)v8) & 0x7FF;
  v16 = v14 ^ ((unsigned __int16)v10 ^ (unsigned __int16)v14) & 0x7FF;
  if ( v15 < v11 )
  {
    v19 = v11 - v15;
    v20 = v16 - 2048;
    if ( v19 <= 0x400 )
      v20 = v14 ^ ((unsigned __int16)v10 ^ (unsigned __int16)v14) & 0x7FF;
    v16 = v20;
  }
  else if ( v15 - v11 > 0x400 )
  {
    v16 += 2048;
  }
  v17 = _InterlockedExchange64(
          (volatile __int64 *)(a1 + 832),
          ((unsigned __int64)v16 >> 11) | ((v8 - (v16 & 0x7FF)) << 21));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v17) = 5;
    WPP_RECORDER_SF_D(*(_QWORD *)(a1 + 72), v17, 4, 185, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v16);
  }
  return v16;
}
