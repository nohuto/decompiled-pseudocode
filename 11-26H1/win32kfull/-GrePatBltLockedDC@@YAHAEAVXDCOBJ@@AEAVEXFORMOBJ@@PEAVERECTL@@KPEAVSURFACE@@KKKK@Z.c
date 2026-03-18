/*
 * XREFs of ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1400AE8F8
 * Callers:
 *     NtGdiPatBlt @ 0x1400ACCD0 (NtGdiPatBlt.c)
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 *     ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1400AE1E8 (-GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x1400BB534 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1401ACC30 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007B224 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1400AED70 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrePatBltLockedDC(
        struct XDCOBJ *this,
        struct EXFORMOBJ *a2,
        struct ERECTL *a3,
        int a4,
        struct SURFACE *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  int v9; // esi
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // r8
  __int64 v21; // rbp
  __int64 v22; // r11
  int v23; // r9d
  int v24; // r10d
  int v25; // r8d
  int v26; // ecx
  _DWORD *v27; // rax
  unsigned int *v28; // rcx
  __int64 v29; // r13
  unsigned int v30; // ebx
  unsigned int v31; // edi
  unsigned int v32; // esi
  unsigned int v33; // ebp
  __int64 v34; // r9
  int (*v35)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v36; // rdx
  _DWORD *v38; // rdi
  struct REGION *v39; // rax
  int v40; // eax
  ULONG v41; // ecx
  __int64 v42; // [rsp+20h] [rbp-88h]
  __m128i v43[4]; // [rsp+60h] [rbp-48h] BYREF
  _DWORD *v44; // [rsp+B8h] [rbp+10h]

  v9 = a4;
  v44 = 0LL;
  v12 = 1;
  if ( ((*((_DWORD *)a5 + 29) & 8) != 0 || *((_QWORD *)a5 + 28)) && _bittest16((const signed __int16 *)a5 + 51, 9u) )
    goto LABEL_40;
  v13 = *((_DWORD *)a5 + 28);
  if ( (v13 & 0x800) != 0 )
  {
    v14 = UserSurfaceAccessCheck(*((_QWORD *)a5 + 81));
  }
  else
  {
    if ( (v13 & 0x10000000) == 0 )
      goto LABEL_7;
    v14 = UserScreenAccessCheck(this, a2);
  }
  if ( !v14 )
  {
LABEL_40:
    v41 = 5;
LABEL_42:
    EngSetLastError(v41);
    return 0LL;
  }
LABEL_7:
  v15 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0x10000) != 0 )
  {
    v41 = 87;
    goto LABEL_42;
  }
  v16 = *(int *)a3;
  v17 = *(_DWORD *)(v15 + 40) & 1LL;
  v18 = *(int *)(v15 + 8 * v17 + 1016);
  if ( (unsigned __int64)(v18 + v16 + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v19 = *((int *)a3 + 2);
    if ( (unsigned __int64)(v18 + v19 + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v20 = *(int *)(v15 + 8 * v17 + 1020);
      v21 = *((int *)a3 + 1);
      if ( (unsigned __int64)(v20 + v21 + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v22 = *((int *)a3 + 3);
        if ( (unsigned __int64)(v20 + v22 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v23 = v16 + v18;
          *(_DWORD *)a3 = v23;
          v24 = *(_DWORD *)(v15 + 8 * v17 + 1016) + v19;
          *((_DWORD *)a3 + 2) = v24;
          v25 = v21 + *(_DWORD *)(v15 + 8 * v17 + 1020);
          *((_DWORD *)a3 + 1) = v25;
          v26 = v22 + *(_DWORD *)(v15 + 8 * v17 + 1020);
          *((_DWORD *)a3 + 3) = v26;
          if ( v23 < v24 && v25 < v26 )
          {
            if ( (v27 = *(_DWORD **)this, v23 >= *(_DWORD *)(*(_QWORD *)this + 1000LL))
              && v24 <= v27[252]
              && v25 >= v27[251]
              && v26 <= v27[253]
              || (v38 = v27 + 442,
                  v44 = v27 + 442,
                  v39 = XDCOBJ::prgnEffRao((DC **)this),
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v38, v39, a3, 2),
                  *(_OWORD *)a3 = *(_OWORD *)(v38 + 1),
                  *(_DWORD *)a3 != *((_DWORD *)a3 + 2))
              && *((_DWORD *)a3 + 1) != *((_DWORD *)a3 + 3) )
            {
              if ( (((unsigned __int8)v9 ^ (unsigned __int8)(16 * v9)) & 0xF0) != 0 )
              {
                v28 = *(unsigned int **)(*(_QWORD *)this + 976LL);
                v29 = *(_QWORD *)this + 1200LL;
                v17 = v28[38];
                if ( (v17 & 1) != 0
                  || (*(_DWORD *)(*(_QWORD *)this + 316LL) & 1) != 0
                  || (v40 = *(_DWORD *)(*(_QWORD *)this + 1320LL), (v40 & 1) != 0)
                  && *(_DWORD *)(*(_QWORD *)this + 1248LL) != a6
                  || (v40 & 2) != 0 && *(_DWORD *)(*(_QWORD *)this + 1252LL) != a7 )
                {
                  v30 = v28[46];
                  v31 = v28[44];
                  v32 = v28[47];
                  v33 = v28[45];
                  v28[38] = v17 & 0xFFFFFFFE;
                  *(_DWORD *)(*(_QWORD *)this + 316LL) &= ~1u;
                  v42 = *((_QWORD *)a5 + 16);
                  v34 = *(_QWORD *)(*(_QWORD *)this + 88LL);
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 184LL) = a6;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 176LL) = a7;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 188LL) = a8;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 180LL) = a9;
                  EBRUSHOBJ::vInitBrush(v29, *(_QWORD *)this, *(_QWORD *)(*(_QWORD *)this + 136LL), v34, v42, a5, 1);
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 184LL) = v30;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 176LL) = v31;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 188LL) = v32;
                  v9 = a4;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 180LL) = v33;
                }
              }
              else
              {
                v29 = 0LL;
              }
              if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0xE0) != 0 && (!v29 || (*(_DWORD *)(v29 + 120) & 0x100) == 0) )
              {
                v43[0] = *(__m128i *)a3;
                XDCOBJ::vAccumulateTight(this, (struct ECLIPOBJ *)v17, v43);
              }
              ++*((_DWORD *)a5 + 23);
              v35 = SURFACE::pfnBitBlt(a5);
              return ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, _DWORD *, _QWORD, struct ERECTL *, _QWORD, _QWORD, __int64, __int64, int))v35)(
                       v36 & -(__int64)(a5 != 0LL),
                       0LL,
                       0LL,
                       v44,
                       0LL,
                       a3,
                       0LL,
                       0LL,
                       v29,
                       *(_QWORD *)this + 1192LL,
                       v9);
            }
          }
        }
      }
    }
  }
  return v12;
}
