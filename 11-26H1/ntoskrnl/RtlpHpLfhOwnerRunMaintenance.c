/*
 * XREFs of RtlpHpLfhOwnerRunMaintenance @ 0x1403488A0
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x140349990 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140349F4C (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpLfhOwnerFreeListProcess @ 0x14034B470 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x14034BA20 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x14034DFB0 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 */

__int64 __fastcall RtlpHpLfhOwnerRunMaintenance(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  __int64 *v4; // r12
  __int64 *v5; // rsi
  unsigned int v6; // r11d
  __int64 *v10; // rbx
  __int64 *v11; // r15
  __int64 v12; // r8
  __int64 *v13; // r10
  _BYTE *v14; // r9
  unsigned __int64 v15; // rdx
  signed __int64 v16; // rax
  __int16 v17; // ax
  __int64 *v18; // rcx
  __int64 **v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  _BYTE *v22; // r8
  unsigned __int64 v23; // rdx
  __int64 *v24; // r9
  unsigned __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 **v27; // rax
  __int64 v28; // rax
  __int64 result; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  _QWORD *v32; // rcx
  _BYTE *v33; // r9
  __int64 *v34; // r11
  char v35; // cl
  _BYTE *v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // rcx
  signed __int64 v39; // [rsp+20h] [rbp-50h]
  __int64 v40; // [rsp+20h] [rbp-50h]
  __int16 v41; // [rsp+24h] [rbp-4Ch]
  __int64 *v42; // [rsp+30h] [rbp-40h]
  __int64 v43; // [rsp+38h] [rbp-38h]
  __int64 v44; // [rsp+40h] [rbp-30h]
  __int64 v45; // [rsp+48h] [rbp-28h]
  __int64 v46; // [rsp+50h] [rbp-20h]
  __int64 v47; // [rsp+58h] [rbp-18h]
  __int128 v48; // [rsp+60h] [rbp-10h]
  signed __int64 v49; // [rsp+B8h] [rbp+48h]
  unsigned __int64 v50; // [rsp+B8h] [rbp+48h]
  __int64 v51; // [rsp+B8h] [rbp+48h]

  v4 = *(__int64 **)(a2 + 24);
  v5 = (__int64 *)(a2 + 24);
  v6 = a4;
  if ( v4 == (__int64 *)(a2 + 24) )
    goto LABEL_61;
  do
  {
    v10 = v4;
    v11 = v4;
    v4 = (__int64 *)*v4;
    if ( !(*((unsigned __int16 *)v10 + 9) + *((unsigned __int16 *)v10 + 16)) )
    {
      if ( (*(_BYTE *)a2 & 1) == 0 && ((unsigned __int64)v10 ^ *(_QWORD *)(a2 + 56)) - 1 <= 0xFFE )
        goto LABEL_59;
      v42 = v5;
      v43 = a2 + 1;
      v12 = a2 + 40;
      v49 = v10[2];
      v39 = v49;
      v44 = a2 + 40;
      v45 = 0LL;
      v46 = a2 + 40;
      v47 = 0LL;
      v48 = 0LL;
      v13 = (&v42)[2 * BYTE6(v49)];
      v14 = 0LL;
      LODWORD(v49) = 0;
      if ( (*(_BYTE *)a2 & 1) == 0 )
        v14 = (_BYTE *)*(&v43 + 2 * BYTE6(v49));
      if ( BYTE6(v49) == 3 )
      {
        v15 = (unsigned __int64)(a2 - a1) >> 6;
        WORD2(v39) = v15;
      }
      else
      {
        LOWORD(v15) = WORD2(v39);
      }
      BYTE6(v39) = 1;
      v16 = _InterlockedCompareExchange64(v10 + 2, v39, v49);
      if ( !(_DWORD)v16 )
      {
        if ( WORD2(v16) != (_WORD)v15 )
        {
          if ( !(_WORD)v15 )
          {
            v17 = 0;
LABEL_16:
            *((_WORD *)v10 + 23) = v17;
            goto LABEL_17;
          }
          if ( (*(_BYTE *)a2 & 1) == 0 )
          {
            v17 = *(_WORD *)(a2 + 4);
            goto LABEL_16;
          }
        }
LABEL_17:
        if ( v13 )
        {
          v18 = (__int64 *)*v11;
          if ( *(__int64 **)(*v11 + 8) != v10 )
            goto LABEL_98;
          v19 = (__int64 **)v10[1];
          if ( *v19 != v10 )
            goto LABEL_98;
          *v19 = v18;
          v18[1] = (__int64)v19;
          if ( v14 )
            --*v14;
        }
        if ( a2 != -40 )
        {
          if ( *((_WORD *)v10 + 16) == *((_WORD *)v10 + 17) )
          {
            v20 = *(_QWORD **)(a2 + 48);
            if ( *v20 != v12 )
              goto LABEL_98;
            *v11 = v12;
            v10[1] = (__int64)v20;
            *v20 = v10;
            *(_QWORD *)(a2 + 48) = v10;
          }
          else
          {
            v21 = *(_QWORD *)v12;
            if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
              goto LABEL_98;
            *v11 = v21;
            v10[1] = v12;
            *(_QWORD *)(v21 + 8) = v10;
            *(_QWORD *)v12 = v10;
          }
        }
        goto LABEL_59;
      }
    }
    if ( ((v6 & 1) != 0 && *((_WORD *)v10 + 9)
       || *((unsigned __int16 *)v10 + 9) + *((unsigned __int16 *)v10 + 16) == *((unsigned __int16 *)v10 + 17))
      && *((_WORD *)v10 + 9) )
    {
      RtlpHpLfhSubsegmentDelayFreeListProcess(
        a1,
        v10,
        (unsigned int)_InterlockedExchange((volatile __int32 *)v10 + 4, 0));
      LOBYTE(v6) = a4;
    }
    if ( *((_WORD *)v10 + 16) == *((_WORD *)v10 + 17) )
    {
      v42 = v5;
      v45 = 0LL;
      v43 = a2 + 1;
      v47 = 0LL;
      v44 = a2 + 40;
      v22 = 0LL;
      v46 = a2 + 40;
      v50 = v10[2];
      v23 = HIWORD(v50);
      v41 = WORD2(v50);
      v48 = 0LL;
      v24 = (&v42)[2 * BYTE6(v50)];
      LOWORD(v25) = 0;
      if ( (*(_BYTE *)a2 & 1) == 0 )
        v22 = (_BYTE *)*(&v43 + 2 * BYTE6(v50));
      WORD2(v50) = 0;
      if ( (_BYTE)v23 == 3 )
      {
        v25 = (unsigned __int64)(a2 - a1) >> 6;
        WORD2(v50) = v25;
      }
      BYTE6(v50) = 3;
      if ( *((_WORD *)v10 + 16) == *((_WORD *)v10 + 17) )
        v10[2] = v50;
      else
        v41 = _InterlockedExchange((volatile __int32 *)v10 + 5, SHIDWORD(v50));
      if ( v41 != (_WORD)v25 )
      {
        if ( (_WORD)v25 )
        {
          if ( (*(_BYTE *)a2 & 1) == 0 )
            *((_WORD *)v10 + 23) = *(_WORD *)(a2 + 4);
        }
        else
        {
          *((_WORD *)v10 + 23) = 0;
        }
      }
      if ( v24 )
      {
        v26 = (__int64 *)*v11;
        if ( *(__int64 **)(*v11 + 8) != v10 )
          goto LABEL_98;
        v27 = (__int64 **)v10[1];
        if ( *v27 != v10 )
          goto LABEL_98;
        *v27 = v26;
        v26[1] = (__int64)v27;
        if ( v22 )
          --*v22;
      }
      v28 = *a3;
      if ( *(__int64 **)(*a3 + 8) != a3 )
        goto LABEL_98;
      *v11 = v28;
      v10[1] = (__int64)a3;
      *(_QWORD *)(v28 + 8) = v10;
      *a3 = (__int64)v10;
    }
    else if ( (v6 & 4) != 0
           && *((_BYTE *)v10 + 39) == 1
           && *((_BYTE *)v10 + 38)
           && ((*(_BYTE *)a2 & 1) != 0 || ((unsigned __int64)v10 ^ *(_QWORD *)(a2 + 56)) - 1 > 0xFFE) )
    {
      RtlpHpLfhSubsegmentReformatAsMulti(a1, v10, 0LL);
    }
LABEL_59:
    v6 = a4;
  }
  while ( v4 != v5 );
  v5 = (__int64 *)(a2 + 24);
LABEL_61:
  result = RtlpHpLfhOwnerFreeListProcess(a1, a2, a3, v6);
  while ( 1 )
  {
    if ( (__int64 *)*a3 == a3 )
      return result;
    v30 = a3[1];
    result = *(unsigned __int16 *)(v30 + 34);
    if ( *(_WORD *)(v30 + 32) == (_WORD)result && (a4 & 2) != 0 )
      return result;
    v31 = *(_QWORD *)v30;
    if ( *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30 )
      goto LABEL_98;
    v32 = *(_QWORD **)(v30 + 8);
    if ( *v32 != v30 )
      goto LABEL_98;
    *v32 = v31;
    *(_QWORD *)(v31 + 8) = v32;
    v43 = a2 + 1;
    v44 = a2 + 40;
    v33 = 0LL;
    v46 = a2 + 40;
    v40 = *(_QWORD *)(v30 + 16);
    v51 = v40;
    v42 = v5;
    v45 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    v34 = (&v42)[2 * BYTE6(v40)];
    v35 = *(_BYTE *)a2 & 1;
    if ( !v35 )
      v33 = (_BYTE *)(a2 + 1);
    v36 = 0LL;
    if ( !v35 )
    {
      v36 = (_BYTE *)*(&v43 + 2 * BYTE6(v40));
      if ( *v33 >= 8u )
        break;
    }
    if ( BYTE6(v40) == 3 )
    {
      v37 = (unsigned __int64)(a2 - a1) >> 6;
      WORD2(v51) = v37;
    }
    else
    {
      LOWORD(v37) = WORD2(v40);
    }
    BYTE6(v51) = 0;
    if ( *(_WORD *)(v30 + 32) == *(_WORD *)(v30 + 34) )
    {
      result = v51;
      *(_QWORD *)(v30 + 16) = v51;
    }
    else
    {
      result = (unsigned int)_InterlockedExchange((volatile __int32 *)(v30 + 20), SHIDWORD(v51));
      WORD2(v40) = result;
    }
    if ( WORD2(v40) != (_WORD)v37 )
    {
      if ( (_WORD)v37 )
      {
        if ( (*(_BYTE *)a2 & 1) == 0 )
        {
          result = *(unsigned __int16 *)(a2 + 4);
          *(_WORD *)(v30 + 46) = result;
        }
      }
      else
      {
        *(_WORD *)(v30 + 46) = 0;
      }
    }
    if ( v34 )
    {
      v38 = *(_QWORD *)v30;
      if ( *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30 )
        goto LABEL_98;
      result = *(_QWORD *)(v30 + 8);
      if ( *(_QWORD *)result != v30 )
        goto LABEL_98;
      *(_QWORD *)result = v38;
      *(_QWORD *)(v38 + 8) = result;
      if ( v36 )
        --*v36;
    }
    if ( v5 )
    {
      if ( *(_WORD *)(v30 + 32) == *(_WORD *)(v30 + 34) )
      {
        result = v5[1];
        if ( *(__int64 **)result != v5 )
          goto LABEL_98;
        *(_QWORD *)v30 = v5;
        *(_QWORD *)(v30 + 8) = result;
        *(_QWORD *)result = v30;
        v5[1] = v30;
      }
      else
      {
        result = *v5;
        if ( *(__int64 **)(*v5 + 8) != v5 )
          goto LABEL_98;
        *(_QWORD *)v30 = result;
        *(_QWORD *)(v30 + 8) = v5;
        *(_QWORD *)(result + 8) = v30;
        *v5 = v30;
      }
      if ( v33 )
        ++*v33;
    }
  }
  result = a3[1];
  if ( *(__int64 **)result != a3 )
LABEL_98:
    __fastfail(3u);
  *(_QWORD *)v30 = a3;
  *(_QWORD *)(v30 + 8) = result;
  *(_QWORD *)result = v30;
  a3[1] = v30;
  return result;
}
