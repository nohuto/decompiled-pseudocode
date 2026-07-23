/*
 * XREFs of PpmParkCalculateUnparkCount @ 0x140417970
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x14041574C (PpmCheckComputeMultiClassHeteroResponse.c)
 *     PpmCheckComputeHeteroResponse @ 0x140415EE0 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x140417E30 (PpmHeteroIsMultiClassParkingEnabled.c)
 *     PpmEventParkingCountSelection @ 0x140417E4C (PpmEventParkingCountSelection.c)
 *     PpmEventHgsCoresUnparkedCount @ 0x140417FAC (PpmEventHgsCoresUnparkedCount.c)
 *     PpmHeteroHgsCalculateContainmentCount @ 0x14060D428 (PpmHeteroHgsCalculateContainmentCount.c)
 */

void PpmParkCalculateUnparkCount()
{
  __int64 v0; // r8
  __int64 v1; // rcx
  unsigned int v2; // r13d
  void *v3; // rdx
  unsigned __int16 v4; // r15
  __int64 v5; // r9
  __int64 v6; // rbx
  unsigned __int8 v7; // di
  unsigned int v8; // r15d
  __int64 v9; // rbp
  __int64 v10; // r14
  __int16 v11; // r11
  char v12; // al
  char v13; // si
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int16 v18; // r12
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // cl
  char v21; // r8
  unsigned __int16 v22; // r9
  unsigned __int16 v23; // r10
  unsigned int v24; // r11d
  int v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // r8
  bool v28; // zf
  int v29; // ecx
  unsigned __int16 v30; // ax
  __int16 v31; // dx
  int v32; // r8d
  int v33; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v34; // [rsp+64h] [rbp-54h]
  unsigned int v35; // [rsp+68h] [rbp-50h]
  char v36; // [rsp+C0h] [rbp+8h]
  char v37; // [rsp+C8h] [rbp+10h]
  char v38; // [rsp+D0h] [rbp+18h]
  unsigned __int16 v39; // [rsp+D8h] [rbp+20h]

  v0 = 0LL;
  v33 = 0;
  if ( PpmIsParkingEnabled )
  {
    v3 = PpmCurrentProfile;
    v1 = 712LL * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
    v2 = *(_DWORD *)((char *)PpmCurrentProfile + v1 + 272);
    v37 = *((_BYTE *)PpmCurrentProfile + v1 + 266);
    v36 = *((_BYTE *)PpmCurrentProfile + v1 + 265);
    LOBYTE(v3) = *((_BYTE *)PpmCurrentProfile + v1 + 263);
    v38 = (char)v3;
    v35 = *(_DWORD *)((char *)PpmCurrentProfile + v1 + 268);
    if ( PpmCheckCurrentPipelineId == 5 )
    {
      v35 = 0;
      v2 = 0;
    }
    v4 = 0;
    v39 = 0;
    if ( PpmParkNumNodes )
    {
      v5 = 1LL;
      while ( 1 )
      {
        v6 = PpmParkNodes + 1264LL * v4;
        if ( ((unsigned __int8)v5 & *(_BYTE *)(v6 + 1152)) == 0 )
        {
          *(_DWORD *)v6 += v5;
          v7 = v0;
          v34 = *(_DWORD *)v6;
          if ( *(_BYTE *)(v6 + 10) > (unsigned __int8)v0 )
            break;
        }
LABEL_35:
        v4 += v5;
        v39 = v4;
        if ( v4 >= (unsigned int)PpmParkNumNodes )
          return;
      }
      v8 = v35;
      while ( 1 )
      {
        v9 = *(_QWORD *)(v6 + 1256);
        v10 = 624LL * v7;
        v33 = v0;
        if ( (unsigned __int8)PpmHeteroIsMultiClassParkingEnabled(v1, v3, v0, v5)
          || (v12 = v5, v1 = v7 != 0 ? 4 : 2, ((unsigned __int8)(v7 != 0 ? 4 : 2) & *(_BYTE *)(v6 + 1152)) == 0) )
        {
          v12 = v0;
        }
        if ( !v11 || v12 )
          goto LABEL_33;
        v13 = PpmParkUnparkCores;
        if ( (unsigned __int8)PpmHeteroIsMultiClassParkingEnabled(v1, v3, v0, v5) )
        {
          if ( *(_BYTE *)(v6 + 1153) == (_BYTE)v16 )
            goto LABEL_16;
          v17 = *(unsigned __int16 *)(v10 + v9 + 6);
          LOBYTE(v15) = *(_BYTE *)(v10 + v9 + 620);
        }
        else
        {
          if ( v7
            || *(_BYTE *)(v6 + 1153) == (_BYTE)v16
            || (v15 = *(_QWORD *)(v6 + 1256), *(_WORD *)(v15 + 630) < *(_WORD *)(v15 + 634)) )
          {
LABEL_16:
            LOBYTE(v15) = *(_BYTE *)(v6 + 1146);
            v17 = *(unsigned __int16 *)(v6 + 1144);
            goto LABEL_17;
          }
          v17 = *(unsigned __int16 *)(v15 + 618);
          LOBYTE(v15) = *(_BYTE *)(v15 + 620);
        }
LABEL_17:
        v18 = v17;
        if ( (unsigned __int8)PpmHeteroIsMultiClassParkingEnabled(v15, v14, v16, v17) && *(_BYTE *)(v6 + 1153) != v21
          || v13 && PpmParkGranularity != 1
          || v22 >= (unsigned __int16)v24
          || v20 <= v19 )
        {
          v25 = v33;
        }
        else
        {
          ++v22;
          v25 = v33 | 1;
          v33 |= 1u;
        }
        v26 = *(unsigned __int16 *)(v10 + v9 + 8);
        if ( v13 )
        {
          v25 |= 2u;
          v33 = v25;
          v26 = (unsigned int)v26 / (unsigned __int16)PpmParkGranularity;
        }
        if ( (unsigned __int16)v26 > v22 )
        {
          if ( v34 >= v8 && (unsigned __int16)v26 >= v23 )
          {
            v33 = v25 | 8;
            *(_DWORD *)v6 = 0;
            switch ( v36 )
            {
              case 0:
                goto LABEL_70;
              case 1:
                LOWORD(v26) = v26 - v23;
                break;
              case 2:
                goto LABEL_68;
              case 3:
                v32 = *(unsigned __int16 *)(v6 + 1150);
                v23 = PpmParkGranularity;
                if ( (unsigned __int16)v26 <= v32 + (unsigned int)(unsigned __int16)PpmParkGranularity )
LABEL_68:
                  v26 = v23;
                else
                  LOWORD(v26) = v26 - v32;
                break;
              default:
                break;
            }
          }
        }
        else
        {
          if ( (unsigned __int16)v26 >= v22 )
            goto LABEL_28;
          if ( (unsigned __int16)v26 >= (unsigned __int16)v24 )
            goto LABEL_45;
          if ( v34 < v2 )
            goto LABEL_29;
          v33 = v25 | 4;
          *(_DWORD *)v6 = 0;
          switch ( v37 )
          {
            case 0:
LABEL_70:
              v26 = v22;
              break;
            case 1:
              LOWORD(v26) = v23 + v26;
              break;
            case 2:
              goto LABEL_45;
            case 3:
              v26 = *(unsigned __int16 *)(v6 + 1150) + (unsigned int)(unsigned __int16)v26;
              if ( (unsigned int)v26 >= v24 )
              {
LABEL_45:
                v26 = (unsigned __int16)v24;
                goto LABEL_29;
              }
              break;
            default:
              goto LABEL_29;
          }
        }
LABEL_28:
        if ( (unsigned __int16)v26 >= (unsigned __int16)v24 )
          goto LABEL_45;
LABEL_29:
        v27 = 0LL;
        if ( v13 )
          v26 = (unsigned __int16)PpmParkGranularity * (unsigned int)(unsigned __int16)v26;
        v28 = PpmHeteroHgsParkingEnabled == 0;
        *(_WORD *)(v10 + v9 + 6) = v26;
        if ( !v28 )
        {
          v30 = *(_WORD *)(v6 + 1224);
          *(_WORD *)(v6 + 1228) = v26;
          if ( (unsigned __int16)v26 < v30 )
          {
            *(_WORD *)(v6 + 1228) = v30;
            v31 = 0;
          }
          else
          {
            v31 = v26 - v30;
          }
          *(_WORD *)(v6 + 1226) = v31;
          PpmHeteroHgsCalculateContainmentCount(v6, &v33, v22);
        }
        PpmEventHgsCoresUnparkedCount(v6, v26, v27);
        LOBYTE(v29) = v7;
        PpmEventParkingCountSelection(
          v29,
          v18,
          *(unsigned __int16 *)(v10 + v9 + 8),
          *(unsigned __int16 *)(v10 + v9 + 6),
          *(_WORD *)(v10 + v9),
          v33,
          v37,
          v36,
          v2,
          v8,
          v34);
        LOBYTE(v3) = v38;
        v0 = 0LL;
        v5 = 1LL;
LABEL_33:
        v7 += v5;
        if ( v7 >= *(_BYTE *)(v6 + 10) )
        {
          v4 = v39;
          goto LABEL_35;
        }
      }
    }
  }
}
