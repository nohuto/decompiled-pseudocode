/*
 * XREFs of sub_14012D7EC @ 0x14012D7EC
 * Callers:
 *     sub_14012D7AC @ 0x14012D7AC (sub_14012D7AC.c)
 * Callees:
 *     sub_14003EBFC @ 0x14003EBFC (sub_14003EBFC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400F7308 @ 0x1400F7308 (sub_1400F7308.c)
 *     sub_1400F7368 @ 0x1400F7368 (sub_1400F7368.c)
 *     sub_140121184 @ 0x140121184 (sub_140121184.c)
 *     sub_140128094 @ 0x140128094 (sub_140128094.c)
 *     sub_14012C9C0 @ 0x14012C9C0 (sub_14012C9C0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14012D7EC(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v5; // edi
  _QWORD *v6; // r14
  POWER_STATE *v7; // rax
  POWER_STATE v8; // ebx
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rdx
  bool v16; // zf
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  int *v19; // rax
  const EVENT_DESCRIPTOR *v20; // rdx
  unsigned __int64 v21; // rdx
  char v22; // r14
  _BYTE *v23; // r9
  unsigned __int8 v24; // r10
  char v25; // r11
  char v26; // r13
  char v27; // r12
  char *v28; // rbx
  unsigned int v29; // r15d
  unsigned __int64 v30; // rbp
  __int64 v31; // r8
  int v32; // ecx
  char v33; // cl
  char v34; // r8
  _BYTE *v35; // rax
  unsigned int v36; // eax
  char v37; // al
  char v39; // [rsp+60h] [rbp-78h]
  unsigned int v40; // [rsp+64h] [rbp-74h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-70h] BYREF
  GUID v42; // [rsp+80h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0;
  v6 = *(_QWORD **)(v3 + 128);
  v7 = *(POWER_STATE **)(a2 + 184);
  *(_DWORD *)(a2 + 48) = 0;
  v8.SystemState = v7[6].SystemState;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 128) + 88LL), &LockHandle);
  *(POWER_STATE *)(*(_QWORD *)(a1 + 128) + 72LL) = v8;
  sub_14003EBFC(*(struct _DEVICE_OBJECT **)(a1 + 8), v8);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 72LL);
  if ( v9 == 1 )
  {
    _interlockedbittestandreset(*(volatile signed __int32 **)(a1 + 256), 2u);
    sub_140121184(*(_QWORD *)(a1 + 256));
    if ( !sub_1400F7308(a1) )
      goto LABEL_12;
    sub_14012C9C0(v11, v10, v12, a1);
    _InterlockedDecrement((volatile signed __int32 *)(v6[20] + 116LL));
    if ( (*(_DWORD *)(v6[20] + 176LL) & 0x20) == 0 )
      goto LABEL_11;
    v14 = -1;
    goto LABEL_10;
  }
  if ( v9 == 4 && sub_1400F7308(a1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6[20] + 116LL));
    v15 = v6[20];
    if ( (*(_DWORD *)(v15 + 176) & 0x20) == 0 || *(_DWORD *)(v15 + 116) != *(_DWORD *)(*(_QWORD *)(a1 + 16) + 656LL) )
      goto LABEL_11;
    v14 = 0;
LABEL_10:
    sub_140128094(v6, v14, v13, 1);
LABEL_11:
    sub_1400F7368(a1);
  }
LABEL_12:
  v16 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v16 )
    goto LABEL_74;
  v42 = 0LL;
  IoGetActivityIdIrp(a2, &v42);
  v18 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v18 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_74;
    v20 = &stru_140148B18;
    goto LABEL_73;
  }
  if ( *(_BYTE *)v18 != 15 )
  {
    if ( *(_BYTE *)v18 != 27 )
      goto LABEL_74;
    if ( *(_BYTE *)(v18 + 1) == 7 && !*(_DWORD *)(v18 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v19 = *(int **)(a2 + 56);
        if ( v19 )
          v5 = *v19;
        sub_140056AB0(v17, v18, &v42, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_74;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_74;
    v20 = &stru_140149FE8;
LABEL_73:
    sub_140052F3C(v17, v20, &v42, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_74;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_74;
  v21 = *(_QWORD *)(v18 + 8);
  v22 = 0;
  v23 = 0LL;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( *(_BYTE *)(v21 + 2) != 40 )
  {
    v33 = *(_BYTE *)(v21 + 72);
    v23 = *(_BYTE **)(v21 + 32);
    v24 = *(_BYTE *)(v21 + 11);
    v22 = *(_BYTE *)(v21 + 4);
    if ( *(_BYTE *)(v21 + 2) )
      goto LABEL_74;
LABEL_52:
    LOBYTE(v17) = v33 - 8;
    if ( (v17 & 0x5D) != 0 )
      goto LABEL_74;
    v34 = *(_BYTE *)(v21 + 3);
    if ( v34 == 1 || !v23 || !v24 )
      goto LABEL_69;
    LOBYTE(v21) = 0;
    v17 = (unsigned __int64)&v23[v24];
    v35 = v23 + 8;
    if ( (unsigned __int8)((*v23 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v35 > v17 )
        goto LABEL_67;
      v26 = v23[2];
      v25 = v23[1] & 0xF;
      v27 = v23[3];
    }
    else
    {
      if ( (unsigned __int64)v35 > v17 )
        goto LABEL_67;
      v25 = v23[2] & 0xF;
      v36 = v24;
      if ( (unsigned int)(unsigned __int8)v23[7] + 8 <= v24 )
        v36 = (unsigned __int8)v23[7] + 8;
      v17 = (unsigned __int64)(v23 + 13);
      v21 = (unsigned __int64)&v23[v36];
      if ( (unsigned __int64)(v23 + 13) <= v21 )
        v26 = v23[12];
      if ( (unsigned __int64)(v23 + 14) <= v21 )
        v27 = *(_BYTE *)v17;
    }
    LOBYTE(v21) = 1;
LABEL_67:
    if ( (_BYTE)v21 )
    {
      LOBYTE(v5) = v26;
      v37 = v27;
LABEL_70:
      sub_140052E64(v17, v21, &v42, a2, *(_DWORD *)(a2 + 48), v34, v22, v25, v5, v37, a2);
      goto LABEL_74;
    }
LABEL_69:
    v25 = 0;
    v37 = 0;
    goto LABEL_70;
  }
  v28 = 0LL;
  v39 = 0;
  if ( *(_DWORD *)(v21 + 20) )
    goto LABEL_74;
  v29 = 0;
  v40 = *(_DWORD *)(v21 + 56);
  if ( !v40 )
    goto LABEL_49;
  while ( 1 )
  {
    v17 = *(unsigned int *)(v21 + 4LL * v29 + 120);
    if ( (unsigned int)v17 >= 0x80 )
    {
      v30 = *(unsigned int *)(v21 + 16);
      if ( (unsigned int)v17 < (unsigned int)v30 )
        break;
    }
LABEL_43:
    if ( ++v29 >= v40 )
      goto LABEL_49;
  }
  v31 = (unsigned int)v17;
  v32 = *(_DWORD *)(v17 + v21) - 64;
  if ( v32 )
  {
    v17 = (unsigned int)(v32 - 1);
    if ( (_DWORD)v17 )
    {
      if ( (_DWORD)v17 == 1 )
      {
        v17 = v31 + 40;
        if ( v31 + 40 <= v30 )
        {
          if ( *(_DWORD *)(v31 + v21 + 12) )
            v28 = (char *)(v31 + v21 + 32);
          v23 = *(_BYTE **)(v31 + v21 + 24);
          goto LABEL_48;
        }
      }
    }
    else
    {
      v17 = v31 + 56;
      if ( v31 + 56 <= v30 )
      {
        v39 = 1;
        if ( *(_BYTE *)(v31 + v21 + 10) )
          v28 = (char *)(v31 + v21 + 24);
        v22 = *(_BYTE *)(v31 + v21 + 8);
        v23 = *(_BYTE **)(v31 + v21 + 16);
        v24 = *(_BYTE *)(v31 + v21 + 9);
      }
    }
    goto LABEL_42;
  }
  v17 = v31 + 40;
  if ( v31 + 40 > v30 )
  {
LABEL_42:
    if ( v39 )
      goto LABEL_49;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(v31 + v21 + 10) )
    v28 = (char *)(v31 + v21 + 24);
  v23 = *(_BYTE **)(v31 + v21 + 16);
LABEL_48:
  v24 = *(_BYTE *)(v31 + v21 + 9);
  v22 = *(_BYTE *)(v31 + v21 + 8);
LABEL_49:
  if ( v28 )
  {
    v33 = *v28;
    goto LABEL_52;
  }
LABEL_74:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
