/*
 * XREFs of sub_140C80A80 @ 0x140C80A80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140C7F03C @ 0x140C7F03C (sub_140C7F03C.c)
 *     KeGuardDispatchICall @ 0x140C816F0 (KeGuardDispatchICall.c)
 *     RtlMinimalBarrier @ 0x140C818AC (RtlMinimalBarrier.c)
 */

__int64 __fastcall sub_140C80A80(__int64 a1)
{
  _DWORD *v2; // rcx
  char *v3; // rax
  int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // r11
  __int64 v7; // r8
  _QWORD *v8; // r9
  unsigned __int64 v9; // r10
  int v10; // ecx
  __int64 v11; // rax
  _BYTE *v12; // rdx
  __int64 v13; // rdi
  int v14; // r8d
  __int64 v15; // r13
  __int64 v16; // r9
  _KIDTENTRY64 *IdtBase; // r10
  char *v18; // rcx
  char v19; // al
  int v20; // r8d
  char *v21; // rcx
  _BYTE *v22; // rdx
  __int64 v23; // r9
  char v24; // al
  unsigned __int64 v25; // rax
  _QWORD *v26; // rdx
  unsigned __int64 v27; // rcx
  int v28; // r8d
  __int64 v29; // r9
  __int64 v30; // rax
  char *v31; // rcx
  char v32; // al
  unsigned __int64 *v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r9
  unsigned __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // r12
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  char *v42; // r12
  unsigned int v43; // r15d
  __int64 v44; // r9
  _QWORD *v45; // r10
  __int64 v46; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v48; // rdx
  int v49; // edx
  _QWORD *v50; // rcx
  __int64 v51; // r8
  char v52; // al
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rax
  int v55; // r15d
  _QWORD *v56; // rax
  int v57; // ecx
  __int64 v58; // rdx
  int v59; // r8d
  char *v60; // rcx
  _QWORD *v61; // rdx
  __int64 v62; // r9
  char v63; // al
  int v64; // edx
  char *v65; // rcx
  _QWORD *v66; // rdi
  __int64 v67; // r8
  char v68; // al
  _BYTE v70[16]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v71[16]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v72[11]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v73; // [rsp+A0h] [rbp+8h]
  unsigned __int64 *v74; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v75; // [rsp+B0h] [rbp+18h]

  v2 = *(_DWORD **)(a1 + 2728);
  if ( *v2 == 44 )
  {
    _disable();
    RtlMinimalBarrier(a1 + 2696, 0LL);
    v73 = *(_QWORD *)(a1 + 2736);
    do
    {
      v12 = v70;
      v13 = *(_QWORD *)(a1 + 2272);
      v14 = 16;
      v15 = *(unsigned int *)(a1 + 2324);
      v16 = 2LL;
      IdtBase = KeGetPcr()->IdtBase;
      v18 = (char *)(v13 + 32);
      do
      {
        v14 -= 8;
        *(_QWORD *)v12 = *(_QWORD *)v18;
        v18 += 8;
        v12 += 8;
        --v16;
      }
      while ( v16 );
      for ( ; v14; --v14 )
      {
        v19 = *v18++;
        *v12++ = v19;
      }
      v20 = 16;
      v21 = (char *)(v13 + 288);
      v22 = v71;
      v23 = 2LL;
      do
      {
        v20 -= 8;
        *(_QWORD *)v22 = *(_QWORD *)v21;
        v21 += 8;
        v22 += 8;
        --v23;
      }
      while ( v23 );
      for ( ; v20; --v20 )
      {
        v24 = *v21++;
        *v22++ = v24;
      }
      v74 = (unsigned __int64 *)(*(_QWORD *)(a1 + 1496) + (((unsigned __int64)IdtBase >> 9) & 0x7FFFFFFFF8LL));
      v75 = *v74;
      if ( (unsigned __int8)RtlMinimalBarrier(a1 + 2696, 0LL) )
      {
        v25 = v15 + a1 + 16;
        v26 = (_QWORD *)(v13 + 1024);
        *(_WORD *)(v13 + 32) = v25;
        v27 = v25 >> 16;
        v28 = 4096;
        v29 = 512LL;
        *(_DWORD *)(v13 + 40) = HIDWORD(v25);
        v30 = v15 + a1 + 144;
        *(_WORD *)(v13 + 38) = v27;
        *(_WORD *)(v13 + 288) = v30;
        *(_WORD *)(v13 + 294) = WORD1(v30);
        v31 = (char *)v73;
        *(_DWORD *)(v13 + 296) = HIDWORD(v30);
        do
        {
          v28 -= 8;
          *v26 = *(_QWORD *)v31;
          v31 += 8;
          ++v26;
          --v29;
        }
        while ( v29 );
        for ( ; v28; --v28 )
        {
          v32 = *v31++;
          *(_BYTE *)v26 = v32;
          v26 = (_QWORD *)((char *)v26 + 1);
        }
        *(_DWORD *)(a1 + 2238) = -255817396;
        v33 = v72;
        *(_DWORD *)(a1 + 2242) = 296816456;
        *(_DWORD *)(a1 + 2246) = -1010789361;
        LODWORD(v34) = 4;
        *(_QWORD *)(v13 + 5128) = v73;
        v35 = 4LL;
        *(_QWORD *)(v13 + 5136) = v73;
        *(_QWORD *)(v13 + 5120) = a1;
        *(_DWORD *)(v13 + 5172) = -1;
        *(_DWORD *)(v13 + 5168) = 4;
        v36 = *(_QWORD *)(a1 + 1496);
        v37 = v36 + ((v73 >> 9) & 0x7FFFFFFFF8LL);
        do
        {
          *v33++ = v37;
          v37 = v36 + ((v37 >> 9) & 0x7FFFFFFFF8LL);
          --v35;
        }
        while ( v35 );
        do
          v34 = (unsigned int)(v34 - 1);
        while ( (_DWORD)v34 && (*(_DWORD *)v72[v34] & 0x80) == 0 );
        v38 = (_QWORD *)v72[v34];
        *(_QWORD *)(v13 + 5160) = v38;
        *(_QWORD *)(v13 + 5152) = *v38;
      }
      v39 = a1 + 2696;
      RtlMinimalBarrier(a1 + 2696, 0LL);
      *v74 = (*(_QWORD *)(v13 + 5144) << 12) ^ ((*(_QWORD *)(v13 + 5144) << 12) ^ v75) & 0xFFF0000000000FFFuLL;
      **(_QWORD **)(v13 + 5160) = *(_QWORD *)(v13 + 5152) | 0x42LL;
      v40 = __readcr4();
      if ( (v40 & 0x20080) != 0 )
      {
        __writecr4(v40 ^ 0x80);
        __writecr4(v40);
      }
      else
      {
        v41 = __readcr3();
        __writecr3(v41);
      }
      if ( (unsigned __int8)RtlMinimalBarrier(a1 + 2696, 0LL) )
        _InterlockedAnd((volatile signed __int32 *)(v13 + 5168), 0xFFFFFFFB);
      if ( (unsigned __int8)RtlMinimalBarrier(a1 + 2696, 0LL) )
      {
        v42 = (char *)(v13 + 1024);
        *(_DWORD *)(v13 + 5172) = KeGetPcr()->Prcb.Number;
        v43 = 0;
        while ( 1 )
        {
          v44 = a1 + 2238;
          v45 = (_QWORD *)v73;
          v46 = v43;
          if ( (*(_DWORD *)(a1 + 2524) & 0x20000) == 0 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            **(_QWORD **)(a1 + 1208) = a1 - 0x5C5FC0A76E374B18LL;
            **(_QWORD **)(a1 + 1216) = CurrentPrcb;
            **(_QWORD **)(a1 + 1224) = v43 + v73;
            **(_QWORD **)(a1 + 1232) = 276LL;
          }
          *(_QWORD *)(v13 + 5136) = v43 + v73;
          v48 = 2LL;
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 5168), 2, 0) )
            break;
          if ( (v43 & 7) == 0
            && !((unsigned __int8 (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD))(a1 + 2238))(
                  v43 + v73,
                  0xC3C3C3C3C3C3C3C3uLL,
                  *(_QWORD *)&v42[v43]) )
          {
            _InterlockedAnd((volatile signed __int32 *)(v13 + 5168), 0xFFFFFFFD);
LABEL_47:
            v45 = (_QWORD *)v73;
            break;
          }
          ((void (__fastcall *)(__int64, __int64, __int64, __int64))(a1 + 2227))(v13 + 5136, v48, v46, v44);
          _InterlockedAnd((volatile signed __int32 *)(v13 + 5168), 0xFFFFFFFD);
          if ( ++v43 >= 0x1000 )
            goto LABEL_47;
        }
        if ( v43 != 4096 )
        {
          _InterlockedOr((volatile signed __int32 *)(v13 + 5168), 8u);
          *(_QWORD *)(v13 + 5136) = (char *)v45 + 4095;
        }
        v49 = 4096;
        v50 = v45;
        v51 = 512LL;
        do
        {
          v49 -= 8;
          *v50 = *(_QWORD *)v42;
          v42 += 8;
          ++v50;
          --v51;
        }
        while ( v51 );
        for ( ; v49; --v49 )
        {
          v52 = *v42++;
          *(_BYTE *)v50 = v52;
          v50 = (_QWORD *)((char *)v50 + 1);
        }
        _InterlockedOr((volatile signed __int32 *)(v13 + 5168), 4u);
        v39 = a1 + 2696;
        if ( (*(_DWORD *)(a1 + 2524) & 0x20000) == 0 )
        {
          **(_QWORD **)(a1 + 1208) = 0xA3A03F5891C8B4E8uLL;
          **(_QWORD **)(a1 + 1216) = 0LL;
          **(_QWORD **)(a1 + 1224) = 0LL;
          **(_QWORD **)(a1 + 1232) = 0LL;
        }
      }
      RtlMinimalBarrier(v39, 0LL);
      **(_QWORD **)(v13 + 5160) = *(_QWORD *)(v13 + 5152);
      *v74 = v75;
      v53 = __readcr4();
      if ( (v53 & 0x20080) != 0 )
      {
        __writecr4(v53 ^ 0x80);
        __writecr4(v53);
      }
      else
      {
        v54 = __readcr3();
        __writecr3(v54);
      }
      v55 = *(_DWORD *)(v13 + 5168);
      if ( (unsigned __int8)RtlMinimalBarrier(v39, 0LL) )
      {
        *(_QWORD *)(v13 + 5120) = 0LL;
        v56 = (_QWORD *)(v13 + 1024);
        *(_QWORD *)(v13 + 5128) = 0LL;
        v57 = 4096;
        *(_QWORD *)(v13 + 5136) = 0LL;
        v58 = 512LL;
        *(_QWORD *)(v13 + 5152) = 0LL;
        *(_QWORD *)(v13 + 5160) = 0LL;
        *(_QWORD *)(v13 + 5168) = 0LL;
        do
        {
          *v56 = 0LL;
          v57 -= 8;
          ++v56;
          --v58;
        }
        while ( v58 );
        for ( ; v57; --v57 )
        {
          *(_BYTE *)v56 = 0;
          v56 = (_QWORD *)((char *)v56 + 1);
        }
        v59 = 16;
        v60 = v70;
        v61 = (_QWORD *)(v13 + 32);
        v62 = 2LL;
        do
        {
          v59 -= 8;
          *v61 = *(_QWORD *)v60;
          v60 += 8;
          ++v61;
          --v62;
        }
        while ( v62 );
        for ( ; v59; --v59 )
        {
          v63 = *v60++;
          *(_BYTE *)v61 = v63;
          v61 = (_QWORD *)((char *)v61 + 1);
        }
        v64 = 16;
        v65 = v71;
        v66 = (_QWORD *)(v13 + 288);
        v67 = 2LL;
        do
        {
          v64 -= 8;
          *v66 = *(_QWORD *)v65;
          v65 += 8;
          ++v66;
          --v67;
        }
        while ( v67 );
        for ( ; v64; --v64 )
        {
          v68 = *v65++;
          *(_BYTE *)v66 = v68;
          v66 = (_QWORD *)((char *)v66 + 1);
        }
      }
      RtlMinimalBarrier(v39, 0LL);
    }
    while ( (v55 & 8) != 0 );
    _enable();
  }
  else if ( !*(_DWORD *)(a1 + 2328) )
  {
    *(_QWORD *)(a1 + 2352) = 257LL;
    *(_QWORD *)(a1 + 2360) = 0LL;
    *(_QWORD *)(a1 + 2336) = a1 - 0x5C5FC0A76E374B18LL;
    *(_DWORD *)(a1 + 2328) = 1;
    v3 = (char *)v2 - 0x4C48B4211BBACBEBLL;
    v4 = *(_DWORD *)(a1 + 2520);
    *(_QWORD *)(a1 + 2344) = v3;
    if ( (v4 & 0x20000000) == 0 && (*(_DWORD *)(a1 + 2524) & 0x200000) != 0 && (v4 & 1) != 0 )
    {
      v5 = *(unsigned int *)(a1 + 2676);
      v6 = *(_QWORD *)(a1 + 2104);
      v7 = *(_QWORD *)(a1 + 2680);
      v8 = (_QWORD *)(v5 + a1);
      v9 = v5 + a1 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 2052) - v5) >> 3);
      while ( v8 != (_QWORD *)v9 )
      {
        *v8 ^= v7;
        v7 = ((*v8++ ^ v6) + __ROR8__(v7, v7 & 0x3F)) ^ 0xF05;
      }
      *(_DWORD *)(a1 + 2524) &= ~0x200000u;
      if ( v7 != *(_QWORD *)(a1 + 2688) )
      {
        v10 = *(_DWORD *)(a1 + 2052);
        v11 = *(_QWORD *)(a1 + 1416);
        *(_QWORD *)v11 = a1;
        *(_DWORD *)(v11 + 16) = v10;
        if ( !*(_DWORD *)(a1 + 2328) )
          *(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v7 ^ *(_QWORD *)(a1 + 2688);
        sub_140C7F03C(a1, 0LL, v7, 256LL);
      }
    }
  }
  return a1;
}
