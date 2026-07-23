/*
 * XREFs of PiSwFindPdoAssociation @ 0x140A8C4E8
 * Callers:
 *     PiSwStopDestroy @ 0x1409B2018 (PiSwStopDestroy.c)
 *     PiSwGetChildPdo @ 0x140A8BC18 (PiSwGetChildPdo.c)
 *     PiSwUnassociateDeviceObject @ 0x140A8C454 (PiSwUnassociateDeviceObject.c)
 *     PiSwIrpStartCreateWorker @ 0x140A8CB08 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiSwFindPdoAssociation(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // r11
  _QWORD *v4; // r9
  char v5; // r10

  v3 = 0LL;
  v4 = *(_QWORD **)(a1 + 128);
  v5 = 0;
  while ( v4 != (_QWORD *)(a1 + 128) )
  {
    v3 = (unsigned __int64)v4;
    if ( *(_QWORD *)((char *)v4 + (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 40) == a2 )
    {
      v5 = 1;
      return v3 & -(__int64)(v5 != 0);
    }
    v4 = (_QWORD *)*v4;
  }
  return v3 & -(__int64)(v5 != 0);
}
