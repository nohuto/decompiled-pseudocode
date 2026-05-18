/*
 * XREFs of sub_18007DD3C @ 0x18007DD3C
 * Callers:
 *     sub_180042E1C @ 0x180042E1C (sub_180042E1C.c)
 *     sub_18004AD40 @ 0x18004AD40 (sub_18004AD40.c)
 *     sub_18008022C @ 0x18008022C (sub_18008022C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_18003AC0C @ 0x18003AC0C (sub_18003AC0C.c)
 *     sub_1800521B0 @ 0x1800521B0 (sub_1800521B0.c)
 *     sub_180052608 @ 0x180052608 (sub_180052608.c)
 *     sub_1800533F0 @ 0x1800533F0 (sub_1800533F0.c)
 *     sub_180054068 @ 0x180054068 (sub_180054068.c)
 *     sub_18007D680 @ 0x18007D680 (sub_18007D680.c)
 *     sub_18007E080 @ 0x18007E080 (sub_18007E080.c)
 *     sub_18007E42C @ 0x18007E42C (sub_18007E42C.c)
 *     sub_18007E800 @ 0x18007E800 (sub_18007E800.c)
 *     sub_180095DCC @ 0x180095DCC (sub_180095DCC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
unsigned __int64 __fastcall sub_18007DD3C(__int64 a1, _QWORD *a2, int a3)
{
  int v3; // ebx
  unsigned int v6; // r12d
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rsi
  unsigned int v11; // edi
  int v12; // edi
  unsigned __int64 result; // rax
  __int64 v14; // rdi
  unsigned int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // [rsp+20h] [rbp-49h]
  __int64 v25; // [rsp+28h] [rbp-41h]
  __int64 v26; // [rsp+30h] [rbp-39h] BYREF
  __int64 v27; // [rsp+38h] [rbp-31h]
  __int64 v28; // [rsp+40h] [rbp-29h] BYREF
  __int64 v29; // [rsp+48h] [rbp-21h]
  __int64 v30; // [rsp+50h] [rbp-19h] BYREF
  __int64 v31; // [rsp+58h] [rbp-11h]
  __int64 v32; // [rsp+60h] [rbp-9h] BYREF
  __int64 v33; // [rsp+68h] [rbp-1h]
  __int64 v34; // [rsp+70h] [rbp+7h] BYREF
  __int64 v35; // [rsp+78h] [rbp+Fh]
  unsigned int v36; // [rsp+D0h] [rbp+67h] BYREF
  int v37; // [rsp+D8h] [rbp+6Fh] BYREF
  int v38; // [rsp+E0h] [rbp+77h]
  __int64 v39; // [rsp+E8h] [rbp+7Fh]

  v38 = a3;
  v3 = a3;
  v6 = *(_DWORD *)(*a2 + 88LL);
  sub_180012A94(*a2 + 72LL, &v26);
  if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a1 + 40) )
  {
    v7 = *(_QWORD *)(a1 + 128);
    if ( !v7 || !(unsigned __int8)sub_18007E42C(v7, v6) )
    {
      v8 = sub_180012C40(&v30, &v26);
      sub_18007E080(a1, v8);
    }
    sub_18007E800(a1);
    v36 = v6;
    if ( *(_DWORD *)(a1 + 80) != *(_DWORD *)(*(_QWORD *)sub_18007D680((__int64 *)(a1 + 88), (__int64)&v34, &v36) + 32LL) )
    {
      v9 = *a2;
      v10 = *(_QWORD *)(a1 + 32);
      v11 = (*(_QWORD *)(a1 + 40) - v10) & 0xFFFFFFFC;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a2 + 96LL) + 8LL))(*(_QWORD *)(*a2 + 96LL), *a2);
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v9 + 288LL))(v9, a1 + 128, v10, v11);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 296LL))(v9);
      v12 = *(_DWORD *)(a1 + 80);
      v36 = v6;
      *(_DWORD *)(*(_QWORD *)sub_18007D680((__int64 *)(a1 + 88), (__int64)&v34, &v36) + 32LL) = v12;
    }
  }
  result = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 200LL))(v26, &v37);
  v14 = 0LL;
  do
  {
    if ( ((1 << v14) & v3) != 0 )
    {
      if ( *(_QWORD *)(a1 + 128) )
        result = (unsigned __int64)sub_18003AC0C(
                                     (_QWORD *)(*(_QWORD *)(*a2 + 96LL)
                                              + 16 * (*(unsigned int *)(a1 + 144) + 12 * v14 + 73)),
                                     (_QWORD *)(a1 + 128));
      if ( ((1 << v14) & v37) != 0 )
      {
        v15 = 0;
        v16 = *(_QWORD *)(a1 + 56);
        result = 0xCCCCCCCCCCCCCCCDuLL * ((*(_QWORD *)(a1 + 64) - v16) >> 3);
        if ( result )
        {
          v17 = 0LL;
          do
          {
            sub_180012C40(&v30, (_QWORD *)(v16 + 40 * v17));
            sub_180012C40(&v28, (_QWORD *)(v18 + 16));
            v36 = *(_DWORD *)(v19 + 32);
            v20 = v30;
            if ( v30 )
            {
              v21 = *sub_180054068(v30, &v32, v6);
              v39 = v21;
              if ( v33 )
              {
                sub_180010EC8(v33);
                v21 = v39;
              }
              if ( !v21 )
                sub_1800533F0(v20, &v26);
              sub_180095DCC(*(_QWORD *)(*a2 + 96LL) + 4632LL, (unsigned int)v14, &v30, v36, v24, v25);
              v22 = v28;
              if ( v28 )
              {
                v23 = *sub_180052608(v28, &v34, v6);
                v39 = v23;
                if ( v35 )
                {
                  sub_180010EC8(v35);
                  v23 = v39;
                }
                if ( !v23 )
                  sub_1800521B0(v22, &v26);
                sub_180013540(
                  (__int64 *)(*(_QWORD *)(*a2 + 96LL) + 16 * (v36 + 616LL + 16LL * (unsigned int)v14)),
                  &v28);
              }
            }
            if ( v29 )
              sub_180010EC8(v29);
            if ( v31 )
              sub_180010EC8(v31);
            ++v15;
            v16 = *(_QWORD *)(a1 + 56);
            v17 = v15;
            result = 0xCCCCCCCCCCCCCCCDuLL * ((*(_QWORD *)(a1 + 64) - v16) >> 3);
          }
          while ( v15 < result );
          v3 = v38;
        }
      }
    }
    v14 = (unsigned int)(v14 + 1);
  }
  while ( (unsigned int)v14 < 6 );
  if ( v27 )
    return sub_180010EC8(v27);
  return result;
}
