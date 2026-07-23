/*
 * XREFs of KiConfigureHeteroMultiCoreProcessors @ 0x140B3ACB0
 * Callers:
 *     KiComputeHeteroConfig @ 0x140452E08 (KiComputeHeteroConfig.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KiPrepareUpdateCoresHeteroMask @ 0x1407BC310 (KiPrepareUpdateCoresHeteroMask.c)
 */

__int64 __fastcall KiConfigureHeteroMultiCoreProcessors(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  int v8; // esi
  int *v9; // rdi
  int i; // ebx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  char v14; // cl
  __int64 result; // rax
  struct _KAFFINITY_EX v16; // [rsp+70h] [rbp-90h] BYREF
  struct _KAFFINITY_EX v17; // [rsp+180h] [rbp+80h] BYREF
  __int64 v18; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v19[264]; // [rsp+298h] [rbp+198h] BYREF
  struct _KAFFINITY_EX v20; // [rsp+3A0h] [rbp+2A0h] BYREF
  struct _KAFFINITY_EX v21; // [rsp+4B0h] [rbp+3B0h] BYREF
  struct _KAFFINITY_EX v22; // [rsp+5C0h] [rbp+4C0h] BYREF

  memset_0(&v20.8, 0, sizeof(v20.8));
  memset_0(v19, 0, 0x100uLL);
  memset_0(&v16.8, 0, sizeof(v16.8));
  memset_0(&v17.8, 0, sizeof(v17.8));
  memset_0(&v22.8, 0, sizeof(v22.8));
  memset_0(&v21.8, 0, sizeof(v21.8));
  *(_QWORD *)&v22.Count = 2097153LL;
  memset_0(&v22.8, 0, sizeof(v22.8));
  *(_QWORD *)&v21.Count = 2097153LL;
  memset_0(&v21.8, 0, sizeof(v21.8));
  *(_QWORD *)&v17.Count = 2097153LL;
  memset_0(&v17.8, 0, sizeof(v17.8));
  *(_QWORD *)&v16.Count = 2097153LL;
  memset_0(&v16.8, 0, sizeof(v16.8));
  *(_QWORD *)&v20.Count = 2097153LL;
  memset_0(&v20.8, 0, sizeof(v20.8));
  v18 = 2097153LL;
  memset_0(v19, 0, 0x100uLL);
  v8 = 0;
  v9 = KiDynamicHeteroCpuPolicy;
  do
  {
    for ( i = 0; i < 2; ++i )
    {
      memset_0(&v22.8, 0, 8LL * v22.Count);
      v22.Count = 1;
      memset_0(&v21.8, 0, 8LL * v21.Count);
      v21.Count = 1;
      memset_0(&v17.8, 0, 8LL * v17.Count);
      v17.Count = 1;
      memset_0(&v16.8, 0, 8LL * v16.Count);
      v16.Count = 1;
      memset_0(&v20.8, 0, 8LL * v20.Count);
      v20.Count = 1;
      memset_0(v19, 0, 8LL * (unsigned __int16)v18);
      v11 = *v9;
      LOWORD(v18) = 1;
      v12 = v11 - 1;
      if ( v12 && (v13 = v12 - 1) != 0 )
      {
        if ( (unsigned int)(v13 - 1) > 1 )
          goto LABEL_9;
        v14 = 0;
      }
      else
      {
        v14 = 1;
      }
      KiPrepareUpdateCoresHeteroMask(v14, a1, i, v8, a3, a2, a4, &v22, &v21, &v20, (unsigned __int16 *)&v18, &v17, &v16);
LABEL_9:
      result = 1LL;
      ++v9;
    }
    ++v8;
  }
  while ( v8 < 7 );
  return result;
}
