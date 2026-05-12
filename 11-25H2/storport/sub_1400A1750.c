/*
 * XREFs of sub_1400A1750 @ 0x1400A1750
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000F84C @ 0x14000F84C (sub_14000F84C.c)
 *     sub_140014460 @ 0x140014460 (sub_140014460.c)
 *     sub_14001B35C @ 0x14001B35C (sub_14001B35C.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void __fastcall sub_1400A1750(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  char *DeviceExtension; // rsi
  int v4; // ebx
  bool v5; // zf
  PIO_WORKITEM v6; // rdi
  int v7; // eax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  __int64 v12; // rdx
  char v13; // r13
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // r14
  char v17; // r15
  char v18; // r11
  char *v19; // r11
  unsigned int v20; // r8d
  unsigned int *v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r15
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rax
  unsigned int v27; // eax
  unsigned __int64 v28; // r8
  char v29; // al
  unsigned __int64 v30; // r8
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  __int64 v33; // [rsp+20h] [rbp-E0h]
  __int64 v34; // [rsp+28h] [rbp-D8h]
  char v35; // [rsp+60h] [rbp-A0h]
  char v36; // [rsp+61h] [rbp-9Fh]
  char v37; // [rsp+62h] [rbp-9Eh]
  CCHAR PriorityBoost; // [rsp+63h] [rbp-9Dh]
  int v39; // [rsp+64h] [rbp-9Ch]
  __int64 v40; // [rsp+70h] [rbp-90h]
  __int64 Dst[15]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v42[3]; // [rsp+F8h] [rbp-8h] BYREF
  GUID v43; // [rsp+110h] [rbp+10h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  memset_0(Dst, 0, sizeof(Dst));
  v42[1] = v42;
  v42[0] = v42;
  Dst[0] = *((_QWORD *)DeviceExtension + 3);
  sub_14001B35C(Dst, *((_DWORD *)DeviceExtension + 26));
  sub_140014460((__int64)Dst);
  v4 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)DeviceExtension + 3) + 5784LL), 0, 0) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)DeviceExtension + 3) + 5784LL), 0xFFFFFFFF) != 1 )
      goto LABEL_84;
    *((_QWORD *)Context[1] + 7) = 0LL;
    *((_DWORD *)Context[1] + 12) = 0;
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x10) != 0
      && BYTE1(off_140168120->Timer) >= 4u )
    {
      sub_1400556F8(
        (__int64)off_140168120->AttachedDevice,
        0x3Du,
        (__int64)&unk_14014D880,
        *((_QWORD *)DeviceExtension + 3),
        Context[1],
        *((_DWORD *)Context[1] + 12));
    }
    PriorityBoost = 0;
  }
  else
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 8) != 0
      && BYTE1(off_140168120->Timer) >= 4u )
    {
      sub_1400556F8(
        (__int64)off_140168120->AttachedDevice,
        0x3Cu,
        (__int64)&unk_14014D880,
        DeviceExtension,
        Context[1],
        *((_DWORD *)Context[1] + 12));
    }
    if ( (qword_140168458 & 0x10) != 0 )
      sub_14000F84C(
        *((_QWORD *)DeviceExtension + 3),
        (__int64)Context[1],
        *(_QWORD *)(*((_QWORD *)Context[1] + 23) + 8LL));
    PriorityBoost = 1;
  }
  v5 = byte_140168DAA == 0;
  v6 = Context[1];
  v7 = *((_DWORD *)v6 + 12);
  *((_BYTE *)v6 + 141) = -84;
  *((_DWORD *)v6 + 12) = v7;
  if ( v5 )
    goto LABEL_83;
  v43 = 0LL;
  IoGetActivityIdIrp(v6, &v43);
  v9 = *((_QWORD *)v6 + 23);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_83;
    v11 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_82;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_83;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v10 = (int *)*((_QWORD *)v6 + 7);
        if ( v10 )
          v4 = *v10;
        LODWORD(v34) = *((_DWORD *)v6 + 12);
        LODWORD(v33) = v4;
        sub_140056AB0(v8, v9, &v43, v6, v33, v34);
      }
      goto LABEL_83;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_83;
    v11 = &stru_140149FE8;
LABEL_82:
    LODWORD(v33) = *((_DWORD *)v6 + 12);
    sub_140052F3C(v8, v11, &v43, v6, v33);
    goto LABEL_83;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_83;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0;
  v14 = 0LL;
  v35 = 0;
  v15 = 0;
  v36 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v24 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( !*(_BYTE *)(v12 + 2) )
      goto LABEL_58;
    goto LABEL_83;
  }
  v19 = 0LL;
  v37 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_83;
  v8 = 0LL;
  v39 = 0;
  if ( !*(_DWORD *)(v12 + 56) )
    goto LABEL_55;
  v20 = *(_DWORD *)(v12 + 56);
  v21 = (unsigned int *)(v12 + 120);
  v40 = v12 + 120;
  while ( 1 )
  {
    v22 = *v21;
    if ( (unsigned int)v22 >= 0x80 )
    {
      v23 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v22 < (unsigned int)v23 )
        break;
    }
LABEL_48:
    v8 = (unsigned int)(v8 + 1);
    v21 = (unsigned int *)(v40 + 4);
    v39 = v8;
    v40 += 4LL;
    if ( (unsigned int)v8 >= v20 )
      goto LABEL_54;
  }
  if ( *(_DWORD *)(v22 + v12) != 64 )
  {
    v8 = (unsigned int)(*(_DWORD *)(v22 + v12) - 65);
    if ( *(_DWORD *)(v22 + v12) == 65 )
    {
      v8 = v22 + 56;
      if ( v22 + 56 <= v23 )
      {
        v37 = 1;
        if ( *(_BYTE *)(v22 + v12 + 10) )
          v19 = (char *)(v22 + v12 + 24);
        v13 = *(_BYTE *)(v22 + v12 + 8);
        v14 = *(_BYTE **)(v22 + v12 + 16);
        v15 = *(_BYTE *)(v22 + v12 + 9);
      }
    }
    else if ( *(_DWORD *)(v22 + v12) == 66 )
    {
      v8 = v22 + 40;
      if ( v22 + 40 <= v23 )
      {
        if ( *(_DWORD *)(v22 + v12 + 12) )
          v19 = (char *)(v22 + v12 + 32);
        v14 = *(_BYTE **)(v22 + v12 + 24);
        goto LABEL_53;
      }
    }
    goto LABEL_46;
  }
  v8 = v22 + 40;
  if ( v22 + 40 > v23 )
  {
LABEL_46:
    if ( v37 )
      goto LABEL_54;
    LODWORD(v8) = v39;
    v20 = *(_DWORD *)(v12 + 56);
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v22 + v12 + 10) )
    v19 = (char *)(v22 + v12 + 24);
  v14 = *(_BYTE **)(v22 + v12 + 16);
LABEL_53:
  v15 = *(_BYTE *)(v22 + v12 + 9);
  v13 = *(_BYTE *)(v22 + v12 + 8);
LABEL_54:
  v17 = 0;
LABEL_55:
  if ( v19 )
  {
    v24 = *v19;
    v18 = 0;
LABEL_58:
    LOBYTE(v8) = v24 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v12 + 3) == 1 || !v14 || !v15 )
        goto LABEL_78;
      v25 = 0;
      v8 = (unsigned __int64)&v14[v15];
      v26 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v26 <= v8 )
        {
          v25 = 1;
          v17 = v14[2];
          v16 = v14[1] & 0xF;
          v18 = v14[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v26 <= v8 )
        {
          v16 = v14[2] & 0xF;
          v27 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v27 = (unsigned __int8)v14[7] + 8;
          v8 = (unsigned __int64)(v14 + 13);
          v28 = (unsigned __int64)&v14[v27];
          if ( (unsigned __int64)(v14 + 13) > v28 )
            v35 = 0;
          else
            v35 = v14[12];
          if ( (unsigned __int64)(v14 + 14) > v28 )
            v36 = 0;
          else
            v36 = *(_BYTE *)v8;
          v25 = 1;
        }
        v18 = v36;
        v17 = v35;
      }
      if ( v25 )
      {
        LOBYTE(v4) = v17;
        v29 = v18;
      }
      else
      {
LABEL_78:
        v16 = 0;
        v29 = 0;
      }
      LOBYTE(v34) = *(_BYTE *)(v12 + 3);
      LODWORD(v33) = *((_DWORD *)v6 + 12);
      sub_140052E64(v8, v12, &v43, v6, v33, v34, v13, v16, v4, v29, v6);
    }
  }
LABEL_83:
  IofCompleteRequest((PIRP)v6, PriorityBoost);
LABEL_84:
  IoFreeWorkItem(*Context);
  ExFreePoolWithTag(Context, 0x49576152u);
  v30 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v31 = *(_DWORD *)(v30 + *((_QWORD *)DeviceExtension + 5));
  while ( (v31 & 1) == 0 )
  {
    v32 = v31;
    v31 = _InterlockedCompareExchange((volatile signed __int32 *)(v30 + *((_QWORD *)DeviceExtension + 5)), v31 - 2, v31);
    if ( v32 == v31 )
      return;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 258, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(DeviceExtension + 520), 0, 0);
}
