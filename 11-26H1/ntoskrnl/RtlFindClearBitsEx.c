/*
 * XREFs of RtlFindClearBitsEx @ 0x140361740
 * Callers:
 *     MiObtainDynamicVa @ 0x1402A4348 (MiObtainDynamicVa.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiCheckProcessorPteCache @ 0x140360820 (MiCheckProcessorPteCache.c)
 *     RtlFindClearBitsAndSetEx @ 0x1404932B0 (RtlFindClearBitsAndSetEx.c)
 *     RtlpHpFixedVsAllocate @ 0x1404D1C30 (RtlpHpFixedVsAllocate.c)
 *     MiFindEmptyAddressRange @ 0x14099635C (MiFindEmptyAddressRange.c)
 *     MiSelectImageBase @ 0x14099BC88 (MiSelectImageBase.c)
 *     MiSelectRelocationStartHint @ 0x140AEFE00 (MiSelectRelocationStartHint.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindClearBitsEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbp
  unsigned __int64 *v12; // r8
  __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __int64 v17; // rdi
  unsigned __int64 *v18; // r12
  bool v19; // zf
  __int64 v20; // rdx
  unsigned int v21; // r14d
  unsigned __int64 v22; // r14
  __int64 v23; // rcx
  unsigned __int64 *v24; // rdx
  unsigned __int64 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx

  v3 = *a1;
  v4 = 0LL;
  v5 = a1[1];
  if ( a3 < *a1 )
    v4 = a3;
  v8 = v3 - 1;
  if ( !a2 )
    return v4 & 0xFFFFFFFFFFFFFFF8uLL;
  while ( 1 )
  {
    if ( v8 - v4 + 1 < a2 )
    {
LABEL_11:
      v14 = -1LL;
      goto LABEL_12;
    }
    v10 = v8 - a2 + 1;
    v11 = v5 + 8 * (v10 >> 6);
    v12 = (unsigned __int64 *)(v5 + 8 * (v4 >> 6));
    v13 = *v12 | ((1LL << v4) - 1);
    if ( a2 > 0x7F )
    {
      v22 = v11 + 8;
      if ( (v10 & 0x3F) == 0 )
        v22 = v5 + 8 * ((v8 - a2 + 1) >> 6);
      if ( v13 )
      {
        if ( *++v12 )
          goto LABEL_45;
        v19 = !_BitScanReverse64((unsigned __int64 *)&v23, v13);
        if ( v19 )
          LODWORD(v13) = 64;
        else
          LODWORD(v13) = 63 - v23;
      }
      while ( 1 )
      {
        v14 = ((__int64)((__int64)v12 - v5) >> 3 << 6) - (unsigned int)v13;
        if ( v14 > v10 )
          goto LABEL_11;
        v24 = &v12[(a2 - (unsigned int)v13) >> 6];
        while ( ++v12 != v24 )
        {
          if ( *v12 )
            goto LABEL_45;
        }
        if ( (((_BYTE)a2 - (_BYTE)v13) & 0x3F) == 0 )
          goto LABEL_18;
        v19 = !_BitScanForward64((unsigned __int64 *)&v27, *v12);
        if ( v19 )
          LODWORD(v27) = 64;
        if ( (unsigned int)v27 >= (((_BYTE)a2 - (_BYTE)v13) & 0x3Fu) )
          goto LABEL_18;
        do
        {
LABEL_45:
          v25 = v12;
          if ( (unsigned __int64)v12 > v22 )
            goto LABEL_11;
          ++v12;
        }
        while ( *v12 );
        v19 = !_BitScanReverse64((unsigned __int64 *)&v26, *v25);
        if ( v19 )
          LODWORD(v13) = 64;
        else
          LODWORD(v13) = 63 - v26;
      }
    }
    if ( a2 >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v13 < 0 )
          {
            if ( (unsigned __int64)++v12 > v11 )
              goto LABEL_11;
            v13 = *v12;
          }
          v19 = !_BitScanReverse64((unsigned __int64 *)&v28, v13);
          if ( v19 )
            v29 = 64LL;
          else
            v29 = (unsigned int)(63 - v28);
          v14 = ((((__int64)((__int64)v12 - v5) >> 3) + 1) << 6) - v29;
          if ( v14 > v10 )
            goto LABEL_11;
          v30 = a2 - v29;
          if ( a2 == v29 )
            goto LABEL_18;
          v31 = v12[1];
          ++v12;
          v13 = v31;
          if ( v30 >= 0x40 )
            break;
LABEL_66:
          v19 = !_BitScanForward64(&v32, v13);
          if ( v19 )
            v32 = 64LL;
          if ( v32 >= v30 )
            goto LABEL_18;
        }
        if ( !v31 )
        {
          v30 -= 64LL;
          if ( !v30 )
            goto LABEL_18;
          v13 = v12[1];
          ++v12;
          goto LABEL_66;
        }
      }
    }
    if ( a2 > 1 )
    {
      v17 = 0LL;
      v18 = (unsigned __int64 *)(v5 + 8 * (v8 >> 6));
      while ( v13 != -1 )
      {
LABEL_23:
        v19 = !_BitScanForward64((unsigned __int64 *)&v20, v13);
        if ( v19 )
          LODWORD(v20) = 64;
        if ( (unsigned int)(v17 + v20) >= a2 )
        {
          v16 = -v17;
          goto LABEL_17;
        }
        v21 = a2;
        v16 = ~v13;
        while ( 1 )
        {
          v16 &= v16 >> (v21 >> 1);
          if ( !v16 )
            break;
          v21 -= v21 >> 1;
          if ( v21 <= 1 )
          {
            _BitScanForward64(&v16, v16);
            goto LABEL_17;
          }
        }
        if ( v12 == v18 )
          goto LABEL_11;
        v19 = !_BitScanReverse64((unsigned __int64 *)&v33, v13);
        v13 = v12[1];
        if ( v19 )
        {
          ++v12;
          v17 = 64LL;
        }
        else
        {
          v17 = (unsigned int)(63 - v33);
          ++v12;
        }
      }
      while ( 1 )
      {
        if ( (unsigned __int64)++v12 > v11 )
          goto LABEL_11;
        v13 = *v12;
        if ( *v12 != -1LL )
        {
          v17 = 0LL;
          goto LABEL_23;
        }
      }
    }
    while ( v13 == -1 )
    {
      if ( (unsigned __int64)++v12 > v11 )
        goto LABEL_11;
      v13 = *v12;
    }
    _BitScanForward64(&v16, ~v13);
LABEL_17:
    v14 = ((__int64)((__int64)v12 - v5) >> 3 << 6) + v16;
    if ( v14 > v10 )
    {
      v14 = -1LL;
    }
    else
    {
LABEL_18:
      if ( v14 != -1LL )
        return v14;
    }
LABEL_12:
    if ( !v4 )
      return v14;
    v15 = a2 + a3;
    if ( a2 + a3 > v3 )
      v15 = v3;
    v8 = v15 - 1;
    v4 = 0LL;
  }
}
