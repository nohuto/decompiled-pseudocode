/*
 * XREFs of sub_140044D20 @ 0x140044D20
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

char __fastcall sub_140044D20(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // rbx
  int v4; // r9d
  __int64 v5; // rdi
  void *v6; // r10
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  char v13; // r11
  __int64 v14; // rax
  __int64 v15; // rax
  char v17; // [rsp+38h] [rbp-D0h] BYREF
  int v18; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+88h] [rbp-80h]
  int v26; // [rsp+90h] [rbp-78h]
  int v27; // [rsp+94h] [rbp-74h]
  char *v28; // [rsp+98h] [rbp-70h]
  int v29; // [rsp+A0h] [rbp-68h]
  int v30; // [rsp+A4h] [rbp-64h]
  __int64 *v31; // [rsp+A8h] [rbp-60h]
  int v32; // [rsp+B0h] [rbp-58h]
  int v33; // [rsp+B4h] [rbp-54h]
  int *v34; // [rsp+B8h] [rbp-50h]
  int v35; // [rsp+C0h] [rbp-48h]
  int v36; // [rsp+C4h] [rbp-44h]
  __int64 *v37; // [rsp+C8h] [rbp-40h]
  int v38; // [rsp+D0h] [rbp-38h]
  int v39; // [rsp+D4h] [rbp-34h]
  __int64 *v40; // [rsp+D8h] [rbp-30h]
  int v41; // [rsp+E0h] [rbp-28h]
  int v42; // [rsp+E4h] [rbp-24h]
  __int64 *v43; // [rsp+E8h] [rbp-20h]
  int v44; // [rsp+F0h] [rbp-18h]
  int v45; // [rsp+F4h] [rbp-14h]
  __int64 *v46; // [rsp+F8h] [rbp-10h]
  int v47; // [rsp+100h] [rbp-8h]
  int v48; // [rsp+104h] [rbp-4h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+18h] BYREF

  v2 = &retaddr;
  v3 = *(_QWORD *)(a1 + 4960);
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v8 = a1;
  if ( *(_BYTE *)(v3 + 28) )
  {
    v2 = (_UNKNOWN **)(a2 + 24);
    v9 = *(unsigned __int8 *)(v3 + 28);
    do
    {
      a1 = *((unsigned int *)v2 - 1);
      if ( (_DWORD)a1 )
      {
        if ( (_DWORD)a1 == 1 && !v6 )
        {
          v5 = (__int64)*v2;
          v6 = v2[1];
        }
      }
      else if ( *((_DWORD *)v2 - 2) == 3 && !v4 )
      {
        v4 = *(_DWORD *)v2;
      }
      v2 += 5;
      --v9;
    }
    while ( v9 );
  }
  if ( (unsigned int)dword_140168178 > 5 )
  {
    LOBYTE(v2) = sub_14003F840(a1, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v25 = v8 + 5064;
      v28 = &v17;
      v19 = *(_QWORD *)(a2 + 8);
      v31 = &v19;
      v34 = &v18;
      v26 = 16;
      v17 = v13;
      v29 = 1;
      v32 = 8;
      v18 = v11;
      v35 = 4;
      v14 = *(_QWORD *)(v3 + 32);
      v39 = 0;
      v20 = v14;
      v37 = &v20;
      v38 = 8;
      v15 = *(_QWORD *)(v3 + 40);
      v42 = 0;
      v45 = 0;
      v48 = 0;
      v21 = v15;
      v40 = &v21;
      v43 = &v22;
      v46 = &v23;
      v41 = 8;
      v22 = v5;
      v44 = 8;
      v23 = v12;
      v47 = 8;
      LOBYTE(v2) = sub_140037A5C(8LL, (unsigned __int8 *)dword_14015853C, v10, v11, 0xAu, &v24);
    }
  }
  return (char)v2;
}
