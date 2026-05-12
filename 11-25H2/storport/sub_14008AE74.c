/*
 * XREFs of sub_14008AE74 @ 0x14008AE74
 * Callers:
 *     sub_14007BE40 @ 0x14007BE40 (sub_14007BE40.c)
 *     sub_1400806F4 @ 0x1400806F4 (sub_1400806F4.c)
 * Callees:
 *     sub_14006FED8 @ 0x14006FED8 (sub_14006FED8.c)
 *     sub_14008C3E8 @ 0x14008C3E8 (sub_14008C3E8.c)
 *     sub_14008C4DC @ 0x14008C4DC (sub_14008C4DC.c)
 *     sub_14008CC90 @ 0x14008CC90 (sub_14008CC90.c)
 *     sub_14008D024 @ 0x14008D024 (sub_14008D024.c)
 *     sub_1401348FC @ 0x1401348FC (sub_1401348FC.c)
 *     sub_140134A98 @ 0x140134A98 (sub_140134A98.c)
 *     sub_140135288 @ 0x140135288 (sub_140135288.c)
 *     sub_1401355EC @ 0x1401355EC (sub_1401355EC.c)
 *     sub_140135FC4 @ 0x140135FC4 (sub_140135FC4.c)
 *     sub_140136054 @ 0x140136054 (sub_140136054.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14008AE74(__int64 a1, int a2, unsigned int a3, __int64 a4, void *a5, _BYTE *a6)
{
  int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v12; // eax
  _DWORD *v13; // r12
  __int64 v14; // rdx
  __int64 i; // r14
  int v16; // eax
  __int64 v17; // r9
  void *v18; // rdi
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h]
  void *v24; // [rsp+70h] [rbp-90h]
  _OWORD v25[2]; // [rsp+78h] [rbp-88h] BYREF
  int v26; // [rsp+98h] [rbp-68h]
  _BYTE Dst[80]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v28[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v29; // [rsp+120h] [rbp+20h]

  v23 = a4;
  v24 = a5;
  memset_0(Dst, 0, sizeof(Dst));
  P = 0LL;
  v22 = 0LL;
  v26 = 0;
  v29 = 0LL;
  memset(v25, 0, sizeof(v25));
  memset(v28, 0, sizeof(v28));
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 507) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v9 = *(_QWORD *)(a1 + 3584);
    if ( !v9 )
      return (unsigned int)-1073741637;
    v10 = *(_QWORD *)(a1 + 3592);
  }
  else
  {
    if ( *(_DWORD *)a1 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v9 = *(_QWORD *)(a1 + 6056);
    if ( !v9 )
      return (unsigned int)-1073741637;
    v10 = *(_QWORD *)(a1 + 6064);
  }
  if ( !v10 || !*(_BYTE *)(v10 + 152) || !*(_BYTE *)(v10 + 153) || !*(_BYTE *)(v10 + 134) )
    return (unsigned int)-1073741637;
  v12 = sub_14008D024(a1, &P, a6);
  v13 = P;
  v8 = v12;
  if ( v12 < 0 )
    goto LABEL_31;
  v14 = *(unsigned int *)(v10 + 128);
  for ( i = 0LL; (unsigned int)i < (unsigned int)v14; i = (unsigned int)(i + 1) )
  {
    if ( *((_DWORD *)P + 20 * i + 2) )
    {
      v16 = *((_DWORD *)P + 20 * i + 18);
      if ( v16 )
      {
        if ( v16 == a2 )
        {
          v8 = -1073741808;
          goto LABEL_31;
        }
      }
    }
  }
  LOBYTE(v14) = 1;
  v8 = sub_14008C3E8(v9, v14, a3, v23, v25, a6);
  if ( v8 < 0 )
    goto LABEL_31;
  v8 = sub_140135288(v9, 2LL, v28);
  if ( v8 < 0 )
  {
    sub_14006FED8(a6, 32LL, (__int64)"TcglibOpenSession");
    goto LABEL_31;
  }
  v8 = sub_140135FC4(v9, v28);
  if ( v8 >= 0 )
  {
    v8 = sub_1401348FC(v9, (unsigned int)v28, a2, (unsigned int)v25, (__int64)&v22);
    if ( v8 >= 0 )
    {
      i = 0LL;
      v17 = 1LL;
      while ( (unsigned int)i < *(_DWORD *)(v10 + 128) )
      {
        if ( *(_QWORD *)&v13[20 * i] == v22 )
        {
          v8 = sub_1401355EC(v9, (unsigned int)v28, v13[20 * i + 2], 1, 1, 1, 1, 0LL, 0LL);
          if ( v8 < 0 )
            sub_14006FED8(a6, 32LL, (__int64)"TcglibSetBand");
          break;
        }
        i = (unsigned int)(i + 1);
      }
      if ( (_DWORD)i != *(_DWORD *)(v10 + 128) )
      {
LABEL_43:
        sub_140136054(v9, v28, (unsigned int)v8, v17);
        if ( v8 >= 0 )
        {
          sub_140134A98(v9, v28);
          v18 = v24;
          memset_0(v24, 0, 0x40uLL);
          v8 = sub_14008CC90(a1, (unsigned int)v13[20 * i + 2], Dst, a6);
          if ( v8 >= 0 )
            sub_14008C4DC(Dst, v18);
          goto LABEL_31;
        }
        goto LABEL_30;
      }
      v8 = -1073741275;
    }
    sub_14006FED8(a6, 32LL, (__int64)"TcglibAssignNamespaceLocking");
    goto LABEL_43;
  }
  sub_14006FED8(a6, 32LL, (__int64)"TcglibStartTransaction");
LABEL_30:
  sub_140134A98(v9, v28);
LABEL_31:
  if ( v13 )
    ExFreePoolWithTag(v13, 0x43546152u);
  return (unsigned int)v8;
}
