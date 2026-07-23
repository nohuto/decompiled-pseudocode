/*
 * XREFs of MiGetPrototypePteRanges @ 0x140443C58
 * Callers:
 *     MiReplacePageOfProtoPool @ 0x140443530 (MiReplacePageOfProtoPool.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     MiObtainProtoBaseFromNode @ 0x140443F40 (MiObtainProtoBaseFromNode.c)
 */

__int64 __fastcall MiGetPrototypePteRanges(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  unsigned int v5; // r14d
  volatile unsigned __int64 CycleTime; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // esi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  _QWORD *v21; // rcx
  __int64 i; // rbx
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  _QWORD **v26; // rcx
  unsigned __int64 v27; // rax
  _QWORD *j; // rcx
  __int64 v29; // [rsp+50h] [rbp+8h] BYREF

  v29 = 0LL;
  v3 = a1 + 4096;
  v5 = 1;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)&stru_140E2D2D0.CurrentRunTime);
  CycleTime = stru_140E2D2D0.CycleTime;
  while ( CycleTime )
  {
    v7 = 0LL;
    if ( (*(_DWORD *)(CycleTime + 24) & 7) != 0 )
    {
      switch ( *(_DWORD *)(CycleTime + 24) & 7 )
      {
        case 1:
          v8 = *(_QWORD *)(CycleTime - 48);
          v7 = *(unsigned int *)(CycleTime - 12);
          break;
        case 2:
          v11 = *(_QWORD *)(CycleTime - 56) + 128LL;
          v8 = *(_QWORD *)(*(_QWORD *)(CycleTime - 56) + 136LL);
          do
          {
            v12 = *(unsigned int *)(v11 + 44);
            v11 = *(_QWORD *)(v11 + 16);
            v7 += v12;
          }
          while ( v11 );
          break;
        case 3:
          v8 = *(_QWORD *)(CycleTime + 48);
          v7 = *(_QWORD *)(CycleTime + 32);
          break;
        case 4:
          v8 = *(_QWORD *)(CycleTime + 32);
          v7 = *(_QWORD *)(CycleTime + 40);
          break;
        default:
          v8 = 0LL;
LABEL_5:
          if ( a1 < v8 + 8 * v7 )
            goto LABEL_8;
          CycleTime = *(_QWORD *)(CycleTime + 8);
          continue;
      }
    }
    else
    {
      v8 = *(_QWORD *)(CycleTime - 112);
      v7 = *(unsigned int *)(CycleTime - 76);
    }
    if ( a1 + 4095 >= v8 )
      goto LABEL_5;
    CycleTime = *(_QWORD *)CycleTime;
  }
LABEL_8:
  v9 = CycleTime;
  if ( CycleTime )
  {
    while ( 1 )
    {
      v13 = MiObtainProtoBaseFromNode(v9, &v29);
      v14 = v29;
      v15 = v13;
      if ( v13 < a1 )
      {
        if ( v13 + 8 * v29 <= a1 )
          goto LABEL_30;
        v15 = a1;
        v14 = v29 - ((__int64)(a1 - v13) >> 3);
        v29 = v14;
      }
      if ( v15 >= v3 )
        goto LABEL_30;
      if ( (*(_BYTE *)(v9 + 24) & 7) == 4 )
        break;
      v16 = (__int64)(v15 - a1) >> 3;
      v17 = v16;
      if ( (unsigned __int64)(unsigned int)v16 + v14 > 0x200 )
      {
        LODWORD(v14) = 512 - v16;
        v29 = (unsigned int)(512 - v16);
      }
      RtlSetBitsEx(a2, (unsigned int)v16, (unsigned int)v14);
      if ( v17 )
      {
        v18 = *(_QWORD *)v9;
        v19 = v9;
        if ( *(_QWORD *)v9 )
        {
          while ( 1 )
          {
            v9 = v18;
            if ( !*(_QWORD *)(v18 + 8) )
              break;
            v18 = *(_QWORD *)(v18 + 8);
          }
        }
        else
        {
          while ( 1 )
          {
            v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v9 || *(_QWORD *)(v9 + 8) == v19 )
              break;
            v19 = v9;
          }
        }
        if ( v9 )
          continue;
      }
      goto LABEL_30;
    }
    v5 = 0;
LABEL_30:
    v20 = *(_QWORD *)(CycleTime + 8);
    if ( v20 )
    {
      v21 = *(_QWORD **)v20;
      if ( *(_QWORD *)v20 )
      {
        do
        {
          v20 = (unsigned __int64)v21;
          v21 = (_QWORD *)*v21;
        }
        while ( v21 );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(CycleTime + 16); ; i = *(_QWORD *)(v20 + 16) )
      {
        v20 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v20 || *(_QWORD *)v20 == CycleTime )
          break;
        CycleTime = v20;
      }
    }
    while ( v20 )
    {
      v23 = MiObtainProtoBaseFromNode(v20, &v29);
      if ( v23 >= v3 || v23 < a1 )
        break;
      if ( (*(_BYTE *)(v20 + 24) & 7) == 4 )
      {
        v5 = 0;
        break;
      }
      v24 = v29;
      v25 = (unsigned int)((__int64)(v23 - a1) >> 3);
      if ( (unsigned __int64)(v25 + v29) > 0x200 )
      {
        v24 = (unsigned int)(512 - v25);
        v29 = v24;
      }
      RtlSetBitsEx(a2, (unsigned int)((__int64)(v23 - a1) >> 3), (unsigned int)v24);
      if ( v25 + v24 == 512 )
        break;
      v26 = *(_QWORD ***)(v20 + 8);
      v27 = v20;
      if ( v26 )
      {
        v20 = *(_QWORD *)(v20 + 8);
        for ( j = *v26; j; j = (_QWORD *)*j )
          v20 = (unsigned __int64)j;
      }
      else
      {
        while ( 1 )
        {
          v20 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v20 || *(_QWORD *)v20 == v27 )
            break;
          v27 = v20;
        }
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2D2D0.CurrentRunTime);
  return v5;
}
