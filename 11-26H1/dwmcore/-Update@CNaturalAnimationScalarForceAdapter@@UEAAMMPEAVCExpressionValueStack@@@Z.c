/*
 * XREFs of ?Update@CNaturalAnimationScalarForceAdapter@@UEAAMMPEAVCExpressionValueStack@@@Z @ 0x18028EFB0
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?GetOwner@CNaturalAnimationScalarForceAdapter@@AEBAPEAVCNaturalAnimation@@XZ @ 0x18028EE88 (-GetOwner@CNaturalAnimationScalarForceAdapter@@AEBAPEAVCNaturalAnimation@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CNaturalAnimationScalarForceAdapter::Update(
        CNaturalAnimationScalarForceAdapter *this,
        float a2,
        struct CExpressionValueStack *a3)
{
  struct CNaturalAnimation *Owner; // rax
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rcx
  float result; // xmm0_4
  __int64 v12; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  v14 = 0LL;
  Owner = CNaturalAnimationScalarForceAdapter::GetOwner(this);
  v6 = (*(__int64 (__fastcall **)(struct CNaturalAnimation *, struct CExpressionValueStack *, __int64 *))(*(_QWORD *)Owner + 224LL))(
         Owner,
         a3,
         &v14);
  if ( v6 < 0 )
    ModuleFailFastForHRESULT(v6, retaddr);
  v7 = *((_DWORD *)CNaturalAnimationScalarForceAdapter::GetOwner(this) + 38);
  if ( v7 == 18 )
  {
    v8 = *((_DWORD *)a3 + 24);
    v12 = v8;
    if ( v8 )
      v12 = v8 - 1;
    result = *(float *)(*(_QWORD *)a3 + 72 * v12);
  }
  else
  {
    if ( v7 != 35 )
      ModuleFailFastForHRESULT(-2147467259, retaddr);
    v8 = *((_DWORD *)a3 + 24);
    v9 = v8;
    if ( v8 )
      v9 = v8 - 1;
    v10 = 9 * v9;
    result = *(float *)(*(_QWORD *)a3 + 8 * v10);
    if ( *((_DWORD *)this + 4) )
      result = *(float *)(*(_QWORD *)a3 + 8 * v10 + 4);
  }
  if ( v8 )
    *((_DWORD *)a3 + 24) = v8 - 1;
  return result;
}
