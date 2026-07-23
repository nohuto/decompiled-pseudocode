/*
 * XREFs of EtwpApplyPayloadFilterInternal @ 0x1406CCDC8
 * Callers:
 *     EtwpApplyEventIdPayloadFilter @ 0x14051F084 (EtwpApplyEventIdPayloadFilter.c)
 * Callees:
 *     IoGetStackLimits @ 0x1402631F0 (IoGetStackLimits.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     EtwpApplyPredicate @ 0x1406CD64C (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x1406CDBD8 (EtwpGetFieldValue.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     ExSystemExceptionFilter @ 0x14083CCA0 (ExSystemExceptionFilter.c)
 *     RtlLengthRequiredSid @ 0x1408F0000 (RtlLengthRequiredSid.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 __fastcall EtwpApplyPayloadFilterInternal(
        unsigned __int16 a1,
        char a2,
        unsigned int a3,
        volatile void *a4,
        char a5,
        char a6,
        __int64 a7,
        _BYTE *a8)
{
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned int v13; // r8d
  unsigned int v14; // edx
  unsigned __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  void *v20; // rsp
  void *v21; // rsp
  __int64 v22; // rax
  void *v23; // rsp
  char *v24; // r14
  unsigned int v25; // ebx
  __int64 v26; // r8
  unsigned int v27; // esi
  unsigned int v28; // r15d
  char *v29; // r12
  unsigned __int64 v30; // rcx
  char *v31; // r10
  char *v32; // r9
  unsigned int v33; // eax
  char v34; // dl
  char v35; // al
  unsigned int v36; // ecx
  __int64 v37; // rbx
  char v38; // al
  char *v39; // rcx
  __int64 v40; // r13
  char v41; // al
  int v42; // r8d
  char v43; // al
  unsigned int v44; // esi
  _WORD *v45; // rbx
  unsigned int v46; // esi
  unsigned int v47; // r14d
  unsigned int v49; // r14d
  _BYTE *v50; // rbx
  unsigned int v51; // r14d
  unsigned int v52; // esi
  unsigned int v54; // ebx
  unsigned int v55; // edx
  unsigned __int16 *v56; // r11
  char *v57; // r10
  __int64 v58; // r8
  unsigned __int16 *v59; // r14
  char v60; // si
  char v61; // bl
  char v62; // r9
  unsigned int v63; // r12d
  unsigned __int16 *v64; // r15
  char v65; // r8
  char v66; // cl
  unsigned int v67; // r13d
  __int16 v68; // dx
  __int64 v69; // rcx
  int v70; // [rsp+30h] [rbp-10h]
  char v71; // [rsp+40h] [rbp+0h] BYREF
  char v72; // [rsp+41h] [rbp+1h]
  char v73; // [rsp+42h] [rbp+2h]
  char v74; // [rsp+43h] [rbp+3h]
  unsigned int v75; // [rsp+44h] [rbp+4h]
  unsigned int v76; // [rsp+48h] [rbp+8h]
  unsigned int v77; // [rsp+4Ch] [rbp+Ch]
  char *v78; // [rsp+50h] [rbp+10h]
  unsigned int v79; // [rsp+58h] [rbp+18h]
  unsigned __int64 LowLimit; // [rsp+60h] [rbp+20h] BYREF
  ULONG SubAuthorityCount[2]; // [rsp+68h] [rbp+28h] BYREF
  __int64 v82; // [rsp+70h] [rbp+30h]
  char *v83; // [rsp+78h] [rbp+38h]
  unsigned int v84; // [rsp+80h] [rbp+40h]
  char *v85; // [rsp+88h] [rbp+48h]
  unsigned int v86; // [rsp+90h] [rbp+50h]
  int v87; // [rsp+94h] [rbp+54h]
  unsigned __int16 *v88; // [rsp+98h] [rbp+58h]
  unsigned __int64 HighLimit; // [rsp+A0h] [rbp+60h] BYREF
  __int64 v90; // [rsp+A8h] [rbp+68h]
  _WORD *v91; // [rsp+B0h] [rbp+70h]
  _BYTE *v92; // [rsp+B8h] [rbp+78h]

  v84 = a3;
  v90 = 0LL;
  *(_QWORD *)SubAuthorityCount = 0LL;
  v71 = 0;
  v75 = -1073741811;
  if ( a3 > 0x80 )
    return 3221225485LL;
  v11 = *(_QWORD *)(a7 + 8);
  if ( !_bittest64(&v11, a1 % 0x3Fu) )
    goto LABEL_124;
  v76 = 0;
  v12 = a7 + *(unsigned __int16 *)(a7 + 32);
  v88 = (unsigned __int16 *)v12;
  v13 = 0;
  v14 = *(unsigned __int16 *)(a7 + 34) / 0xCu;
  if ( v14 )
  {
    do
    {
      if ( *(_WORD *)v12 == a1 && *(_BYTE *)(v12 + 2) == a2 )
        break;
      if ( *(unsigned __int8 *)(v12 + 3) >= (unsigned int)*(_WORD *)(v12 + 6) )
        return 3221225485LL;
      v12 += 12LL;
      v88 = (unsigned __int16 *)v12;
      ++v13;
    }
    while ( v13 < v14 );
  }
  if ( v13 == v14 )
  {
LABEL_124:
    *a8 = 1;
    return 0LL;
  }
  v83 = 0LL;
  v15 = 16 * a3;
  v79 = *(unsigned __int8 *)(v12 + 3) + 1;
  v16 = 4 * v79;
  HighLimit = 0LL;
  LowLimit = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < (unsigned int)(v16 + v15 + 4096) )
    return 3221225626LL;
  v18 = v16 + 15;
  if ( v16 + 15 <= (unsigned __int64)(unsigned int)v16 )
    v18 = 0xFFFFFFFFFFFFFF0LL;
  v19 = v18 & 0xFFFFFFFFFFFFFFF0uLL;
  v20 = alloca(v19);
  v21 = alloca(v19);
  v78 = &v71;
  if ( a5 )
  {
    v22 = v15 + 15;
    if ( v15 + 15 < v15 )
      v22 = 0xFFFFFFFFFFFFFF0LL;
    v23 = alloca(v22 & 0xFFFFFFFFFFFFFFF0uLL);
    v24 = &v71;
    v83 = &v71;
  }
  else
  {
    v24 = 0LL;
  }
  if ( a5 )
  {
    ProbeForRead(a4, 16 * a3, 4u);
    RtlCopyFromUser(v24, (void *)a4, 16 * a3);
    v25 = 0;
    v86 = 0;
    while ( v25 < a3 )
    {
      ProbeForRead(*(volatile void **)&v24[16 * v25], *(unsigned int *)&v24[16 * v25 + 8], 1u);
      v86 = ++v25;
    }
  }
  else
  {
    v24 = (char *)a4;
    v83 = (char *)a4;
  }
  v26 = a7 + *(unsigned __int16 *)(a7 + 36);
  v82 = v26;
  v27 = 0;
  v77 = 0;
  v28 = 0;
  v29 = v24;
  v30 = v26 + 4LL * *(unsigned __int16 *)(v12 + 4);
  v31 = v78;
  v32 = v78;
  v85 = v78;
  v33 = 0;
  while ( 1 )
  {
    v75 = v33;
    LowLimit = v30;
    if ( v33 >= v79 )
      break;
    if ( v27 == v84 )
      return 3221225990LL;
    v34 = *(_BYTE *)v30;
    v35 = *(_BYTE *)v30 & 0xF;
    v36 = *(unsigned __int16 *)(v30 + 2);
    if ( v35 == 7 )
    {
      if ( (_WORD)v36 )
        return 3221225520LL;
      v32[3] = v27;
      *(_DWORD *)v32 = (*(_DWORD *)v32 & 0xFF000FFF ^ ((v28 & 0xFFF) << 12)) & 0xFFFFF000;
      goto LABEL_104;
    }
    v37 = v36;
    if ( v35 == 8 )
      v37 = a6 != 0 ? 8 : 4;
    if ( (v34 & 0x10) != 0 )
    {
      if ( (unsigned int)v37 >= v75 )
        return 3221225520LL;
      v38 = *(_BYTE *)(v26 + 4 * v37) & 0xF;
      if ( v38 != 2 && v38 != 1 )
        return 3221225520LL;
      if ( (*(_BYTE *)(v26 + 4 * v37) & 0x30) != 0 )
        return 3221225520LL;
      if ( *(unsigned __int16 *)(v26 + 4 * v37 + 2) > 8u )
        return 3221225520LL;
      if ( *(_BYTE *)(v26 + 4 * v37 + 1) != 1 )
        return 3221225520LL;
      _mm_lfence();
      LOBYTE(v32) = a5;
      if ( !(unsigned __int8)EtwpGetFieldValue(
                               *(_QWORD *)&v24[16 * (unsigned __int8)v31[4 * v37 + 3]]
                             + (((unsigned __int64)*(unsigned int *)&v31[4 * v37] >> 12) & 0xFFF),
                               *(unsigned __int16 *)(v26 + 4 * v37 + 2),
                               SubAuthorityCount,
                               v32) )
        return 3221225520LL;
      LODWORD(v37) = SubAuthorityCount[0];
      if ( SubAuthorityCount[0] != *(_QWORD *)SubAuthorityCount )
        return 3221225520LL;
      v26 = v82;
      v31 = v78;
    }
    v39 = (char *)LowLimit;
    v40 = *(unsigned __int8 *)(LowLimit + 1);
    if ( (*(_BYTE *)LowLimit & 0x20) != 0 )
    {
      if ( (unsigned int)v40 >= v75 )
        return 3221225520LL;
      v41 = *(_BYTE *)(v26 + 4 * v40) & 0xF;
      if ( v41 != 2 && v41 != 1 )
        return 3221225520LL;
      if ( (*(_BYTE *)(v26 + 4 * v40) & 0x30) != 0 )
        return 3221225520LL;
      if ( *(unsigned __int16 *)(v26 + 4 * v40 + 2) > 8u )
        return 3221225520LL;
      if ( *(_BYTE *)(v26 + 4 * v40 + 1) != 1 )
        return 3221225520LL;
      _mm_lfence();
      LOBYTE(v32) = a5;
      if ( !(unsigned __int8)EtwpGetFieldValue(
                               *(_QWORD *)&v24[16 * (unsigned __int8)v31[4 * v40 + 3]]
                             + ((*(_DWORD *)&v31[4 * v40] >> 12) & 0xFFF),
                               *(unsigned __int16 *)(v26 + 4 * v40 + 2),
                               SubAuthorityCount,
                               v32) )
        return 3221225520LL;
      LODWORD(v40) = SubAuthorityCount[0];
      if ( SubAuthorityCount[0] != *(_QWORD *)SubAuthorityCount )
        return 3221225520LL;
      v39 = (char *)LowLimit;
    }
    v42 = 0;
    if ( !(_DWORD)v37 )
    {
      v43 = *v39;
      if ( (*v39 & 0x10) != 0 || (_DWORD)v40 != 1 )
        return 3221225520LL;
      switch ( v43 & 0xF )
      {
        case 3:
          v49 = *((_DWORD *)v29 + 2);
          if ( v28 >= v49 )
            return 3221225485LL;
          v50 = (_BYTE *)(*(_QWORD *)v29 + v28);
          v51 = v49 - v28;
          v52 = 0;
          while ( v52 < v51 )
          {
            if ( !(a5 ? RtlReadUCharFromUser(v50) : *v50) )
              break;
            v87 = ++v52;
            v92 = ++v50;
          }
          if ( v52 == v51 )
          {
            v76 = 1;
            v42 = 0;
          }
          else
          {
            v42 = 1;
          }
          LODWORD(v37) = v52;
          break;
        case 4:
          v44 = *((_DWORD *)v29 + 2) - v28;
          if ( v44 < 2 )
            return 3221225485LL;
          v45 = (_WORD *)(*(_QWORD *)v29 + v28);
          v46 = v44 >> 1;
          v47 = 0;
          while ( v47 < v46 )
          {
            if ( !(a5 ? RtlReadUShortFromUser(v45) : *v45) )
              break;
            v87 = ++v47;
            v91 = ++v45;
          }
          if ( v47 == v46 )
          {
            v76 = 2;
            v42 = 0;
          }
          else
          {
            v42 = 2;
          }
          if ( v47 == v46 && v28 + 2LL * v46 != *((_DWORD *)v29 + 2) )
            return 3221225485LL;
          LODWORD(v37) = 2 * v47;
          break;
        case 6:
          if ( *((_DWORD *)v29 + 2) - v28 < 2 )
            return 3221225485LL;
          LOBYTE(v32) = a5;
          if ( !(unsigned __int8)EtwpGetFieldValue(*(_QWORD *)v29 + v28 + 1LL, 1LL, SubAuthorityCount, v32) )
            return 3221225485LL;
          LODWORD(v37) = RtlLengthRequiredSid(SubAuthorityCount[0]);
          if ( (_DWORD)v37 == -1 )
            return 3221225485LL;
          v42 = 0;
          goto LABEL_89;
        default:
          return 3221225520LL;
      }
      v27 = v77;
      v24 = v83;
    }
LABEL_89:
    v54 = v40 * v37;
    if ( *((_DWORD *)v29 + 2) - v28 < v54 )
      return 3221225990LL;
    v32 = v85;
    v85[3] = v27;
    v55 = *(_DWORD *)v32 ^ (*(_DWORD *)v32 ^ (v28 << 12)) & 0xFFF000 ^ (v54 ^ *(_DWORD *)v32 ^ (*(_DWORD *)v32 ^ (v28 << 12)) & 0xFFF000) & 0xFFF;
    *(_DWORD *)v32 = v55;
    if ( (unsigned __int8)v32[3] != v27 || ((v55 >> 12) & 0xFFF) != v28 || (v55 & 0xFFF) != v54 )
      return 3221225990LL;
    v28 += v42 + v54;
    if ( v28 > *((_DWORD *)v29 + 2) )
      return 3221225473LL;
    if ( v28 != *((_DWORD *)v29 + 2) )
      goto LABEL_103;
    v77 = ++v27;
    if ( v27 >= v84 )
      goto LABEL_103;
    v28 = 0;
    v29 += 16;
    if ( v29 >= &v24[16 * v84] )
      return 3221225473LL;
    if ( v76 )
    {
      if ( *((_DWORD *)v29 + 2) < v76 )
        return 3221225990LL;
      v28 = v76;
    }
    v76 = 0;
    if ( v28 == *((_DWORD *)v29 + 2) )
    {
      v77 = ++v27;
      v26 = v82;
      v31 = v78;
      if ( v27 < v84 )
      {
        v28 = 0;
        v29 += 16;
      }
    }
    else
    {
LABEL_103:
      v26 = v82;
      v31 = v78;
    }
LABEL_104:
    v33 = v75 + 1;
    v30 = LowLimit + 4;
    v32 += 4;
    v85 = v32;
  }
  if ( v76 )
    return 3221225990LL;
  v56 = v88;
  v57 = (char *)(v26 + 4LL * v88[2]);
  v85 = v57;
  v58 = a7;
  v59 = (unsigned __int16 *)(a7 + *(unsigned __int16 *)(a7 + 40) + 4LL * v88[4]);
  v60 = 0;
  v61 = 0;
  v62 = 1;
  v74 = 1;
  v63 = 0;
  if ( v88[5] )
  {
    while ( 1 )
    {
      v64 = (unsigned __int16 *)(v58 + 8 * (v59[1] + 2LL * v59[1] + 7));
      v65 = 1;
      v73 = 1;
      v66 = 0;
      v72 = 0;
      v67 = 0;
      v68 = *v59;
      v79 = 252;
      if ( (unsigned __int16)v90 < (unsigned __int8)(v68 & 0xFC) )
        break;
LABEL_113:
      if ( (v68 & 2) == 0 )
        v66 = v65;
      if ( (v68 & 1) != 0 )
      {
        if ( v62 )
        {
          v60 = v66;
          v62 = 0;
          v74 = 0;
        }
        else
        {
          v60 &= v66;
        }
      }
      else
      {
        v61 = v66;
        if ( v66 )
          goto LABEL_123;
      }
      ++v63;
      v59 += 2;
      if ( v63 >= v56[5] )
        goto LABEL_123;
      v58 = a7;
    }
    while ( 1 )
    {
      v69 = *v64;
      LOBYTE(v70) = a5;
      if ( !(unsigned __int8)EtwpApplyPredicate(
                               a7,
                               v57[4 * v69] & 0xF,
                               v64,
                               *(_QWORD *)&v83[16 * (unsigned __int8)v78[4 * v69 + 3]]
                             + (((unsigned __int64)*(unsigned int *)&v78[4 * v69] >> 12) & 0xFFF),
                               *(_DWORD *)&v78[4 * v69] & 0xFFF,
                               &v71,
                               v70) )
        return 3221225520LL;
      v65 = v71 & v73;
      v73 &= v71;
      v66 = v71 | v72;
      v72 |= v71;
      ++v67;
      v64 += 12;
      v68 = *v59;
      v57 = v85;
      if ( v67 >= ((*v59 >> 2) & 0x3Fu) )
      {
        v62 = v74;
        v56 = v88;
        goto LABEL_113;
      }
    }
  }
LABEL_123:
  *a8 = v60 | v61;
  return 0LL;
}
