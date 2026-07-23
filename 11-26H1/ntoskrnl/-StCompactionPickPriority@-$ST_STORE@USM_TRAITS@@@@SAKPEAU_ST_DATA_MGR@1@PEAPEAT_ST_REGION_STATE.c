/*
 * XREFs of ?StCompactionPickPriority@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@K1K@Z @ 0x1404812D8
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140393B98 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPickPriority(
        __int64 a1,
        unsigned __int16 **a2,
        unsigned int a3,
        void *a4)
{
  __int64 v4; // rbx
  unsigned __int16 **v8; // r9
  unsigned __int16 *v9; // r11
  unsigned __int64 v10; // rcx
  __int64 v11; // r10
  int v12; // r9d
  char *v13; // rdx
  unsigned int v14; // r8d
  int i; // ecx
  unsigned int v16; // eax
  unsigned int v17; // ebx
  unsigned int v19; // eax
  _DWORD v20[71]; // [rsp+20h] [rbp-168h] BYREF
  char v21; // [rsp+13Ch] [rbp-4Ch] BYREF

  v4 = a3;
  memset_0(v20, 0, 0x140uLL);
  v8 = &a2[v4];
  while ( a2 < v8 )
  {
    v9 = *a2;
    v10 = (unsigned __int64)**a2 >> 13;
    v11 = (unsigned int)v20[10 * v10];
    if ( (unsigned int)v11 < 4 )
    {
      v20[10 * v10 + 1] += **a2 & 0x1FFF;
      v20[10 * v10] = v11 + 1;
      *(_QWORD *)&v20[10 * v10 + 2 + 2 * v11] = v9;
    }
    ++a2;
  }
  v12 = -1;
  v13 = &v21;
  v14 = 0;
  for ( i = 7; i >= 0; --i )
  {
    v16 = *((_DWORD *)v13 - 1);
    if ( v16 > 1 )
    {
      v19 = *(_DWORD *)(a1 + 808) * v16 - *(_DWORD *)v13;
      if ( v14 < v19 )
      {
        v14 = v19;
        v12 = i;
      }
    }
    v13 -= 40;
  }
  v17 = v20[10 * v12];
  if ( v17 > 4 )
    v17 = 4;
  memmove(a4, &v20[10 * v12 + 2], 8LL * v17);
  return v17;
}
