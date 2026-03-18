/*
 * XREFs of ?QueryInterface@FxDeviceBase@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1400590C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDeviceBase::QueryInterface(FxDeviceBase *this, FxQueryInterfaceParams *Params)
{
  unsigned __int16 Type; // ax
  IFxHasCallbacks *v5; // rcx

  Type = Params->Type;
  if ( Type == 4144 )
  {
    *Params->Object = this;
    return 0LL;
  }
  if ( Type == 5379 )
  {
    v5 = &this->IFxHasCallbacks;
    if ( !this )
      v5 = 0LL;
    *Params->Object = v5;
    return 0LL;
  }
  if ( Type != 4096 )
    return 3221226169LL;
  *Params->Object = this;
  return 0LL;
}
