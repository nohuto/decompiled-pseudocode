/*
 * XREFs of ?bTightBoundsToRegion@DEVLOCKOBJ@@QEAAHXZ @ 0x140080D20
 * Callers:
 *     ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1400807B8 (-GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 * Callees:
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x14009AD34 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall DEVLOCKOBJ::bTightBoundsToRegion(DEVLOCKOBJ *this)
{
  __int64 v1; // rax
  unsigned int v3; // edi
  int v4; // ecx
  __m128i v6; // xmm0
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // xmm0_8
  _DWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  __m128i v17; // [rsp+38h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 4);
  v3 = 1;
  if ( v1 )
  {
    if ( *((_BYTE *)this + 105) )
    {
      v4 = *(_DWORD *)(v1 + 36);
      if ( (v4 & 0x4000) != 0 && (v4 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(v1 + 472) )
        {
          if ( *(_DWORD *)(v1 + 488) )
          {
            v6 = *(__m128i *)(v1 + 1080);
            v7 = *(_QWORD *)(v1 + 1184);
            v8 = *(_QWORD *)(v1 + 1080);
            v17 = v6;
            v9 = _mm_srli_si128(v6, 8).m128i_u64[0];
            if ( (_DWORD)v8 != (_DWORD)v9 && HIDWORD(v8) != HIDWORD(v9) )
            {
              v3 = 0;
              Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v14);
              RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v14, 0x70u);
              RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14);
              if ( v14 )
              {
                RGNOBJ::vSet((RGNOBJ *)&v14, (const struct _RECTL *const)&v17);
                v10 = (_DWORD *)(*((_QWORD *)this + 4) + 1080LL);
                *v10 = 0;
                v10[1] = 0;
                v10[2] = 0;
                v10[3] = 0;
                if ( v7 )
                {
                  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v15);
                  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v15, 0x70u);
                  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v15);
                  v13 = *(_QWORD *)(*((_QWORD *)this + 4) + 1184LL);
                  v16 = v13;
                  if ( v15 && v13 && RGNOBJ::bMerge((RGNOBJ *)&v15, (struct RGNOBJ *)&v16, (struct RGNOBJ *)&v14, 0xEu) )
                  {
                    RGNOBJ::vSwap((RGNOBJ *)&v15, (struct RGNOBJ *)&v16);
                    v3 = 1;
                    *(_QWORD *)(*((_QWORD *)this + 4) + 1184LL) = v16;
                  }
                  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v15);
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
                }
                else
                {
                  v11 = *((_QWORD *)this + 4);
                  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v14);
                  v12 = v14;
                  v14 = 0LL;
                  v3 = 1;
                  *(_QWORD *)(v11 + 1184) = v12;
                }
              }
              RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v14);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
            }
          }
        }
      }
    }
  }
  return v3;
}
