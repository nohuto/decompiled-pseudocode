/*
 * XREFs of SmHwAcceleratorCreate @ 0x140820A74
 * Callers:
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x140820CA8 (SmHwAcceleratorMgrAcquireAccelerators.c)
 * Callees:
 *     SmAllocEx @ 0x1403EEAF0 (SmAllocEx.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     AccelInitializeCompressionWorkspace @ 0x1406E30D4 (AccelInitializeCompressionWorkspace.c)
 *     AccelInitializeDescriptor @ 0x1406E3224 (AccelInitializeDescriptor.c)
 *     AccelQueryDescriptorSize @ 0x1406E33A0 (AccelQueryDescriptorSize.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 SmHwAcceleratorCreate(__int64 a1, __int64 *a2, int a3, ...)
{
  int v3; // r12d
  int DescriptorSize; // ebx
  unsigned int v7; // r14d
  struct _PRIVILEGE_SET *v8; // rsi
  __int64 i; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  __int128 v14; // xmm0
  _QWORD *v15; // rax
  __int128 v17; // [rsp+20h] [rbp-B1h] BYREF
  _QWORD v18[3]; // [rsp+30h] [rbp-A1h] BYREF
  int v19; // [rsp+48h] [rbp-89h]
  int v20; // [rsp+4Ch] [rbp-85h]
  int v21; // [rsp+50h] [rbp-81h]
  __int64 v22; // [rsp+54h] [rbp-7Dh]
  __int64 v23; // [rsp+5Ch] [rbp-75h]
  int v24; // [rsp+64h] [rbp-6Dh]
  __int64 v25; // [rsp+68h] [rbp-69h]
  __int64 v26; // [rsp+70h] [rbp-61h]
  int v27; // [rsp+80h] [rbp-51h] BYREF
  _DWORD v28[39]; // [rsp+84h] [rbp-4Dh] BYREF
  __int64 v29; // [rsp+138h] [rbp+67h]
  __int64 v30; // [rsp+148h] [rbp+77h] BYREF
  va_list va; // [rsp+148h] [rbp+77h]
  _QWORD *v32; // [rsp+150h] [rbp+7Fh]
  va_list va1; // [rsp+158h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v30 = va_arg(va1, _QWORD);
  v32 = va_arg(va1, _QWORD *);
  v3 = *(_DWORD *)(a1 + 1312);
  LODWORD(v30) = 0;
  v28[0] = 0;
  v17 = 0LL;
  memset_0(&v27, 0, 0x64uLL);
  DescriptorSize = AccelQueryDescriptorSize(*a2, (__int64 *)va);
  if ( DescriptorSize >= 0 )
  {
    v7 = v30;
    v8 = (struct _PRIVILEGE_SET *)SmAllocEx((unsigned int)v30, 0x64416D73u, -1);
    if ( v8 )
    {
      for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
      {
        v10 = a2[i];
        *(_QWORD *)&v17 = 0x300100001LL;
        *((_QWORD *)&v17 + 1) = v10;
        memset_0(v28, 0, 0x64uLL);
        v27 = 6815745;
        DescriptorSize = AccelQueryResourceInformation(&v17, &v27);
        if ( DescriptorSize < 0 )
          goto LABEL_12;
        v11 = a2[i];
        *((_DWORD *)va + i) = v28[4];
        AccelInitializeDescriptor(v11, v7, (__int64)v8);
        v18[0] = 4718593LL;
        v23 = 0LL;
        v24 = 0;
        v26 = 0LL;
        v18[1] = v8;
        v18[2] = 0LL;
        v20 = 7 - ((_DWORD)i != 0);
        v19 = 0;
        v21 = 1;
        v22 = 1LL;
        v25 = 0LL;
        DescriptorSize = AccelInitializeCompressionWorkspace((__int64)v18);
        if ( (int)(DescriptorSize + 0x80000000) >= 0 && DescriptorSize != -1073741789 )
          goto LABEL_12;
        *((_DWORD *)&v29 + i) = v26;
      }
      v12 = (_QWORD *)SmAllocEx(72LL, 0x68416D73u, a3 | 0x80000000);
      v13 = v12;
      if ( v12 )
      {
        memset_0(v12, 0, 0x48uLL);
        v14 = *(_OWORD *)a2;
        v13[6] = v30;
        v13[7] = v29;
        *((_DWORD *)v13 + 16) = v3;
        v15 = v32;
        *((_OWORD *)v13 + 1) = v14;
        *((_DWORD *)v13 + 10) = v7;
        *((_DWORD *)v13 + 11) = a3;
        *v15 = v13;
        DescriptorSize = 0;
      }
      else
      {
        DescriptorSize = -1073741670;
      }
LABEL_12:
      CmSiFreeMemory(v8);
    }
  }
  return (unsigned int)DescriptorSize;
}
