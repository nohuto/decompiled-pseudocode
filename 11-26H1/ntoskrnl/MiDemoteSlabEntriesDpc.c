/*
 * XREFs of MiDemoteSlabEntriesDpc @ 0x140308810
 * Callers:
 *     <none>
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiCheckMdlSlabFragmentation @ 0x1402A6D4C (MiCheckMdlSlabFragmentation.c)
 *     MiDemoteSlabEntry @ 0x1402A97C4 (MiDemoteSlabEntry.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeCanUseHaltOnAddress @ 0x1403E8980 (KeCanUseHaltOnAddress.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14049A754 (MiEnumerateSlabAllocatorsEx.c)
 *     MiGatherSlabDemoteCandidates @ 0x1404F4280 (MiGatherSlabDemoteCandidates.c)
 */

__int64 __fastcall MiDemoteSlabEntriesDpc(__int64 a1, __int64 *a2, volatile signed __int32 *a3, __int64 a4)
{
  volatile signed __int32 *v5; // r12
  signed __int32 v7; // eax
  unsigned int v8; // edi
  volatile signed __int32 v9; // eax
  unsigned int v10; // esi
  char v11; // r15
  __int64 result; // rax
  unsigned int v13; // edi
  unsigned int v14; // esi
  char v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  signed __int32 v19; // ecx
  signed __int32 v20; // edx
  volatile signed __int32 v21; // r8d
  int v22; // r14d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  signed __int32 v26; // ecx
  signed __int32 v27; // edx
  volatile signed __int32 v28; // r8d
  int v29; // r14d
  __int64 v30; // r14
  unsigned __int64 v31; // r13
  ULONG_PTR v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int64 *v35; // r12
  __int64 *i; // rdi
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  __int128 v41; // [rsp+30h] [rbp-40h] BYREF
  __int128 v42; // [rsp+40h] [rbp-30h]
  __int128 v43; // [rsp+50h] [rbp-20h]
  __int64 v44; // [rsp+60h] [rbp-10h]
  int v45; // [rsp+B8h] [rbp+48h] BYREF
  volatile signed __int32 *v46; // [rsp+C0h] [rbp+50h]

  v46 = a3;
  v44 = 0LL;
  v5 = a3;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x3FFFFFFF) == 0 )
  {
    if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v8) & 0x40000000) != 0 )
      KeWakeAddressAll();
    v30 = *a2;
    v31 = 0LL;
    while ( 1 )
    {
      v32 = a2[12];
      v33 = 0;
      v44 = 0LL;
      v41 = 0LL;
      v42 = 0LL;
      v43 = 0LL;
      if ( v32 == -1LL )
      {
        v34 = a2[11];
        if ( v34 )
        {
          LOBYTE(v33) = *(_DWORD *)(v34 + 128) <= 4u;
          LODWORD(v44) = v33;
          MiGatherSlabDemoteCandidates(v30, v34, &v41);
        }
        else
        {
          MiEnumerateSlabAllocatorsEx(v30, (unsigned int)MiGatherSlabDemoteCandidates, (unsigned int)&v41, -1, 9);
          if ( *((_QWORD *)&v43 + 1) < 0x420uLL )
          {
            LODWORD(v44) = 1;
            MiEnumerateSlabAllocatorsEx(v30, (unsigned int)MiGatherSlabDemoteCandidates, (unsigned int)&v41, -1, 9);
          }
        }
      }
      else
      {
        *((_QWORD *)&v43 + 1) = v32;
        v40 = MiPageToNode(v32);
        MiEnumerateSlabAllocatorsEx(v30, (unsigned int)MiFindSlabEntryForDemoteByPage, (unsigned int)&v41, v40, 9);
        if ( !(_QWORD)v41 || (*(_DWORD *)(v41 + 92) & 3) != 0 )
        {
LABEL_55:
          v5 = v46;
          goto LABEL_7;
        }
      }
      if ( !(_QWORD)v43 )
        goto LABEL_55;
      v35 = (__int64 *)&v41 + v43;
      for ( i = (__int64 *)&v41; i < v35; ++i )
      {
        v37 = *(_QWORD *)(*i + 56);
        v38 = MiDemoteSlabEntry(v30, v37, *i);
        ++a2[10];
        v31 += v38;
        ++a2[*(int *)(v37 + 128) + 1];
        if ( a2[12] != -1 )
          goto LABEL_55;
        v39 = a2[11];
        if ( v39 && *(_DWORD *)(v39 + 128) == 7 )
        {
          if ( !(unsigned int)MiCheckMdlSlabFragmentation(v37, 1) )
            goto LABEL_55;
        }
        else if ( v31 >= 0x420 )
        {
          goto LABEL_55;
        }
        if ( (unsigned __int64)a2[10] >= 0x40 && KeShouldYieldProcessor() )
          goto LABEL_55;
      }
    }
  }
  v9 = *(_DWORD *)a4;
  v10 = 0;
  v11 = 0;
  while ( (v9 & 0x80000000) != v8 )
  {
    if ( (++v10 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      ++v11;
      if ( (unsigned __int8)KeCanUseHaltOnAddress(v17, v16, v18) && (KiVelocityFlags & 0x20000) != 0 && (v11 & 7) == 0 )
      {
        v19 = *(_DWORD *)a4;
        if ( (*(_DWORD *)a4 & 0x80000000) != v8 )
        {
          v20 = *(_DWORD *)a4;
          v21 = *(_DWORD *)a4;
          do
          {
            v22 = v19 | 0x40000000;
            v19 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v19 | 0x40000000, v20);
            if ( v19 == v21 )
            {
              v45 = v22;
              do
              {
                KiHaltOnAddress(a4, &v45, 4LL);
                v19 = *(_DWORD *)a4;
              }
              while ( *(_DWORD *)a4 == v22 );
            }
            v20 = v19;
            v21 = v19;
          }
          while ( (v19 & 0x80000000) != v8 );
        }
      }
      else
      {
        HvlNotifyLongSpinWait(v10);
      }
    }
    else
    {
      _mm_pause();
    }
    v9 = *(_DWORD *)a4;
  }
LABEL_7:
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v13 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x3FFFFFFF) != 0 )
  {
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v13 )
        break;
      if ( (++v14 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v15;
        if ( (unsigned __int8)KeCanUseHaltOnAddress(v24, v23, v25) && (KiVelocityFlags & 0x20000) != 0 && (v15 & 7) == 0 )
        {
          v26 = *(_DWORD *)a4;
          if ( (*(_DWORD *)a4 & 0x80000000) != v13 )
          {
            v27 = *(_DWORD *)a4;
            v28 = *(_DWORD *)a4;
            do
            {
              v29 = v26 | 0x40000000;
              v26 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v26 | 0x40000000, v27);
              if ( v26 == v28 )
              {
                v45 = v29;
                do
                {
                  KiHaltOnAddress(a4, &v45, 4LL);
                  v26 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v29 );
              }
              v27 = v26;
              v28 = v26;
            }
            while ( (v26 & 0x80000000) != v13 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v14);
        }
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else if ( (_InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v13) & 0x40000000) != 0 )
  {
    result = KeWakeAddressAll();
  }
  _InterlockedDecrement(v5);
  return result;
}
