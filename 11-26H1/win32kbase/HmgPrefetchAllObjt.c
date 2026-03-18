/*
 * XREFs of HmgPrefetchAllObjt @ 0x14012BD90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall HmgPrefetchAllObjt(char a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // r14
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C8h]
  _QWORD *v14; // [rsp+48h] [rbp-C0h]
  _QWORD v15[32]; // [rsp+58h] [rbp-B0h] BYREF

  v4 = 0;
  v11 = 0LL;
  memset(v15, 0, sizeof(v15));
  v13 = 0LL;
  v6 = 0;
  v7 = *(_QWORD *)(W32GetSessionState(v5) + 88);
  v14 = v15;
  v12[0] = 1LL;
  v12[1] = -3LL;
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v7 + 8) + 32LL))(
               *(_QWORD *)(v7 + 8),
               v6,
               &v11);
    v6 = result;
    if ( !(_DWORD)result )
      break;
    if ( *(_BYTE *)(v11 + 14) == a1 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 8) + 96LL))(
             *(_QWORD *)(v7 + 8),
             (unsigned int)result);
      if ( v9 )
      {
        v10 = 2LL * v4++;
        v15[v10] = v9;
        v15[v10 + 1] = a2;
      }
    }
    if ( v4 == 16 )
    {
      v13 = 16LL;
      MmPrefetchVirtualAddresses(v12);
      v4 = 0;
    }
  }
  if ( v4 )
  {
    v13 = v4;
    return MmPrefetchVirtualAddresses(v12);
  }
  return result;
}
