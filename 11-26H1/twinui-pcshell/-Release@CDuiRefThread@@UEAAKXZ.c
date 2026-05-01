/*
 * XREFs of ?Release@CDuiRefThread@@UEAAKXZ @ 0x1801B1B00
 * Callers:
 *     ?Release@CDuiRefThread@@WCA@EAAKXZ @ 0x1803E5690 (-Release@CDuiRefThread@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDuiRefThread::Release(CDuiRefThread *this)
{
  return CRefThread::Release(this);
}
