/*
 * XREFs of sub_140046548 @ 0x140046548
 * Callers:
 *     sub_140047E70 @ 0x140047E70 (sub_140047E70.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14003F8B0 @ 0x14003F8B0 (sub_14003F8B0.c)
 *     sub_14006CAA4 @ 0x14006CAA4 (sub_14006CAA4.c)
 *     sub_14006CB08 @ 0x14006CB08 (sub_14006CB08.c)
 */

__int64 __fastcall sub_140046548(__int64 a1, int a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  char v9; // [rsp+40h] [rbp+18h] BYREF
  char v10; // [rsp+41h] [rbp+19h]

  v4 = RtwqStartup();
  v5 = v4;
  if ( v4 >= 0 )
  {
    sub_14006CAA4(&v9);
    *(_DWORD *)(a1 + 108) = a2;
    v6 = sub_14003F8B0(a1);
    v5 = v6;
    if ( v6 >= 0 )
    {
      *(_BYTE *)(a1 + 104) = 1;
      v5 = 0;
      v10 = 0;
    }
    else
    {
      sub_14000C2A8((int)retaddr, 119, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", v6);
    }
    sub_14006CB08(&v9);
  }
  else
  {
    sub_14000C2A8((int)retaddr, 109, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", v4);
  }
  return v5;
}
