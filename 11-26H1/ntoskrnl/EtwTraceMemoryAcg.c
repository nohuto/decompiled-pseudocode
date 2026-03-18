/*
 * XREFs of EtwTraceMemoryAcg @ 0x140485B74
 * Callers:
 *     MiArbitraryCodeBlocked @ 0x140ABC228 (MiArbitraryCodeBlocked.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwTraceMemoryAcg(int a1)
{
  __int64 v1; // rcx
  NTSTATUS result; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF
  int v7; // [rsp+70h] [rbp+8h] BYREF

  v7 = a1;
  if ( EtwpMemoryProvRegHandle )
  {
    v1 = *(_QWORD *)(EtwpMemoryProvRegHandle + 32);
    if ( *(_DWORD *)(v1 + 96) )
    {
      result = *(_DWORD *)(v1 + 112);
      if ( (result & 0x100) != 0 )
      {
        v5 = *(_QWORD *)(v1 + 120);
        result = v5 & 0x100;
        if ( (v5 & 0x100) == v5 )
          goto LABEL_10;
      }
    }
    if ( *(_WORD *)(EtwpMemoryProvRegHandle + 102) )
    {
      v3 = *(_QWORD *)(EtwpMemoryProvRegHandle + 40);
      if ( *(_DWORD *)(v3 + 96) )
      {
        result = *(_DWORD *)(v3 + 112);
        if ( (result & 0x100) != 0 )
        {
          v4 = *(_QWORD *)(v3 + 120);
          result = v4 & 0x100;
          if ( (v4 & 0x100) == v4 )
          {
LABEL_10:
            UserData.Ptr = (ULONGLONG)&v7;
            *(_QWORD *)&UserData.Size = 4LL;
            return EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_ACG, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
          }
        }
      }
    }
  }
  return result;
}
