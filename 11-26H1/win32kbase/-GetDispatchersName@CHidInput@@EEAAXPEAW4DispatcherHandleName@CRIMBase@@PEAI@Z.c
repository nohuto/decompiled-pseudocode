/*
 * XREFs of ?GetDispatchersName@CHidInput@@EEAAXPEAW4DispatcherHandleName@CRIMBase@@PEAI@Z @ 0x140190190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHidInput::GetDispatchersName(
        CHidInput *this,
        enum CRIMBase::DispatcherHandleName *a2,
        unsigned int *a3)
{
  *a3 = 15;
  *(_OWORD *)a2 = xmmword_140272728;
  *((_OWORD *)a2 + 1) = xmmword_140272738;
  *((_OWORD *)a2 + 2) = xmmword_140272748;
  *((_QWORD *)a2 + 6) = 0xF0000000ELL;
  *((_DWORD *)a2 + 14) = 17;
}
