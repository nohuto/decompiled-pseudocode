/*
 * XREFs of PdcPoBlockSessionSwitchEx @ 0x1407DF650
 * Callers:
 *     <none>
 * Callees:
 *     PoBlockConsoleSwitchEx @ 0x140448F98 (PoBlockConsoleSwitchEx.c)
 *     PopDispatchStateCallout @ 0x1409F5718 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PdcPoBlockSessionSwitchEx(char a1, ULONG *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-18h]
  ULONG v8; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v7 = 0LL;
  v6 = 0LL;
  DWORD2(v6) = 1;
  v5 = 0LL;
  if ( a1 )
  {
    return (unsigned int)PoBlockConsoleSwitchEx((__int64)&v5, a2, a3);
  }
  else
  {
    v8 = *a2;
    LODWORD(v7) = 7;
    PopDispatchStateCallout(&v5, &v8);
  }
  return v3;
}
