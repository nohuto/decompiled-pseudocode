/*
 * XREFs of AccelSubmitWorkAsync @ 0x14053314C
 * Callers:
 *     AccelpSubmitWork @ 0x1402A1434 (AccelpSubmitWork.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x1405342F8 (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall AccelSubmitWorkAsync(__int64 *a1)
{
  int v2; // edx
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rax
  _DWORD v7[2]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+28h] [rbp-80h]
  __int64 *v9; // [rsp+30h] [rbp-78h]
  int v10; // [rsp+38h] [rbp-70h]
  __int64 v11; // [rsp+40h] [rbp-68h]
  __int64 v12; // [rsp+48h] [rbp-60h]
  __int64 v13; // [rsp+50h] [rbp-58h]
  __int64 v14; // [rsp+58h] [rbp-50h]

  v7[1] = 0;
  memset_0(v7, 0, 0x7CuLL);
  if ( !a1 )
    return 3221225485LL;
  v2 = 1;
  v3 = *(_QWORD *)(*a1 + 40);
  v4 = *(_QWORD *)(*a1 + 16);
  if ( !v3 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v4 + 36) & 4) != 0 && (a1[4] & 1) != 0 )
    goto LABEL_7;
  if ( *(_DWORD *)(v4 + 432) != 1 )
  {
LABEL_8:
    v8 = *a1;
    v10 = *((_DWORD *)a1 + 6);
    v11 = a1[6];
    v5 = a1[7];
    v7[0] = v2;
    v12 = v5;
    v9 = a1;
    v13 = 0LL;
    v14 = v3;
    return AccelpInternalOperationHandler(v7);
  }
  if ( (*(_DWORD *)(v4 + 36) & 4) != 0 )
  {
LABEL_7:
    v2 = 5;
    goto LABEL_8;
  }
  return 3221225635LL;
}
