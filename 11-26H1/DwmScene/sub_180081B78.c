/*
 * XREFs of sub_180081B78 @ 0x180081B78
 * Callers:
 *     sub_180082258 @ 0x180082258 (sub_180082258.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180081D28 @ 0x180081D28 (sub_180081D28.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180081B78(__int64 *a1, size_t a2, const void *a3, size_t a4)
{
  size_t v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  void *v10; // rcx
  void **pExceptionObject; // [rsp+28h] [rbp-18h] BYREF
  char *v13; // [rsp+30h] [rbp-10h]
  char v14; // [rsp+38h] [rbp-8h]
  char v15; // [rsp+88h] [rbp+48h] BYREF

  v7 = a2;
  if ( a4 != -1LL )
    v7 = a4;
  v8 = o__aligned_malloc(a2, 16LL);
  *a1 = 0LL;
  a1[1] = 0LL;
  v15 = 0;
  pExceptionObject = (void **)v8;
  v13 = &v15;
  v9 = sub_18001C514(24LL);
  if ( v9 )
  {
    *(_DWORD *)(v9 + 8) = 1;
    *(_DWORD *)(v9 + 12) = 1;
    *(_QWORD *)v9 = &std::_Ref_count_resource<void *,_lambda_2bb65f39da56ce77b91824536c9c4563_>::`vftable';
    *(_QWORD *)(v9 + 16) = v8;
  }
  *a1 = v8;
  a1[1] = v9;
  v14 = 0;
  sub_180081D28(&pExceptionObject);
  v10 = (void *)*a1;
  if ( !*a1 )
  {
    v13 = "bad allocation";
    pExceptionObject = &stdext::bad_alloc::`vftable';
    throw (stdext::bad_alloc *)&pExceptionObject;
  }
  if ( a3 )
    sub_1800114C0(v10, a2, a3, v7);
  else
    memset(v10, 0, a2);
  return a1;
}
