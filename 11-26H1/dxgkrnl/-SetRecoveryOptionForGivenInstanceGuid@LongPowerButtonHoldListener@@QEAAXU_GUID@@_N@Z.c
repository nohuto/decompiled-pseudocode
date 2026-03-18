/*
 * XREFs of ?SetRecoveryOptionForGivenInstanceGuid@LongPowerButtonHoldListener@@QEAAXU_GUID@@_N@Z @ 0x140077C04
 * Callers:
 *     ?SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401CBFD4 (-SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

void __fastcall LongPowerButtonHoldListener::SetRecoveryOptionForGivenInstanceGuid(
        LongPowerButtonHoldListener *this,
        struct _GUID *a2,
        char a3)
{
  __int64 v6; // r9
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (LongPowerButtonHoldListener *)((char *)this + 24), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v6 = *(_QWORD *)&a2->Data1 - *((_QWORD *)this + 9);
  if ( *(_QWORD *)&a2->Data1 == *((_QWORD *)this + 9) )
    v6 = *(_QWORD *)a2->Data4 - *((_QWORD *)this + 10);
  if ( !v6 )
    *((_BYTE *)this + 88) = a3;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
}
