/*
 * XREFs of PopPepTriggerActivity @ 0x1403B9720
 * Callers:
 *     PopPepProcessEvent @ 0x1403B9A00 (PopPepProcessEvent.c)
 *     PopPepComponentSetLatency @ 0x1403BB494 (PopPepComponentSetLatency.c)
 *     PopPepUpdateIdleState @ 0x1403BB6E8 (PopPepUpdateIdleState.c)
 *     PopPepTriggerComponentActivatingActivity @ 0x1403BB750 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentActiveActivity @ 0x1403BB950 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1403BBDB0 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepSurprisePowerOn @ 0x1403C145C (PopPepSurprisePowerOn.c)
 *     PopPepTriggerComponentIdleStateChangeActivity @ 0x140485D60 (PopPepTriggerComponentIdleStateChangeActivity.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPepTriggerActivity(__int64 a1, __int64 a2, signed int a3, unsigned int a4)
{
  __int64 v4; // r11
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // edx
  BOOL v13; // ecx
  ULONG_PTR v14; // r10
  __int64 v15; // r9
  _DWORD *v16; // rax
  _DWORD *v17; // rax
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx

  v4 = 17LL * a3;
  v8 = HIDWORD(ActivityAttributes[v4]);
  switch ( v8 )
  {
    case 0:
      break;
    case 1:
      v9 = ActivityAttributes[17 * a3 + 5];
      if ( v9 )
      {
        v19 = **(_DWORD **)(a1 + 72);
        if ( (v19 & v9) != 0 )
        {
          if ( (v19 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 120));
          **(_DWORD **)(a1 + 72) &= 0xFFFFFFFC;
        }
      }
      v10 = ActivityAttributes[v4 + 7];
      if ( v10 )
      {
        _mm_lfence();
        v20 = **(_DWORD **)(a1 + 104);
        if ( (v10 & v20) != 0 )
        {
          _mm_lfence();
          if ( (v20 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 120));
          **(_DWORD **)(a1 + 104) &= 0xFFFFFFFC;
        }
      }
      v11 = HIDWORD(ActivityAttributes[v4 + 7]);
      if ( v11 )
      {
        _mm_lfence();
        v21 = **(_DWORD **)(a1 + 112);
        if ( (v11 & v21) != 0 )
        {
LABEL_27:
          _mm_lfence();
          if ( (v21 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 120));
          **(_DWORD **)(a1 + 112) &= 0xFFFFFFFC;
        }
      }
      break;
    case 2:
      if ( *(_BYTE *)(a1 + 125) )
      {
        v22 = ActivityAttributes[17 * a3 + 5];
        if ( v22 )
        {
          v28 = **(_DWORD **)(a1 + 72);
          if ( (v28 & v22) != 0 )
          {
            if ( (v28 & 2) != 0 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 120));
            **(_DWORD **)(a1 + 72) &= 0xFFFFFFFC;
          }
        }
      }
      v23 = HIDWORD(ActivityAttributes[v4 + 5]);
      if ( v23 )
      {
        _mm_lfence();
        v29 = **(_DWORD **)(a2 + 64);
        if ( (v23 & v29) != 0 )
        {
          _mm_lfence();
          if ( (v29 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
          **(_DWORD **)(a2 + 64) &= 0xFFFFFFFC;
        }
      }
      v24 = ActivityAttributes[v4 + 6];
      if ( v24 )
      {
        _mm_lfence();
        v30 = **(_DWORD **)(a2 + 72);
        if ( (v24 & v30) != 0 )
        {
          _mm_lfence();
          if ( (v30 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
          **(_DWORD **)(a2 + 72) &= 0xFFFFFFFC;
        }
      }
      v25 = HIDWORD(ActivityAttributes[v4 + 6]);
      if ( v25 )
      {
        _mm_lfence();
        v31 = **(_DWORD **)(a2 + 80);
        if ( (v25 & v31) != 0 )
        {
          _mm_lfence();
          if ( (v31 & 2) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
          **(_DWORD **)(a2 + 80) &= 0xFFFFFFFC;
        }
      }
      if ( *(_BYTE *)(a1 + 125) )
      {
        v26 = ActivityAttributes[v4 + 7];
        if ( v26 )
        {
          _mm_lfence();
          v32 = **(_DWORD **)(a1 + 104);
          if ( (v26 & v32) != 0 )
          {
            _mm_lfence();
            if ( (v32 & 2) != 0 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 120));
            **(_DWORD **)(a1 + 104) &= 0xFFFFFFFC;
          }
        }
        v27 = HIDWORD(ActivityAttributes[v4 + 7]);
        if ( v27 )
        {
          _mm_lfence();
          v21 = **(_DWORD **)(a1 + 112);
          if ( (v27 & v21) != 0 )
            goto LABEL_27;
        }
      }
      break;
  }
  v12 = 0;
  v13 = (unsigned int)a3 <= 5 && LOBYTE(ActivityAttributes[v4]) == 1;
  v14 = a1 + 72;
  v15 = 0LL;
  if ( !v13 )
    v14 = a2 + 56;
  while ( v12 < 6 )
  {
    v16 = *(_DWORD **)(v14 + 8 * v15);
    if ( v16 )
    {
      if ( (*((_DWORD *)&ActivityAttributes[17 * a3 + 2] + v15) & *v16) != 0 )
        PopFxBugCheck(0x666uLL, v14, a3, v12);
    }
    ++v12;
    ++v15;
  }
  if ( a2 )
    v17 = *(_DWORD **)(a2 + 8LL * a3 + 56);
  else
    v17 = *(_DWORD **)(a1 + 8LL * a3 + 72);
  *v17 |= 1u;
  v17[1] = a4;
  return guard_dispatch_icall_no_overrides(a1, a2, a4);
}
