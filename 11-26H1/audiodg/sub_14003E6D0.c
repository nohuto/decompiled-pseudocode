/*
 * XREFs of sub_14003E6D0 @ 0x14003E6D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_14003E6D0(__int64 a1, IRtwqAsyncResult *a2)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v3 = RtwqEndRegisterWorkQueueWithMMCSS(a2, (DWORD *)(a1 + 8));
  v4 = v3;
  if ( v3 >= 0 )
  {
    *(_DWORD *)(a1 + 12) = 1;
    WakeByAddressSingle((PVOID)(a1 + 12));
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 233, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", v3);
    return v4;
  }
}
