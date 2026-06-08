/*
 * XREFs of RegisterKernelCStates @ 0x140035148
 * Callers:
 *     RegisterKernelIdleStates @ 0x140035700 (RegisterKernelIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     DecodeAcpi2CState @ 0x140025FD8 (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterKernelCStates(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // ebx
  __int64 v7; // r13
  unsigned __int8 v8; // r12
  __int64 v9; // rcx
  void *v10; // rax
  void *v11; // rax
  unsigned int v12; // edx
  unsigned int i; // r14d
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // ecx
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdx
  char v24; // al
  unsigned int v25; // ecx
  __int64 *v27; // [rsp+20h] [rbp-60h]
  char v28[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+38h] [rbp-48h] BYREF
  __int64 v30; // [rsp+40h] [rbp-40h]
  __int64 v31; // [rsp+48h] [rbp-38h]
  __int64 v32; // [rsp+50h] [rbp-30h]
  __int64 v33; // [rsp+58h] [rbp-28h]
  __int128 v34; // [rsp+60h] [rbp-20h] BYREF
  int v35; // [rsp+70h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 528);
  v4 = 0;
  v30 = a1;
  v35 = 0;
  v29 = 0LL;
  v7 = a1;
  v34 = 0LL;
  if ( v3 && *(_DWORD *)v3 )
  {
    *(_BYTE *)(a2 + 19) = 1;
    *(_QWORD *)(a2 + 24) = AcpiCStatePreselect;
    v8 = 1;
    *(_DWORD *)(a2 + 96) = 0;
    *(_QWORD *)(a2 + 40) = AcpiCStateAvailabilityCheck;
    *(_QWORD *)(a2 + 64) = AcpiCStateIdleExecute;
    *(_QWORD *)(a2 + 72) = AcpiCStateIdleComplete;
    *(_BYTE *)(a2 + 16) = 0;
    v9 = *(_QWORD *)(a1 + 280) & 0x2000007F000LL;
    v10 = AcpiCStateIsHalted;
    if ( v9 )
      v10 = AcpiMwaitStateIsHalted;
    *(_QWORD *)(a2 + 80) = v10;
    v11 = AcpiCStateIsHalted;
    if ( v9 )
      v11 = AcpiWaitStateInitiateWake;
    *(_QWORD *)(a2 + 88) = v11;
    v28[0] = 0;
    *(_DWORD *)(a3 + 48) = 0;
    if ( *(_BYTE *)(v3 + 16) != 1 )
    {
      LOBYTE(v34) = 127;
      BYTE12(v34) = 1;
      HIWORD(v34) = 0;
      v35 = 0;
      DecodeAcpi2CState(v7, (__int64)&v34, (__int64)&v29, (__int64)v28, a3 + 56);
      v8 = 2;
      *(_DWORD *)(a2 + 104) = *(_DWORD *)(a2 + 104) & 0x7FFFFD80 | ((unsigned __int8)v28[0] << 31) | 0xF;
      *(_DWORD *)(a2 + 96) = 1;
      *(_DWORD *)(a3 + 48) = 1;
    }
    v12 = *(_DWORD *)v3;
    for ( i = 0; i < *(_DWORD *)v3; ++v8 )
    {
      if ( v8 > 3u )
        break;
      v14 = *(unsigned __int8 *)(v3 + 20LL * i + 16);
      if ( v14 > 3 )
        v14 = 3;
      if ( v14 == v8 )
      {
        v15 = i + 1;
        if ( (unsigned int)v15 < v12 )
        {
          do
          {
            v16 = *(unsigned __int8 *)(v3 + 20 * v15 + 16);
            if ( v16 > 3 )
              v16 = 3;
            if ( v16 != v8 )
              break;
            if ( *(_DWORD *)(v3 + 20 * v15 + 20) >= *(_DWORD *)(v3 + 20 * (i + 1LL)) )
              break;
            ++i;
            v15 = (unsigned int)(v15 + 1);
          }
          while ( (unsigned int)v15 < v12 );
          v7 = v30;
        }
        v17 = 88LL * *(unsigned int *)(a2 + 96);
        v31 = 32LL * *(unsigned int *)(a2 + 96);
        v32 = v17;
        v27 = (__int64 *)(v17 + a3 + 56);
        v33 = 5LL * i;
        v18 = v3 + 4 * (v33 + 1);
        *v27 = v18;
        if ( (int)DecodeAcpi2CState(v7, v18, (__int64)&v29, (__int64)v28, (__int64)v27) < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v7 + 1112), 8u);
        }
        else
        {
          v19 = v31;
          v20 = *(_DWORD *)(v31 + a2 + 104) ^ ((unsigned __int8)*(_DWORD *)(v31 + a2 + 104) ^ (unsigned __int8)(8 * v8)) & 0x78 | 7;
          *(_DWORD *)(v31 + a2 + 104) = v20;
          v21 = v20 & 0x7FFFFFFF | ((unsigned __int8)v28[0] << 31);
          v22 = v32;
          *(_DWORD *)(v19 + a2 + 104) = v21;
          *(_DWORD *)(v19 + a2 + 104) = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)(*(unsigned __int8 *)(v22 + a3 + 138) << 9)) & 0x200;
          if ( *(_BYTE *)(v22 + a3 + 138) )
            *(_QWORD *)(a3 + 40) = *(_QWORD *)(v22 + a3 + 96);
          v23 = v33;
          *(_DWORD *)(v19 + a2 + 108) = 10 * *(unsigned __int16 *)(v3 + 4 * v33 + 18);
          *(_DWORD *)(v19 + a2 + 116) = *(_DWORD *)(v3 + 4 * v23 + 20);
          ++*(_DWORD *)(a2 + 96);
          ++*(_DWORD *)(a3 + 48);
        }
      }
      else
      {
        --i;
      }
      v12 = *(_DWORD *)v3;
      ++i;
    }
    v24 = *(_BYTE *)(a3 + 48);
    v25 = 0;
    *(_BYTE *)(a3 + 20) = v24;
    if ( v24 )
    {
      do
      {
        *(_BYTE *)(v25 + a3 + 21) = v25;
        ++v25;
      }
      while ( v25 < *(unsigned __int8 *)(a3 + 20) );
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
