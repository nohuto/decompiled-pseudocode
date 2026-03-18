/*
 * XREFs of Controller_SetHSIIWorkaround @ 0x140042D4C
 * Callers:
 *     Endpoint_Enable @ 0x14001F2E0 (Endpoint_Enable.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 */

__int64 __fastcall Controller_SetHSIIWorkaround(__int64 a1)
{
  __int64 v1; // rdi
  int Ulong; // eax

  v1 = *(_QWORD *)(a1 + 88);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 268, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  Ulong = XilRegister_ReadUlong(v1, (unsigned int *)(*(_QWORD *)(v1 + 24) + 33092LL));
  return XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), (_DWORD *)(*(_QWORD *)(v1 + 24) + 33092LL), Ulong | 0x100u);
}
