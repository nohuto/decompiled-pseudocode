/*
 * XREFs of sub_14006CB08 @ 0x14006CB08
 * Callers:
 *     sub_140046548 @ 0x140046548 (sub_140046548.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 */

void __fastcall sub_14006CB08(__int64 a1)
{
  HRESULT v1; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    v1 = RtwqShutdown();
    if ( v1 < 0 )
      sub_140007934((int)retaddr, 112, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", v1);
  }
}
