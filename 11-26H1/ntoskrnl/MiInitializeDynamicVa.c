/*
 * XREFs of MiInitializeDynamicVa @ 0x140CF97E4
 * Callers:
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x140285CBC (MiSystemVaTypeToVm.c)
 *     MiCountBootDriverRegions @ 0x140CF9584 (MiCountBootDriverRegions.c)
 */

void *volatile *MiInitializeDynamicVa()
{
  void *volatile *result; // rax

  Event.Header.Size = 6;
  LOWORD(Event.Header.Lock) = 0;
  Event.Header.SignalState = 0;
  Event.Header.WaitListHead.Blink = &Event.Header.WaitListHead;
  Event.Header.WaitListHead.Flink = &Event.Header.WaitListHead;
  qword_140E37A20 = MiCountBootDriverRegions();
  result = MiSystemVaTypeToVm(11);
  *((_BYTE *)result + 184) = (_DWORD)result[23] & 0xF0 | 3;
  return result;
}
