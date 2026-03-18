/*
 * XREFs of ?QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x14005A770
 * Callers:
 *     ?ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x140053664 (-ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?QueryInterface@FxRequestMemory@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x14005A730 (-QueryInterface@FxRequestMemory@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxMemoryObject::QueryInterface(FxMemoryObject *this, FxQueryInterfaceParams *Params)
{
  unsigned __int16 Type; // dx
  void **Object; // rax
  IFxMemory *v5; // rdx
  unsigned int v7; // r8d

  Type = Params->Type;
  if ( Type == 4106 )
  {
    Object = Params->Object;
    v5 = &this->IFxMemory;
    if ( !this )
      v5 = 0LL;
    *Object = v5;
    return 0LL;
  }
  else
  {
    if ( Type == 4096 )
    {
      v7 = 0;
      *Params->Object = this;
    }
    else
    {
      return (unsigned int)-1073741127;
    }
    return v7;
  }
}
