/*
 * XREFs of ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x140321ED0
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1403211B8 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x14006C2C8 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x140322980 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 *     ?XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z @ 0x140323130 (-XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x140323418 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 */

__int64 __fastcall DXGPRESENT::CombineRectList(
        const struct tagRECT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        const struct DXGDEVICE *a4,
        LONG a5,
        LONG a6)
{
  struct tagRECT *v7; // rdi
  LONG left; // ecx
  const struct _D3DKMT_PRESENT *v10; // r13
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  LONG right; // ecx
  LONG bottom; // eax
  unsigned int i; // edx
  unsigned int top; // ecx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r9
  unsigned __int64 v19; // rdi
  unsigned int j; // r14d
  unsigned int v21; // ecx
  LONG v22; // r11d
  int v23; // r10d
  LONG v24; // edi
  int v25; // r8d
  LONG v26; // edx
  LONG v27; // r9d
  int v28; // ecx
  LONG v29; // esi
  LONG v30; // r15d
  LONG v31; // edi
  LONG v32; // r14d
  unsigned int v33; // eax
  const struct tagRECT *v34; // r12
  __int64 v35; // rcx
  LONG v36; // r8d
  LONG v37; // r9d
  LONG v38; // r10d
  LONG v39; // r11d
  __int64 v40; // rdx
  LONG v41; // eax
  LONG v42; // eax
  LONG v43; // eax
  LONG v44; // eax
  LONG v45; // r12d
  LONG v46; // r8d
  LONG v47; // eax
  __int64 v48; // r9
  __int64 v49; // rcx
  int v50; // edx
  __m128i *v51; // rcx
  int v52; // edx
  LONG v53; // eax
  LONG v54; // r9d
  LONG v55; // r10d
  LONG v56; // r11d
  LONG v57; // r12d
  LONG v58; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v59; // eax
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v64; // rcx
  LONG v65; // ecx
  LONG v66; // eax
  LONG v67; // ecx
  LONG v68; // eax
  __int64 v69; // rax
  __int64 v70; // rdx
  int bottom_low; // eax
  unsigned __int64 v72; // rax
  __int64 v73; // rax
  __m128i v74; // xmm0
  int v75; // ecx
  int v76; // eax
  int v77; // eax
  unsigned int v78; // r13d
  const struct _D3DKMT_PRESENT *v79; // r14
  const struct DXGDEVICE *v80; // r15
  __int64 v81; // rax
  ADAPTER_DISPLAY *v82; // r12
  __int64 v83; // rax
  struct tagRECT *v84; // r12
  _DWORD *v85; // r8
  ADAPTER_DISPLAY *v86; // rcx
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  const struct tagRECT *v88; // rcx
  __int64 v89; // rdx
  char v90; // [rsp+50h] [rbp-89h]
  LONG v91; // [rsp+54h] [rbp-85h]
  LONG v92; // [rsp+58h] [rbp-81h]
  struct tagRECT v93; // [rsp+60h] [rbp-79h] BYREF
  LONG v94; // [rsp+70h] [rbp-69h]
  LONG v95; // [rsp+74h] [rbp-65h]
  LONG v96; // [rsp+78h] [rbp-61h]
  LONG v97; // [rsp+7Ch] [rbp-5Dh]
  __int64 v98; // [rsp+80h] [rbp-59h] BYREF
  struct tagRECT v99; // [rsp+88h] [rbp-51h] BYREF
  unsigned int v100; // [rsp+98h] [rbp-41h]
  unsigned int v101; // [rsp+9Ch] [rbp-3Dh]
  int v102; // [rsp+A0h] [rbp-39h]
  int v103; // [rsp+A4h] [rbp-35h]
  LONG v104; // [rsp+A8h] [rbp-31h]
  LONG v105; // [rsp+ACh] [rbp-2Dh]
  int v106; // [rsp+B0h] [rbp-29h]
  __int128 v107; // [rsp+B8h] [rbp-21h] BYREF
  const struct _D3DKMT_PRESENT *v108; // [rsp+C8h] [rbp-11h]
  const struct DXGDEVICE *v109; // [rsp+D0h] [rbp-9h]
  ADAPTER_DISPLAY *v110; // [rsp+D8h] [rbp-1h]

  v109 = a4;
  v7 = (struct tagRECT *)&this[8];
  v108 = a2;
  left = this[2].left;
  *(_QWORD *)&v7->left = 0LL;
  v10 = a2;
  this[8].right = left - this[1].right;
  this[8].bottom = this[2].top - this[1].bottom;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_BYTE *)&Value & 2) != 0 )
  {
    if ( (*(_BYTE *)&Value & 0x40) != 0 && !DXGPRESENT::IntersectRect(v7, &a2->DstRect, v7) )
      goto LABEL_64;
    this[9] = *(const struct tagRECT *)v7;
  }
  else
  {
    this[9].right = a5;
    this[9].bottom = a6;
    *(_QWORD *)&this[9].left = 0LL;
    if ( !(unsigned int)DXGPRESENT::ClipRects(
                          (struct tagRECT *)&this[9],
                          v7,
                          (const struct tagRECT *)((unsigned __int64)&a2->SrcRect & -(__int64)((*(_DWORD *)&a2->Flags.0 & 0x80u) != 0)),
                          (const struct tagRECT *)((unsigned __int64)&a2->DstRect & -(__int64)((a2->Flags.Value & 0x40) != 0))) )
      goto LABEL_64;
  }
  right = this[1].right;
  bottom = this[1].bottom;
  v7->left += right;
  this[8].top += bottom;
  this[8].right += right;
  this[8].bottom += bottom;
  if ( (v10->Flags.Value & 0x10000) != 0 && LOWORD(this[26].bottom) > 1u )
  {
    v88 = this + 8;
    v89 = 4LL;
    do
    {
      v88->left *= LOWORD(this[26].bottom);
      v88 = (const struct tagRECT *)((char *)v88 + 4);
      --v89;
    }
    while ( v89 );
  }
  if ( !this[7].top )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11284;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SubRectCnt", 11284LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*(_QWORD *)&this[1].left )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11285;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pVisRgnData", 11285LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = 0; ; ++i )
  {
    top = 1;
    if ( this[4].top )
      top = this[4].top;
    if ( i >= top )
      break;
    v16 = i;
    *(&this[22].left + v16) = 0;
  }
  v17 = *(_QWORD *)&this[1].left;
  v18 = (unsigned int)this[7].top;
  v19 = v18 * *(unsigned int *)(v17 + 8);
  if ( v19 > 0xFFFFFFFF )
  {
    WdLogSingleEntry4(2LL, -1073741675LL, this, v18, *(unsigned int *)(v17 + 8));
    v64 = *(_QWORD *)&this[1].left;
    WdLogGlobalForLineNumber = 11301;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x from 0x%I64x due to multiplication overflow 0x%I64d x 0x%I64d",
      -1073741675LL,
      (__int64)this,
      (unsigned int)this[7].top,
      *(unsigned int *)(v64 + 8),
      0LL);
    return 3221225621LL;
  }
  if ( !(_DWORD)v19 )
  {
LABEL_64:
    this->top &= 0xFFFFFEF7;
    return 0LL;
  }
  for ( j = 0; ; ++j )
  {
    v21 = 1;
    if ( this[4].top )
      v21 = this[4].top;
    if ( j >= v21 )
    {
      v22 = this[9].top;
      v23 = this[9].bottom - v22;
      v24 = this[8].top;
      v25 = this[8].bottom - v24;
      v26 = this[9].left;
      v27 = this[8].left;
      v102 = 0;
      v103 = 0;
      v101 = 0;
      v100 = 0;
      if ( v25 == v23 && this[8].right - v27 == this[9].right - v26 )
      {
        v90 = 0;
        v102 = v27 - v26;
        v103 = v24 - v22;
      }
      else
      {
        v90 = 1;
        v101 = ((this[8].right - v27) << 16) / (this[9].right - v26);
        v100 = (v25 << 16) / v23;
      }
      v28 = v10->Flags.Value & 0x10100;
      v93 = 0LL;
      if ( v28 == 65792 )
      {
        v69 = *((_QWORD *)v109 + 5);
        v93 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v109 + 237) + 3160LL) + 128LL)
                                + 4024LL * v10->VidPnSourceId
                                + 628);
        v70 = *(_QWORD *)(v69 + 88);
        v98 = 0LL;
        v32 = v93.left;
        v31 = v93.top;
        v30 = v93.right;
        v29 = v93.bottom;
        if ( (*(unsigned int (__fastcall **)(HDC, __int64 *))(v70 + 328))(a3, &v98) )
        {
          v32 = v93.left - v98;
          v31 = v93.top - HIDWORD(v98);
          v30 = v93.right - v98;
          v29 = v93.bottom - HIDWORD(v98);
        }
        bottom_low = LOWORD(this[26].bottom);
        v96 = v32;
        v94 = v31;
        v97 = v30;
        v95 = v29;
        if ( (unsigned __int16)bottom_low <= 1u )
        {
LABEL_28:
          v33 = 0;
          LODWORD(v98) = 0;
          if ( this[7].top )
          {
            v34 = this + 9;
            while ( 1 )
            {
              v35 = *(_QWORD *)&this[7].right;
              v36 = v34->left;
              v37 = this[9].right;
              v38 = this[9].top;
              v39 = this[9].bottom;
              v40 = 2LL * v33;
              v99 = 0LL;
              v41 = *(_DWORD *)(v35 + 16LL * v33);
              if ( v41 > v36 )
                v36 = v41;
              v42 = *(_DWORD *)(v35 + 8 * v40 + 8);
              v99.left = v36;
              if ( v42 < v37 )
                v37 = v42;
              v43 = *(_DWORD *)(v35 + 8 * v40 + 4);
              v99.right = v37;
              if ( v43 > v38 )
                v38 = v43;
              v44 = *(_DWORD *)(v35 + 8 * v40 + 12);
              v99.top = v38;
              if ( v44 < v39 )
                v39 = v44;
              v99.bottom = v39;
              if ( v39 > v38 && v37 > v36 )
              {
                v93 = 0LL;
                if ( v90 )
                {
                  DXGPRESENT::XformRect(this + 8, v34, &v93, &v99, v101, v100);
                  v47 = v93.bottom;
                  v46 = v93.right;
                  v45 = v93.left;
                  v104 = v93.top;
                }
                else
                {
                  v45 = v36 + v102;
                  v46 = v37 + v102;
                  v47 = v39 + v103;
                  v104 = v38 + v103;
                }
                v48 = *(_QWORD *)&this[1].left;
                v49 = 0LL;
                v105 = v47;
                v92 = v46;
                v91 = v45;
                *(_QWORD *)&v93.left = v48;
                v106 = 0;
                if ( *(_DWORD *)(v48 + 8) )
                {
                  while ( 1 )
                  {
                    v50 = LOWORD(this[26].bottom);
                    v51 = (__m128i *)(v48 + 16 * v49 + 32);
                    v107 = 0LL;
                    v99 = 0LL;
                    if ( (unsigned __int16)v50 > 1u )
                    {
                      v74 = *v51;
                      v75 = v50;
                      v76 = v50 * v74.m128i_i32[1];
                      v52 = v50 * _mm_cvtsi128_si32(v74);
                      *(_QWORD *)&v107 = __PAIR64__(v76, v52);
                      DWORD2(v107) = v75 * v74.m128i_i32[2];
                      v77 = v75 * v74.m128i_i32[3];
                      v51 = (__m128i *)&v107;
                      HIDWORD(v107) = v77;
                    }
                    else
                    {
                      v52 = v51->m128i_i32[0];
                    }
                    v53 = v51->m128i_i32[2];
                    v54 = v45;
                    v55 = v46;
                    if ( v52 > v45 )
                      v54 = v52;
                    v99.left = v54;
                    if ( v53 < v46 )
                      v55 = v53;
                    v99.right = v55;
                    if ( v54 >= v55 )
                      goto LABEL_61;
                    v56 = v104;
                    v57 = v105;
                    if ( v51->m128i_i32[1] > v104 )
                      v56 = v51->m128i_i32[1];
                    v58 = v51->m128i_i32[3];
                    v99.top = v56;
                    if ( v58 < v105 )
                      v57 = v58;
                    v99.bottom = v57;
                    if ( v56 < v57 )
                      break;
LABEL_60:
                    v45 = v91;
LABEL_61:
                    v62 = *(_QWORD *)&this[1].left;
                    v49 = (unsigned int)(v106 + 1);
                    v48 = *(_QWORD *)&v93.left;
                    v106 = v49;
                    if ( (unsigned int)v49 >= *(_DWORD *)(v62 + 8) )
                      goto LABEL_62;
                  }
                  v59 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v10->Flags.Value;
                  if ( (*(_DWORD *)&v59 & 0x10000) != 0 )
                  {
                    v60 = *(_QWORD *)&this[14].left;
                    v61 = 2LL * (unsigned int)this[22].left;
                    if ( (*(_WORD *)&v59 & 0x100) == 0 )
                    {
                      *(struct tagRECT *)(v60 + 16LL * (unsigned int)this[22].left) = v99;
                      goto LABEL_58;
                    }
                    v65 = v32;
                    v66 = v30;
                    if ( v54 > v32 )
                      v65 = v54;
                    *(_DWORD *)(v60 + 16LL * (unsigned int)this[22].left) = v65;
                    if ( v55 < v30 )
                      v66 = v55;
                    *(_DWORD *)(v60 + 8 * v61 + 8) = v66;
                    if ( v65 < v66 )
                    {
                      v67 = v31;
                      v68 = v29;
                      if ( v56 > v31 )
                        v67 = v56;
                      *(_DWORD *)(v60 + 8 * v61 + 4) = v67;
                      if ( v57 < v29 )
                        v68 = v57;
                      *(_DWORD *)(v60 + 8 * v61 + 12) = v68;
                      if ( v67 < v68 )
                      {
LABEL_58:
                        ++this[22].left;
                        this->top &= ~2u;
                      }
                    }
                  }
                  else
                  {
                    v78 = 0;
                    if ( !this[4].top )
                    {
                      v10 = v108;
                      goto LABEL_60;
                    }
                    v79 = v108;
                    v80 = v109;
                    do
                    {
                      v81 = *((_QWORD *)v80 + 237);
                      if ( !v81 || !*(_QWORD *)(v81 + 3160) )
                      {
                        WdLogSingleEntry0(1LL);
                        WdLogGlobalForLineNumber = 11443;
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"(pDevice->GetDisplayAdapter(VidPnSourceId) != NULL) && pDevice->GetDisplayAdapter(Vid"
                                    "PnSourceId)->IsDisplayAdapter()",
                          11443LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      v110 = *(ADAPTER_DISPLAY **)(*((_QWORD *)v80 + 237) + 3160LL);
                      v82 = v110;
                      if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v110) )
                      {
                        WdLogSingleEntry0(1LL);
                        WdLogGlobalForLineNumber = 11446;
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"pDisplayCore->IsCoreResourceSharedOwner()",
                          11446LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      v83 = *((_QWORD *)v82 + 16) + 628LL;
                      v84 = (struct tagRECT *)(16LL * *((unsigned int *)&this[22].left + v78)
                                             + *((_QWORD *)&this[14].left + v78));
                      if ( DXGPRESENT::IntersectRect(v84, &v99, (const struct tagRECT *)(v83 + 4024LL * v78))
                        && ((v79->Flags.Value & 0x100) == 0 || v78 == v79->VidPnSourceId) )
                      {
                        v84->top -= v85[1];
                        v84->bottom -= v85[1];
                        v84->left -= *v85;
                        v86 = v110;
                        v84->right -= *v85;
                        CddInterface = ADAPTER_DISPLAY::GetCddInterface(v86, v78);
                        if ( CddInterface )
                          (*((void (__fastcall **)(_QWORD, struct tagRECT *))CddInterface + 1))(
                            *(_QWORD *)CddInterface,
                            v84);
                        ++*(&this[22].left + v78);
                        this->top &= ~2u;
                      }
                      ++v78;
                    }
                    while ( v78 < this[4].top );
                    v31 = v94;
                    v29 = v95;
                    v32 = v96;
                    v30 = v97;
                    v10 = v108;
                  }
                  v46 = v92;
                  goto LABEL_60;
                }
LABEL_62:
                v34 = this + 9;
              }
              v33 = v98 + 1;
              LODWORD(v98) = v33;
              if ( v33 >= this[7].top )
                goto LABEL_64;
            }
          }
          goto LABEL_64;
        }
        v32 *= bottom_low;
        v31 *= bottom_low;
        v30 *= bottom_low;
        v29 *= bottom_low;
      }
      else
      {
        v29 = v93.bottom;
        v30 = v93.right;
        v31 = v93.top;
        v32 = v93.left;
      }
      v96 = v32;
      v94 = v31;
      v97 = v30;
      v95 = v29;
      goto LABEL_28;
    }
    if ( *(&this[10].left + j) >= (unsigned int)v19 )
      continue;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)&this[14].left + j));
    v72 = 16LL * (unsigned int)v19;
    if ( !is_mul_ok((unsigned int)v19, 0x10uLL) )
      v72 = -1LL;
    v73 = operator new[](v72, 0x4B677844u, 256LL);
    *((_QWORD *)&this[14].left + j) = v73;
    if ( !v73 )
      break;
    *(&this[10].left + j) = v19;
  }
  *(&this[10].left + j) = 0;
  WdLogSingleEntry2(6LL, this, (unsigned int)v19);
  WdLogGlobalForLineNumber = 10534;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"0x%I64x fails to allocate array of 0x%I64d RECTs",
    (__int64)this,
    (unsigned int)v19,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
