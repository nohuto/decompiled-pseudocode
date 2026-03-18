/*
 * XREFs of HUBMISC_ComputeU1Timeout @ 0x14002E8DC
 * Callers:
 *     HUBDSM_ComputingU1U2TimeoutsAndExitLatency @ 0x140021430 (HUBDSM_ComputingU1U2TimeoutsAndExitLatency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_ComputeU1Timeout(__int64 *a1)
{
  unsigned __int8 v2; // r9
  int v3; // edx
  bool v4; // cl
  __int64 v5; // rdx
  int v6; // r10d
  char v7; // cl
  unsigned __int16 v8; // r14
  _QWORD *v9; // rdx
  char v10; // r15
  __int64 v11; // rbp
  __int64 v12; // r10
  unsigned int v13; // esi
  unsigned int v14; // ebx
  __int64 v15; // r11
  _QWORD *v16; // rax
  unsigned int v17; // edi
  unsigned int v18; // ebx
  __int64 v19; // r11
  __int64 v20; // r10
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // dx
  __int64 v23; // rax
  __int64 result; // rax

  v2 = 1;
  v3 = *(_DWORD *)(a1[1] + 204);
  v4 = (v3 & 0x400) != 0;
  if ( (v3 & 0x800) != 0 && *((_DWORD *)a1 + 683) == 2 )
    v4 = 0;
  if ( (*((_DWORD *)a1 + 413) & 0x80u) != 0
    || (v5 = *a1, (*(_DWORD *)(*a1 + 40) & 0x8000) != 0)
    || (v6 = *((_DWORD *)a1 + 556), (v6 & 0x140) != 0)
    || (*(_DWORD *)(v5 + 44) & 8) != 0
    || (*(_DWORD *)(v5 + 2512) & 8) != 0
    || v4 )
  {
LABEL_45:
    _InterlockedAnd((volatile signed __int32 *)a1 + 556, 0xFFFFFFEF);
    goto LABEL_46;
  }
  v7 = *((_BYTE *)a1 + 2228);
  *((_DWORD *)a1 + 556) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(16 * v7)) & 0x10;
  if ( (v7 & 4) == 0 )
  {
LABEL_46:
    v2 = 0;
    goto LABEL_47;
  }
  if ( (v7 & 0x10) == 0 )
  {
    v2 = -1;
    goto LABEL_47;
  }
  if ( v7 < 0 )
    goto LABEL_47;
  if ( (v7 & 0x40) != 0 )
  {
    v2 = 127;
    goto LABEL_47;
  }
  v8 = 0;
  v9 = (_QWORD *)(a1[6] + 16);
  v10 = 0;
  v11 = *v9 - 8LL;
  v12 = v11;
  if ( v9 == (_QWORD *)*v9 )
    goto LABEL_42;
  do
  {
    v13 = *(_DWORD *)(v12 + 24);
    v14 = 0;
    if ( v13 )
    {
      v15 = v12 + 72;
      while ( (*(_BYTE *)(*(_QWORD *)v15 + 3LL) & 3) == 0 )
      {
        ++v14;
        v15 += 80LL;
        if ( v14 >= v13 )
          goto LABEL_21;
      }
      v10 = 1;
LABEL_23:
      while ( 1 )
      {
        v17 = *(_DWORD *)(v11 + 24);
        v18 = 0;
        if ( v17 )
          break;
LABEL_41:
        v23 = *(_QWORD *)(v11 + 8);
        v11 = v23 - 8;
        if ( a1[6] + 16 == v23 )
          goto LABEL_42;
      }
      v19 = v11 + 72;
      while ( 1 )
      {
        v20 = *(_QWORD *)v19;
        if ( *(char *)(*(_QWORD *)v19 + 2LL) >= 0 )
          v21 = *((_WORD *)a1 + 1105);
        else
          v21 = *((unsigned __int8 *)a1 + 2204);
        if ( (*(_BYTE *)(v20 + 3) & 3) != 0 )
        {
          if ( (*(_BYTE *)(v20 + 3) & 3) == 1 )
          {
            if ( v21 > 125 * (unsigned int)*(unsigned __int8 *)(v20 + 6) )
              goto LABEL_45;
            v22 = 1;
            goto LABEL_38;
          }
          if ( (*(_BYTE *)(v20 + 3) & 3u) - 2 < 2 )
          {
LABEL_37:
            v22 = 5 * v21;
            goto LABEL_38;
          }
          v22 = 0;
        }
        else
        {
          if ( !v10 )
            goto LABEL_37;
          v22 = 5;
        }
LABEL_38:
        if ( v8 <= v22 )
          v8 = v22;
        ++v18;
        v19 += 80LL;
        if ( v18 >= v17 )
          goto LABEL_41;
      }
    }
LABEL_21:
    v16 = *(_QWORD **)(v12 + 8);
    v12 = (__int64)(v16 - 1);
  }
  while ( v9 != v16 );
  if ( v9 != (_QWORD *)*v9 )
    goto LABEL_23;
LABEL_42:
  v2 = 127;
  if ( (unsigned __int8)v8 < 0x7Fu )
    v2 = v8;
LABEL_47:
  result = *a1;
  if ( (*(_DWORD *)(*a1 + 40) & 0x10000000) != 0 )
  {
    result = *((unsigned int *)a1 + 410);
    if ( (result & 2) != 0 )
    {
      result = v2;
      if ( v2 )
        result = 255LL;
      v2 = result;
    }
  }
  *((_BYTE *)a1 + 2222) = v2;
  return result;
}
