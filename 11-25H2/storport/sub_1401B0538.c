/*
 * XREFs of sub_1401B0538 @ 0x1401B0538
 * Callers:
 *     sub_140019004 @ 0x140019004 (sub_140019004.c)
 * Callees:
 *     sub_14001B0D0 @ 0x14001B0D0 (sub_14001B0D0.c)
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_1400296E0 @ 0x1400296E0 (sub_1400296E0.c)
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_140037B0C @ 0x140037B0C (sub_140037B0C.c)
 *     sub_1400401B0 @ 0x1400401B0 (sub_1400401B0.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_14005A210 @ 0x14005A210 (sub_14005A210.c)
 *     sub_14005A248 @ 0x14005A248 (sub_14005A248.c)
 *     sub_14005A2EC @ 0x14005A2EC (sub_14005A2EC.c)
 *     sub_14005C6F4 @ 0x14005C6F4 (sub_14005C6F4.c)
 *     sub_14006672C @ 0x14006672C (sub_14006672C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401B2A00 @ 0x1401B2A00 (sub_1401B2A00.c)
 */

NTSTATUS __fastcall sub_1401B0538(__int64 a1, IRP *a2)
{
  int v2; // r13d
  int v3; // r12d
  char v4; // r15
  __int32 v7; // r14d
  __int64 v8; // rcx
  const int *v11; // rdx
  char v12; // cl
  const int *v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  ULONG Status; // [rsp+20h] [rbp-B9h]
  char v18; // [rsp+30h] [rbp-A9h] BYREF
  char v19; // [rsp+31h] [rbp-A8h] BYREF
  char v20; // [rsp+32h] [rbp-A7h] BYREF
  int v21; // [rsp+34h] [rbp-A5h] BYREF
  int v22; // [rsp+38h] [rbp-A1h] BYREF
  GUID v23; // [rsp+40h] [rbp-99h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+50h] [rbp-89h] BYREF
  __int64 v25; // [rsp+70h] [rbp-69h]
  int v26; // [rsp+78h] [rbp-61h]
  int v27; // [rsp+7Ch] [rbp-5Dh]
  int *v28; // [rsp+80h] [rbp-59h]
  int v29; // [rsp+88h] [rbp-51h]
  int v30; // [rsp+8Ch] [rbp-4Dh]
  char v31[16]; // [rsp+90h] [rbp-49h] BYREF
  char *v32; // [rsp+A0h] [rbp-39h]
  int v33; // [rsp+A8h] [rbp-31h]
  int v34; // [rsp+ACh] [rbp-2Dh]
  char v35[16]; // [rsp+B0h] [rbp-29h] BYREF
  char *v36; // [rsp+C0h] [rbp-19h]
  int v37; // [rsp+C8h] [rbp-11h]
  int v38; // [rsp+CCh] [rbp-Dh]
  char *v39; // [rsp+D0h] [rbp-9h]
  int v40; // [rsp+D8h] [rbp-1h]
  int v41; // [rsp+DCh] [rbp+3h]
  int *v42; // [rsp+E0h] [rbp+7h]
  int v43; // [rsp+E8h] [rbp+Fh]
  int v44; // [rsp+ECh] [rbp+13h]

  v2 = *(_DWORD *)(a1 + 56);
  v3 = 0;
  v4 = 0;
  v7 = _InterlockedExchange((volatile __int32 *)(a1 + 88), 5);
  if ( (unsigned int)(v7 - 5) > 1 )
  {
    sub_1400401B0(a1);
    sub_14005A210(a1);
    sub_14005A248((struct _UNICODE_STRING *)a1);
    sub_14005A2EC(a1);
    if ( sub_140020090(a1 + 376, 16) )
    {
      v3 = sub_1400296E0(a1 + 376);
      v4 = 1;
    }
    sub_14006672C(a1);
    sub_14005C6F4(a1);
    sub_1401B2A00(a1, a2);
  }
  if ( byte_140168DAA )
  {
    v23 = 0LL;
    IoGetActivityIdIrp(a2, &v23);
    if ( (byte_1401694F2 & 0x20) != 0 )
    {
      Status = a2->IoStatus.Status;
      sub_140052F3C(v8, &stru_140149FE8, &v23, a2, Status);
    }
  }
  if ( (unsigned int)dword_140168178 > 5
    && (qword_140168188 & 0x400000000000LL) != 0
    && (qword_140168190 & 0x400000000000LL) == qword_140168190 )
  {
    v11 = *(const int **)(a1 + 4720);
    v27 = 0;
    v30 = 0;
    v25 = a1 + 5064;
    v28 = &v21;
    v26 = 16;
    v21 = v2;
    v29 = 4;
    sub_140037B0C((__int64)v31, v11);
    v12 = *(_BYTE *)(a1 + 4276);
    v13 = *(const int **)(a1 + 4728);
    v34 = 0;
    v18 = v12;
    v32 = &v18;
    v33 = 1;
    sub_140037B0C((__int64)v35, v13);
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v36 = &v19;
    v39 = &v20;
    v42 = &v22;
    v19 = v7;
    v37 = 1;
    v20 = v4;
    v40 = 1;
    v22 = v3;
    v43 = v14;
    sub_140037A5C(v15, (unsigned __int8 *)dword_140155C19, v16, v14, 0xAu, &v24);
  }
  return sub_14001B0D0(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
