/*
 * XREFs of ?DecrementCounter@CDwmWindowNotifyBatchProp@@QEAAXXZ @ 0x1402D347C
 * Callers:
 *     ?DecrementCounter@CDwmNotifyBatch@@IEAAXPEAUHWND__@@@Z @ 0x1402D342C (-DecrementCounter@CDwmNotifyBatch@@IEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     DwmAsyncWindowNotifyBatchEnd @ 0x1403254E8 (DwmAsyncWindowNotifyBatchEnd.c)
 */

void __fastcall CDwmWindowNotifyBatchProp::DecrementCounter(CDwmWindowNotifyBatchProp *this, __int64 a2)
{
  void *v4; // rax

  if ( (*((_DWORD *)this + 7))-- == 1 )
  {
    v4 = (void *)ReferenceDwmApiPort(this, a2);
    DwmAsyncWindowNotifyBatchEnd(v4);
    *((_DWORD *)this + 8) = 0;
    *((_DWORD *)this + 9) = 0;
  }
}
