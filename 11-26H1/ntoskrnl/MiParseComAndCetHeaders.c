/*
 * XREFs of MiParseComAndCetHeaders @ 0x14099D24C
 * Callers:
 *     MiReleaseImageSection @ 0x140A64F24 (MiReleaseImageSection.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     MiLogRelocationRva @ 0x14099D6F8 (MiLogRelocationRva.c)
 *     MiMapImageInSystemSpace @ 0x14099D80C (MiMapImageInSystemSpace.c)
 */

__int64 __fastcall MiParseComAndCetHeaders(__int64 *a1, unsigned int *a2, _BYTE *a3)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  int v11; // r12d
  ULONG_PTR v12; // rax
  __int64 v13; // rsi
  ULONG_PTR v14; // r15
  unsigned int i; // r9d
  __int64 v16; // rdx
  unsigned int v17; // edx
  char v18; // cl
  unsigned int v20; // r10d
  ULONG_PTR v21; // rcx
  int v22; // r8d
  __int64 v23; // rdx
  char v24; // cl
  char v25; // cl
  unsigned int v26; // eax
  ULONG_PTR v27; // [rsp+20h] [rbp-E8h]
  unsigned int v29; // [rsp+30h] [rbp-D8h]
  ULONG_PTR BugCheckParameter1[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v32; // [rsp+58h] [rbp-B0h]
  __int128 v33; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v34; // [rsp+70h] [rbp-98h]
  int v35; // [rsp+78h] [rbp-90h]
  __int128 v36; // [rsp+80h] [rbp-88h]
  __int128 v37; // [rsp+90h] [rbp-78h]
  __int128 v38; // [rsp+A0h] [rbp-68h]
  __int128 v39; // [rsp+B0h] [rbp-58h]
  __int64 v40; // [rsp+C0h] [rbp-48h]

  *(_OWORD *)BugCheckParameter1 = 0LL;
  v5 = 0;
  v6 = 0LL;
  *a3 = 0;
  v7 = a2[48];
  if ( (_DWORD)v7 )
  {
    if ( (v7 & 3) == 0 )
    {
      v26 = a2[49];
      if ( v26 >= 0x48 && (unsigned int)v7 + v26 > (unsigned int)v7 )
        v5 = v7 + 72 <= (unsigned __int64)a2[4];
    }
  }
  v8 = a2[32];
  if ( v8 )
  {
    if ( (v8 & 3) == 0 )
    {
      v9 = a2[33];
      if ( v9 >= 0x1C )
      {
        v10 = v8 + v9;
        if ( v10 > v8 && v10 <= a2[4] )
          v5 |= 2u;
      }
    }
  }
  if ( (v5 & 1) == 0 && v5 < 2 )
    return 0LL;
  v11 = MiMapImageInSystemSpace(a1, 1LL, BugCheckParameter1);
  if ( v11 >= 0 )
  {
    v12 = MiReferenceControlAreaFile((__int64)a1);
    v27 = v12;
    v5 |= 0xCu;
    v13 = *a1;
    if ( (v5 & 1) != 0 )
    {
      v20 = a2[48];
      v21 = BugCheckParameter1[0] + v20;
      v36 = *(_OWORD *)v21;
      v37 = *(_OWORD *)(v21 + 16);
      v38 = *(_OWORD *)(v21 + 32);
      v39 = *(_OWORD *)(v21 + 48);
      v40 = *(_QWORD *)(v21 + 64);
      MiLogRelocationRva(v20, 72LL, v12, a1);
      v22 = v37;
      if ( (v37 & 1) != 0 )
      {
        *a3 = 1;
        *(_WORD *)(v13 + 12) |= 0x4000u;
        if ( WORD2(v36) > 2u || WORD2(v36) == 2 && WORD3(v36) >= 5u )
        {
          v23 = *(_QWORD *)(v13 + 56);
          v24 = *(_BYTE *)(v23 + 51) | 2;
          *(_BYTE *)(v23 + 51) = v24;
          if ( (v22 & 0x20002) != 2 )
          {
            if ( _bittest16((const signed __int16 *)(v13 + 12), 0xFu) )
            {
              v25 = v24 | 1;
              *(_BYTE *)(v23 + 51) = v25;
              if ( (v22 & 0x20000) != 0 )
                *(_BYTE *)(v23 + 51) = v25 | 0x20;
            }
          }
        }
      }
    }
    if ( (v5 & 2) != 0 )
    {
      v14 = BugCheckParameter1[0] + a2[32];
      for ( i = 0; ; i = v29 + 1 )
      {
        v29 = i;
        v16 = (a2[33] * (unsigned __int128)0x2492492492492493uLL) >> 64;
        if ( i >= (v16 + (((unsigned __int64)a2[33] - v16) >> 1)) >> 4 )
          break;
        MiLogRelocationRva(a2[32] + 28 * i, 28LL, v27, a1);
        v33 = *(_OWORD *)v14;
        v34 = *(_QWORD *)(v14 + 16);
        v35 = *(_DWORD *)(v14 + 24);
        if ( HIDWORD(v33) == 20 )
        {
          if ( HIDWORD(v34) )
          {
            if ( (v34 & 0x300000000LL) == 0 )
            {
              if ( (_DWORD)v34 )
              {
                if ( (v34 & 3) == 0 )
                {
                  v17 = a2[4];
                  if ( (unsigned int)v34 < v17 && HIDWORD(v34) < v17 && HIDWORD(v34) + (int)v34 < v17 )
                  {
                    MiLogRelocationRva(HIDWORD(v34), 4LL, v27, a1);
                    v32 = *(_DWORD *)(BugCheckParameter1[0] + HIDWORD(v34));
                    v18 = v32;
                    if ( (v32 & 1) != 0 )
                      *(_DWORD *)(*(_QWORD *)(v13 + 56) + 76LL) |= 1u;
                    if ( (v18 & 2) != 0 )
                      *(_DWORD *)(*(_QWORD *)(v13 + 56) + 76LL) |= 2u;
                    if ( (v18 & 4) != 0 )
                      *(_DWORD *)(*(_QWORD *)(v13 + 56) + 76LL) |= 4u;
                    if ( (v18 & 8) != 0 )
                      *(_DWORD *)(*(_QWORD *)(v13 + 56) + 76LL) |= 8u;
                    if ( (v18 & 0x10) != 0 )
                      *(_DWORD *)(*(_QWORD *)(v13 + 56) + 76LL) |= 0x10u;
                    if ( (v18 & 0x20) != 0 )
                      *(_DWORD *)(*(_QWORD *)(v13 + 56) + 76LL) |= 0x20u;
                    if ( v18 < 0 )
                      *(_DWORD *)(*(_QWORD *)(v13 + 56) + 76LL) |= 0x40u;
                  }
                }
              }
            }
          }
          break;
        }
        v14 += 28LL;
      }
    }
    v6 = v27;
  }
  if ( (v5 & 4) != 0 )
    MiRemoveFromSystemSpace(BugCheckParameter1[0]);
  if ( v5 >= 8 )
    MiDereferenceControlAreaFile((__int64)a1, v6);
  return (unsigned int)v11;
}
