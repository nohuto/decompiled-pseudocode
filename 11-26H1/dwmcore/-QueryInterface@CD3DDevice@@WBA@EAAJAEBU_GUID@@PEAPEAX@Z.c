/*
 * XREFs of ?QueryInterface@CD3DDevice@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180299780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CD3DDevice::QueryInterface()
{
  return CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::QueryInterface();
}
