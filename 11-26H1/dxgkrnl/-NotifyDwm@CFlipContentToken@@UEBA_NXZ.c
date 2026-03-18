/*
 * XREFs of ?NotifyDwm@CFlipContentToken@@UEBA_NXZ @ 0x140041950
 * Callers:
 *     <none>
 * Callees:
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1400419C0 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

char __fastcall CFlipContentToken::NotifyDwm(CFlipContentToken *this)
{
  char v2; // bl
  unsigned __int64 v3; // rdx
  CompositionSurfaceObject *v4; // rcx
  bool v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(CFlipContentToken *))(*(_QWORD *)this + 144LL))(this)
    || *((_BYTE *)this + 235) )
  {
    return 1;
  }
  v3 = *((_QWORD *)this + 7);
  v4 = (CompositionSurfaceObject *)*((_QWORD *)this + 6);
  v6 = 0;
  if ( (int)CompositionSurfaceObject::GetIndependentFlipNotifyDwm(v4, v3, &v6) >= 0 )
    return v6;
  return v2;
}
