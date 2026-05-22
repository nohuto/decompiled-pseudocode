/*
 * XREFs of ?HasEndpoint@DWMCursorBroker@@UEAAHXZ @ 0x18000FA40
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall DWMCursorBroker::HasEndpoint(DWMCursorBroker *this)
{
  unsigned int v2; // edx
  unsigned int v3; // ebx

  std::_Mutex_base::lock((std::_Mutex_base *)&DWMCursorBroker::s_lock);
  v2 = 0;
  v3 = 1;
  while ( v2 < 0xA )
  {
    if ( *((_QWORD *)this + 3 * v2 + 27) )
      goto LABEL_6;
    ++v2;
  }
  v3 = 0;
LABEL_6:
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v3;
}
