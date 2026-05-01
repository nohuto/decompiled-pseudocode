/*
 * XREFs of _lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator() @ 0x180049EB8
 * Callers:
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180048E50 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 * Callees:
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x18004A13C (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()(LPVOID **a1, _QWORD *a2)
{
  char v3; // si
  LPVOID *v4; // r14
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  unsigned __int64 i; // rdi
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  int v8; // r15d
  char v9; // di
  LPVOID *v10; // rdi
  unsigned __int64 v11; // r8
  LPVOID v12; // rbx
  unsigned __int64 v13; // rbx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r14
  char *v18; // rax
  char *v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  __int64 (__fastcall ***v23)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v24; // [rsp+20h] [rbp-10h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-8h]
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+80h] [rbp+50h] BYREF
  __int64 v27; // [rsp+88h] [rbp+58h] BYREF

  v3 = 0;
  v26 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)*a2 + 80LL))(
         *a2,
         &v26) < 0 )
  {
    v5 = v25;
LABEL_16:
    v9 = 0;
  }
  else
  {
    v4 = *a1;
    v5 = v26;
    v25 = v26;
    if ( v26 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v26)[1])(v26);
    v3 = 1;
    for ( i = 0LL; i < (unsigned __int64)v4[1]; ++i )
    {
      v7 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)*v4 + i);
      if ( v7 && v5 )
      {
        if ( v7 == (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v5 )
          goto LABEL_16;
        v24 = 0LL;
        v27 = 0LL;
        if ( (**v7)(v7, &GUID_00000000_0000_0000_c000_000000000046, &v24) >= 0 )
        {
          v8 = (**v5)(v5, &GUID_00000000_0000_0000_c000_000000000046, &v27);
          if ( v8 >= 0 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          if ( v8 >= 0 && v24 == v27 )
            goto LABEL_16;
        }
      }
    }
    v9 = 1;
  }
  if ( (v3 & 1) != 0 && v5 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v5)[2])(v5);
  if ( v9 )
  {
    v10 = *a1;
    v11 = (unsigned __int64)(*a1)[3];
    v12 = (*a1)[1];
    if ( v12 != (LPVOID)v11 )
      goto LABEL_36;
    v13 = (unsigned __int64)v12 + 1;
    if ( v13 > 0xFFFFFFFE )
      goto LABEL_25;
    if ( v13 <= v11 )
      goto LABEL_36;
    if ( is_mul_ok(v11, 2uLL) )
    {
      v16 = v11 + 4096;
      if ( v11 <= 0x1000 )
        v16 = 2 * v11;
      if ( v13 <= v16 )
      {
        v13 = v16;
        if ( v16 > 0xFFFFFFFE )
          v13 = 4294967294LL;
      }
      v17 = 8 * v13;
      if ( is_mul_ok(v13, 8uLL) )
      {
        v18 = (char *)CoTaskMemRealloc(*v10, 8 * v13);
        v19 = v18;
        if ( v18 )
        {
          v20 = CTCoAllocPolicy::_CoTaskMemSize(v18);
          if ( v20 > v17 )
            memset_0(&v19[v17], 0, v20 - v17);
          v10[3] = (LPVOID)v13;
          *v10 = v19;
LABEL_36:
          v21 = (__int64)v10[1] + 1;
          v10[1] = (LPVOID)v21;
          v22 = (char *)*v10 + 8 * v21 - 8;
          if ( v22 )
          {
            v23 = v26;
            *v22 = v26;
            if ( v23 )
              ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v23)[1])(v23);
          }
        }
      }
    }
  }
LABEL_25:
  v14 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v14)[2])(v14);
  }
  return 1;
}
