/*
 * XREFs of sub_1401942EC @ 0x1401942EC
 * Callers:
 *     sub_1400D2464 @ 0x1400D2464 (sub_1400D2464.c)
 * Callees:
 *     sub_14001B0D0 @ 0x14001B0D0 (sub_14001B0D0.c)
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_140037B0C @ 0x140037B0C (sub_140037B0C.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400718DC @ 0x1400718DC (sub_1400718DC.c)
 *     sub_14007197C @ 0x14007197C (sub_14007197C.c)
 *     sub_1400CA120 @ 0x1400CA120 (sub_1400CA120.c)
 *     sub_1400CB21C @ 0x1400CB21C (sub_1400CB21C.c)
 *     sub_1400CD404 @ 0x1400CD404 (sub_1400CD404.c)
 *     sub_1400D4184 @ 0x1400D4184 (sub_1400D4184.c)
 *     sub_140127634 @ 0x140127634 (sub_140127634.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_140191720 @ 0x140191720 (sub_140191720.c)
 */

NTSTATUS __fastcall sub_1401942EC(__int64 a1, IRP *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  char v5; // r12
  int v6; // esi
  int v7; // r13d
  __int32 v8; // r14d
  int v9; // esi
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  const char *v13; // r8
  int v14; // r9d
  const int *v15; // rdx
  const int *v16; // rdx
  bool v17; // cf
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char v22; // [rsp+70h] [rbp-90h] BYREF
  char v23; // [rsp+71h] [rbp-8Fh] BYREF
  char v24; // [rsp+72h] [rbp-8Eh] BYREF
  int v25; // [rsp+74h] [rbp-8Ch] BYREF
  int v26; // [rsp+78h] [rbp-88h] BYREF
  __int64 v27; // [rsp+80h] [rbp-80h] BYREF
  GUID v28; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  __int64 v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  int *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  char v36[16]; // [rsp+F0h] [rbp-10h] BYREF
  char *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  char v39[16]; // [rsp+110h] [rbp+10h] BYREF
  char *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  char *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  int *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]

  v2 = *(_QWORD *)(a1 + 400);
  v28 = 0LL;
  v4 = a1;
  v5 = 0;
  v6 = *(_DWORD *)(v2 + 184);
  v7 = 0;
  v8 = _InterlockedExchange((volatile __int32 *)(a1 + 84), 5);
  v9 = v6 & 0x40000000;
  if ( v9 )
  {
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 1136) + 968LL) | 0x8000LL;
    *(_QWORD *)(*(_QWORD *)(v4 + 1136) + 968LL) = a1;
  }
  if ( (unsigned int)(v8 - 5) > 1 )
  {
    sub_1400CD404(v4, (__int64)a2);
    sub_140127634(v4);
    if ( sub_14007197C(v4 + 168, 16) )
    {
      v7 = sub_1400718DC(v4 + 168);
      v5 = 1;
    }
    if ( v9 )
      sub_1400CB21C(v4);
    sub_1400D4184(v4);
    sub_140191720(v4, (__int64)a2, v10);
  }
  if ( byte_140168DAA )
  {
    IoGetActivityIdIrp(a2, &v28);
    if ( (byte_1401694F2 & 0x20) != 0 )
      sub_140052F3C(a1, &stru_140149FE8, &v28, a2, a2->IoStatus.Status);
  }
  if ( (byte_1401694FA & 0x10) != 0 )
  {
    v11 = *(_QWORD *)(v4 + 1136);
    if ( v11 )
    {
      v13 = (const char *)&dword_140149108;
      v14 = *(_DWORD *)(v11 + 744);
      if ( *(_QWORD *)(v11 + 752) )
        v13 = *(const char **)(v11 + 752);
    }
    else
    {
      v13 = byte_1401489C4;
      LOBYTE(v14) = 0;
    }
    v12 = (*(_BYTE *)(v4 + 144) & 1) != 0 ? 20 : 17;
    sub_1400CA120(
      v4 + 1032,
      v12,
      (__int64)v13,
      *(_DWORD *)(v4 + 56),
      v4 + 1032,
      *(const wchar_t **)(v4 + 1016),
      *(const wchar_t **)(v4 + 1024),
      v14,
      v13,
      v12,
      v8,
      v5,
      v7);
  }
  if ( (unsigned int)dword_140168178 > 5 && sub_14003F840(a1, 0x400000000000LL) )
  {
    v15 = *(const int **)(v4 + 1016);
    v30 = &v27;
    v27 = 0x1000000LL;
    v32 = v4 + 1032;
    v25 = *(_DWORD *)(v4 + 56);
    v34 = &v25;
    v31 = 8LL;
    v33 = 16LL;
    v35 = 4LL;
    sub_140037B0C((__int64)v36, v15);
    v16 = *(const int **)(v4 + 1024);
    v17 = (*(_BYTE *)(v4 + 144) & 1) != 0;
    v38 = 1LL;
    v22 = v17 ? 20 : 17;
    v37 = &v22;
    sub_140037B0C((__int64)v39, v16);
    v23 = v8;
    v40 = &v23;
    v41 = 1LL;
    v42 = &v24;
    v44 = &v26;
    v24 = v5;
    v43 = 1LL;
    v26 = v7;
    v45 = 4LL;
    sub_140037A5C(v18, (unsigned __int8 *)dword_14015AD28, v19, v20, 0xBu, &v29);
  }
  return sub_14001B0D0(*(struct _DEVICE_OBJECT **)(v4 + 24), a2);
}
