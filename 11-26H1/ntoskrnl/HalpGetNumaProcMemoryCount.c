/*
 * XREFs of HalpGetNumaProcMemoryCount @ 0x140CB7480
 * Callers:
 *     HalpNumaSwapP0NodeToFront @ 0x140594ED0 (HalpNumaSwapP0NodeToFront.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140CB7A3C (HalpNumaInitializeStaticConfiguration.c)
 * Callees:
 *     HalpParseChannelCount @ 0x1405A36A0 (HalpParseChannelCount.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     HalpUpdateConfigurationFromMsct @ 0x140CB8724 (HalpUpdateConfigurationFromMsct.c)
 *     HalpVerifySratEntryLengthAndFlag @ 0x140CB8ACC (HalpVerifySratEntryLengthAndFlag.c)
 */

char __fastcall HalpGetNumaProcMemoryCount(unsigned int *a1, unsigned __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // r13
  unsigned int v5; // ebx
  _BYTE *v9; // r11
  _DWORD *v10; // r14
  bool v11; // cl
  unsigned __int64 v12; // rbp
  unsigned __int8 *v13; // rdi
  __int64 v14; // rax
  _BYTE *v15; // r11
  char v16; // al
  int v17; // ecx
  char v18; // cl
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  _DWORD *v21; // r8
  __int64 v22; // r10
  bool v24; // [rsp+40h] [rbp-268h]
  _DWORD v25[64]; // [rsp+50h] [rbp-258h] BYREF
  _DWORD v26[64]; // [rsp+150h] [rbp-158h] BYREF

  v4 = HalpAcpiSrat;
  v5 = 0;
  *a1 = 0;
  *a3 = 0;
  *(_DWORD *)a2 = 0;
  *a4 = 0;
  v9 = (_BYTE *)(v4 + 48);
  v10 = (_DWORD *)a2;
  v11 = *(_BYTE *)(v4 + 8) >= 3u;
  v12 = v4 + *(unsigned int *)(v4 + 4);
  v24 = v11;
  while ( 1 )
  {
    v13 = v9 + 2;
    if ( (unsigned __int64)(v9 + 2) > v12 )
      break;
    v14 = (unsigned __int8)v9[1];
    if ( (unsigned __int8)v14 < 2u || (unsigned __int64)&v9[v14] > v12 )
      break;
    LOBYTE(a2) = v11;
    if ( !(unsigned __int8)HalpVerifySratEntryLengthAndFlag(v9, a2) )
      goto LABEL_29;
    v16 = *(_BYTE *)(v4 + 8);
    if ( v16 == 1 )
    {
      v17 = *v13;
      goto LABEL_19;
    }
    v18 = *v15;
    if ( v16 == 2 )
    {
      if ( v18 )
      {
        if ( v18 == 2 )
          goto LABEL_16;
        goto LABEL_17;
      }
    }
    else if ( v18 )
    {
      if ( v18 == 2 || ((v18 - 1) & 0xFD) != 0 && v18 != 4 )
LABEL_16:
        v13 = v15 + 4;
LABEL_17:
      v17 = *(_DWORD *)v13;
      goto LABEL_19;
    }
    v17 = *v13 + (((unsigned __int8)v15[9] + (((unsigned __int8)v15[10] + ((unsigned __int8)v15[11] << 8)) << 8)) << 8);
LABEL_19:
    v19 = *a1;
    a2 = 0LL;
    if ( *a1 )
    {
      while ( v17 != v26[(unsigned int)a2] )
      {
        a2 = (unsigned int)(a2 + 1);
        if ( (unsigned int)a2 >= v19 )
          goto LABEL_22;
      }
    }
    else
    {
LABEL_22:
      if ( (_DWORD)a2 == v19 )
      {
        if ( (_DWORD)a2 == 64 )
          return 0;
        v26[(unsigned int)a2] = v17;
        v25[(unsigned int)a2] = 0;
        *a1 = v19 + 1;
      }
    }
    if ( !*v15 )
      goto LABEL_28;
    if ( *v15 != 1 )
    {
      if ( *v15 != 2 )
        goto LABEL_29;
LABEL_28:
      ++*v10;
      ++v25[(unsigned int)a2];
      goto LABEL_29;
    }
    ++*a3;
LABEL_29:
    v11 = v24;
    v9 = &v15[(unsigned __int8)v15[1]];
  }
  if ( *a3 && *v10 )
  {
    if ( HalpAcpiMsct )
      HalpUpdateConfigurationFromMsct((_DWORD)a1, 64, (_DWORD)v10, 0, 0LL, (__int64)v26, (__int64)v25, 0LL);
    if ( HalpSplitLargeNumaNodes )
    {
      v20 = *a1;
      if ( *a1 )
      {
        v21 = v25;
        v22 = v20;
        do
        {
          if ( *v21 > (unsigned int)HalpMaximumGroupSize )
            v5 = (HalpMaximumGroupSize + *v21 - 1) / (unsigned int)HalpMaximumGroupSize + v5 - 1;
          ++v21;
          --v22;
        }
        while ( v22 );
      }
      *a1 = v5 + v20;
    }
    if ( *a1 <= 0x40 )
    {
      *a4 = HalpParseChannelCount();
      return 1;
    }
  }
  return 0;
}
