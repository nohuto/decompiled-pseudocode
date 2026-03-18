/*
 * XREFs of ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1402C32E4
 * Callers:
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1402338C8 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1402C3910 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     _GetPointerDeviceRects @ 0x140030CA8 (_GetPointerDeviceRects.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_QWORD *__fastcall Edgy::_HitTestEdgyRegion(
        _QWORD *a1,
        unsigned int *a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6)
{
  unsigned int v10; // r14d
  unsigned int v11; // r8d
  int v12; // r15d
  int v13; // r12d
  __int128 v14; // xmm1
  __int64 v15; // r10
  int v16; // r9d
  __int64 v17; // rcx
  int *v18; // r11
  int v19; // edx
  int v20; // r9d
  __int64 v21; // r10
  __int64 v22; // r11
  __int128 v24; // [rsp+20h] [rbp-58h] BYREF
  __int128 v25; // [rsp+30h] [rbp-48h] BYREF

  a1[2] = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  v25 = 0LL;
  if ( (unsigned int)GetPointerDeviceRects(a3, &v25, 0LL) )
  {
    v10 = *a2;
    v11 = 0;
    v12 = DWORD1(v25);
    v13 = v25;
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
                HIDWORD(v24) = v12 + v19;
                break;
              case 2:
                ++DWORD2(v24);
                LODWORD(v24) = DWORD2(v25) - v19;
                break;
              case 3:
                ++HIDWORD(v24);
                DWORD1(v24) = HIDWORD(v25) - v19;
                break;
              default:
                v24 = 0LL;
                break;
            }
          }
          else
          {
            DWORD2(v24) = v13 + v19;
          }
          if ( PtInRect(&v24, a4) )
          {
            *a1 = v21;
            a1[1] = v22;
            *((_DWORD *)a1 + 4) = v20;
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
