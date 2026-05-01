/*
 * XREFs of CrmRegistrationRemoveActivity @ 0x1800206C8
 * Callers:
 *     CrmSrvUnregister @ 0x180032344 (CrmSrvUnregister.c)
 *     CrmRegistrationCleanup @ 0x180032430 (CrmRegistrationCleanup.c)
 * Callees:
 *     CrmActivityDereference @ 0x180020BC8 (CrmActivityDereference.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRegistrationRemoveActivity(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v6; // rax
  void **v7; // rcx
  int v9; // [rsp+30h] [rbp-29h] BYREF
  __int64 v10; // [rsp+38h] [rbp-21h] BYREF
  char v11[32]; // [rsp+40h] [rbp-19h] BYREF
  UUID *v12; // [rsp+60h] [rbp+7h]
  __int64 v13; // [rsp+68h] [rbp+Fh]
  __int64 *v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  int *v16; // [rsp+80h] [rbp+27h]
  __int64 v17; // [rsp+88h] [rbp+2Fh]

  if ( !a3 )
    CempLockAcquireExclusive(a1);
  v6 = (_QWORD *)*a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v7 = (void **)a2[1], *v7 != a2) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = v7;
  if ( !a3 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    RtlReleaseSRWLockExclusive(a1);
  }
  a2[1] = a2;
  *a2 = a2;
  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 2) != 0 && (qword_1800E1300 & 2) == qword_1800E1300 )
  {
    v13 = 16LL;
    v12 = &Uuid;
    v10 = *(_QWORD *)(a1 + 16);
    v15 = 8LL;
    v14 = &v10;
    v9 = *((_DWORD *)a2 + 17);
    v16 = &v9;
    v17 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CCD3C, 0LL, 0LL, 5, v11);
  }
  return CrmActivityDereference(a2);
}
