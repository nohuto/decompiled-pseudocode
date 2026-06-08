/*
 * XREFs of CollectAcpiBiosInfo @ 0x14004A948
 * Callers:
 *     ProcLibGlobalInit @ 0x14004B8C0 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     GetAcpiTable @ 0x140029600 (GetAcpiTable.c)
 */

__int64 __fastcall CollectAcpiBiosInfo(ULONG a1, __int64 a2, const CHAR *a3, const CHAR *a4)
{
  int AcpiTable; // ebx
  int v6; // [rsp+28h] [rbp-10h]
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  AcpiTable = (unsigned int)GetAcpiTable(a1, (ULONG)&P, a3, a4);
  if ( AcpiTable >= 0 )
  {
    if ( *((_DWORD *)P + 14) )
    {
      dword_140019144 = 268439553;
      dword_14001914C = 0;
      dword_140019148 = *((_DWORD *)P + 14);
    }
    if ( *((_DWORD *)P + 15) )
    {
      dword_140019150 = 268439553;
      HIDWORD(qword_140019154) = 0;
      LODWORD(qword_140019154) = *((_DWORD *)P + 15);
    }
    if ( *((_DWORD *)P + 16) )
    {
      dword_14001915C = 268439553;
      dword_140019164 = 0;
      dword_140019160 = *((_DWORD *)P + 16);
    }
    if ( *((_DWORD *)P + 17) )
    {
      dword_140019168 = 268439553;
      HIDWORD(qword_14001916C) = 0;
      LODWORD(qword_14001916C) = *((_DWORD *)P + 17);
    }
    if ( *((_DWORD *)P + 18) )
    {
      dword_140019174 = 134219777;
      dword_14001917C = 0;
      dword_140019178 = *((_DWORD *)P + 18);
    }
    dword_140019180 = *((_DWORD *)P + 12);
    byte_140019186 = *((_BYTE *)P + 105);
    byte_140019187 = *((_BYTE *)P + 104);
    AcpiInfo = *((_WORD *)P + 48);
    word_140019142 = *((_WORD *)P + 49);
    byte_140019184 = *((_BYTE *)P + 55);
    byte_140019185 = *((_BYTE *)P + 95);
    ExFreePoolWithTag(P, (ULONG)0);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = AcpiTable;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x5Du,
      (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
      v6);
  }
  return (unsigned int)AcpiTable;
}
