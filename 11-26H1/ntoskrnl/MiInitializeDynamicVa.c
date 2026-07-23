/*
 * XREFs of MiInitializeDynamicVa @ 0x140CFFB64
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x14028521C (MiSystemVaTypeToVm.c)
 *     MiCountBootDriverRegions @ 0x140CFF904 (MiCountBootDriverRegions.c)
 */

void *volatile *MiInitializeDynamicVa()
{
  void *volatile *result; // rax

  Event.Header.Size = 6;
  LOWORD(Event.Header.Lock) = 0;
  Event.Header.SignalState = 0;
  Event.Header.WaitListHead.Blink = &Event.Header.WaitListHead;
  Event.Header.WaitListHead.Flink = &Event.Header.WaitListHead;
  qword_140E37BA0 = MiCountBootDriverRegions();
  result = MiSystemVaTypeToVm(11);
  *((_BYTE *)result + 184) = (_DWORD)result[23] & 0xF0 | 3;
  return result;
}
