/*
 * XREFs of ?PanLockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x140231290
 * Callers:
 *     <none>
 * Callees:
 *     ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x14026DF18 (-ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall PanLockDisplayArea(struct DHPDEV__ *a1, __m128i *a2)
{
  LONG v2; // ebx
  LONG v4; // r10d
  LONG v5; // eax
  int v6; // r8d
  int v7; // r11d
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  __int64 v12; // r15
  __int64 v13; // rbp
  __int64 v14; // r12
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // r14
  char *v22; // rbx
  HSEMAPHORE *v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // [rsp+20h] [rbp-B8h]
  _BYTE v26[80]; // [rsp+30h] [rbp-A8h] BYREF
  char v27; // [rsp+80h] [rbp-58h] BYREF

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
  if ( v2 < v4 )
  {
    v4 = v2;
LABEL_19:
    v9 = 1;
    goto LABEL_20;
  }
  if ( v7 < v6 )
    v6 = v7;
  if ( v4 == v2 )
    goto LABEL_19;
  v9 = 0;
  if ( v6 == v7 )
    goto LABEL_19;
LABEL_20:
  if ( !v9 )
  {
    v10 = *((_DWORD *)a1 + 192);
    v11 = *((_DWORD *)a1 + 193);
    v12 = (int)(v6 / v11);
    v13 = 9 * v12;
    v14 = (int)(v7 / v11 + 1);
    v15 = v2 / v10;
    v16 = (int)(v4 / v10);
    v25 = v16;
    v17 = v15 + 1;
    while ( 1 )
    {
      memset_0(v26, 0, 0x51uLL);
      GreAcquireFastMutex(*(_QWORD *)(*((_QWORD *)a1 + 98) + 32LL), v18);
      v19 = v12;
      v20 = v13;
LABEL_23:
      if ( v19 >= v14 )
        break;
      while ( 1 )
      {
        if ( v16 >= v17 )
        {
          v16 = v25;
          ++v19;
          v20 += 9LL;
          goto LABEL_23;
        }
        if ( !EngAcquireSemaphoreNoWait(*((HSEMAPHORE *)a1 + v20 + v16 + 15)) )
          break;
        v26[v20 + v16++] = 1;
      }
      v21 = 8LL;
      v22 = &v27;
      v23 = (HSEMAPHORE *)(a1 + 190);
      do
      {
        v24 = 9LL;
        do
        {
          if ( *v22 == 1 )
          {
            EngReleaseSemaphore(*v23);
            *v22 = 0;
          }
          --v23;
          --v22;
          --v24;
        }
        while ( v24 );
        --v21;
      }
      while ( v21 >= 0 );
      ShadowUnLockWait((struct _PANDEV *)a1);
      v16 = v25;
      v13 = 9 * v12;
    }
    GreReleaseFastMutex(*(_QWORD *)(*((_QWORD *)a1 + 98) + 32LL));
  }
}
