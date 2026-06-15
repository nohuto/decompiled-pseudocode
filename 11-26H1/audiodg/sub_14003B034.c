/*
 * XREFs of sub_14003B034 @ 0x14003B034
 * Callers:
 *     sub_140046EA8 @ 0x140046EA8 (sub_140046EA8.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 */

__int64 __fastcall sub_14003B034(HANDLE hHandle, int *a2)
{
  DWORD v4; // eax
  __int64 v5; // rdx
  int v7; // edx
  DWORD v8; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  int PreviousCount; // [rsp+40h] [rbp+18h] BYREF
  int v11; // [rsp+48h] [rbp+20h] BYREF

  v4 = WaitForSingleObject(hHandle, 0);
  if ( v4 == -1 )
  {
    v5 = 153LL;
    return sub_1400470EC(retaddr, v5, &unk_1400C71E8);
  }
  if ( !v4 || v4 == 258 )
  {
    PreviousCount = 0;
    if ( v4 )
    {
      v11 = 0;
      if ( !ReleaseSemaphore(hHandle, 1, &v11) )
      {
        v5 = 177LL;
        return sub_1400470EC(retaddr, v5, &unk_1400C71E8);
      }
      if ( v11 )
      {
        v7 = 178;
        goto LABEL_25;
      }
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v7 = 181;
        goto LABEL_25;
      }
      v8 = WaitForSingleObject(hHandle, 0);
      if ( v8 == -1 )
      {
        v5 = 184LL;
        return sub_1400470EC(retaddr, v5, &unk_1400C71E8);
      }
      if ( v8 )
      {
        v7 = 185;
        goto LABEL_25;
      }
    }
    else
    {
      if ( !ReleaseSemaphore(hHandle, 1, &PreviousCount) )
      {
        v5 = 162LL;
        return sub_1400470EC(retaddr, v5, &unk_1400C71E8);
      }
      ++PreviousCount;
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v7 = 167;
        goto LABEL_25;
      }
    }
    *a2 = PreviousCount;
    return 0LL;
  }
  v7 = 154;
LABEL_25:
  sub_14000C2A8((int)retaddr, v7, (int)&unk_1400C71E8, -2147418113);
  return 2147549183LL;
}
