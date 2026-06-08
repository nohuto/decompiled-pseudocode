/*
 * XREFs of CollectAcpiBiosInfo @ 0x1400444B0
 * Callers:
 *     ProcLibGlobalInit @ 0x140045428 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     GetAcpiTable @ 0x14002D90C (GetAcpiTable.c)
 */

__int64 __fastcall CollectAcpiBiosInfo(ULONG a1, __int64 a2, const CHAR *a3, const CHAR *a4)
{
  int v4; // edx
  int AcpiTable; // ebx
  int v7; // [rsp+28h] [rbp-10h]
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  AcpiTable = (unsigned int)GetAcpiTable(a1, (ULONG)&P, a3, a4);
  if ( AcpiTable >= 0 )
  {
    if ( *((_DWORD *)P + 14) )
    {
      dword_140015574 = 268439553;
      dword_14001557C = 0;
      dword_140015578 = *((_DWORD *)P + 14);
    }
    if ( *((_DWORD *)P + 15) )
    {
      dword_140015580 = 268439553;
      HIDWORD(qword_140015584) = 0;
      LODWORD(qword_140015584) = *((_DWORD *)P + 15);
    }
    if ( *((_DWORD *)P + 16) )
    {
      dword_14001558C = 268439553;
      dword_140015594 = 0;
      dword_140015590 = *((_DWORD *)P + 16);
    }
    if ( *((_DWORD *)P + 17) )
    {
      dword_140015598 = 268439553;
      HIDWORD(qword_14001559C) = 0;
      LODWORD(qword_14001559C) = *((_DWORD *)P + 17);
    }
    if ( *((_DWORD *)P + 18) )
    {
      dword_1400155A4 = 134219777;
      dword_1400155AC = 0;
      dword_1400155A8 = *((_DWORD *)P + 18);
    }
    dword_1400155B0 = *((_DWORD *)P + 12);
    byte_1400155B6 = *((_BYTE *)P + 105);
    byte_1400155B7 = *((_BYTE *)P + 104);
    AcpiInfo = *((_WORD *)P + 48);
    word_140015572 = *((_WORD *)P + 49);
    byte_1400155B4 = *((_BYTE *)P + 55);
    byte_1400155B5 = *((_BYTE *)P + 95);
    ExFreePoolWithTag(P, (ULONG)0);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = AcpiTable;
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      3,
      93,
      (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
      v7);
  }
  return (unsigned int)AcpiTable;
}
