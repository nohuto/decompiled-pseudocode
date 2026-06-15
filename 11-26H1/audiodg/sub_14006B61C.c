/*
 * XREFs of sub_14006B61C @ 0x14006B61C
 * Callers:
 *     sub_14006A97C @ 0x14006A97C (sub_14006A97C.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_14001E9BC @ 0x14001E9BC (sub_14001E9BC.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14006B498 @ 0x14006B498 (sub_14006B498.c)
 *     sub_140075868 @ 0x140075868 (sub_140075868.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14006B61C(__int64 a1, __int64 a2, GUID *a3, int a4, __int64 a5, DEVINSTID_W *a6)
{
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // edx
  DEVINSTID_W v12; // rbx
  int v14; // eax
  DEVINSTID_W pDeviceID; // [rsp+20h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h]
  GUID v18; // [rsp+40h] [rbp-20h]
  int v19; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+38h]

  *a6 = 0LL;
  v18 = (GUID)0LL;
  v18 = *a3;
  v19 = 100;
  *(_OWORD *)pvar = 0LL;
  v17 = 0LL;
  if ( !a2 || (v9 = sub_1400B6010(a2), v10 = v9, v9 >= 0) )
  {
    if ( LOWORD(pvar[0]) == 31 )
    {
      v9 = sub_14006B498((DEVINSTID_W)pvar[1], a3);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 551;
        goto LABEL_7;
      }
      *a6 = (DEVINSTID_W)pvar[1];
      pvar[1] = 0LL;
    }
    else
    {
      pDeviceID = 0LL;
      if ( a4
        && (sub_1400118C0((void **)&pDeviceID, 0LL), sub_140075868(a1, &pDeviceID), (v12 = pDeviceID) != 0LL)
        && (int)sub_14006B498(pDeviceID, a3) >= 0 )
      {
        pDeviceID = 0LL;
        *a6 = v12;
      }
      else
      {
        v14 = sub_14001E9BC(HKEY_CLASSES_ROOT, a3);
        v10 = v14;
        if ( v14 < 0 )
        {
          sub_14000C2A8((int)retaddr, 576, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v14);
          sub_14001D96C((void **)&pDeviceID);
          goto LABEL_15;
        }
      }
      sub_14001D96C((void **)&pDeviceID);
    }
    v10 = 0;
    goto LABEL_15;
  }
  v11 = 545;
LABEL_7:
  sub_14000C2A8((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processnode.cpp", v9);
LABEL_15:
  PropVariantClear(pvar);
  return v10;
}
