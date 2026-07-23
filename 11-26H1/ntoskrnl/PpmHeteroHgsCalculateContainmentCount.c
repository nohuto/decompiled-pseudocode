/*
 * XREFs of PpmHeteroHgsCalculateContainmentCount @ 0x14060D428
 * Callers:
 *     PpmParkCalculateUnparkCount @ 0x140417970 (PpmParkCalculateUnparkCount.c)
 * Callees:
 *     PpmEventHgsContainmentUnparkedCount @ 0x140504764 (PpmEventHgsContainmentUnparkedCount.c)
 *     Feature_WpsHybridToNoneZoneFix__private_IsEnabledDeviceUsageNoInline @ 0x14060D370 (Feature_WpsHybridToNoneZoneFix__private_IsEnabledDeviceUsageNoInline.c)
 */

BOOLEAN __fastcall PpmHeteroHgsCalculateContainmentCount(__int64 a1, int *a2, unsigned __int16 a3)
{
  BOOLEAN result; // al
  __int16 v4; // r9
  unsigned int v5; // r14d
  char v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // r15d
  unsigned int v13; // r8d
  unsigned int v14; // r13d
  int v15; // edx
  int v16; // ecx
  int v17; // edi
  int IsEnabledDeviceUsageNoInline; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // edx
  int v22; // edx
  char v23; // r11
  int v24; // eax
  char v25; // r10
  int v26; // eax
  unsigned int v27; // edx
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned __int16 v30; // dx
  unsigned __int16 v31; // ax
  unsigned __int16 v32; // r9
  unsigned __int16 v33; // r8
  __int16 v34; // [rsp+40h] [rbp-48h]
  unsigned int v35; // [rsp+44h] [rbp-44h]
  int v36; // [rsp+48h] [rbp-40h]
  __int16 v38; // [rsp+A8h] [rbp+20h]

  result = PpmHeteroHgsContainmentState;
  v4 = 0;
  v5 = a3;
  v8 = 0;
  if ( (PpmHeteroHgsContainmentState & 8) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 1240);
    v38 = *(_WORD *)(a1 + 1226);
    v34 = *(_WORD *)(a1 + 1224);
    v10 = 712LL * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
    v11 = *(_DWORD *)((char *)PpmCurrentProfile + v10 + 724);
    if ( !v11 )
      v11 = *(unsigned __int16 *)(v9 + 8);
    v12 = *(_DWORD *)((char *)PpmCurrentProfile + v10 + 728);
    if ( !v12 )
      v12 = *(unsigned __int16 *)(v9 + 10);
    v13 = *(_DWORD *)((char *)PpmCurrentProfile + v10 + 716);
    v14 = *(_DWORD *)((char *)PpmCurrentProfile + v10 + 720);
    v15 = *(unsigned __int16 *)(a1 + 1224);
    v36 = *(_DWORD *)(v9 + 4);
    v16 = *(_DWORD *)(v9 + 828);
    v35 = v13;
    if ( !(_WORD)v15 )
    {
      if ( v16 == 2 || v5 > v11 )
      {
        v17 = 1;
        *a2 |= v11 < v5 ? 0x2000 : 512;
        IsEnabledDeviceUsageNoInline = Feature_WpsHybridToNoneZoneFix__private_IsEnabledDeviceUsageNoInline();
        v4 = 0;
        if ( IsEnabledDeviceUsageNoInline && (v5 > v12 || *(_DWORD *)(v9 + 832) == 2) )
        {
          v19 = 2048;
          v17 = 2;
          if ( *(_DWORD *)(v9 + 832) != 2 )
            v19 = 0x4000;
          *a2 |= v19;
        }
        v13 = v35;
      }
      else
      {
        v17 = 0;
      }
      LOWORD(v5) = a3;
LABEL_32:
      if ( *(_BYTE *)(v9 + 808) && !v17 && *(_DWORD *)(v9 + 812) == 1 )
      {
        *a2 |= 0x100u;
        v17 = 1;
      }
      v23 = v17;
      if ( !*(_BYTE *)(v9 + 824) )
      {
        v24 = *(_DWORD *)(v9 + 4);
        if ( v24 != v17 )
        {
          if ( v24 == 2 || v17 == 2 )
          {
            *(_BYTE *)(v9 + 816) = 1;
            *a2 |= 0x40u;
          }
          else
          {
            *(_BYTE *)(v9 + 824) = 1;
            if ( v17 == 1 )
              *(_BYTE *)(v9 + 825) = 1;
            else
              *(_BYTE *)(v9 + 826) = 1;
          }
        }
      }
      if ( *(_BYTE *)(v9 + 825) )
      {
        if ( ++*(_DWORD *)(v9 + 820) < v14 )
          goto LABEL_57;
        if ( (unsigned int)(v17 - 1) <= 1 )
        {
          *(_BYTE *)(v9 + 816) = 1;
          *a2 |= 0x10u;
        }
      }
      else
      {
        if ( !*(_BYTE *)(v9 + 826) || (++*(_DWORD *)(v9 + 820), *(_DWORD *)(v9 + 820) < v13) )
        {
LABEL_57:
          v25 = *(_BYTE *)(v9 + 816);
          if ( v25 )
          {
            *(_DWORD *)(v9 + 4) = v17;
          }
          else if ( !v8 )
          {
            goto LABEL_61;
          }
          *a2 |= 0x80u;
          *(_BYTE *)(v9 + 816) = 0;
          *(_DWORD *)(v9 + 820) = 0;
          *(_WORD *)(v9 + 824) = 0;
          *(_BYTE *)(v9 + 826) = 0;
LABEL_61:
          v26 = *(_DWORD *)(v9 + 4);
          v27 = *(unsigned __int16 *)(v9 + 10);
          v28 = *(unsigned __int16 *)(v9 + 8);
          if ( v26 )
          {
            if ( v26 != 1 )
              return PpmEventHgsContainmentUnparkedCount(v34, v38, v5, a1, v36, v23, v25, (__int64)a2);
            v31 = *(_WORD *)(a1 + 1226);
            if ( v31 > (unsigned __int16)v27 )
            {
              *(_WORD *)(a1 + 1226) = v27;
              v31 = v27;
            }
            v32 = *(_WORD *)(a1 + 1224);
            if ( v32 > (unsigned __int16)v27 )
            {
              *(_WORD *)(a1 + 1224) = v27;
              v32 = v27;
            }
            v33 = v31;
            if ( v31 == (_WORD)v27 && v32 == (_WORD)v27 )
            {
              v33 = v31 - v27;
              *(_WORD *)(a1 + 1226) = v31 - v27;
            }
            if ( v32 + (unsigned int)v33 <= v27 || !(v32 + v33 - (_WORD)v27) )
              return PpmEventHgsContainmentUnparkedCount(v34, v38, v5, a1, v36, v23, v25, (__int64)a2);
            if ( v32 <= v33 )
            {
              *(_WORD *)(a1 + 1226) = v27 - v32;
              return PpmEventHgsContainmentUnparkedCount(v34, v38, v5, a1, v36, v23, v25, (__int64)a2);
            }
            v4 = v27 - v33;
            goto LABEL_83;
          }
          if ( !*(_DWORD *)(v9 + 828) && !*(_DWORD *)(v9 + 832) )
          {
            v29 = *(unsigned __int16 *)(a1 + 1224) + *(unsigned __int16 *)(a1 + 1226);
            if ( v29 >= v28 )
              LOWORD(v29) = *(_WORD *)(v9 + 8);
            *(_WORD *)(a1 + 1226) = v29;
            goto LABEL_83;
          }
          v30 = *(_WORD *)(a1 + 1226);
          if ( (unsigned __int16)(*(_WORD *)(a1 + 1224) + v30) > (unsigned __int16)v28 )
          {
            if ( v30 >= (unsigned __int16)v28 )
            {
              *(_WORD *)(a1 + 1226) = v28;
LABEL_83:
              *(_WORD *)(a1 + 1224) = v4;
              return PpmEventHgsContainmentUnparkedCount(v34, v38, v5, a1, v36, v23, v25, (__int64)a2);
            }
            *(_WORD *)(a1 + 1224) = v28 - v30;
          }
          return PpmEventHgsContainmentUnparkedCount(v34, v38, v5, a1, v36, v23, v25, (__int64)a2);
        }
        if ( !v17 )
        {
          if ( *(_BYTE *)(v9 + 808) && *(_DWORD *)(v9 + 812) == 1 && *(_DWORD *)(v9 + 4) == 1 )
          {
            *a2 |= 0x100u;
            v23 = 1;
          }
          else
          {
            *(_BYTE *)(v9 + 816) = 1;
            *a2 |= 0x20u;
          }
        }
      }
      v8 = 1;
      goto LABEL_57;
    }
    if ( v16 || *(_DWORD *)(v9 + 832) )
    {
      v20 = 0;
      if ( v16 == 2 || v5 > v11 )
      {
        v20 = 1;
        *a2 |= v11 < v5 ? 0x2000 : 512;
      }
      v21 = *a2;
      if ( *(_DWORD *)(v9 + 832) == 2 )
      {
        v17 = 2;
        *a2 = v21 | 0x800;
        goto LABEL_32;
      }
      v22 = v21 | 0x1000;
      *a2 = v22;
      if ( *(unsigned __int16 *)(a1 + 1224) + (unsigned int)*(unsigned __int16 *)(a1 + 1226) <= (unsigned __int16)v12 )
      {
        v17 = v20 != 0;
        goto LABEL_32;
      }
      *a2 = v22 | 0x4000;
    }
    else
    {
      if ( v15 + (unsigned int)*(unsigned __int16 *)(a1 + 1226) <= (unsigned __int16)v12 )
      {
        v17 = 1;
        goto LABEL_32;
      }
      *a2 |= 0x4000u;
    }
    v17 = 2;
    goto LABEL_32;
  }
  return result;
}
