/*
 * XREFs of sub_140046D40 @ 0x140046D40
 * Callers:
 *     sub_14003B610 @ 0x14003B610 (sub_14003B610.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_14001F1BC @ 0x14001F1BC (sub_14001F1BC.c)
 *     sub_14003F88C @ 0x14003F88C (sub_14003F88C.c)
 *     sub_140075AC8 @ 0x140075AC8 (sub_140075AC8.c)
 *     sub_140075B80 @ 0x140075B80 (sub_140075B80.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140046D40(__int128 *a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // edx
  __int128 v8; // [rsp+20h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+18h]
  LPVOID pv; // [rsp+50h] [rbp+20h] BYREF
  HKEY phkDevice; // [rsp+58h] [rbp+28h] BYREF

  *a2 = 0LL;
  pv = 0LL;
  sub_1400118C0(&pv, 0LL);
  v8 = *a1;
  v3 = sub_14001F1BC(&v8, &pv);
  v4 = v3;
  if ( v3 >= 0 )
  {
    phkDevice = 0LL;
    v5 = sub_140075AC8((DEVINSTID_W)pv, &phkDevice);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v8 = *a1;
      v5 = sub_140075B80(phkDevice);
      v4 = v5;
      if ( v5 >= 0 )
      {
        v4 = 0;
        goto LABEL_10;
      }
      v6 = 102;
    }
    else
    {
      v6 = 100;
    }
    sub_14000C2A8((int)retaddr, v6, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp", v5);
LABEL_10:
    sub_14003F88C(&phkDevice);
    sub_14001D96C(&pv);
    return v4;
  }
  sub_14000C2A8((int)retaddr, 97, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp", v3);
  if ( pv )
    CoTaskMemFree(pv);
  return v4;
}
