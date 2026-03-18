/*
 * XREFs of ?OnBrushesChanged@CEffectBrush@@QEAAXXZ @ 0x18026E2E8
 * Callers:
 *     ?SetOrAppendBrushes@CEffectBrush@@AEAAJAEBV?$span@PEAVCBrush@@$0?0@gsl@@_N@Z @ 0x18026E718 (-SetOrAppendBrushes@CEffectBrush@@AEAAJAEBV-$span@PEAVCBrush@@$0-0@gsl@@_N@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CEffectBrush::OnBrushesChanged(CEffectBrush *this)
{
  __int64 *v1; // r15
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  struct CResource *v12; // rdx

  v1 = (__int64 *)((char *)this + 128);
  v3 = (__int64)(*((_QWORD *)this + 28) - *((_QWORD *)this + 27)) >> 3;
  if ( v3 == (v1[1] - *v1) >> 2 )
  {
    v4 = *((unsigned int *)this + 26);
    if ( v3 <= v4 )
    {
      v5 = 0;
      v6 = 0;
      if ( (_DWORD)v4 )
      {
        do
        {
          v7 = *((_QWORD *)this + 21);
          v8 = v6;
          CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v7 + 8LL * v6++));
          *(_QWORD *)(v7 + 8 * v8) = 0LL;
        }
        while ( v6 < *((_DWORD *)this + 26) );
        v9 = (__int64 *)((char *)this + 128);
      }
      else
      {
        v9 = v1;
      }
      v10 = *v1;
      if ( (*((_QWORD *)this + 17) - *v1) >> 2 )
      {
        v11 = 0LL;
        do
        {
          v12 = *(struct CResource **)(*((_QWORD *)this + 27) + 8 * v11);
          *(_QWORD *)(*((_QWORD *)this + 21) + 8LL * *(unsigned int *)(v10 + 4 * v11)) = v12;
          CResource::RegisterNotifier(this, v12);
          v10 = *v9;
          v11 = ++v5;
        }
        while ( v5 < (unsigned __int64)((*((_QWORD *)this + 17) - *v9) >> 2) );
      }
      (*(void (__fastcall **)(CEffectBrush *, __int64))(*(_QWORD *)this + 80LL))(this, 14LL);
    }
  }
}
