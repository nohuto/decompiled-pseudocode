/*
 * XREFs of MiCheckHoldFaultForHotPatch @ 0x1404C31E0
 * Callers:
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockFaultWorkingSet @ 0x1404C3324 (MiUnlockFaultWorkingSet.c)
 */

__int64 __fastcall MiCheckHoldFaultForHotPatch(__int64 a1, unsigned __int64 *a2)
{
  __int64 *v2; // r14
  bool v3; // zf
  __int64 v4; // r12
  unsigned int v6; // esi
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  unsigned __int64 v9; // rcx
  _QWORD *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v14; // rcx
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int128 Object; // [rsp+40h] [rbp-20h] BYREF
  char *v17; // [rsp+50h] [rbp-10h]

  v2 = (__int64 *)(a2 + 7);
  v3 = (a2[1] & 2) == 0;
  v4 = a2[7];
  v15 = 0LL;
  v17 = 0LL;
  Object = 0LL;
  if ( v3 || *a2 >= 0x7FFFFFFF0000LL )
    return 0LL;
  v6 = 0;
  v7 = (_QWORD *)(a1 + 24);
  while ( 1 )
  {
    v8 = (_QWORD *)*v7;
    if ( (_QWORD *)*v7 == v7 )
      break;
    v9 = *a2;
    do
    {
      v10 = v8;
      if ( v9 >= v8[2] && v9 <= v8[3] )
        break;
      v8 = (_QWORD *)*v8;
    }
    while ( v8 != v7 );
    if ( v8 == v7 )
      break;
    v6 = 1;
    if ( (*((_BYTE *)a2 + 69) & 1) != 0 )
    {
      LOWORD(Object) = 0;
      v17 = (char *)&Object + 8;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      BYTE2(Object) = 6;
      DWORD1(Object) = 0;
      v14 = (_QWORD *)v10[5];
      if ( (_QWORD *)*v14 != v10 + 4 )
        __fastfail(3u);
      *((_QWORD *)&v15 + 1) = v10[5];
      *(_QWORD *)&v15 = v10 + 4;
      *v14 = &v15;
      v10[5] = &v15;
      MiUnlockFaultWorkingSet(v2);
      KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
    }
    else
    {
      MiUnlockFaultWorkingSet(v2);
    }
    MiLockWorkingSetExclusive(v4, v11, v12);
    *((_BYTE *)a2 + 69) |= 1u;
  }
  return v6;
}
