/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1400F6448
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1400F6060 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?OnEnqueue@VIDMM_TASK_IDLE@@UEAAXPEAUVIDMM_WORKER_THREAD2@@@Z @ 0x1400F6580 (-OnEnqueue@VIDMM_TASK_IDLE@@UEAAXPEAUVIDMM_WORKER_THREAD2@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP(VIDMM_RECYCLE_HEAP *this)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // rbx

  v2 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v5 = v2;
          if ( !*v2 )
            break;
          v2 = (_QWORD *)*v2;
          *v5 = 0LL;
        }
        v6 = v2 + 1;
        if ( !v2[1] )
          break;
        v2 = (_QWORD *)v2[1];
        *v6 = 0LL;
      }
      v7 = v2[2];
      VIDMM_TASK_IDLE::OnEnqueue((VIDMM_TASK_IDLE *)v2, 0LL);
      v8 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v8 )
        break;
      v2 = (_QWORD *)v8;
    }
  }
  *((_QWORD *)this + 6) = 0LL;
  v3 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = v3;
          if ( !*v3 )
            break;
          v3 = (_QWORD *)*v3;
          *v9 = 0LL;
        }
        v10 = v3 + 1;
        if ( !v3[1] )
          break;
        v3 = (_QWORD *)v3[1];
        *v10 = 0LL;
      }
      v11 = v3[2];
      VIDMM_TASK_IDLE::OnEnqueue((VIDMM_TASK_IDLE *)v3, 0LL);
      v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v12 )
        break;
      v3 = (_QWORD *)v12;
    }
  }
  *((_QWORD *)this + 7) = 0LL;
  v4 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v13 = v4;
          if ( !*v4 )
            break;
          v4 = (_QWORD *)*v4;
          *v13 = 0LL;
        }
        v14 = v4 + 1;
        if ( !v4[1] )
          break;
        v4 = (_QWORD *)v4[1];
        *v14 = 0LL;
      }
      v15 = v4[2];
      VIDMM_TASK_IDLE::OnEnqueue((VIDMM_TASK_IDLE *)v4, 0LL);
      v16 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v16 )
        break;
      v4 = (_QWORD *)v16;
    }
  }
  *((_QWORD *)this + 8) = 0LL;
}
