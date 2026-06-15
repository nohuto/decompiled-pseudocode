/*
 * XREFs of sub_14007B240 @ 0x14007B240
 * Callers:
 *     <none>
 * Callees:
 *     sub_14003AA0C @ 0x14003AA0C (sub_14003AA0C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14007B2F0 @ 0x14007B2F0 (sub_14007B2F0.c)
 */

__int64 __fastcall sub_14007B240(__int64 a1, int a2, _DWORD *a3, _BYTE *a4)
{
  int v8; // ecx
  unsigned int v9; // edi
  int v11; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0;
  v11 = 0;
  sub_14003AA0C(&v12, (RTL_SRWLOCK *)(a1 + 80), &v11);
  v9 = v11;
  if ( v11 >= 0 )
    v9 = sub_14007B2F0(v8, *(_QWORD *)(a1 + 64), *(_DWORD *)(a1 + 48), a2, (__int64)a3, (__int64)a4);
  if ( v12 )
  {
    if ( LODWORD(v12->Ptr) == 1 )
      --LODWORD(v12[1].Ptr);
    else
      ReleaseSRWLockShared(v12 + 1);
  }
  j_j__o_free(0LL);
  return v9;
}
