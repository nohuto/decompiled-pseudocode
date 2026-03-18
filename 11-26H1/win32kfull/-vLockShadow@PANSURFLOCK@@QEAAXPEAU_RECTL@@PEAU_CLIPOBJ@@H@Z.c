/*
 * XREFs of ?vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x14026675C
 * Callers:
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x140288790 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ??0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z @ 0x140321150 (--0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     ?vUnLockShadowAndWait@PANSURFLOCK@@QEAAXXZ @ 0x140323610 (-vUnLockShadowAndWait@PANSURFLOCK@@QEAAXXZ.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall PANSURFLOCK::vLockShadow(PANSURFLOCK *this, __m128i *a2, struct _CLIPOBJ *a3, int a4)
{
  LONG left; // esi
  int top; // ebx
  LONG right; // ebp
  int bottom; // edi
  LONG v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // r8d
  unsigned int v14; // ecx
  __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // r15
  __int64 v21; // rsi
  HSEMAPHORE v22; // rcx
  int v23; // eax
  __int64 v24; // [rsp+60h] [rbp+8h]
  __int64 i; // [rsp+70h] [rbp+18h]

  if ( a3 && a3->iDComplexity )
  {
    left = a2->m128i_i32[0];
    top = a2->m128i_i32[1];
    right = a2->m128i_i32[2];
    if ( a3->rclBounds.left > a2->m128i_i32[0] )
      left = a3->rclBounds.left;
    bottom = a2->m128i_i32[3];
    if ( a3->rclBounds.top > top )
      top = a3->rclBounds.top;
    if ( a3->rclBounds.right < right )
      right = a3->rclBounds.right;
    if ( a3->rclBounds.bottom < bottom )
      bottom = a3->rclBounds.bottom;
  }
  else
  {
    right = a2->m128i_i32[2];
    left = _mm_cvtsi128_si32(*a2);
    bottom = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 12));
    top = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 4));
  }
  if ( left > right )
  {
    v9 = left;
    left = right;
    right = v9;
  }
  if ( top > bottom )
  {
    v10 = top;
    top = bottom;
    bottom = v10;
  }
  if ( left < 0 )
    left = 0;
  v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 64LL);
  if ( top < 0 )
    top = 0;
  if ( *(_DWORD *)(v11 + 32) < right )
    right = *(_DWORD *)(v11 + 32);
  if ( *(_DWORD *)(v11 + 36) < bottom )
    bottom = *(_DWORD *)(v11 + 36);
  if ( right >= left )
  {
    if ( bottom < top )
      top = bottom;
  }
  else
  {
    left = right;
  }
  memset_0((char *)this + 24, 0, 0x51uLL);
  if ( top != bottom && left != right )
  {
    v12 = *((_QWORD *)this + 2);
    v13 = *(_DWORD *)(v12 + 768);
    v14 = *(_DWORD *)(v12 + 772);
    v15 = (int)(bottom / v14 + 1);
    v16 = (int)(right / v13 + 1);
    v24 = v16;
    v17 = (int)(top / v14);
    v18 = left % v13;
    v19 = (int)(left / v13);
    for ( i = v19; ; v19 = i )
    {
      v20 = 9 * v17;
      GreAcquireFastMutex(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 784LL) + 32LL), v18);
      v21 = v17;
LABEL_33:
      if ( v21 >= v15 )
        break;
      while ( 1 )
      {
        if ( v19 >= v16 )
        {
          v19 = i;
          ++v21;
          v20 += 9LL;
          goto LABEL_33;
        }
        v22 = *(HSEMAPHORE *)(*((_QWORD *)this + 2) + 8 * (v20 + v19) + 120);
        v23 = a4 ? EngAcquireSemaphoreSharedNoWait(v22) : EngAcquireSemaphoreNoWait(v22);
        if ( v23 != 1 )
          break;
        *((_BYTE *)this + v20 + v19++ + 24) = 1;
        v16 = v24;
      }
      PANSURFLOCK::vUnLockShadowAndWait(this);
      memset_0((char *)this + 24, 0, 0x51uLL);
      v16 = v24;
    }
    GreReleaseFastMutex(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 784LL) + 32LL));
  }
}
