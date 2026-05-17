/*
 * XREFs of PssNtFreeRemoteSnapshot @ 0x18010F5D0
 * Callers:
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18015A108 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18015F6C0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18015F720 (ZwReadVirtualMemory.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PssNtFreeRemoteSnapshot(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v6; // [rsp+48h] [rbp-B8h] BYREF
  int v7; // [rsp+50h] [rbp-B0h] BYREF
  int v8; // [rsp+54h] [rbp-ACh]
  __int64 v9; // [rsp+3B8h] [rbp+2B8h]
  __int64 v10; // [rsp+3D0h] [rbp+2D0h]
  __int64 v11; // [rsp+3E8h] [rbp+2E8h]
  __int64 v12; // [rsp+400h] [rbp+300h]
  __int64 v13; // [rsp+420h] [rbp+320h]
  __int64 v14; // [rsp+440h] [rbp+340h]

  memset_thunk_772440563353939046(&v7, 0, 0x478uLL);
  v6 = 0LL;
  v5 = 0LL;
  result = ZwReadVirtualMemory(a1, a2, &v7, 1144LL, &v5);
  if ( (int)result >= 0 )
  {
    if ( v5 == 1144 )
    {
      if ( v7 == 1146311504 )
      {
        if ( (v8 & 1) == 0 || (v8 & 2) != 0 )
        {
          return 3221225659LL;
        }
        else
        {
          if ( (v8 & 4) != 0 )
          {
            v6 = *(_QWORD *)(a2 + 904);
            v5 = 0LL;
            ZwFreeVirtualMemory(a1, &v6, &v5, 0x8000LL);
          }
          if ( v14 )
            ZwDuplicateObject(a1, v14, 0LL, 0LL, 0, 0, 1);
          if ( v13 )
            ZwDuplicateObject(a1, v13, 0LL, 0LL, 0, 0, 1);
          if ( v11 )
            ZwDuplicateObject(a1, v11, 0LL, 0LL, 0, 0, 1);
          if ( v12 )
            ZwDuplicateObject(a1, v12, 0LL, 0LL, 0, 0, 1);
          if ( v10 )
            ZwDuplicateObject(a1, v10, 0LL, 0LL, 0, 0, 1);
          if ( v9 )
            ZwDuplicateObject(a1, v9, 0LL, 0LL, 0, 0, 1);
          v6 = a2;
          v5 = 0LL;
          ZwFreeVirtualMemory(a1, &v6, &v5, 0x8000LL);
          return 0LL;
        }
      }
      else
      {
        return 3221225480LL;
      }
    }
    else
    {
      return 2147483661LL;
    }
  }
  return result;
}
