/*
 * XREFs of ?bTightBoundsToRegion@DEVLOCKOBJ@@QEAAHXZ @ 0x1400AE6E4
 * Callers:
 *     ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1400AE1E8 (-GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall DEVLOCKOBJ::bTightBoundsToRegion(DEVLOCKOBJ *this)
{
  __int64 v1; // rdx
  unsigned int v3; // edi
  __int64 v5; // rsi
  unsigned __int64 v6; // xmm0_8
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  __m128i v14; // [rsp+38h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 4);
  v3 = 1;
  if ( v1 )
  {
    if ( *((_BYTE *)this + 129) )
    {
      if ( (*(_DWORD *)(v1 + 36) & 0x4040) == 0x4040 )
      {
        if ( *(_QWORD *)(v1 + 472) )
        {
          if ( *(_DWORD *)(v1 + 488) )
          {
            v5 = *(_QWORD *)(v1 + 1184);
            v14 = *(__m128i *)(v1 + 1080);
            v6 = _mm_srli_si128(v14, 8).m128i_u64[0];
            if ( v14.m128i_i32[0] != (_DWORD)v6 && v14.m128i_i32[1] != HIDWORD(v6) )
            {
              v11 = 0LL;
              v3 = 0;
              RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v11, 0x70u);
              RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v11);
              if ( v11 )
              {
                RGNOBJ::vSet((RGNOBJ *)&v11, (const struct _RECTL *const)&v14);
                v7 = *((_QWORD *)this + 4);
                *(_QWORD *)(v7 + 1080) = 0LL;
                *(_QWORD *)(v7 + 1088) = 0LL;
                if ( v5 )
                {
                  v12 = 0LL;
                  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v12, 0x70u);
                  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v12);
                  v10 = *(_QWORD *)(*((_QWORD *)this + 4) + 1184LL);
                  v13 = v10;
                  if ( v12 && v10 && RGNOBJ::bMerge((RGNOBJ *)&v12, (struct RGNOBJ *)&v13, (struct RGNOBJ *)&v11, 0xEu) )
                  {
                    RGNOBJ::vSwap((RGNOBJ *)&v12, (struct RGNOBJ *)&v13);
                    v3 = 1;
                    *(_QWORD *)(*((_QWORD *)this + 4) + 1184LL) = v13;
                  }
                  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v12);
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
                }
                else
                {
                  v8 = *((_QWORD *)this + 4);
                  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v11);
                  v9 = v11;
                  v3 = 1;
                  v11 = 0LL;
                  *(_QWORD *)(v8 + 1184) = v9;
                }
              }
              RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v11);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
            }
          }
        }
      }
    }
  }
  return v3;
}
