/*
 * XREFs of sub_14005B8E0 @ 0x14005B8E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006BCC @ 0x140006BCC (sub_140006BCC.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_14005B8E0(__int64 a1, _QWORD *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = sub_140006BCC(*(unsigned __int16 **)(a1 + 48), a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 75, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audioendpoint_dsp.cpp", v2);
  return v3;
}
