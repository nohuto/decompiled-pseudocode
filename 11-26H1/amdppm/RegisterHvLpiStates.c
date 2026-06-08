/*
 * XREFs of RegisterHvLpiStates @ 0x14003DE6C
 * Callers:
 *     RegisterHvIdleStates @ 0x14003DD50 (RegisterHvIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     DecodeAcpiIdleState @ 0x140026034 (DecodeAcpiIdleState.c)
 *     RegisterIdleComplete @ 0x140034EA8 (RegisterIdleComplete.c)
 *     RegisterHvPepContext @ 0x14003E278 (RegisterHvPepContext.c)
 */

__int64 __fastcall RegisterHvLpiStates(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // edx
  _DWORD *Pool2; // rsi
  int v5; // ebx
  __int64 v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // r9
  unsigned __int64 *v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+28h] [rbp-30h]
  _DWORD v14[2]; // [rsp+40h] [rbp-18h] BYREF
  _DWORD *v15; // [rsp+48h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 544);
  if ( !v1 || !*(_DWORD *)(v1 + 16) )
    return (unsigned int)-1073741823;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 520LL, 1919119952LL);
  if ( Pool2 )
  {
    v6 = 0LL;
    v14[1] = *(_DWORD *)(a1 + 48);
    v14[0] = 87;
    v15 = Pool2;
    for ( *Pool2 = 1; (unsigned int)v6 < *(_DWORD *)(v1 + 16); v6 = (unsigned int)(v6 + 1) )
    {
      v7 = Pool2[1];
      if ( v7 >= 0x10 )
        break;
      v8 = 80 * v6;
      v9 = (unsigned __int64 *)&Pool2[8 * v7 + 2];
      if ( (*(_DWORD *)(80 * v6 + v1 + 32) & 1) != 0 )
      {
        v10 = v6 + 1;
        if ( (unsigned int)v6 >= 3 )
          v10 = 3;
        *((_DWORD *)v9 + 2) = v10;
        *((_DWORD *)v9 + 3) = *(_DWORD *)(v8 + v1 + 28);
        *((_DWORD *)v9 + 4) = 0;
        *((_DWORD *)v9 + 6) = *(_DWORD *)(v8 + v1 + 24);
        if ( (int)DecodeAcpiIdleState(
                    a1,
                    (char *)(v8 + v1 + 48),
                    0xFFFFFFFF,
                    *(unsigned int *)(v8 + v1 + 36),
                    v9,
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
      v5 = -1073741823;
LABEL_27:
      ExFreePoolWithTag(Pool2, (ULONG)1919119952);
      return (unsigned int)v5;
    }
    if ( qword_140015950 )
    {
      v11 = qword_140015950(v14);
      v5 = 0;
      if ( v11 != -1073741637 )
        v5 = v11;
      if ( v5 >= 0 )
      {
        v5 = RegisterHvPepContext(a1);
        if ( v5 >= 0 )
        {
          if ( !*(_BYTE *)(a1 + 720) )
          {
            *(_BYTE *)(a1 + 720) = 1;
            RegisterIdleComplete(a1);
          }
          v5 = 0;
        }
        goto LABEL_27;
      }
    }
    else
    {
      v5 = -1073741822;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = v5;
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        3,
        14,
        (__int64)&WPP_38d77d5c6a80325a869eb798b0edd88f_Traceguids,
        v13);
    }
    goto LABEL_27;
  }
  return (unsigned int)-1073741670;
}
