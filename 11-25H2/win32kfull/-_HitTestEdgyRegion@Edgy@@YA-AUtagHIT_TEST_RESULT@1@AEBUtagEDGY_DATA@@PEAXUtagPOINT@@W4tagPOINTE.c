/*
 * XREFs of ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1402A5F24
 * Callers:
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1401FC0FC (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1402A6534 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     _GetPointerDeviceRects @ 0x140090CA4 (_GetPointerDeviceRects.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall Edgy::_HitTestEdgyRegion(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6)
{
  unsigned int v10; // r14d
  unsigned int v11; // r9d
  __int32 v12; // r15d
  __int32 v13; // r12d
  __m128i v14; // xmm1
  __int64 v15; // r11
  int v16; // r8d
  __int64 v17; // rdx
  int *v18; // r10
  int v19; // edx
  int v20; // r8d
  __int64 v21; // r10
  __int64 v22; // r11
  __m128i v24; // [rsp+20h] [rbp-58h] BYREF
  __m128i v25; // [rsp+30h] [rbp-48h] BYREF

  *(_DWORD *)(a1 + 20) = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  v25 = 0LL;
  if ( (unsigned int)GetPointerDeviceRects(a3, &v25, 0LL) )
  {
    v10 = *a2;
    v11 = 0;
    v12 = v25.m128i_i32[1];
    v13 = v25.m128i_i32[0];
    v14 = v25;
    while ( 1 )
    {
      if ( v11 >= v10 )
        return a1;
      v15 = *((_QWORD *)a2 + 1) + 32LL * v11;
      if ( *(_QWORD *)v15 == a3 )
      {
        v16 = *(_DWORD *)(v15 + 16);
        if ( a5 == 3 )
        {
          v17 = a6 != 0 ? 2 : 0;
        }
        else
        {
          if ( a5 != 1 )
            goto LABEL_20;
          v17 = 1LL;
        }
        v18 = (int *)((char *)&a2[13 * v17 + 12] + (-(__int64)(((v16 - 1) & 0xFFFFFFFD) == 0) & 0xFFFFFFFFFFFFFFE8uLL));
        if ( v18 )
        {
          v19 = *v18;
          v24 = v14;
          if ( v16 )
          {
            switch ( v16 )
            {
              case 1:
                v24.m128i_i32[3] = v12 + v19;
                break;
              case 2:
                ++v24.m128i_i32[2];
                v24.m128i_i32[0] = v25.m128i_i32[2] - v19;
                break;
              case 3:
                ++v24.m128i_i32[3];
                v24.m128i_i32[1] = v25.m128i_i32[3] - v19;
                break;
              default:
                v24 = 0LL;
                break;
            }
          }
          else
          {
            v24.m128i_i32[2] = v13 + v19;
          }
          if ( PtInRect(&v24, a4) )
          {
            *(_QWORD *)a1 = v22;
            *(_QWORD *)(a1 + 8) = v21;
            *(_DWORD *)(a1 + 16) = v20;
            return a1;
          }
        }
      }
LABEL_20:
      ++v11;
    }
  }
  return a1;
}
