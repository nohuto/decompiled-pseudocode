/*
 * XREFs of MiAddToReservationCluster @ 0x14046BBE0
 * Callers:
 *     MiBuildReservationCluster @ 0x14033F334 (MiBuildReservationCluster.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiReferencePageForModifiedWrite @ 0x1402D6BD0 (MiReferencePageForModifiedWrite.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14046BF10 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 */

__int64 __fastcall MiAddToReservationCluster(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        _DWORD *a6)
{
  __int64 v8; // rbx
  unsigned int v9; // r9d
  unsigned int v10; // r15d
  __int64 v11; // r8
  __int64 v12; // r12
  __int64 v13; // rsi
  unsigned int v14; // r14d
  unsigned __int8 v15; // al
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  int v19; // ebx
  bool v21; // al
  __int64 v22; // rcx
  int *v23; // rdx
  int v24; // r8d
  int *v25; // r10
  bool i; // zf
  unsigned int v27; // eax
  __int64 v28; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+70h] [rbp+8h]

  v8 = 88LL * (*(_WORD *)(a1 + 172) & 0xF);
  v9 = a3;
  v10 = 0;
  v11 = *(_QWORD *)(a1 + 224);
  v28 = v8;
  v29 = v11;
  while ( v10 != v9 )
  {
    v12 = *(_QWORD *)(v8 + v11 + 4608);
    if ( v12 == 0x3FFFFFFFFFLL )
      break;
    v13 = 48 * v12 - 0x220000000000LL;
    v14 = 0;
    v15 = MiSafeLockPage(*(_QWORD *)(v8 + v11 + 4608), a2, v11);
    v11 = v29;
    v9 = a3;
    v16 = v15;
    if ( v15 != 17 )
    {
      if ( v12 == *(_QWORD *)(v8 + v29 + 4608) )
      {
        v17 = *(_QWORD *)(v13 + 16);
        if ( qword_140E2D8C0 && (v17 & 0x10) == 0 )
          v17 &= qword_140E2D8C8;
        v18 = HIDWORD(v17);
        if ( (_DWORD)v18 != a4 )
        {
          v14 = v18 - a4;
          if ( !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v29, v13 + 16)
            || (unsigned int)v18 < a4
            || v14 > 0x1F
            || v14 + v10 >= a3 )
          {
            goto LABEL_22;
          }
        }
        if ( _bittest64(*(const signed __int64 **)(a2 + 8), v18) )
          goto LABEL_22;
        if ( v14 )
        {
          if ( a4 >= *(_DWORD *)a2 )
            goto LABEL_22;
          if ( v14 > 1 )
          {
            if ( *(_DWORD *)a2 - a4 < v14 )
              goto LABEL_22;
            v22 = *(_QWORD *)(a2 + 8);
            v23 = (int *)(v22 + 4 * ((unsigned __int64)a4 >> 5));
            v24 = *v23;
            v25 = (int *)(v22 + 4 * ((unsigned __int64)(v14 + a4 - 1) >> 5));
            if ( v23 != v25 )
            {
              for ( i = ((-1 << a4) & v24) == 0; i; i = v24 == 0 )
              {
                v24 = *++v23;
                if ( v23 == v25 )
                {
                  v27 = 0xFFFFFFFF >> ~(v14 + a4 - 1);
                  goto LABEL_45;
                }
              }
LABEL_22:
              _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( (unsigned __int8)v16 < 2u )
              {
                if ( KiIrqlFlags )
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
                __writecr8(v16);
              }
              return v10;
            }
            v27 = 0xFFFFFFFF >> (32 - v14) << a4;
LABEL_45:
            v21 = (v27 & v24) == 0;
          }
          else
          {
            v21 = !_bittest((const signed __int32 *)(*(_QWORD *)(a2 + 8) + 4 * ((unsigned __int64)a4 >> 5)), a4 & 0x1F);
          }
          if ( !v21 )
            goto LABEL_22;
        }
        v19 = MiReferencePageForModifiedWrite(48 * v12 - 0x220000000000LL, 0);
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned __int8)v16 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
          __writecr8(v16);
        }
        if ( !v19 )
          return v10;
        if ( v14 )
        {
          v10 += v14;
          a4 += v14;
          *a6 += v14;
          do
          {
            *a5++ = qword_140E361B8;
            --v14;
          }
          while ( v14 );
        }
        v11 = v29;
        ++v10;
        v9 = a3;
        ++a4;
        *a5++ = v12;
        i = v19 == 3;
        v8 = v28;
        if ( i )
        {
          if ( v10 >= 0x10 )
            return v10;
          v9 = a3;
        }
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v9 = a3;
        if ( v15 < 2u )
        {
          if ( KiIrqlFlags )
          {
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
            v11 = v29;
          }
          __writecr8(v16);
          v9 = a3;
        }
      }
    }
  }
  return v10;
}
