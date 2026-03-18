/*
 * XREFs of ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x140012950
 * Callers:
 *     GreCreateDisplayDC @ 0x140041200 (GreCreateDisplayDC.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140177760 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 * Callees:
 *     ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x1400123FC (-RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DC::vUpdate_VisRect(DC *this, struct REGION *a2)
{
  __int64 v4; // r10
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned int v8; // r11d
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned int v12; // edx
  __int64 v13; // r9
  unsigned int v14; // eax
  __int64 v15; // r11
  __int64 v16; // rdx
  __int64 v17; // r9
  unsigned int v18; // ebx
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r9
  unsigned int v22; // edx
  __int64 v23; // r10
  DC *v24; // rdx
  struct REGION_CORE *v25; // rdi
  int v26; // r14d
  char *v27; // r15
  int v28; // eax
  char *v29; // rcx
  int v30; // edi
  __m128i v31; // xmm1
  int v32; // ecx
  int v33; // edx
  _DWORD *v34; // r8
  __int64 v35; // r10
  unsigned int v36; // eax
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // r11d
  __int64 v40; // r9
  __int64 v41; // rcx
  unsigned int sizeScan; // eax
  __int64 v43; // r9
  unsigned int v44; // r8d
  __int64 v45; // r11
  unsigned int v46; // ecx
  __int64 v47; // r9
  __int64 v48; // r8
  __int64 v49; // r11
  unsigned int v50; // ebx
  __int64 v51; // r11
  __int64 v52; // rcx
  __int64 v53; // r10
  unsigned int v54; // r8d
  __int64 v55; // r11
  DC *v56; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState() + 88) + 5672LL);
  v5 = (unsigned __int16)*(_DWORD *)this | (*(_DWORD *)this >> 8) & 0xFF0000;
  if ( v5 >= 0x10000 )
  {
    v6 = (unsigned __int16)*(_DWORD *)this;
    if ( *(_DWORD *)v4 <= 0x10000u )
    {
      v5 = (unsigned __int16)*(_DWORD *)this;
    }
    else
    {
      v7 = *(_QWORD *)(v4 + 16);
      v8 = *(_DWORD *)(v7 + 2056);
      if ( (unsigned __int16)*(_DWORD *)this >= v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
      {
        v10 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)*(_DWORD *)this >= v8 )
        {
          v9 = *(_QWORD *)(v7 + 8LL * ((((unsigned __int16)*(_DWORD *)this - v8) >> 16) + 1) + 8);
          v6 = -65536 * (((unsigned __int16)v5 - v8) >> 16) - v8 + (unsigned __int16)v5;
        }
        else
        {
          v9 = *(_QWORD *)(v7 + 8);
        }
        v10 = 0LL;
        if ( (unsigned int)v6 < *(_DWORD *)(v9 + 20) )
          v10 = *(_QWORD *)v9 + 24 * v6;
      }
      if ( *(unsigned __int8 *)(v10 + 13) == HIWORD(v5) )
        v5 = (unsigned __int16)*(_DWORD *)this;
    }
  }
  v11 = *(_QWORD *)(v4 + 16);
  v12 = *(_DWORD *)(v11 + 2056);
  if ( v5 >= v12 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
  {
    v15 = 0LL;
  }
  else
  {
    if ( v5 >= v12 )
    {
      v13 = *(_QWORD *)(v11 + 8LL * (((v5 - v12) >> 16) + 1) + 8);
      v14 = v5 + -65536 * ((v5 - v12) >> 16) - v12;
    }
    else
    {
      v13 = *(_QWORD *)(v11 + 8);
      v14 = v5;
    }
    v15 = 0LL;
    if ( v14 < *(_DWORD *)(v13 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * ((unsigned __int64)v14 >> 8))
                   + 16LL * (unsigned __int8)v14
                   + 8) )
    {
      v15 = *(_QWORD *)v13 + 24LL * v14;
    }
  }
  if ( v5 >= 0x10000 )
  {
    v16 = (unsigned __int16)v5;
    if ( *(_DWORD *)v4 <= 0x10000u )
    {
      v5 = (unsigned __int16)v5;
    }
    else
    {
      v17 = *(_QWORD *)(v4 + 16);
      v18 = *(_DWORD *)(v17 + 2056);
      if ( (unsigned __int16)v5 >= v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
      {
        v20 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v5 >= v18 )
        {
          v19 = *(_QWORD *)(v17 + 8LL * ((((unsigned __int16)v5 - v18) >> 16) + 1) + 8);
          v16 = -65536 * (((unsigned __int16)v5 - v18) >> 16) - v18 + (unsigned __int16)v5;
        }
        else
        {
          v19 = *(_QWORD *)(v17 + 8);
        }
        v20 = 0LL;
        if ( (unsigned int)v16 < *(_DWORD *)(v19 + 20) )
          v20 = *(_QWORD *)v19 + 24 * v16;
      }
      if ( *(unsigned __int8 *)(v20 + 13) == HIWORD(v5) )
        v5 = (unsigned __int16)v5;
    }
  }
  v21 = *(_QWORD *)(v4 + 16);
  v22 = *(_DWORD *)(v21 + 2056);
  if ( v5 >= v22 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16)
    || (v5 >= v22
      ? (v23 = *(_QWORD *)(v21 + 8LL * (((v5 - v22) >> 16) + 1) + 8), v5 += -65536 * ((v5 - v22) >> 16) - v22)
      : (v23 = *(_QWORD *)(v21 + 8)),
        v5 >= *(_DWORD *)(v23 + 20)) )
  {
    v24 = 0LL;
  }
  else
  {
    v24 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * ((unsigned __int64)v5 >> 8))
                 + 16LL * (unsigned __int8)v5
                 + 8);
  }
  if ( v24 != this )
    v15 = 0LL;
  if ( (*(_BYTE *)(v15 + 15) & 4) != 0 )
  {
    if ( !a2 )
    {
      *(_OWORD *)(*((_QWORD *)this + 122) + 120LL) = xmmword_14025D3F0;
      goto LABEL_38;
    }
    v25 = qword_1402A10B0;
    if ( qword_1402A10B0 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)v25 + 8, 2LL);
      v26 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v25 + 72LL))((char *)a2 + 24);
      ExReleasePushLockSharedEx((char *)v25 + 8, 2LL);
      KeLeaveCriticalRegion();
      v25 = qword_1402A10B0;
    }
    else if ( *((_DWORD *)a2 + 12) == 1 )
    {
      v26 = 1;
    }
    else
    {
      if ( qword_1402A10B0 )
      {
        sizeScan = Win32kRS::RegionCore_get_sizeScan((struct REGION *)((char *)a2 + 24), v24);
        v25 = qword_1402A10B0;
      }
      else
      {
        sizeScan = *((_DWORD *)a2 + 10);
      }
      v26 = (sizeScan > 0x38) + 2;
    }
    v27 = (char *)this + 976;
    *(_DWORD *)(*((_QWORD *)this + 122) + 116LL) = v26;
    if ( v25 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)v25 + 8, 2LL);
      v28 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v25 + 72LL))((char *)a2 + 24);
      v29 = (char *)v25 + 8;
      v30 = v28;
      ExReleasePushLockSharedEx(v29, 2LL);
      KeLeaveCriticalRegion();
      if ( v30 != 1 )
      {
LABEL_37:
        v31 = *(__m128i *)((char *)a2 + 52);
        v32 = *((_DWORD *)this + 258);
        v33 = *((_DWORD *)this + 259);
        v34 = *(_DWORD **)v27;
        v34[30] = v31.m128i_i32[0] - v32;
        v34[31] = _mm_cvtsi128_si32(_mm_srli_si128(v31, 4)) - v33;
        v34[32] = _mm_srli_si128(v31, 8).m128i_u32[0] - v32;
        v34[33] = _mm_cvtsi128_si32(_mm_srli_si128(v31, 12)) - v33;
LABEL_38:
        v35 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState() + 88) + 5672LL);
        v36 = (unsigned __int16)*(_DWORD *)this | (*(_DWORD *)this >> 8) & 0xFF0000;
        if ( v36 >= 0x10000 )
        {
          v37 = (unsigned __int16)*(_DWORD *)this;
          if ( *(_DWORD *)v35 <= 0x10000u )
          {
            v36 = (unsigned __int16)*(_DWORD *)this;
          }
          else
          {
            v38 = *(_QWORD *)(v35 + 16);
            v39 = *(_DWORD *)(v38 + 2056);
            if ( (unsigned __int16)*(_DWORD *)this >= v39 + ((*(unsigned __int16 *)(v38 + 2) + 0xFFFF) << 16) )
            {
              v41 = 0LL;
            }
            else
            {
              if ( (unsigned __int16)*(_DWORD *)this >= v39 )
              {
                v40 = *(_QWORD *)(v38 + 8LL * ((((unsigned __int16)*(_DWORD *)this - v39) >> 16) + 1) + 8);
                v37 = -65536 * (((unsigned __int16)v36 - v39) >> 16) - v39 + (unsigned __int16)v36;
              }
              else
              {
                v40 = *(_QWORD *)(v38 + 8);
              }
              v41 = 0LL;
              if ( (unsigned int)v37 < *(_DWORD *)(v40 + 20) )
                v41 = *(_QWORD *)v40 + 24 * v37;
            }
            if ( *(unsigned __int8 *)(v41 + 13) == HIWORD(v36) )
              v36 = (unsigned __int16)*(_DWORD *)this;
          }
        }
        v43 = *(_QWORD *)(v35 + 16);
        v44 = *(_DWORD *)(v43 + 2056);
        if ( v36 >= v44 + ((*(unsigned __int16 *)(v43 + 2) + 0xFFFF) << 16) )
        {
          v47 = 0LL;
        }
        else
        {
          if ( v36 >= v44 )
          {
            v45 = *(_QWORD *)(v43 + 8LL * (((v36 - v44) >> 16) + 1) + 8);
            v46 = v36 + -65536 * ((v36 - v44) >> 16) - v44;
          }
          else
          {
            v45 = *(_QWORD *)(v43 + 8);
            v46 = v36;
          }
          v47 = 0LL;
          if ( v46 < *(_DWORD *)(v45 + 20)
            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v45 + 24) + 8 * ((unsigned __int64)v46 >> 8))
                         + 16LL * (unsigned __int8)v46
                         + 8) )
          {
            v47 = *(_QWORD *)v45 + 24LL * v46;
          }
        }
        if ( v36 >= 0x10000 )
        {
          v48 = (unsigned __int16)v36;
          if ( *(_DWORD *)v35 <= 0x10000u )
          {
            v36 = (unsigned __int16)v36;
          }
          else
          {
            v49 = *(_QWORD *)(v35 + 16);
            v50 = *(_DWORD *)(v49 + 2056);
            if ( (unsigned __int16)v36 >= v50 + ((*(unsigned __int16 *)(v49 + 2) + 0xFFFF) << 16) )
            {
              v52 = 0LL;
            }
            else
            {
              if ( (unsigned __int16)v36 >= v50 )
              {
                v51 = *(_QWORD *)(v49 + 8LL * ((((unsigned __int16)v36 - v50) >> 16) + 1) + 8);
                v48 = -65536 * (((unsigned __int16)v36 - v50) >> 16) - v50 + (unsigned __int16)v36;
              }
              else
              {
                v51 = *(_QWORD *)(v49 + 8);
              }
              v52 = 0LL;
              if ( (unsigned int)v48 < *(_DWORD *)(v51 + 20) )
                v52 = *(_QWORD *)v51 + 24 * v48;
            }
            if ( *(unsigned __int8 *)(v52 + 13) == HIWORD(v36) )
              v36 = (unsigned __int16)v36;
          }
        }
        v53 = *(_QWORD *)(v35 + 16);
        v54 = *(_DWORD *)(v53 + 2056);
        if ( v36 >= v54 + ((*(unsigned __int16 *)(v53 + 2) + 0xFFFF) << 16)
          || (v36 >= v54
            ? (v55 = *(_QWORD *)(v53 + 8LL * (((v36 - v54) >> 16) + 1) + 8), v36 += -65536 * ((v36 - v54) >> 16) - v54)
            : (v55 = *(_QWORD *)(v53 + 8)),
              v36 >= *(_DWORD *)(v55 + 20)) )
        {
          v56 = 0LL;
        }
        else
        {
          v56 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v55 + 24) + 8 * ((unsigned __int64)v36 >> 8))
                       + 16LL * (unsigned __int8)v36
                       + 8);
        }
        if ( v56 != this )
          v47 = 0LL;
        *(_BYTE *)(v47 + 15) &= ~4u;
        return;
      }
    }
    else if ( *((_DWORD *)a2 + 12) != 1 )
    {
      v27 = (char *)this + 976;
      goto LABEL_37;
    }
    *(_OWORD *)(*(_QWORD *)v27 + 120LL) = xmmword_14025D3F0;
    goto LABEL_38;
  }
}
