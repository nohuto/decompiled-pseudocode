/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x180089CA0
 * Callers:
 *     RtlpHpSegReAlloc @ 0x18008159C (RtlpHpSegReAlloc.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18008ADB0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegAlloc @ 0x1800DD93C (RtlpHpSegAlloc.c)
 *     RtlpHpMetadataCommit @ 0x1800E7268 (RtlpHpMetadataCommit.c)
 *     RtlpHpSegSuballocatorCommit @ 0x1800FECF0 (RtlpHpSegSuballocatorCommit.c)
 *     RtlpHpSegSuballocatorDecommit @ 0x180106AE0 (RtlpHpSegSuballocatorDecommit.c)
 * Callees:
 *     RtlpHpSegMgrCommit @ 0x18008A260 (RtlpHpSegMgrCommit.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AD00 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlpLogHeapCommit @ 0x1800956B0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapDecommit @ 0x180114424 (RtlpLogHeapDecommit.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCommit(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v6; // rsi
  __int64 v9; // r8
  char v10; // al
  bool v11; // cf
  int v13; // r11d
  unsigned int v14; // edx
  __int64 v15; // r10
  int v16; // eax
  __int64 result; // rax
  unsigned int v18; // eax
  char v19; // dl
  unsigned int v20; // r11d
  unsigned int v21; // eax
  int v22; // edi
  unsigned int v23; // r14d
  int v24; // ebx
  unsigned int v25; // r10d
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r9
  unsigned int v29; // r15d
  unsigned __int64 v30; // r11
  unsigned int v31; // r13d
  unsigned __int64 v32; // r11
  int v33; // r15d
  bool v34; // zf
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // edi
  __int64 v40; // r13
  int v41; // eax
  unsigned __int64 v42; // r8
  unsigned int v43; // r9d
  int v44; // r15d
  char v45; // cl
  unsigned int v46; // r13d
  unsigned int v47; // edx
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r10
  int v50; // eax
  int v51; // r14d
  unsigned __int64 v52; // r11
  __int64 v53; // r11
  int v54; // ecx
  unsigned __int64 v55; // r11
  int v56; // r14d
  bool v57; // zf
  unsigned int v58; // eax
  int v59; // edi
  int v60; // eax
  __int64 *v61; // rcx
  __int64 v62; // rcx
  unsigned int v63; // eax
  unsigned int v64; // ecx
  unsigned int v65; // eax
  int v66; // ebx
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // [rsp+40h] [rbp-C0h] BYREF
  int v70; // [rsp+48h] [rbp-B8h]
  __int64 v71; // [rsp+50h] [rbp-B0h]
  int v72; // [rsp+58h] [rbp-A8h]
  __int64 v73; // [rsp+60h] [rbp-A0h] BYREF
  int v74; // [rsp+68h] [rbp-98h]
  __int64 v75; // [rsp+70h] [rbp-90h] BYREF
  int v76; // [rsp+78h] [rbp-88h]
  unsigned int v77; // [rsp+7Ch] [rbp-84h]
  unsigned int v78; // [rsp+80h] [rbp-80h]
  int v79; // [rsp+84h] [rbp-7Ch]
  __int64 v80; // [rsp+88h] [rbp-78h]
  __int64 v81; // [rsp+90h] [rbp-70h]
  __int64 v82; // [rsp+98h] [rbp-68h] BYREF
  __int64 v83; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v84; // [rsp+A8h] [rbp-58h]
  __int64 v85[14]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = a1;
  v81 = a1;
  v74 = (a5 >> 22) & 2;
  v9 = a2;
  v10 = *(_BYTE *)(a1 + 13) & 7;
  v84 = a6;
  v11 = v10 == 0;
  v71 = a2;
  v70 = a4;
  v13 = 511;
  v14 = a4 + a3;
  if ( v11 )
    v13 = 0x7FFF;
  v15 = (unsigned int)((a2 - (*(_QWORD *)a1 & a2)) >> 5) << *(_BYTE *)(a1 + 9);
  v79 = v13;
  v80 = v15;
  if ( a4 <= 0 )
    v14 = a3 - a4;
  v16 = 0;
  v78 = v14;
  while ( 1 )
  {
    v72 = v16;
    if ( a3 >= v14 )
    {
      if ( v84 )
        *v84 = v16;
      return 0LL;
    }
    v18 = v14;
    v19 = *(_BYTE *)(v6 + 9);
    v20 = v13 - (v13 & (a3 + v15)) + 1;
    v21 = v18 - a3;
    v22 = -1;
    if ( v20 >= v21 )
      v20 = v21;
    v23 = -1;
    v77 = v20;
    v24 = 0;
    v25 = 1 << v19;
    v26 = (unsigned __int64)a3 >> v19;
    v27 = 32 * v26 + v9;
    v28 = v26 << v19;
    v29 = a3 & ((1 << v19) - 1);
    v30 = v29 + v20 - 1;
    v31 = (((1 << v19) - 1) & v30) + 1;
    v32 = v27 + 32 * (v30 >> v19);
    if ( v29 )
    {
      v63 = *(unsigned __int8 *)(v27 + 25);
      v64 = 1 << v19;
      if ( v27 == v32 )
        v64 = v31;
      if ( v70 <= 0 )
      {
        if ( v63 <= v29 )
          goto LABEL_78;
        v23 = v29 + v28;
        v66 = a3 & ((1 << v19) - 1);
        v22 = v28 + v63;
      }
      else
      {
        if ( v63 >= v64 )
        {
LABEL_78:
          v27 += 32LL;
          LODWORD(v28) = v25 + v28;
          goto LABEL_14;
        }
        v23 = v28 + v63;
        v66 = v64;
        v22 = v28 + v64;
      }
      v24 = v66 - v63;
      if ( v24 && v70 <= 0 )
        *(_BYTE *)(v27 + 25) = v24 + v63;
      goto LABEL_78;
    }
LABEL_14:
    v33 = v70;
    v34 = v27 == v32;
    while ( v27 < v32 )
    {
      v35 = *(unsigned __int8 *)(v27 + 25);
      v36 = 0;
      if ( v33 <= 0 )
      {
        if ( (_BYTE)v35 )
        {
          if ( v23 == -1 )
            v23 = v28;
          v22 = v35 + v28;
          v36 = -v35;
          goto LABEL_48;
        }
      }
      else if ( v35 < v25 )
      {
        if ( v23 == -1 )
          v23 = v35 + v28;
        v22 = v28 + v25;
        v36 = v25 - v35;
LABEL_48:
        if ( v36 && v33 <= 0 )
          *(_BYTE *)(v27 + 25) = v36 + v35;
      }
      v24 += v36;
      v27 += 32LL;
      LODWORD(v28) = v25 + v28;
      v34 = v27 == v32;
    }
    if ( v34 )
    {
      v37 = *(unsigned __int8 *)(v27 + 25);
      v38 = 0;
      if ( v33 <= 0 )
      {
        if ( !*(_BYTE *)(v27 + 25) )
          goto LABEL_21;
        if ( v23 == -1 )
          v23 = v28;
        v22 = v37 + v28;
        v38 = -v37;
      }
      else
      {
        if ( v37 >= v31 )
        {
LABEL_21:
          v24 += v38;
          goto LABEL_22;
        }
        if ( v23 == -1 )
          v23 = v37 + v28;
        v22 = v28 + v31;
        v38 = v31 - v37;
      }
      if ( v38 && v33 <= 0 )
        *(_BYTE *)(v27 + 25) = v38 + v37;
      goto LABEL_21;
    }
LABEL_22:
    if ( !v24 )
      goto LABEL_94;
    v39 = v22 - v23;
    v40 = *(_QWORD *)v6 & v71;
    v73 = v40;
    v76 = v23 + v80;
    if ( v24 <= 0 )
    {
      v41 = 0x4000;
    }
    else
    {
      v41 = 4096;
      if ( (a5 & 2) != 0 )
        v41 = 1073745920;
    }
    result = RtlpHpSegMgrCommit(v6, v40, v23 + (unsigned int)v80, v39, v24, v41, v74);
    if ( (int)result < 0 )
      return result;
    v44 = v39;
    if ( v24 <= 0 )
      goto LABEL_40;
    v45 = *(_BYTE *)(v6 + 9);
    v46 = 1 << v45;
    v47 = 0;
    v48 = (unsigned __int64)v23 >> v45;
    v49 = v48 << v45;
    v42 = v71 + 32 * v48;
    v50 = (1 << v45) - 1;
    v51 = v50 & v23;
    v52 = v39 + v51 - 1;
    v43 = (v50 & v52) + 1;
    v53 = 32 * (v52 >> v45);
    v54 = -1;
    v55 = v42 + v53;
    LODWORD(v75) = v43;
    LODWORD(v69) = -1;
    if ( v51 )
    {
      v65 = v46;
      if ( v42 == v55 )
        v65 = v43;
      v43 = *(unsigned __int8 *)(v42 + 25);
      if ( v43 < v65 )
      {
        v56 = v49 + v65;
        LODWORD(v69) = v49 + v65;
        v54 = v43 + v49;
        v47 = v65 - v43;
        if ( v65 != v43 )
        {
          LOBYTE(v43) = v65;
          *(_BYTE *)(v42 + 25) = v65;
          v42 += 32LL;
          LODWORD(v49) = v46 + v49;
          goto LABEL_30;
        }
      }
      else
      {
        v56 = -1;
      }
      v42 += 32LL;
      LODWORD(v49) = v46 + v49;
    }
    else
    {
      v56 = -1;
    }
LABEL_30:
    v57 = v42 == v55;
    if ( v42 < v55 )
    {
      do
      {
        v58 = *(unsigned __int8 *)(v42 + 25);
        v43 = 0;
        v59 = v54;
        if ( v58 < v46 )
        {
          v54 = v58 + v49;
          if ( v59 != -1 )
            v54 = v59;
          LODWORD(v69) = v49 + v46;
          LODWORD(v49) = v49 + v46;
          v43 = v46 - v58;
          if ( v46 != v58 )
            *(_BYTE *)(v42 + 25) = v46;
        }
        else
        {
          LODWORD(v49) = v46 + v49;
        }
        v47 += v43;
        v42 += 32LL;
        v57 = v42 == v55;
      }
      while ( v42 < v55 );
      v6 = v81;
      v56 = v69;
    }
    if ( v57 )
    {
      v43 = *(unsigned __int8 *)(v42 + 25);
      v60 = 0;
      if ( v43 < (unsigned int)v75 )
      {
        if ( v54 == -1 )
          v54 = v43 + v49;
        v56 = v49 + v75;
        v60 = v75 - v43;
        if ( (_DWORD)v75 != v43 )
        {
          LOBYTE(v43) = v75;
          *(_BYTE *)(v42 + 25) = v75;
        }
      }
      v47 += v60;
    }
    v40 = v73;
    if ( v47 )
      v44 = v56 - v54;
LABEL_40:
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(v6 + 22) + v6 + 8), v24);
    if ( (RtlpHpHeapFeatures & 0x10) != 0 )
    {
      v61 = (__int64 *)(v6 + *(__int16 *)(v6 + 22));
      if ( (unsigned int)dword_1801C4680 > 5 )
      {
        v73 = *(_QWORD *)(v6 + 56);
        v85[5] = 8LL;
        v85[4] = (__int64)&v73;
        v75 = *v61;
        v85[6] = (__int64)&v75;
        v69 = v61[1];
        v85[8] = (__int64)&v69;
        v82 = v61[2];
        v85[10] = (__int64)&v82;
        v83 = v61[3];
        v85[12] = (__int64)&v83;
        v85[7] = 8LL;
        v85[9] = 8LL;
        v85[11] = 8LL;
        v85[13] = 8LL;
        tlgWriteTransfer_EtwEventWriteTransfer((int)&dword_1801C4680, (int)&dword_18019AEB0, v42, v43, 7u, (__int64)v85);
      }
    }
    v9 = v71;
    *(_WORD *)(v71 + 28) = ~(v24 + ~*(_WORD *)(v71 + 28));
    v62 = *(_QWORD *)(v6 + 56);
    if ( *(char *)(v62 + 20) < 0 )
    {
      v67 = v40 + (unsigned int)(v76 << 12);
      v68 = (unsigned int)(v44 << 12);
      if ( v24 <= 0 )
        RtlpLogHeapDecommit(v62, v67, v68, 13LL);
      else
        RtlpLogHeapCommit(v62, v67, v68, 10LL);
LABEL_94:
      v9 = v71;
    }
    a3 += v77;
    v14 = v78;
    v16 = v24 + v72;
    LODWORD(v15) = v80;
    v13 = v79;
  }
}
