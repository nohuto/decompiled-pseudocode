/*
 * XREFs of HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo @ 0x140594900
 * Callers:
 *     <none>
 * Callees:
 *     HalpNumaQueryProximityId @ 0x140594870 (HalpNumaQueryProximityId.c)
 *     HalpNumaQueryProximityNode @ 0x1405948B0 (HalpNumaQueryProximityNode.c)
 *     HalpNumaSystemLocalityInfoFindInitiatorIndex @ 0x1405950DC (HalpNumaSystemLocalityInfoFindInitiatorIndex.c)
 *     HalpNumaSystemLocalityInfoFindTargetIndex @ 0x14059512C (HalpNumaSystemLocalityInfoFindTargetIndex.c)
 *     HalpNumaSystemLocalityInfoIncludeQueryDataType @ 0x140595184 (HalpNumaSystemLocalityInfoIncludeQueryDataType.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpNumaQuerySystemLocalityLatencyAndBandwidthInfo(
        int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        char *a6,
        size_t Size,
        unsigned int *a8)
{
  __int64 v8; // rsi
  int ProximityNode; // ebx
  unsigned int *v11; // r12
  unsigned __int64 v12; // r11
  unsigned int v13; // r13d
  unsigned int v14; // r14d
  unsigned int v15; // r15d
  unsigned int *v16; // rbx
  unsigned int v17; // esi
  __int64 v18; // r10
  int v19; // edi
  int TargetIndex; // eax
  int InitiatorIndex; // eax
  char v22; // al
  unsigned __int64 v23; // rsi
  unsigned int v24; // esi
  __int64 v25; // rax
  char v26; // r15
  unsigned int *v27; // rdi
  unsigned int i; // r10d
  unsigned int v29; // r11d
  int v30; // ecx
  unsigned int v31; // r12d
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // rdx
  unsigned int v37; // r8d
  unsigned __int64 v38; // rax
  unsigned int v39; // ecx
  int v40; // eax
  int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // ecx
  __int64 v44; // rax
  unsigned int v45; // r12d
  unsigned int v46; // r15d
  char *v47; // rdx
  __int64 v48; // r13
  char v49; // cl
  char *v50; // rcx
  int v51; // eax
  __int64 v52; // rcx
  unsigned __int16 v54[2]; // [rsp+20h] [rbp-60h] BYREF
  int v55; // [rsp+24h] [rbp-5Ch]
  int v56; // [rsp+28h] [rbp-58h] BYREF
  unsigned int v57; // [rsp+2Ch] [rbp-54h] BYREF
  unsigned int v58; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v59; // [rsp+34h] [rbp-4Ch]
  int v60; // [rsp+38h] [rbp-48h]
  int v61; // [rsp+3Ch] [rbp-44h]
  __int64 v62; // [rsp+40h] [rbp-40h]
  __int64 v63; // [rsp+48h] [rbp-38h]
  __int64 v64; // [rsp+50h] [rbp-30h]
  int v65; // [rsp+58h] [rbp-28h]
  int v66; // [rsp+5Ch] [rbp-24h] BYREF
  unsigned int *v67; // [rsp+60h] [rbp-20h]
  char *v68; // [rsp+68h] [rbp-18h]
  __int64 v69; // [rsp+70h] [rbp-10h]

  v8 = HalpHmaConfig;
  v54[0] = 0;
  v62 = HalpHmaConfig;
  if ( !HalpHmaConfig )
  {
    ProximityNode = -1073741595;
    goto LABEL_98;
  }
  if ( a1 != 1 || !a8 )
  {
    ProximityNode = -1073741811;
    goto LABEL_98;
  }
  v11 = (unsigned int *)a6;
  if ( !a6 && (_DWORD)Size )
    return (unsigned int)-1073741811;
  v12 = 0xFFFFFFFFLL;
  v66 = -1;
  v13 = -1;
  if ( a2 != -1 )
  {
    if ( a2 > 0xFFFF )
    {
LABEL_11:
      ProximityNode = -1073741275;
      goto LABEL_98;
    }
    ProximityNode = HalpNumaQueryProximityId(a2, &v66, 0LL);
    if ( ProximityNode < 0 )
      goto LABEL_98;
    v13 = v66;
    v12 = 0xFFFFFFFFLL;
  }
  v56 = -1;
  v14 = -1;
  if ( a3 != -1 )
  {
    if ( a3 > 0xFFFF )
      goto LABEL_11;
    ProximityNode = HalpNumaQueryProximityId(a3, &v56, 0LL);
    if ( ProximityNode < 0 )
      goto LABEL_98;
    v14 = v56;
    v12 = 0xFFFFFFFFLL;
  }
  v15 = 0;
  v16 = (unsigned int *)(v8 + *(unsigned int *)(v8 + 16));
  v17 = 0;
  v18 = v62;
  if ( *(_DWORD *)(v62 + 4) )
  {
    do
    {
      if ( (a4 == 4 || a4 == v16[1]) && (unsigned __int8)HalpNumaSystemLocalityInfoIncludeQueryDataType(v16, a5) )
      {
        v19 = 0;
        if ( v13 == (_DWORD)v12 )
        {
          if ( v14 == (_DWORD)v12 )
          {
            v19 = v16[3] * v16[4];
          }
          else
          {
            TargetIndex = HalpNumaSystemLocalityInfoFindTargetIndex(v16, v14, 0LL);
            v18 = v62;
            v12 = 0xFFFFFFFFLL;
            if ( TargetIndex >= 0 )
              v19 = v16[3];
          }
        }
        else if ( v14 == (_DWORD)v12 )
        {
          InitiatorIndex = HalpNumaSystemLocalityInfoFindInitiatorIndex(v16, v13);
          v18 = v62;
          v12 = 0xFFFFFFFFLL;
          if ( InitiatorIndex >= 0 )
            v19 = v16[4];
        }
        else
        {
          if ( (int)HalpNumaSystemLocalityInfoFindTargetIndex(v16, v14, 0LL) >= 0 )
            v19 = (int)HalpNumaSystemLocalityInfoFindInitiatorIndex(v16, v13) >= 0;
          v18 = v62;
          v12 = 0xFFFFFFFFLL;
        }
        v22 = *((_BYTE *)v16 + 9);
        if ( !v22 || v22 == 3 )
          v19 *= 2;
        v15 += v19;
      }
      ++v17;
      v16 = (unsigned int *)((char *)v16 + *v16);
    }
    while ( v17 < *(_DWORD *)(v18 + 4) );
    v11 = (unsigned int *)a6;
  }
  v23 = 32LL * v15;
  if ( v23 > v12 )
  {
LABEL_97:
    ProximityNode = -1073741675;
    goto LABEL_98;
  }
  v24 = v23 + 8;
  ProximityNode = 0;
  if ( (unsigned int)Size < v24 )
  {
    ProximityNode = -1073741789;
    *a8 = v24;
    goto LABEL_98;
  }
  memset_0(v11, 0, (unsigned int)Size);
  v25 = v62;
  *v11 = v15;
  v26 = 0;
  v59 = 0;
  v27 = (unsigned int *)(HalpHmaConfig + *(unsigned int *)(v25 + 16));
  for ( i = 0; ; ++i )
  {
    v56 = i;
    if ( i >= *(_DWORD *)(v25 + 4) )
    {
      *a8 = v24;
      return (unsigned int)ProximityNode;
    }
    if ( a4 != 4 && a4 != v27[1] || !(unsigned __int8)HalpNumaSystemLocalityInfoIncludeQueryDataType(v27, a5) )
      goto LABEL_93;
    v30 = *((unsigned __int8 *)v27 + 9);
    v60 = 4;
    v61 = 4;
    v31 = 1;
    v65 = 1;
    if ( !v30 )
    {
      v61 = 2;
      v31 = 2;
      v65 = 2;
LABEL_58:
      v60 = 0;
      goto LABEL_59;
    }
    v32 = v30 - 1;
    if ( !v32 )
      goto LABEL_58;
    v33 = v32 - 1;
    if ( v33 )
    {
      v34 = v33 - 1;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          if ( v35 != 1 )
          {
            ProximityNode = -1073741216;
            goto LABEL_98;
          }
          v60 = 3;
        }
        else
        {
          v60 = 1;
        }
      }
      else
      {
        v31 = 2;
        v60 = 1;
        v65 = 2;
        v61 = 3;
      }
    }
    else
    {
      v60 = 2;
    }
LABEL_59:
    v36 = v27[3];
    v64 = v36;
    v67 = &v27[v36 + 8];
    if ( (unsigned __int64)(4 * v36) > 0xFFFFFFFF )
      goto LABEL_97;
    v37 = v27[4];
    v63 = v37;
    v38 = 4LL * v37;
    if ( v38 > 0xFFFFFFFF )
      goto LABEL_97;
    v39 = v38 + 4 * v36;
    if ( v39 < (unsigned int)v38 )
      goto LABEL_97;
    ProximityNode = 0;
    v57 = 0;
    v58 = 0;
    v68 = (char *)v27 + v39 + 32;
    if ( v13 == -1 )
      break;
    if ( v14 != -1 )
    {
      if ( (int)HalpNumaSystemLocalityInfoFindInitiatorIndex(v27, v13) >= 0
        && (int)HalpNumaSystemLocalityInfoFindTargetIndex(v42, v14, &v58) >= 0 )
      {
        v43 = v24;
        LODWORD(v36) = v57 + 1;
        v37 = v58 + 1;
        v64 = v57 + 1;
        v63 = v58 + 1;
LABEL_74:
        v29 = v59;
        goto LABEL_75;
      }
      LODWORD(v36) = v64;
LABEL_85:
      v37 = v63;
      goto LABEL_86;
    }
    v41 = HalpNumaSystemLocalityInfoFindTargetIndex(v27, v13, &v57);
    v37 = v63;
    if ( v41 < 0 )
    {
      LODWORD(v36) = v64;
      goto LABEL_86;
    }
    LODWORD(v36) = v57 + 1;
    v64 = v57 + 1;
LABEL_66:
    v26 = 1;
LABEL_86:
    v43 = v24;
    if ( v26 )
      goto LABEL_74;
LABEL_92:
    i = v56;
LABEL_93:
    v27 = (unsigned int *)((char *)v27 + *v27);
    v25 = v62;
  }
  if ( v14 != -1 )
  {
    v40 = HalpNumaSystemLocalityInfoFindTargetIndex(v27, v14, &v58);
    LODWORD(v36) = v64;
    if ( v40 < 0 )
      goto LABEL_85;
    v37 = v58 + 1;
    v63 = v58 + 1;
    goto LABEL_66;
  }
  v43 = v24;
LABEL_75:
  v44 = 0LL;
  v24 = v43;
  while ( 1 )
  {
    v55 = v44;
    if ( (unsigned int)v44 >= v31 )
    {
      v13 = v66;
      v26 = 0;
      goto LABEL_92;
    }
    v45 = v57;
    v69 = v44;
LABEL_78:
    if ( v45 < (unsigned int)v36 )
      break;
    v31 = v65;
    v44 = (unsigned int)(v55 + 1);
  }
  v46 = v58;
  v47 = a6;
  while ( 1 )
  {
    if ( v46 >= v37 )
    {
      LODWORD(v36) = v64;
      ++v45;
      goto LABEL_78;
    }
    v48 = 32LL * v29;
    *(_DWORD *)&v47[v48 + 20] = *(&v60 + v44);
    v49 = v47[v48 + 24] ^ (*((_BYTE *)v27 + 8) ^ v47[v48 + 24]) & 1;
    v47[v48 + 24] = v49;
    v47[v48 + 24] = v49 ^ (*((_BYTE *)v27 + 8) ^ v49) & 2;
    v47[v48 + 25] = *((_BYTE *)v27 + 10);
    *(_DWORD *)&v47[v48 + 16] = v27[1];
    if ( (int)HalpNumaQueryProximityNode(v27[v45 + 8], v54) < 0 )
      break;
    *(_DWORD *)&a6[v48 + 8] = v54[0];
    ProximityNode = HalpNumaQueryProximityNode(v67[v46], v54);
    if ( ProximityNode < 0 )
      break;
    v47 = a6;
    v50 = v68;
    v29 = v59 + 1;
    v37 = v63;
    *(_DWORD *)&a6[v48 + 12] = v54[0];
    v51 = v27[4] * v45;
    v59 = v29;
    v52 = *((_QWORD *)v27 + 3) * *(unsigned __int16 *)&v50[2 * v46 + 2 * v51];
    v44 = v69;
    ++v46;
    *(_QWORD *)&a6[v48 + 32] = v52;
  }
  ProximityNode = -1072431089;
LABEL_98:
  if ( a6 )
    memset_0(a6, 0, (unsigned int)Size);
  return (unsigned int)ProximityNode;
}
