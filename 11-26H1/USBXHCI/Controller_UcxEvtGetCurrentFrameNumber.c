/*
 * XREFs of Controller_UcxEvtGetCurrentFrameNumber @ 0x140026B80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_UcxEvtGetCurrentFrameNumber(__int64 a1, unsigned int *a2)
{
  __int64 v3; // r10
  __int64 v4; // rdx
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rtt
  int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  unsigned int v14; // r8d
  int v15; // eax

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B290);
  if ( *(_DWORD *)(v3 + 792) == 1 )
  {
    v4 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v3 + 844) / 10000LL;
    v5 = (unsigned int)(**(_DWORD **)(*(_QWORD *)(v3 + 88) + 40LL) + 1) >> 3;
    v6 = v5 & 0x7FF;
    _m_prefetchw((const void *)(v3 + 832));
    v7 = *(_QWORD *)(v3 + 832);
    do
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 832), v7, v7);
    }
    while ( v8 != v7 );
    v9 = ((_DWORD)v7 << 11) - (v7 >> 21) + v4;
    v10 = (((_WORD)v7 << 11) - (unsigned __int16)(v7 >> 21) + (_WORD)v4) & 0x7FF;
    v11 = v9 ^ ((unsigned __int16)v5 ^ (unsigned __int16)v9) & 0x7FF;
    if ( v10 < v6 )
    {
      v14 = v6 - v10;
      v15 = v11 - 2048;
      if ( v14 <= 0x400 )
        v15 = v9 ^ ((unsigned __int16)v5 ^ (unsigned __int16)v9) & 0x7FF;
      v11 = v15;
    }
    else if ( v10 - v6 > 0x400 )
    {
      v11 += 2048;
    }
    v12 = _InterlockedExchange64(
            (volatile __int64 *)(v3 + 832),
            ((unsigned __int64)v11 >> 11) | ((v4 - (v11 & 0x7FF)) << 21));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v12) = 5;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(v3 + 72),
          v12,
          4,
          185,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          v11);
      }
    }
    *a2 = v11;
    return 0LL;
  }
  else
  {
    *a2 = -1;
    return 0LL;
  }
}
