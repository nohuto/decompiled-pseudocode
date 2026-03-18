/*
 * XREFs of EtwpEnableDisableSpecialGuids @ 0x140A6D54C
 * Callers:
 *     EtwpEnableGuid @ 0x140ADA008 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpLogFileNameRundown @ 0x14082F4D4 (EtwpLogFileNameRundown.c)
 *     EtwpEnableDisableUMGL @ 0x140A6D758 (EtwpEnableDisableUMGL.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x140A6D8A4 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A6F5B8 (EtwpCheckLoggerAccessAndDoRundown.c)
 */

__int64 __fastcall EtwpEnableDisableSpecialGuids(
        __int64 a1,
        _QWORD *a2,
        unsigned __int16 a3,
        int a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        _BYTE *a8)
{
  char v9; // r10
  int v11; // r9d
  unsigned int v13; // r12d
  __int64 v15; // rdx
  unsigned int v16; // r11d
  __int64 v17; // rcx
  char v18; // r15
  unsigned int i; // r8d
  __int64 *v20; // r13
  __int64 v21; // rsi
  __int64 v22; // r8
  unsigned int j; // edx
  int v25; // edx
  __int64 v26; // r8
  unsigned int v27; // ecx
  __int64 v28; // r9
  int v30; // [rsp+30h] [rbp-38h]
  __int64 v31; // [rsp+A8h] [rbp+40h]

  v9 = 1;
  v11 = a5;
  v13 = a3;
  v15 = 2LL;
  *a8 = 1;
  v16 = -1073741275;
  if ( a4 == 2 )
  {
    v26 = SystemTraceControlGuid - *a2;
    if ( SystemTraceControlGuid == *a2 )
      v26 = 0x3969A8086000829ALL - a2[1];
    v27 = 0;
    if ( v26 || a1 != EtwpHostSiloState )
      goto LABEL_13;
    if ( a5 != 1 )
    {
      if ( a5 != 2 )
        return v27;
      v9 = 0;
    }
    LOBYTE(v11) = v9;
    return (unsigned int)EtwpCheckGuidAccessAndDoRundown(a1, 2, v13, v11, a6, a7);
  }
  v17 = 0LL;
  if ( a4 == 1 )
  {
    v18 = 1;
  }
  else
  {
    if ( a4 )
    {
LABEL_13:
      *a8 = 0;
      return v16;
    }
    v18 = 0;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= 0xA )
    {
      v22 = KernelRundownGuid - *a2;
      if ( KernelRundownGuid == *a2 )
        v22 = 0xCDF584518E9C7793uLL - a2[1];
      if ( v22 )
        goto LABEL_13;
      if ( !v18 )
        return 0;
      v28 = (unsigned int)(a5 - 1);
      if ( a5 == 1 )
      {
        v15 = *(unsigned __int8 *)(a1 + 4504);
      }
      else
      {
        v28 = (unsigned int)(a5 - 2);
        if ( a5 == 2 )
        {
          v15 = *(unsigned __int8 *)(a1 + 4504);
          goto LABEL_41;
        }
        v28 = (unsigned int)(a5 - 4);
        if ( a5 != 4 )
        {
          v28 = (unsigned int)(a5 - 8);
          if ( a5 == 16 )
            return (unsigned int)EtwpLogFileNameRundown((_QWORD *)a1, v13);
LABEL_41:
          LOBYTE(v28) = v17;
          return (unsigned int)EtwpCheckLoggerAccessAndDoRundown(a1, v15, v13, v28);
        }
      }
      LOBYTE(v17) = 1;
      goto LABEL_41;
    }
    v31 = 2LL * i;
    v20 = (__int64 *)(&EtwpUmglProviders)[v31];
    v21 = *v20 - *a2;
    if ( *v20 == *a2 )
      v21 = v20[1] - a2[1];
    if ( !v21 )
      break;
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= a7 )
    {
      v25 = 0;
      goto LABEL_20;
    }
    if ( *(_DWORD *)(a6 + 16LL * j + 12) == -2147483644 )
      break;
  }
  v17 = *(_QWORD *)(a6 + 16LL * j);
  v25 = *(_DWORD *)(a6 + 16LL * j + 8) >> 2;
LABEL_20:
  v30 = v25;
  LOBYTE(v25) = v18;
  return EtwpEnableDisableUMGL(
           a1,
           v25,
           (unsigned __int16)v13,
           a5,
           *((unsigned __int8 *)&EtwpUmglProviders + 8 * v31 + 8),
           v17,
           v30);
}
