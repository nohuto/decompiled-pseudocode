/*
 * XREFs of EtwpPoolRunDown @ 0x140835BF8
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     ExGetBigPoolInfo @ 0x140348148 (ExGetBigPoolInfo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExGetPoolTagInfo @ 0x140B5A170 (ExGetPoolTagInfo.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpPoolRunDown(__int64 a1, char a2)
{
  _DWORD *v2; // rbx
  char v3; // si
  unsigned int v4; // edi
  unsigned __int16 v6; // r14
  __int64 Pool2; // rax
  int PoolTagInfo; // eax
  unsigned int v9; // edi
  _DWORD *v10; // r15
  unsigned int v11; // r8d
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // edi
  unsigned __int16 v15; // r14
  unsigned int *v16; // rax
  int BigPoolInfo; // eax
  unsigned int v18; // edi
  _DWORD *i; // rsi
  unsigned int v20; // r8d
  __int64 v21; // rdx
  int v22; // eax
  unsigned int v24; // [rsp+34h] [rbp-4Ch] BYREF
  unsigned int v25; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-40h] BYREF
  _DWORD *v27; // [rsp+50h] [rbp-30h]
  int v28; // [rsp+58h] [rbp-28h]
  int v29; // [rsp+5Ch] [rbp-24h]

  v2 = 0LL;
  v24 = 0;
  v26[0] = &v24;
  v3 = a2;
  v26[1] = 4LL;
  v4 = 48;
  v25 = 48;
  v6 = 3625 - (a2 != 0);
  while ( 1 )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    Pool2 = ExAllocatePool2(0x100uLL);
    v2 = (_DWORD *)Pool2;
    if ( !Pool2 )
      break;
    PoolTagInfo = ExGetPoolTagInfo(Pool2, v4, (unsigned int)&v25, 0, 1);
    if ( PoolTagInfo != -1073741820 )
    {
      if ( PoolTagInfo >= 0 )
      {
        v9 = *v2;
        v10 = v2 + 2;
        if ( *v2 )
        {
          do
          {
            v11 = *(_DWORD *)a1;
            v12 = *(_QWORD *)(a1 + 1360);
            v13 = v9;
            v27 = v10;
            if ( v9 > 0x64 )
              v13 = 100;
            v29 = 0;
            v24 = v13;
            v28 = 40 * v13;
            EtwpLogKernelEvent((__int64)v26, v12, v11, 2u, v6, 0x501802u);
            v10 += 10 * v24;
            v9 -= v24;
          }
          while ( v9 );
          v3 = a2;
        }
      }
      break;
    }
    v4 = v25;
  }
  v14 = 32;
  v25 = 32;
  v15 = 3627 - (v3 != 0);
  while ( 1 )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    v16 = (unsigned int *)ExAllocatePool2(0x100uLL);
    v2 = v16;
    if ( !v16 )
      break;
    BigPoolInfo = ExGetBigPoolInfo(0, v16, v14, &v25, 0);
    if ( BigPoolInfo != -1073741820 )
    {
      if ( BigPoolInfo >= 0 )
      {
        v18 = *v2;
        for ( i = v2 + 2; v18; v18 -= v24 )
        {
          v20 = *(_DWORD *)a1;
          v21 = *(_QWORD *)(a1 + 1360);
          v22 = v18;
          v27 = i;
          if ( v18 > 0x64 )
            v22 = 100;
          v29 = 0;
          v24 = v22;
          v28 = 24 * v22;
          EtwpLogKernelEvent((__int64)v26, v21, v20, 2u, v15, 0x501802u);
          i += 6 * v24;
        }
      }
      ExFreePoolWithTag(v2, 0);
      return;
    }
    v14 = v25;
  }
}
