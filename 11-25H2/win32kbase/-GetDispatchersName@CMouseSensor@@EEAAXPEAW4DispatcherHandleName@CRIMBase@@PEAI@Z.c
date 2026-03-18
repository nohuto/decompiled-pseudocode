/*
 * XREFs of ?GetDispatchersName@CMouseSensor@@EEAAXPEAW4DispatcherHandleName@CRIMBase@@PEAI@Z @ 0x140160EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMouseSensor::GetDispatchersName(
        CMouseSensor *this,
        enum CRIMBase::DispatcherHandleName *a2,
        unsigned int *a3)
{
  *a3 = 9;
  *(_OWORD *)a2 = *(_OWORD *)&CMouseSensor::dispatcherObjects;
  *((_OWORD *)a2 + 1) = xmmword_14026D278;
  *((_DWORD *)a2 + 8) = 16;
}
