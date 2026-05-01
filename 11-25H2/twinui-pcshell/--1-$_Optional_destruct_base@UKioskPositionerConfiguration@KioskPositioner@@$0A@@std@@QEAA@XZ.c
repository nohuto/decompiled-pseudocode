/*
 * XREFs of ??1?$_Optional_destruct_base@UKioskPositionerConfiguration@KioskPositioner@@$0A@@std@@QEAA@XZ @ 0x1804DD46C
 * Callers:
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1800E5EAC (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 *     ??1?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAA@XZ @ 0x1804DD4F0 (--1-$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??_GKioskPositionerConfiguration@KioskPositioner@@QEAAPEAXI@Z @ 0x1804DD784 (--_GKioskPositionerConfiguration@KioskPositioner@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Optional_destruct_base<KioskPositioner::KioskPositionerConfiguration,0>::~_Optional_destruct_base<KioskPositioner::KioskPositionerConfiguration,0>(
        KioskPositioner::KioskPositionerConfiguration *a1,
        unsigned int a2)
{
  void *result; // rax

  if ( *((_BYTE *)a1 + 16) )
    return KioskPositioner::KioskPositionerConfiguration::`scalar deleting destructor'(a1, a2);
  return result;
}
