/*
 * XREFs of RegisterHvCStates @ 0x14003D678
 * Callers:
 *     RegisterHvIdleStates @ 0x14003DD50 (RegisterHvIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     DecodeAcpi2CState @ 0x140025FD8 (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterHvCStates(__int64 a1)
{
  __int64 v1; // r14
  unsigned int v2; // ebx
  char *Pool2; // rdi
  unsigned __int8 v5; // r15
  unsigned int v6; // edx
  unsigned int i; // esi
  __int64 v8; // r10
  char v9; // cl
  __int64 j; // r8
  char v11; // cl
  char *v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  int v15; // esi
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  char *v18; // [rsp+38h] [rbp-50h]
  __int128 v19; // [rsp+40h] [rbp-48h] BYREF
  int v20; // [rsp+50h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 528);
  v2 = 0;
  v20 = 0;
  v19 = 0LL;
  if ( !v1 || !*(_DWORD *)v1 )
    return (unsigned int)-1073741823;
  Pool2 = (char *)ExAllocatePool2(64LL, 520LL, 1919119952LL);
  if ( Pool2 )
  {
    v5 = 1;
    HIDWORD(v17) = *(_DWORD *)(a1 + 48);
    LODWORD(v17) = 87;
    v18 = Pool2;
    *(_DWORD *)Pool2 = 1;
    if ( *(_BYTE *)(v1 + 16) != 1 )
    {
      *(_QWORD *)(Pool2 + 20) = 0LL;
      *((_DWORD *)Pool2 + 4) = 1;
      *((_DWORD *)Pool2 + 8) = 0;
      LOBYTE(v19) = 127;
      BYTE12(v19) = 1;
      HIWORD(v19) = 0;
      v20 = 0;
      DecodeAcpi2CState(a1, (__int64)&v19, (__int64)(Pool2 + 8), 0LL, 0LL);
      ++*((_DWORD *)Pool2 + 1);
    }
    v6 = *(_DWORD *)v1;
    for ( i = 0; i < *(_DWORD *)v1; ++v5 )
    {
      if ( v5 > 3u )
        break;
      v8 = *((unsigned int *)Pool2 + 1);
      if ( (unsigned int)v8 >= 0x10 )
        break;
      v9 = *(_BYTE *)(v1 + 20LL * i + 16);
      if ( (unsigned __int8)v9 > 3u )
        v9 = 3;
      if ( v9 == v5 )
      {
        for ( j = i + 1; (unsigned int)j < v6; j = (unsigned int)(j + 1) )
        {
          v11 = *(_BYTE *)(v1 + 20 * j + 16);
          if ( (unsigned __int8)v11 > 3u )
            v11 = 3;
          if ( v11 != v5 || *(_DWORD *)(v1 + 20 * j + 20) >= *(_DWORD *)(v1 + 20 * (i + 1LL)) )
            break;
          ++i;
        }
        v12 = &Pool2[32 * v8 + 8];
        *((_DWORD *)v12 + 2) = v5;
        v13 = v1 + 4 * (i + 4LL * i + 1);
        *((_DWORD *)v12 + 3) = *(unsigned __int16 *)(v13 + 14);
        *((_DWORD *)v12 + 4) = *(_DWORD *)(v13 + 16);
        if ( (int)DecodeAcpi2CState(a1, v13, (__int64)v12, 0LL, 0LL) < 0 )
          _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
        else
          ++*((_DWORD *)Pool2 + 1);
      }
      else
      {
        --i;
      }
      v6 = *(_DWORD *)v1;
      ++i;
    }
    if ( *((_DWORD *)Pool2 + 1) )
    {
      if ( qword_140015950 )
      {
        v14 = qword_140015950(&v17);
        v15 = 0;
        if ( v14 != -1073741637 )
          v15 = v14;
        if ( v15 >= 0 )
          goto LABEL_36;
      }
      else
      {
        v15 = -1073741822;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v6,
          3,
          13,
          (__int64)&WPP_38d77d5c6a80325a869eb798b0edd88f_Traceguids,
          v15,
          v17,
          v18);
      }
      v2 = v15;
    }
    else
    {
      v2 = -1073741823;
    }
LABEL_36:
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
    return v2;
  }
  return (unsigned int)-1073741670;
}
