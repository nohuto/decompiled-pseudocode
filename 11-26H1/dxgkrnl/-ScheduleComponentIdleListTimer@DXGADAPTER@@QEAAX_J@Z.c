/*
 * XREFs of ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x140049CFC
 * Callers:
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x140014408 (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::ScheduleComponentIdleListTimer(DXGADAPTER *this, __int64 a2)
{
  if ( !*((_BYTE *)this + 3701) )
  {
    *((_BYTE *)this + 3701) = 1;
    KeSetTimer((PKTIMER)((char *)this + 3816), (LARGE_INTEGER)-a2, (PKDPC)((char *)this + 3880));
  }
}
