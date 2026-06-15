/*
 * XREFs of sub_14006CD40 @ 0x14006CD40
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006CD40(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v4 = *a2 - 0x4F2A2354A27003CFLL;
    if ( *a2 == 0x4F2A2354A27003CFLL )
      v4 = a2[1] - 0x7E4315FF7CAB6A8DLL;
    if ( !v4 )
      goto LABEL_9;
    v5 = *a2;
    if ( !*a2 )
      v5 = a2[1] - 0x46000000000000C0LL;
    if ( v5 )
    {
      *a3 = 0LL;
      return 2147500034LL;
    }
    else
    {
LABEL_9:
      *a3 = a1;
      sub_1400B6010(a1);
      return 0LL;
    }
  }
  else
  {
    sub_14000C2A8((int)retaddr, 210, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", -2147467261);
    return 2147500035LL;
  }
}
