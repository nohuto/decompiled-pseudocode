/*
 * XREFs of ?PanLockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x14026D5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x140295528 (-ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall PanLockDisplayArea(struct DHPDEV__ *a1, __m128i *a2)
{
  LONG v2; // ebx
  LONG v4; // r11d
  LONG v5; // eax
  int v6; // r9d
  int v7; // r10d
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // r14
  char *v19; // rbx
  HSEMAPHORE *v20; // rsi
  __int64 v21; // rbp
  __int64 i; // [rsp+20h] [rbp-B8h]
  _BYTE v23[80]; // [rsp+30h] [rbp-A8h] BYREF
  char v24; // [rsp+80h] [rbp-58h] BYREF

  v2 = a2->m128i_i32[2];
  v4 = _mm_cvtsi128_si32(*a2);
  if ( v4 > v2 )
  {
    v5 = v4;
    v4 = a2->m128i_i32[2];
    v2 = v5;
  }
  v6 = HIDWORD(a2->m128i_i64[0]);
  v7 = HIDWORD(*(unsigned __int128 *)a2);
  if ( v6 > v7 )
  {
    v6 = HIDWORD(*(unsigned __int128 *)a2);
    v7 = HIDWORD(a2->m128i_i64[0]);
  }
  v8 = *((_QWORD *)a1 + 8);
  if ( v4 < 0 )
    v4 = 0;
  if ( v6 < 0 )
    v6 = 0;
  if ( *(_DWORD *)(v8 + 32) < v2 )
    v2 = *(_DWORD *)(v8 + 32);
  if ( *(_DWORD *)(v8 + 36) < v7 )
    v7 = *(_DWORD *)(v8 + 36);
  if ( v2 >= v4 )
  {
    if ( v7 < v6 )
      v6 = v7;
    if ( v6 != v7 && v4 != v2 )
    {
      v9 = *((_DWORD *)a1 + 193);
      v10 = *((_DWORD *)a1 + 192);
      v11 = (int)(v7 / v9 + 1);
      v12 = (int)(v2 / v10 + 1);
      v13 = (int)(v6 / v9);
      v14 = (int)(v4 / v10);
      for ( i = v14; ; v14 = i )
      {
        memset_0(v23, 0, 0x51uLL);
        GreAcquireFastMutex(*(_QWORD *)(*((_QWORD *)a1 + 98) + 32LL), v15);
        v16 = v13;
        v17 = 9 * v13;
LABEL_20:
        if ( v16 >= v11 )
          break;
        while ( 1 )
        {
          if ( v14 >= v12 )
          {
            v14 = i;
            ++v16;
            v17 += 9LL;
            goto LABEL_20;
          }
          if ( !EngAcquireSemaphoreNoWait(*((HSEMAPHORE *)a1 + v17 + v14 + 15)) )
            break;
          v23[v17 + v14++] = 1;
        }
        v18 = 8LL;
        v19 = &v24;
        v20 = (HSEMAPHORE *)(a1 + 190);
        do
        {
          v21 = 9LL;
          do
          {
            if ( *v19 == 1 )
            {
              EngReleaseSemaphore(*v20);
              *v19 = 0;
            }
            --v20;
            --v19;
            --v21;
          }
          while ( v21 );
          --v18;
        }
        while ( v18 >= 0 );
        ShadowUnLockWait((struct _PANDEV *)a1);
      }
      GreReleaseFastMutex(*(_QWORD *)(*((_QWORD *)a1 + 98) + 32LL));
    }
  }
}
