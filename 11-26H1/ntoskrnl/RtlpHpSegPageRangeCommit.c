/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x140350650
 * Callers:
 *     RtlpHpSegAlloc @ 0x14034D14C (RtlpHpSegAlloc.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14034F8C0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegSuballocatorCommit @ 0x1404B2710 (RtlpHpSegSuballocatorCommit.c)
 *     RtlpHpSegSuballocatorDecommit @ 0x1404BB3B0 (RtlpHpSegSuballocatorDecommit.c)
 *     RtlpHpMetadataCommit @ 0x1404D8AFC (RtlpHpMetadataCommit.c)
 * Callees:
 *     RtlpHpSegMgrCommit @ 0x140350BD0 (RtlpHpSegMgrCommit.c)
 *     RtlpLogHeapDecommit @ 0x14052FF6C (RtlpLogHeapDecommit.c)
 *     RtlpLogHeapCommit @ 0x14052FFE4 (RtlpLogHeapCommit.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCommit(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        _DWORD *a6)
{
  int v8; // ebp
  __int64 v9; // r13
  int v10; // r8d
  int v11; // edi
  __int64 v12; // rsi
  unsigned int v13; // edx
  int v14; // esi
  int v15; // eax
  __int64 result; // rax
  int v17; // r11d
  int v18; // ecx
  char v19; // r8
  unsigned int v20; // r11d
  unsigned int v21; // r10d
  int v22; // ebx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rax
  unsigned int v25; // r12d
  unsigned __int64 v26; // r11
  unsigned int v27; // r13d
  unsigned __int64 v28; // r11
  int v29; // r12d
  bool v30; // zf
  unsigned int v31; // ebp
  unsigned int v32; // edx
  int v33; // ecx
  unsigned int v34; // edx
  int v35; // ecx
  unsigned int v36; // r13d
  __int64 v37; // r12
  int v38; // eax
  int v39; // r11d
  unsigned int v40; // r11d
  unsigned __int64 v41; // r10
  unsigned int v42; // ebp
  int v43; // r12d
  char v44; // cl
  unsigned __int64 v45; // r8
  unsigned __int64 v46; // r10
  unsigned __int64 v47; // r8
  int v48; // r11d
  unsigned __int64 v49; // r9
  unsigned int v50; // r13d
  unsigned int v51; // eax
  unsigned __int64 v52; // r9
  bool v53; // zf
  unsigned int v54; // edx
  unsigned int v55; // ecx
  int v56; // r13d
  unsigned int v57; // edx
  unsigned int v58; // ecx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  unsigned int v62; // edx
  unsigned int v63; // ecx
  unsigned int v64; // ecx
  unsigned int v65; // edx
  int v66; // ebx
  int v67; // r8d
  int v68; // [rsp+44h] [rbp-74h]
  unsigned int v69; // [rsp+48h] [rbp-70h]
  int v70; // [rsp+4Ch] [rbp-6Ch]
  unsigned int v71; // [rsp+50h] [rbp-68h]
  unsigned int v72; // [rsp+54h] [rbp-64h]
  int v73; // [rsp+58h] [rbp-60h]
  __int64 v74; // [rsp+60h] [rbp-58h]
  int v75; // [rsp+C0h] [rbp+8h]
  unsigned int v76; // [rsp+C0h] [rbp+8h]
  unsigned int v78; // [rsp+D0h] [rbp+18h]
  int v79; // [rsp+D0h] [rbp+18h]

  v8 = (a5 >> 22) & 2;
  v9 = a2;
  v10 = 511;
  if ( (*(_BYTE *)(a1 + 13) & 7) == 0 )
    v10 = 0x7FFF;
  v11 = a4;
  v73 = v10;
  v12 = (a2 - (a2 & *(_QWORD *)a1)) >> 5;
  v13 = a3 + a4;
  v14 = (_DWORD)v12 << *(_BYTE *)(a1 + 9);
  if ( a4 <= 0 )
    v13 = a3 - a4;
  v15 = 0;
  v72 = v13;
  while ( 1 )
  {
    v68 = v15;
    if ( a3 >= v13 )
      break;
    v17 = v10;
    v78 = -1;
    v75 = -1;
    v18 = v10 & (a3 + v14);
    v19 = *(_BYTE *)(a1 + 9);
    v20 = v17 - v18 + 1;
    if ( v20 >= v13 - a3 )
      v20 = v13 - a3;
    v21 = 1 << v19;
    v71 = v20;
    v22 = 0;
    v23 = (unsigned __int64)a3 >> v19 << v19;
    v24 = v9 + 32 * ((unsigned __int64)a3 >> v19);
    v25 = a3 & ((1 << v19) - 1);
    v26 = v20 + v25 - 1;
    v27 = (((1 << v19) - 1) & v26) + 1;
    v28 = v24 + 32 * (v26 >> v19);
    if ( v25 )
    {
      v62 = *(unsigned __int8 *)(v24 + 25);
      v63 = 1 << v19;
      if ( v24 == v28 )
        v63 = v27;
      if ( v11 <= 0 )
      {
        if ( v62 > v25 )
        {
          v66 = a3 & ((1 << v19) - 1);
          v78 = v25 + v23;
          v67 = v62 + v23;
          v29 = v25 + v23;
          goto LABEL_87;
        }
LABEL_72:
        v29 = -1;
      }
      else
      {
        if ( v62 >= v63 )
          goto LABEL_72;
        v29 = v62 + v23;
        v66 = v63;
        v78 = v62 + v23;
        v67 = v23 + v63;
LABEL_87:
        v22 = v66 - v62;
        v75 = v67;
        if ( v22 && v11 <= 0 )
        {
          *(_BYTE *)(v24 + 25) = v22 + v62;
          v24 += 32LL;
          LODWORD(v23) = v21 + v23;
          goto LABEL_15;
        }
      }
      v24 += 32LL;
      LODWORD(v23) = v21 + v23;
      goto LABEL_15;
    }
    v29 = -1;
LABEL_15:
    v30 = v24 == v28;
    if ( v24 >= v28 )
      goto LABEL_21;
    v31 = v78;
    do
    {
      v32 = *(unsigned __int8 *)(v24 + 25);
      v33 = 0;
      if ( v11 <= 0 )
      {
        if ( !(_BYTE)v32 )
          goto LABEL_19;
        if ( v31 == -1 )
          v31 = v23;
        v75 = v23 + v32;
        v33 = -v32;
      }
      else
      {
        if ( v32 >= v21 )
          goto LABEL_19;
        if ( v31 == -1 )
          v31 = v23 + v32;
        v75 = v23 + v21;
        v33 = v21 - v32;
      }
      if ( v33 && v11 <= 0 )
        *(_BYTE *)(v24 + 25) = v33 + v32;
LABEL_19:
      v22 += v33;
      v24 += 32LL;
      LODWORD(v23) = v21 + v23;
      v30 = v24 == v28;
    }
    while ( v24 < v28 );
    v78 = v31;
    v29 = v31;
    v8 = (a5 >> 22) & 2;
LABEL_21:
    if ( v30 )
    {
      v34 = *(unsigned __int8 *)(v24 + 25);
      v35 = 0;
      if ( v11 <= 0 )
      {
        if ( *(_BYTE *)(v24 + 25) )
        {
          if ( v29 == -1 )
            v78 = v23;
          v75 = v34 + v23;
          v35 = -v34;
          goto LABEL_54;
        }
      }
      else
      {
        if ( v34 >= v27 )
          goto LABEL_24;
        if ( v29 == -1 )
          v78 = v34 + v23;
        v75 = v23 + v27;
        v35 = v27 - v34;
LABEL_54:
        if ( v35 && v11 <= 0 )
          *(_BYTE *)(v24 + 25) = v35 + v34;
      }
LABEL_24:
      v22 += v35;
    }
    if ( !v22 )
    {
      v9 = a2;
      goto LABEL_44;
    }
    v36 = v75 - v78;
    v37 = a2 & *(_QWORD *)a1;
    v76 = v75 - v78;
    v70 = v78 + v14;
    v74 = v37;
    if ( v22 <= 0 )
    {
      v38 = 0x4000;
    }
    else
    {
      v38 = 4096;
      if ( (a5 & 2) != 0 )
        v38 = 1073745920;
    }
    result = RtlpHpSegMgrCommit(a1, v37, v78 + v14, v36, v22, v38, v8);
    if ( (int)result < 0 )
      return result;
    v39 = v36;
    if ( v22 > 0 )
    {
      v40 = v78;
      v41 = v78;
      v42 = 1 << *(_BYTE *)(a1 + 9);
      v43 = -1;
      v44 = *(_BYTE *)(a1 + 9);
      v79 = -1;
      v45 = v41 >> v44;
      v46 = v41 >> v44 << v44;
      v47 = a2 + 32 * v45;
      v48 = (v42 - 1) & v40;
      v49 = v48 + v36 - 1;
      v50 = ((v42 - 1) & v49) + 1;
      v51 = 0;
      v52 = v47 + 32 * (v49 >> v44);
      v69 = v50;
      if ( v48 )
      {
        v64 = *(unsigned __int8 *)(v47 + 25);
        v65 = 1 << *(_BYTE *)(a1 + 9);
        if ( v47 == v52 )
          v65 = v50;
        if ( v64 < v65 )
        {
          v79 = v46 + v65;
          v43 = v46 + v64;
          v51 = v65 - v64;
          if ( v65 != v64 )
            *(_BYTE *)(v47 + 25) = v65;
        }
        v47 += 32LL;
        LODWORD(v46) = v42 + v46;
      }
      v39 = v76;
      v53 = v47 == v52;
      if ( v47 < v52 )
      {
        do
        {
          v54 = *(unsigned __int8 *)(v47 + 25);
          v55 = 0;
          v56 = v43;
          if ( v54 < v42 )
          {
            v43 = v54 + v46;
            if ( v56 != -1 )
              v43 = v56;
            v79 = v46 + v42;
            LODWORD(v46) = v46 + v42;
            v55 = v42 - v54;
            if ( v42 != v54 )
              *(_BYTE *)(v47 + 25) = v42;
          }
          else
          {
            LODWORD(v46) = v42 + v46;
          }
          v51 += v55;
          v47 += 32LL;
          v53 = v47 == v52;
        }
        while ( v47 < v52 );
        v11 = a4;
        v50 = v69;
      }
      if ( v53 )
      {
        v57 = *(unsigned __int8 *)(v47 + 25);
        v58 = 0;
        if ( v57 < v50 )
        {
          if ( v43 == -1 )
            v43 = v57 + v46;
          v79 = v46 + v50;
          v58 = v50 - v57;
          if ( v50 != v57 )
            *(_BYTE *)(v47 + 25) = v50;
        }
        v51 += v58;
      }
      v8 = (a5 >> 22) & 2;
      if ( v51 )
        v39 = v79 - v43;
      v37 = v74;
    }
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v22);
    v9 = a2;
    *(_WORD *)(a2 + 28) = ~(v22 + ~*(_WORD *)(a2 + 28));
    v59 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v59 + 20) & 0x80u) != 0 )
    {
      v60 = v37 + (unsigned int)(v70 << 12);
      v61 = (unsigned int)(v39 << 12);
      if ( v22 <= 0 )
        RtlpLogHeapDecommit(v59, v60, v61);
      else
        RtlpLogHeapCommit(v59, v60, v61, 10LL);
    }
LABEL_44:
    a3 += v71;
    v13 = v72;
    v15 = v22 + v68;
    v10 = v73;
  }
  if ( a6 )
    *a6 = v15;
  return 0LL;
}
