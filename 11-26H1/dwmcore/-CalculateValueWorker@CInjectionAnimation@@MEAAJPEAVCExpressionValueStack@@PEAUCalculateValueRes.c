/*
 * XREFs of ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x18026FAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x18004C220 (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x180107D3C (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     ?PushStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@XZ @ 0x18010B120 (-PushStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@XZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18010D710 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInjectionAnimation::CalculateValueWorker(
        CInjectionAnimation *this,
        struct CExpressionValueStack *a2,
        struct CalculateValueResult *a3)
{
  unsigned int v3; // esi
  struct CResource *v7; // rax
  CManipulation *v8; // r15
  _DWORD *v9; // rdi
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  const char *v16; // r9
  struct CExpressionValue *v17; // rbx

  *((_BYTE *)a3 + 1) = 1;
  v3 = 0;
  if ( *((_DWORD *)this + 72) < *((_DWORD *)this + 73) )
  {
    v7 = CBaseExpression::ResolveTargetNoRef(this);
    v8 = v7;
    if ( v7 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v7 + 64LL))(v7, 82LL) )
      {
        *(_BYTE *)a3 = 1;
        v9 = (_DWORD *)((char *)this + 296);
        while ( 1 )
        {
          v10 = *((int *)this + 72);
          v11 = *((_DWORD *)this + 73);
          if ( (int)v10 >= v11 )
            break;
          v12 = *((_QWORD *)this + 35);
          v9 = (_DWORD *)((char *)this + 296);
          if ( *(_DWORD *)(132 * v10 + v12) != *((_DWORD *)this + 74) )
            break;
          v13 = CManipulation::InjectManipulation(v8, (const struct InjectManipulationArgs *)(132 * v10 + v12 + 4));
          v3 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0xAFu, 0LL);
            return v3;
          }
          ++*((_DWORD *)this + 72);
        }
        ++*v9;
        if ( (_DWORD)v10 == v11 )
        {
          *((_BYTE *)this + 216) &= ~1u;
          CBaseExpression::NotifyAnimationCompleted(this);
          *(_WORD *)a3 = 0;
          v17 = CExpressionValueStack::PushStackValue(a2, v14, v15, v16);
          CExpressionValue::DestroyCurrent(v17);
          *((_DWORD *)v17 + 16) = 17;
          *(_BYTE *)v17 = 1;
        }
      }
    }
  }
  return v3;
}
