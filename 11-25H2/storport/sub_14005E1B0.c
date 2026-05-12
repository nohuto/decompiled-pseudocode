/*
 * XREFs of sub_14005E1B0 @ 0x14005E1B0
 * Callers:
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 * Callees:
 *     sub_1400099A0 @ 0x1400099A0 (sub_1400099A0.c)
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     sub_140055EE0 @ 0x140055EE0 (sub_140055EE0.c)
 *     sub_140058FB8 @ 0x140058FB8 (sub_140058FB8.c)
 *     sub_14006191C @ 0x14006191C (sub_14006191C.c)
 *     sub_140066768 @ 0x140066768 (sub_140066768.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14005E1B0(__int64 a1)
{
  int v3; // r15d
  ULONGLONG UnbiasedInterruptTime; // rbx
  unsigned int v5; // esi
  ULONGLONG v6; // rax
  unsigned int v7; // r8d
  int v8; // r12d
  ULONGLONG v9; // r14
  __int64 v10; // r9
  __int64 v11; // rcx
  KIRQL v12; // bl
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // [rsp+30h] [rbp-89h] BYREF
  int v16; // [rsp+34h] [rbp-85h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-81h] BYREF
  int v18; // [rsp+3Ch] [rbp-7Dh] BYREF
  int v19; // [rsp+40h] [rbp-79h] BYREF
  ULONGLONG v20; // [rsp+48h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+50h] [rbp-69h] BYREF
  __int64 v22; // [rsp+70h] [rbp-49h]
  int v23; // [rsp+78h] [rbp-41h]
  int v24; // [rsp+7Ch] [rbp-3Dh]
  int *v25; // [rsp+80h] [rbp-39h]
  int v26; // [rsp+88h] [rbp-31h]
  int v27; // [rsp+8Ch] [rbp-2Dh]
  char *v28; // [rsp+90h] [rbp-29h]
  int v29; // [rsp+98h] [rbp-21h]
  int v30; // [rsp+9Ch] [rbp-1Dh]
  int *v31; // [rsp+A0h] [rbp-19h]
  int v32; // [rsp+A8h] [rbp-11h]
  int v33; // [rsp+ACh] [rbp-Dh]
  ULONGLONG *v34; // [rsp+B0h] [rbp-9h]
  int v35; // [rsp+B8h] [rbp-1h]
  int v36; // [rsp+BCh] [rbp+3h]
  int *v37; // [rsp+C0h] [rbp+7h]
  int v38; // [rsp+C8h] [rbp+Fh]
  int v39; // [rsp+CCh] [rbp+13h]
  int *v40; // [rsp+D0h] [rbp+17h]
  int v41; // [rsp+D8h] [rbp+1Fh]
  int v42; // [rsp+DCh] [rbp+23h]

  if ( KeGetCurrentIrql() >= 2u )
    return 3221225800LL;
  if ( !*(_BYTE *)(a1 + 456) )
    return 3221225485LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 324), 1, 0) == 1 )
    return 3221226614LL;
  sub_1400099A0(a1);
  *(_DWORD *)(a1 + 5088) = 0;
  v3 = sub_140055EE0(a1);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v5 = sub_140058FB8(a1 + 376, 0);
  v6 = KeQueryUnbiasedInterruptTime();
  v7 = *(_DWORD *)(a1 + 600);
  v8 = *(_DWORD *)(a1 + 5088);
  v9 = v6 - UnbiasedInterruptTime;
  if ( v7 )
  {
    v10 = v7 / 0xF4240 + 1;
    if ( v7 == 1000000 * (v7 / 0xF4240) )
      v10 = v7 / 0xF4240;
    sub_14006191C(a1, a1 + 4136, a1 + 4200, v10);
  }
  else
  {
    v12 = KfRaiseIrql(2u);
    sub_140066768(a1);
    KeLowerIrql(v12);
  }
  if ( (unsigned int)dword_140168178 > 5 )
  {
    if ( sub_14003F840(v11, 0x400000000000LL) )
    {
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v22 = a1 + 5064;
      v16 = *(_DWORD *)(a1 + 56);
      v25 = &v16;
      v28 = &v15;
      v31 = (int *)&v17;
      v34 = &v20;
      v37 = &v18;
      v40 = &v19;
      v23 = 16;
      v26 = 4;
      v15 = 0;
      v29 = 1;
      v17 = v5;
      v32 = 4;
      v20 = v9;
      v35 = 8;
      v18 = v3;
      v38 = 4;
      v19 = v8;
      v41 = 4;
      sub_140037A5C(4LL, (unsigned __int8 *)dword_140155CC9, v13, v14, 9u, &v21);
    }
  }
  *(_DWORD *)(a1 + 324) = 0;
  return v5;
}
