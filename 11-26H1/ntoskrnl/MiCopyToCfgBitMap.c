/*
 * XREFs of MiCopyToCfgBitMap @ 0x140999540
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x140999108 (MiMarkSharedImageCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x1409993B4 (MiPopulateCfgBitMap.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     MiSplitPrivatePage @ 0x14031942C (MiSplitPrivatePage.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiReadVadFlags2 @ 0x1404739E0 (MiReadVadFlags2.c)
 *     RtlClearAllBitsEx @ 0x14047CE30 (RtlClearAllBitsEx.c)
 *     MiCopyToUserVa @ 0x14049C9A8 (MiCopyToUserVa.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiImageCfgEnumNextImageExtensionRva @ 0x14077FC10 (MiImageCfgEnumNextImageExtensionRva.c)
 *     MiEliminateZeroPages @ 0x14099AF5C (MiEliminateZeroPages.c)
 *     MiImageCfgEnumRvaListFirst @ 0x14099B138 (MiImageCfgEnumRvaListFirst.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCopyToCfgBitMap(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 Src,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8,
        size_t Size,
        __int64 a10)
{
  int v10; // r11d
  unsigned __int64 v11; // r10
  __int64 v12; // r15
  ULONG_PTR v13; // r13
  unsigned int v14; // r8d
  unsigned int v15; // r12d
  int v16; // edx
  char *PoolMm; // r14
  char *v18; // r9
  size_t v19; // rbx
  int v20; // edi
  int v21; // edx
  size_t v22; // rdi
  size_t v23; // rbx
  unsigned int v24; // ecx
  unsigned int ImageExtensionRva; // eax
  unsigned int v26; // r8d
  unsigned __int8 *v27; // r10
  __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // edx
  unsigned int v31; // r8d
  unsigned int v32; // r9d
  int v33; // r10d
  __int64 v34; // r11
  __int64 v35; // rax
  int v36; // ecx
  unsigned int v37; // r10d
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // r8
  char v40; // r9
  unsigned __int64 v41; // rdx
  char v42; // cl
  char v43; // al
  int v44; // eax
  unsigned int v45; // r14d
  __int64 v46; // rdx
  int *v47; // rdx
  void *v48; // rbx
  size_t v49; // r15
  int CurrentProcessorColor; // eax
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // r8
  unsigned __int64 v55; // rax
  size_t v56; // r8
  unsigned int v57; // eax
  unsigned __int64 i; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  unsigned int v61; // r8d
  unsigned __int64 v62; // rdx
  __int64 v63; // rcx
  void *v64; // rsp
  char v65; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v66; // [rsp+100h] [rbp+0h]
  unsigned __int64 v67; // [rsp+108h] [rbp+8h]
  int v68; // [rsp+110h] [rbp+10h]
  int v69; // [rsp+114h] [rbp+14h]
  char *v70; // [rsp+118h] [rbp+18h]
  unsigned __int64 v71; // [rsp+120h] [rbp+20h]
  unsigned __int64 v72; // [rsp+128h] [rbp+28h]
  unsigned int v73; // [rsp+130h] [rbp+30h]
  __int64 v74; // [rsp+138h] [rbp+38h]
  unsigned __int64 v75; // [rsp+140h] [rbp+40h]
  char *v76; // [rsp+148h] [rbp+48h]
  char *v77; // [rsp+150h] [rbp+50h]
  size_t v78; // [rsp+158h] [rbp+58h]
  _RTL_BITMAP_EX BitMapHeader; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v80; // [rsp+170h] [rbp+70h]
  size_t v81; // [rsp+178h] [rbp+78h]
  unsigned __int64 v82; // [rsp+180h] [rbp+80h]
  __int64 v83; // [rsp+188h] [rbp+88h]
  size_t v84; // [rsp+190h] [rbp+90h]
  unsigned __int64 v85; // [rsp+198h] [rbp+98h]
  size_t v86; // [rsp+1A0h] [rbp+A0h]

  v10 = a4;
  v68 = a4;
  v11 = a2;
  v72 = a2;
  v12 = a1;
  v83 = a1;
  v78 = Size;
  v81 = Size;
  v85 = Src;
  BitMapHeader = 0LL;
  if ( a2 > 1 && !a4 )
  {
    if ( *a8 == -1 )
      v11 = 1LL;
    v72 = v11;
  }
  v13 = v11;
  v80 = v11;
  v82 = v11;
  v75 = v11;
  v14 = 0;
  v66 = 0;
  v15 = a7;
  v74 = a7;
  v69 = 0;
  v16 = 4096;
  v67 = 4096LL;
  v73 = 0;
  if ( a10 && (MiReadVadFlags2(a10) & 0x20) != 0 )
    v73 = *(_DWORD *)(***(_QWORD ***)(v63 + 80) + 8LL) << 12;
  if ( v11 > 1 )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (char *)ExAllocatePoolMm(64LL, 0x1000uLL, 1700030797, CurrentProcessorColor | 0x80000000);
    v76 = PoolMm;
    v77 = PoolMm;
    v11 = v72;
    v10 = v68;
    v14 = v66;
    if ( PoolMm )
    {
      v69 = 1;
      v16 = v67;
      goto LABEL_7;
    }
    v16 = 256;
    v67 = 256LL;
    v64 = alloca(256LL);
    PoolMm = &v65;
  }
  else
  {
    PoolMm = (char *)qword_140E361A0;
    if ( !v11 )
      PoolMm = (char *)qword_140E361D8;
  }
  v77 = PoolMm;
  v76 = PoolMm;
LABEL_7:
  v18 = (char *)Src;
  v70 = (char *)Src;
  v71 = Src;
  v19 = Size;
  v86 = (Size & 0xFFF) + (unsigned int)(Src & 0xFFF) + 4095;
  v20 = 0;
  while ( v19 )
  {
    v21 = v16 - 1;
    v22 = v67 - (v21 & (unsigned int)v18);
    if ( v22 >= v19 )
      v22 = (unsigned int)v19;
    v84 = v22;
    LODWORD(v23) = v22;
    if ( v11 > 1 )
    {
      if ( v10 == 1 )
      {
        if ( v14 < *(_DWORD *)v75
          && (v54 = ~(v67 - 1) & (*(_QWORD *)(*(_QWORD *)(v75 + 8) + 16LL * v14) - v74), v55 = v54 >> 6, v54 >> 6 >= v67) )
        {
          v74 += v54;
          v18 += v55;
          v70 = v18;
          v71 = (unsigned __int64)v18;
          v56 = Size - v55;
          Size -= v55;
        }
        else
        {
          v56 = Size;
        }
        v23 = v67 - (v21 & (unsigned int)v18);
        if ( v23 >= v56 )
          LODWORD(v23) = v56;
        RtlCopyFromUser(PoolMm, v18, (unsigned int)v23);
        BitMapHeader.Buffer = (unsigned __int64 *)PoolMm;
        BitMapHeader.SizeOfBitMap = (unsigned int)(8 * v23);
        v57 = v66;
        for ( i = v75; v57 < *(_DWORD *)v75; i = v75 )
        {
          v59 = 2LL * v57;
          v60 = *(_QWORD *)(i + 8);
          v61 = *(_DWORD *)(v60 + 8 * v59) - v74;
          if ( v61 >= (unsigned int)v23 >> 1 << 7 )
            break;
          v62 = 2 * ((unsigned __int64)v61 >> 4);
          if ( (*(_BYTE *)(v60 + 8 * v59 + 8) & 5) != 0 )
          {
            PoolMm[(v62 + 1) >> 3] &= ~(1 << ((v62 + 1) & 7));
            PoolMm[((unsigned __int64)v61 >> 6) & 0x1FFFFFFFFFFFFFFFLL] |= 1 << ((2 * (v61 >> 4)) & 7);
          }
          else
          {
            RtlClearBitsEx((__int64)&BitMapHeader, v62, 2uLL);
          }
          v57 = v66 + 1;
          v66 = v57;
        }
        v74 += (unsigned int)v23 >> 1 << 7;
LABEL_52:
        v18 = v70;
        goto LABEL_53;
      }
      if ( !v10 )
      {
        BitMapHeader.Buffer = (unsigned __int64 *)PoolMm;
        BitMapHeader.SizeOfBitMap = (unsigned int)(8 * v22);
        RtlClearAllBitsEx(&BitMapHeader);
        v24 = v15 + ((unsigned int)v22 >> 1 << 7);
        LODWORD(v71) = v24;
        ImageExtensionRva = *a8;
        if ( !*a8 )
        {
          ImageExtensionRva = MiImageCfgEnumRvaListFirst(v13, a8, v73);
          goto LABEL_33;
        }
        do
        {
          if ( ImageExtensionRva >= v15 )
          {
            if ( ImageExtensionRva >= v24 )
              goto LABEL_51;
            v37 = a8[1];
            if ( (v37 & 1) != 0 )
            {
              v38 = 2 * ((unsigned __int64)(ImageExtensionRva - v15) >> 4);
              if ( (ImageExtensionRva & 0xF) == *(_DWORD *)(v12 + 24) )
              {
                v39 = (unsigned __int64)(ImageExtensionRva - v15) >> 6;
                v40 = v38 & 7;
                v41 = (v38 + 1) >> 3;
                v42 = (v38 + 1) & 7;
                v43 = PoolMm[v39];
                if ( (v37 & 4) != 0 )
                {
                  PoolMm[v39] = v43 & ~(1 << v40);
                  v44 = PoolMm[v41] | (1 << v42);
                }
                else
                {
                  PoolMm[v39] = v43 | (1 << v40);
                  v44 = PoolMm[v41] & ~(1 << v42);
                }
                PoolMm[v41] = v44;
              }
              else
              {
                RtlSetBitsEx((__int64)&BitMapHeader, v38, 2uLL);
              }
            }
          }
          ImageExtensionRva = *a8;
          v45 = a8[5];
          if ( *a8 < v45 || !v45 )
          {
            ++a8[3];
            ImageExtensionRva = a8[2];
            v46 = a8[4];
            v27 = (unsigned __int8 *)(v46 + *(_QWORD *)(v13 + 16));
            v28 = *(_QWORD *)(v13 + 24) - v46;
            if ( v28 )
            {
              do
              {
                if ( !v28 )
                  KeBugCheckEx(0x1Au, 0x43666720uLL, v13, (ULONG_PTR)(a8 + 2), ImageExtensionRva);
                v26 = *v27++;
                --v28;
                v29 = v26 >> 6;
                ImageExtensionRva += *((_DWORD *)RtlpRvaCompressionTableScales + v29) * (v26 & 0x3F);
              }
              while ( (_DWORD)v29 != 3 );
              a8[2] = ImageExtensionRva;
              a8[4] = (_DWORD)v27 - *(_DWORD *)(v13 + 16);
              if ( a8 != (unsigned int *)-4LL )
              {
                v30 = 0;
                v31 = *(_DWORD *)(v13 + 8);
                if ( v31 <= 1 )
                {
                  if ( v31 == 1 )
                  {
                    v47 = *(int **)(v13 + 48);
                    if ( v47 )
                      v30 = *v47;
                    else
                      v30 = 1;
                  }
                }
                else
                {
                  v32 = 0;
                  v33 = 1;
                  v34 = 0LL;
                  do
                  {
                    if ( _bittest64(*(const signed __int64 **)(v82 + 40), a8[3] * v31 + v32) )
                    {
                      v35 = *(_QWORD *)(v13 + 48);
                      if ( v35 )
                        v36 = *(_DWORD *)(v34 + v35);
                      else
                        v36 = v33;
                      v30 |= v36;
                    }
                    ++v32;
                    v33 = __ROL4__(v33, 1);
                    v34 += 4LL;
                  }
                  while ( v32 < v31 );
                  ImageExtensionRva = a8[2];
                }
                a8[1] = v30;
              }
            }
            else
            {
              ImageExtensionRva = 0;
            }
            v12 = v83;
          }
          if ( !ImageExtensionRva || ImageExtensionRva >= v45 && v45 )
            ImageExtensionRva = MiImageCfgEnumNextImageExtensionRva(a8);
          *a8 = ImageExtensionRva;
          PoolMm = v76;
LABEL_33:
          v24 = v71;
        }
        while ( ImageExtensionRva );
        *a8 = -1;
LABEL_51:
        v15 = v24;
        LODWORD(v23) = v84;
        goto LABEL_52;
      }
    }
LABEL_53:
    v20 = MiSplitPrivatePage((unsigned __int64)v18, a6);
    if ( v20 < 0 )
      break;
    v20 = MiCopyToUserVa((unsigned __int64)v70, a6, PoolMm, (unsigned int)v23);
    if ( v20 < 0 )
      break;
    v14 = v66;
    v11 = v72;
    if ( v66 )
    {
      **(_DWORD **)(v75 + 16) = v66;
LABEL_57:
      v16 = v67;
      goto LABEL_58;
    }
    if ( v72 <= 1 || v68 || *a8 != -1 )
      goto LABEL_57;
    if ( v69 )
    {
      ExFreePoolWithTag(PoolMm, 0);
      v69 = 0;
      v14 = v66;
    }
    v11 = 1LL;
    v72 = 1LL;
    v16 = 4096;
    v67 = 4096LL;
    PoolMm = (char *)qword_140E361A0;
    v76 = (char *)qword_140E361A0;
    v77 = (char *)qword_140E361A0;
LABEL_58:
    v18 = &v70[(unsigned int)v23];
    v70 = v18;
    v71 = (unsigned __int64)v18;
    v19 = Size - (unsigned int)v23;
    Size = v19;
    v10 = v68;
  }
  v48 = v70;
  v49 = v78;
  if ( v69 )
    ExFreePoolWithTag(PoolMm, 0);
  if ( v13 )
  {
    if ( v20 < 0 )
    {
      if ( v48 == (void *)Src || v20 == -1073741818 )
        return (unsigned int)v20;
      v52 = Src & 0xFFFFFFFFFFFFF000uLL;
      v53 = ((unsigned __int64)v48 - (Src & 0xFFFFFFFFFFFFF000uLL)) & 0xFFFFFFFFFFFFF000uLL;
    }
    else
    {
      v52 = v85 & 0xFFFFFFFFFFFFF000uLL;
      v53 = (v49 & 0xFFFFFFFFFFFFF000uLL) + (v86 & 0xFFFFFFFFFFFFF000uLL);
    }
    LOBYTE(v18) = 1;
    MiEliminateZeroPages(&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink, v52, v53, v18);
  }
  return (unsigned int)v20;
}
