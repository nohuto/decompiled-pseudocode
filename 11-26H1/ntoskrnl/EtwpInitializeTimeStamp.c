/*
 * XREFs of EtwpInitializeTimeStamp @ 0x140AB2428
 * Callers:
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x14021CA00 (KeQuerySystemTimePrecise.c)
 *     EtwpGetLoggerTimeStamp @ 0x14021D850 (EtwpGetLoggerTimeStamp.c)
 *     RtlGetMultiTimePrecise @ 0x1404401A0 (RtlGetMultiTimePrecise.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall EtwpInitializeTimeStamp(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rax
  _QWORD *v7; // rdi
  char v8; // bp
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // edx
  _KAFFINITY_EX *UserAffinity; // rcx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 200) - 1;
  if ( !v3 )
    goto LABEL_5;
  v4 = v3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( !v5 )
    {
      v6 = 3LL;
      goto LABEL_6;
    }
    if ( v5 == 1 )
    {
      v17 = 0LL;
      if ( (int)guard_dispatch_icall_no_overrides((__int64)&v17, a2) >= 0 )
      {
        v6 = 2LL;
        goto LABEL_6;
      }
    }
LABEL_5:
    v6 = 1LL;
    *(_DWORD *)(a1 + 200) = 1;
    goto LABEL_6;
  }
  v6 = 0LL;
LABEL_6:
  *(_QWORD *)(a1 + 24) = v6;
  v7 = (_QWORD *)(a1 + 304);
  if ( (*(_DWORD *)(a1 + 816) & 2) != 0 )
  {
    v13 = *(_DWORD *)(a1 + 200);
    *v7 = *(_QWORD *)&stru_140F03830.NextProcessor;
    result = *(_QWORD *)&stru_140F03830.UserAffinityPrimaryGroup;
    *(_QWORD *)(a1 + 1544) = *(_QWORD *)&stru_140F03830.UserAffinityPrimaryGroup;
    if ( v13 == 3 )
    {
      result = (__int64)stru_140F03830.Process;
      *(_QWORD *)(a1 + 312) = stru_140F03830.Process;
    }
    else
    {
      UserAffinity = stru_140F03830.UserAffinity;
      if ( v13 == 2 )
        UserAffinity = *(_KAFFINITY_EX **)&stru_140F03830.NextProcessor;
      *(_QWORD *)(a1 + 312) = UserAffinity;
    }
  }
  else if ( *(_DWORD *)(a1 + 200) == 3 )
  {
    *(_QWORD *)(a1 + 312) = EtwpGetLoggerTimeStamp(a1);
    result = KeQuerySystemTimePrecise((_QWORD *)(a1 + 304));
  }
  else
  {
    v16 = 0LL;
    LODWORD(v17) = 0;
    v15 = 0LL;
    RtlGetMultiTimePrecise((LARGE_INTEGER *)&v15, 7, (int *)&v17);
    v8 = v17;
    v9 = *((_QWORD *)&v15 + 1);
    v10 = v15;
    if ( (v17 & 5) == 5 )
    {
      v11 = v16;
      result = *(unsigned int *)(a1 + 200);
      *v7 = v16;
      switch ( (_DWORD)result )
      {
        case 2:
          *(_QWORD *)(a1 + 312) = v11;
          break;
        case 1:
          *(_QWORD *)(a1 + 312) = v10;
          break;
        case 4:
          *(_QWORD *)(a1 + 312) = v9;
          break;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 312) = EtwpGetLoggerTimeStamp(a1);
      result = KeQuerySystemTimePrecise((_QWORD *)(a1 + 304));
      *(_DWORD *)(a1 + 816) &= ~0x8000000u;
    }
    if ( *(_DWORD *)(a1 + 200) != 4 && (v8 & 3) == 3 )
      *(_QWORD *)(a1 + 1544) = v9 - v10;
  }
  *(_OWORD *)(a1 + 432) = *(_OWORD *)v7;
  return result;
}
