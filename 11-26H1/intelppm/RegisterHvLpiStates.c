/*
 * XREFs of RegisterHvLpiStates @ 0x14003EA7C
 * Callers:
 *     RegisterHvIdleStates @ 0x14003E960 (RegisterHvIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     RegisterIdleComplete @ 0x140038858 (RegisterIdleComplete.c)
 *     RegisterHvPepContext @ 0x14003EE88 (RegisterHvPepContext.c)
 *     DecodeAcpiIdleState @ 0x140042754 (DecodeAcpiIdleState.c)
 */

__int64 __fastcall RegisterHvLpiStates(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *Pool2; // rsi
  int v4; // ebx
  __int64 v5; // rbp
  unsigned int v6; // eax
  __int64 v7; // r9
  _DWORD *v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+28h] [rbp-30h]
  _DWORD v13[2]; // [rsp+40h] [rbp-18h] BYREF
  _DWORD *v14; // [rsp+48h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 544);
  if ( !v1 || !*(_DWORD *)(v1 + 16) )
    return (unsigned int)-1073741823;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 520LL, 1919119952LL);
  if ( Pool2 )
  {
    v5 = 0LL;
    v13[1] = *(_DWORD *)(a1 + 48);
    v13[0] = 87;
    v14 = Pool2;
    for ( *Pool2 = 1; (unsigned int)v5 < *(_DWORD *)(v1 + 16); v5 = (unsigned int)(v5 + 1) )
    {
      v6 = Pool2[1];
      if ( v6 >= 0x10 )
        break;
      v7 = 80 * v5;
      v8 = &Pool2[8 * v6 + 2];
      if ( (*(_DWORD *)(80 * v5 + v1 + 32) & 1) != 0 )
      {
        v9 = v5 + 1;
        if ( (unsigned int)v5 >= 3 )
          v9 = 3;
        v8[2] = v9;
        v8[3] = *(_DWORD *)(v7 + v1 + 28);
        v8[4] = 0;
        v8[6] = *(_DWORD *)(v7 + v1 + 24);
        if ( (int)DecodeAcpiIdleState(
                    a1,
                    (int)v7 + (int)v1 + 48,
                    -1,
                    *(_DWORD *)(v7 + v1 + 36),
                    (__int64)v8,
                    0LL,
                    0LL,
                    0LL) < 0 )
          _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x80000u);
        else
          ++Pool2[1];
      }
    }
    if ( !Pool2[1] )
    {
      v4 = -1073741823;
LABEL_27:
      ExFreePoolWithTag(Pool2, (ULONG)1919119952);
      return (unsigned int)v4;
    }
    if ( qword_140019520 )
    {
      v10 = qword_140019520(v13);
      v4 = 0;
      if ( v10 != -1073741637 )
        v4 = v10;
      if ( v4 >= 0 )
      {
        v4 = RegisterHvPepContext(a1);
        if ( v4 >= 0 )
        {
          if ( !*(_BYTE *)(a1 + 720) )
          {
            *(_BYTE *)(a1 + 720) = 1;
            RegisterIdleComplete(a1);
          }
          v4 = 0;
        }
        goto LABEL_27;
      }
    }
    else
    {
      v4 = -1073741822;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v12) = v4;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xEu,
        (__int64)&WPP_38d77d5c6a80325a869eb798b0edd88f_Traceguids,
        v12);
    }
    goto LABEL_27;
  }
  return (unsigned int)-1073741670;
}
