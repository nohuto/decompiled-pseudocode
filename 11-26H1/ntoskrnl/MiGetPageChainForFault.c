/*
 * XREFs of MiGetPageChainForFault @ 0x140284190
 * Callers:
 *     MiDetermineThreadFaultCluster @ 0x1402B7E68 (MiDetermineThreadFaultCluster.c)
 * Callees:
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall MiGetPageChainForFault(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        unsigned __int64 a9,
        int a10,
        __int64 a11)
{
  unsigned __int64 v12; // r15
  __int64 v14; // r9
  __int64 v15; // r14
  __int64 v16; // rdx
  _QWORD *v17; // rsi
  int v18; // ecx
  __int64 v19; // r10
  __int64 v20; // r8
  unsigned int v21; // r11d
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int IdealGlobalNode; // eax
  __int64 v25; // rdx
  unsigned __int8 i; // dl
  int v27; // eax
  __int64 result; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // r10
  __int64 v32; // [rsp+20h] [rbp-A9h] BYREF
  __int64 v33; // [rsp+28h] [rbp-A1h]
  __int128 v34; // [rsp+30h] [rbp-99h]
  unsigned __int64 v35; // [rsp+40h] [rbp-89h]
  _QWORD v36[3]; // [rsp+50h] [rbp-79h] BYREF
  int v37; // [rsp+68h] [rbp-61h]
  _BYTE v38[84]; // [rsp+6Ch] [rbp-5Dh] BYREF
  __int128 v39; // [rsp+C0h] [rbp-9h]
  _QWORD *v43; // [rsp+150h] [rbp+87h]

  v32 = 0LL;
  v12 = 0LL;
  memset(v38, 0, sizeof(v38));
  v14 = a2;
  v15 = a3;
  v16 = a1;
  v35 = 0LL;
  v17 = 0LL;
  v43 = (_QWORD *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  v39 = 0LL;
  v34 = 0LL;
  while ( 1 )
  {
    v18 = 0;
    v19 = *(_QWORD *)(v16 + 96);
    if ( (*(_BYTE *)(v16 + 69) & 1) != 0 )
      v18 = 16;
    v33 = *(_QWORD *)(v16 + 96);
    v20 = *(_QWORD *)(v16 + 56);
    v21 = v18 | *(_DWORD *)v38 & 0xFFFFFFCF;
    v36[0] = v14;
    v36[1] = v20;
    v36[2] = v15;
    v37 = a4;
    if ( a4 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      IdealGlobalNode = a4 - 1;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( v20 && (*(_DWORD *)(v20 + 184) & 0xF) == 0 && CurrentThread->ApcStateIndex == 1 )
      {
        IdealGlobalNode = CurrentThread->ApcState.Process->IdealGlobalNode;
        CurrentPrcb = KeGetCurrentPrcb();
      }
      else
      {
        CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[CurrentThread->IdealProcessor];
        IdealGlobalNode = CurrentPrcb->NodeColor;
      }
    }
    v25 = 56320LL * IdealGlobalNode;
    if ( (*(_DWORD *)(qword_140E37E50 + v25 + 14096) & 1) != 0 )
    {
      v31 = qword_140E37E50 + v25;
      for ( i = 0; i < (unsigned __int8)byte_140E2D898; ++i )
      {
        if ( *(_BYTE *)(i + v31 + 14149) == 1 )
        {
LABEL_50:
          v19 = v33;
          goto LABEL_11;
        }
      }
      for ( i = 0; i < (unsigned __int8)byte_140E2D898; ++i )
      {
        if ( *(_BYTE *)(i + v31 + 14149) == 2 )
          goto LABEL_50;
      }
      v19 = v33;
    }
    i = 0;
LABEL_11:
    v27 = (i & 1 | (2 * (IdealGlobalNode & 0x3F | 0x380))) << 8;
    if ( !v20 || (*(_DWORD *)(v20 + 184) & 0xF) != 0 )
      *(_QWORD *)&v38[12] = &CurrentPrcb->PageColor;
    else
      *(_QWORD *)&v38[12] = v20;
    *(_DWORD *)&v38[4] = a6 | 8;
    *(_QWORD *)&v38[28] = -1LL;
    v32 = 0LL;
    *(_DWORD *)&v38[20] = v27 ^ (v27 ^ (a5 << 18)) & 0xC0000;
    *(_QWORD *)&v38[44] = &v32;
    *(_QWORD *)&v38[36] = v19;
    *(_QWORD *)&v38[52] = a8 - v35;
    *(_DWORD *)v38 = v21 ^ ((unsigned __int8)a7 ^ (unsigned __int8)v21) & 0xF;
    memset(&v38[60], 0, 24);
    MiGetPageChain(v36);
    if ( *(_QWORD *)&v38[76] )
    {
      if ( v17 )
      {
        v12 += *(_QWORD *)&v38[76];
        v35 = v12;
        *v43 = *(_QWORD *)&v38[60];
        *((_QWORD *)&v34 + 1) = *(_QWORD *)&v38[68];
        v43 = *(_QWORD **)&v38[68];
        v39 = v34;
      }
      else
      {
        v35 = *(_QWORD *)&v38[76];
        v12 = *(_QWORD *)&v38[76];
        v17 = *(_QWORD **)&v38[60];
        v43 = (_QWORD *)_mm_srli_si128(*(__m128i *)&v38[60], 8).m128i_u64[0];
        v39 = *(_OWORD *)&v38[60];
        v34 = *(_OWORD *)&v38[60];
      }
    }
    if ( v35 >= a9 || a7 == 9 )
      break;
    v29 = v32;
    if ( v32 )
    {
      if ( a2 != *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 56) + 174LL))
        && !a10 )
      {
        *(_QWORD *)(a1 + 136) = a2;
        ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 22152));
        v29 = v32;
      }
      *(_QWORD *)(a1 + 144) = a8;
      *(_QWORD *)(a1 + 128) = v29;
      break;
    }
    v14 = a2;
    if ( a7 == 6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 18052));
    }
    else if ( a7 == 8 )
    {
      v16 = a1;
      *(_DWORD *)(a1 + 80) |= 0x10u;
      goto LABEL_32;
    }
    v16 = a1;
LABEL_32:
    v15 = a3;
    a7 = 9;
  }
  result = v35;
  if ( v35 < a9 )
  {
    while ( 1 )
    {
      v30 = v17;
      if ( !v17 )
        break;
      v17 = (_QWORD *)*v17;
      result = MiReleaseFreshPage(v30);
    }
  }
  else
  {
    result = a11;
    if ( *(_QWORD *)a11 )
    {
      **(_QWORD **)(a11 + 8) = v17;
      *(_QWORD *)(a11 + 16) += v12;
      *(_QWORD *)(a11 + 8) = v43;
    }
    else
    {
      *(_OWORD *)a11 = v39;
      *(_QWORD *)(a11 + 16) = v35;
    }
  }
  return result;
}
