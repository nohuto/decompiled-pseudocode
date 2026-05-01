/*
 * XREFs of CrmRegistrationAddActivity @ 0x180034C10
 * Callers:
 *     CrmRegistrationCreateActivity @ 0x180033DFC (CrmRegistrationCreateActivity.c)
 *     CrmSrvActivityAllocate @ 0x180034360 (CrmSrvActivityAllocate.c)
 *     CrmRpcSrvActivityAllocate @ 0x180034760 (CrmRpcSrvActivityAllocate.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRegistrationAddActivity(__int64 a1, __int64 a2)
{
  int v2; // esi
  _QWORD *v5; // rcx
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp-29h] BYREF
  __int64 v8; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v9[32]; // [rsp+40h] [rbp-19h] BYREF
  UUID *v10; // [rsp+60h] [rbp+7h]
  __int64 v11; // [rsp+68h] [rbp+Fh]
  __int64 *v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  int *v14; // [rsp+80h] [rbp+27h]
  __int64 v15; // [rsp+88h] [rbp+2Fh]

  v2 = *(_DWORD *)(a2 + 68);
  RtlAcquireSRWLockExclusive(a1);
  *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  v5 = *(_QWORD **)(a1 + 64);
  if ( *v5 != a1 + 56 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 8) = v5;
  *(_QWORD *)a2 = a1 + 56;
  *v5 = a2;
  *(_QWORD *)(a1 + 64) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  result = RtlReleaseSRWLockExclusive(a1);
  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 2) != 0 )
  {
    result = qword_1800E1300 & 2;
    if ( result == qword_1800E1300 )
    {
      v11 = 16LL;
      v10 = &Uuid;
      v8 = *(_QWORD *)(a1 + 16);
      v13 = 8LL;
      v12 = &v8;
      v7 = v2;
      v14 = &v7;
      v15 = 4LL;
      return tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CCD8E, 0LL, 0LL, 5, v9);
    }
  }
  return result;
}
