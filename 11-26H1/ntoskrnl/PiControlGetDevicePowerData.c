/*
 * XREFs of PiControlGetDevicePowerData @ 0x140A93788
 * Callers:
 *     PiControlGetPropertyData @ 0x140A93360 (PiControlGetPropertyData.c)
 * Callees:
 *     PopLockGetDoDevicePowerState @ 0x1404EB730 (PopLockGetDoDevicePowerState.c)
 *     PipIsDevNodeDNStarted @ 0x140516374 (PipIsDevNodeDNStarted.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PpIrpQueryCapabilities @ 0x1409B0694 (PpIrpQueryCapabilities.c)
 */

__int64 __fastcall PiControlGetDevicePowerData(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4, _DWORD *a5)
{
  size_t v5; // r12
  unsigned int v8; // ebx
  int DoDevicePowerState; // eax
  int v10; // ecx
  int v11; // r9d
  __int64 v12; // r10
  int v13; // edx
  int i; // r8d
  int v15; // edx
  int v16; // edx
  int v17; // edx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 result; // rax
  __int128 Src; // [rsp+20h] [rbp-71h] BYREF
  __m256i v22; // [rsp+30h] [rbp-61h]
  __int64 v23; // [rsp+50h] [rbp-41h]
  int v24; // [rsp+60h] [rbp-31h] BYREF
  int v25; // [rsp+64h] [rbp-2Dh]
  __int128 v26; // [rsp+70h] [rbp-21h]
  __int64 v27; // [rsp+80h] [rbp-11h]
  int v28; // [rsp+88h] [rbp-9h]
  int v29; // [rsp+8Ch] [rbp-5h]
  int v30; // [rsp+90h] [rbp-1h]
  int v31; // [rsp+94h] [rbp+3h]
  __int64 v32; // [rsp+98h] [rbp+7h]

  v5 = a3;
  memset_0(&v24, 0, 0x40uLL);
  v8 = 0;
  DWORD2(Src) = 0;
  *a5 = 0;
  LODWORD(Src) = 56;
  if ( (unsigned int)v5 < 4 )
  {
    result = 2147483653LL;
    goto LABEL_40;
  }
  if ( (int)PpIrpQueryCapabilities(*(_QWORD *)(a1 + 32), &v24) < 0 )
    return 3221225486LL;
  if ( (unsigned int)PipIsDevNodeDNStarted(a1) )
  {
    DoDevicePowerState = PopLockGetDoDevicePowerState(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 312LL));
    if ( !DoDevicePowerState )
      DoDevicePowerState = 1;
    DWORD1(Src) = DoDevicePowerState;
  }
  else
  {
    DWORD1(Src) = 4;
  }
  v10 = 9;
  if ( (v25 & 1) != 0 )
    v10 = 11;
  v11 = 2;
  DWORD2(Src) = v10;
  if ( (v25 & 2) != 0 )
  {
    v10 |= 4u;
    DWORD2(Src) = v10;
  }
  if ( (v25 & 0x400) != 0 )
  {
    v10 |= 0x10u;
    DWORD2(Src) = v10;
  }
  if ( (v25 & 0x800) != 0 )
  {
    v10 |= 0x20u;
    DWORD2(Src) = v10;
  }
  if ( (v25 & 0x1000) != 0 )
  {
    v10 |= 0x40u;
    DWORD2(Src) = v10;
  }
  if ( (v25 & 0x2000) != 0 )
  {
    v10 |= 0x80u;
    DWORD2(Src) = v10;
  }
  if ( (v25 & 0x10000) != 0 )
  {
    v10 |= 0x100u;
    DWORD2(Src) = v10;
  }
  v12 = 2LL;
  v13 = v30;
  i = v29;
  LODWORD(v23) = v28;
  HIDWORD(Src) = v31;
  v22.m256i_i64[0] = v32;
  *(_OWORD *)&v22.m256i_u64[1] = v26;
  v22.m256i_i64[3] = v27;
  do
  {
    v15 = v13 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 != 1 )
            goto LABEL_26;
          v10 |= 0x80u;
        }
        else
        {
          v10 |= 0x44u;
        }
      }
      else
      {
        v10 |= 0x22u;
      }
    }
    else
    {
      v10 |= 0x10u;
    }
    DWORD2(Src) = v10;
LABEL_26:
    if ( v29 )
      v13 = *((_DWORD *)&v26 + v29);
    else
      v13 = 0;
    --v12;
  }
  while ( v12 );
  if ( (v10 & 0x80) != 0 )
  {
    v11 = 4;
  }
  else if ( (v10 & 0x40) != 0 )
  {
    v11 = 3;
  }
  else if ( (v10 & 0x20) == 0 )
  {
    v11 = (BYTE8(Src) >> 4) & 1;
  }
  if ( !v29 && v11 )
  {
    for ( i = 4; i >= 1; --i )
    {
      if ( DWORD2(v26) && SDWORD2(v26) <= v11 )
        break;
    }
  }
  HIDWORD(v23) = i;
  if ( (unsigned int)v5 < 0x38 )
  {
    if ( a4 )
      memmove(a4, &Src, v5);
    v8 = -2147483643;
  }
  else if ( a4 )
  {
    v18 = *(_OWORD *)v22.m256i_i8;
    *a4 = Src;
    v19 = *(_OWORD *)&v22.m256i_u64[2];
    a4[1] = v18;
    *(_QWORD *)&v18 = v23;
    a4[2] = v19;
    *((_QWORD *)a4 + 6) = v18;
  }
  result = v8;
LABEL_40:
  *a5 = 56;
  return result;
}
