/*
 * XREFs of sub_140061988 @ 0x140061988
 * Callers:
 *     sub_140019D84 @ 0x140019D84 (sub_140019D84.c)
 *     sub_140066200 @ 0x140066200 (sub_140066200.c)
 * Callees:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 *     sub_140014048 @ 0x140014048 (sub_140014048.c)
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_1400296E0 @ 0x1400296E0 (sub_1400296E0.c)
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_140038E34 @ 0x140038E34 (sub_140038E34.c)
 *     sub_140038E58 @ 0x140038E58 (sub_140038E58.c)
 *     DoScreenSave @ 0x14003A05C (DoScreenSave.c)
 *     sub_14003B050 @ 0x14003B050 (sub_14003B050.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     sub_140054FB0 @ 0x140054FB0 (sub_140054FB0.c)
 *     sub_140055518 @ 0x140055518 (sub_140055518.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_140055A00 @ 0x140055A00 (sub_140055A00.c)
 *     sub_140055D14 @ 0x140055D14 (sub_140055D14.c)
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 *     sub_1400566F8 @ 0x1400566F8 (sub_1400566F8.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_1400567F4 @ 0x1400567F4 (sub_1400567F4.c)
 *     sub_140056BCC @ 0x140056BCC (sub_140056BCC.c)
 *     sub_14005DFB0 @ 0x14005DFB0 (sub_14005DFB0.c)
 *     sub_14005E048 @ 0x14005E048 (sub_14005E048.c)
 *     sub_140066768 @ 0x140066768 (sub_140066768.c)
 *     sub_140067FD4 @ 0x140067FD4 (sub_140067FD4.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     sub_14006922C @ 0x14006922C (sub_14006922C.c)
 *     sub_140078064 @ 0x140078064 (sub_140078064.c)
 *     sub_14008DF74 @ 0x14008DF74 (sub_14008DF74.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 *     sub_14017AB2C @ 0x14017AB2C (sub_14017AB2C.c)
 *     sub_1401A8440 @ 0x1401A8440 (sub_1401A8440.c)
 *     sub_1401B207C @ 0x1401B207C (sub_1401B207C.c)
 */

__int64 __fastcall sub_140061988(char *Context, __int64 a2)
{
  __int64 v4; // rbx
  __int32 v5; // eax
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  int v10; // esi
  __int64 v11; // r14
  __int64 v12; // rcx
  int v13; // r9d
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // al
  __int64 v19; // r8
  __int64 v20; // rcx
  int (__fastcall *v21)(_QWORD, __int64, int *); // rax
  PIO_WORKITEM WorkItem; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  _QWORD *v25; // r9
  int *v26; // rax
  int v27; // ecx
  __int64 v28; // rcx
  void **v29; // rbx
  __int64 v30; // rdx
  NTSTATUS v31; // r8d
  int v32; // r8d
  void *v33; // rcx
  KIRQL v34; // bl
  __int64 v35; // rax
  ULONG Size[2]; // [rsp+20h] [rbp-E0h]
  PVOID Data; // [rsp+28h] [rbp-D8h]
  PULONG RequiredSize; // [rsp+30h] [rbp-D0h]
  PDEVPROPTYPE Type; // [rsp+38h] [rbp-C8h]
  __int64 v40; // [rsp+40h] [rbp-C0h]
  int v41; // [rsp+58h] [rbp-A8h]
  char v42; // [rsp+80h] [rbp-80h] BYREF
  char v43; // [rsp+81h] [rbp-7Fh] BYREF
  bool v44; // [rsp+82h] [rbp-7Eh] BYREF
  char v45; // [rsp+83h] [rbp-7Dh] BYREF
  unsigned int v46; // [rsp+84h] [rbp-7Ch] BYREF
  ULONG v47; // [rsp+88h] [rbp-78h] BYREF
  ULONG v48; // [rsp+8Ch] [rbp-74h] BYREF
  int v49; // [rsp+90h] [rbp-70h] BYREF
  int v50; // [rsp+94h] [rbp-6Ch] BYREF
  int v51; // [rsp+98h] [rbp-68h] BYREF
  int v52; // [rsp+9Ch] [rbp-64h] BYREF
  int v53; // [rsp+A0h] [rbp-60h] BYREF
  int v54; // [rsp+A4h] [rbp-5Ch] BYREF
  int v55; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-50h] BYREF
  int v57; // [rsp+B8h] [rbp-48h]
  int v58; // [rsp+BCh] [rbp-44h]
  int v59; // [rsp+C0h] [rbp-40h]
  int v60; // [rsp+C4h] [rbp-3Ch]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+D0h] [rbp-30h] BYREF
  char *v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+F8h] [rbp-8h]
  int *v64; // [rsp+100h] [rbp+0h]
  __int64 v65; // [rsp+108h] [rbp+8h]
  int *v66; // [rsp+110h] [rbp+10h]
  __int64 v67; // [rsp+118h] [rbp+18h]
  __int64 *v68; // [rsp+120h] [rbp+20h]
  __int64 v69; // [rsp+128h] [rbp+28h]
  int *v70; // [rsp+130h] [rbp+30h]
  __int64 v71; // [rsp+138h] [rbp+38h]
  int *v72; // [rsp+140h] [rbp+40h]
  __int64 v73; // [rsp+148h] [rbp+48h]
  char *v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  int *v76; // [rsp+160h] [rbp+60h]
  __int64 v77; // [rsp+168h] [rbp+68h]
  int *v78; // [rsp+170h] [rbp+70h]
  __int64 v79; // [rsp+178h] [rbp+78h]
  bool *v80; // [rsp+180h] [rbp+80h]
  __int64 v81; // [rsp+188h] [rbp+88h]
  char *v82; // [rsp+190h] [rbp+90h]
  __int64 v83; // [rsp+198h] [rbp+98h]

  v46 = 0;
  v47 = 0;
  v48 = 0;
  v42 = 0;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 2) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 16LL, &unk_14014A2D8, Context, a2);
  }
  v4 = 8LL;
  v5 = _InterlockedExchange((volatile __int32 *)Context + 22, 1);
  if ( v5 != 2 )
  {
    if ( v5 != 8 )
    {
      if ( (Context[111] & 0x20) != 0 )
        KeSetEvent((PRKEVENT)(Context + 6104), 0, 0);
      return 0LL;
    }
    Context[110] |= 0x80u;
  }
  v7 = *(_QWORD *)(a2 + 184);
  v8 = *(_QWORD *)(v7 + 8);
  v9 = *(_QWORD *)(v7 + 16);
  v10 = sub_1401B207C(
          (int)Context + 384,
          *((_QWORD *)Context + 76),
          *((_DWORD *)Context + 234),
          *((_DWORD *)Context + 235),
          (Context[109] & 4) != 0,
          (unsigned __int8)Context[110] >> 7);
  if ( v10 < 0 )
  {
    *((_DWORD *)Context + 1547) = 2;
    goto LABEL_87;
  }
  v11 = *((_QWORD *)Context + 76);
  if ( !v11 )
  {
    *((_DWORD *)Context + 1547) = 3;
    v10 = -1073741810;
    goto LABEL_87;
  }
  v10 = sub_140054FB0((__int64)Context, v8, v9);
  if ( v10 < 0 )
  {
    *((_DWORD *)Context + 1547) = 4;
    goto LABEL_87;
  }
  if ( *((_DWORD *)Context + 98) == 5 )
  {
    if ( IoGetDevicePropertyData(*((PDEVICE_OBJECT *)Context + 4), &PropertyKey, 0, 0, 4u, &v46, &v47, &v48) >= 0 )
    {
      *((_DWORD *)Context + 236) = HIWORD(v46);
      *((_DWORD *)Context + 237) = (unsigned __int16)v46;
    }
    if ( IoGetDevicePropertyData(*((PDEVICE_OBJECT *)Context + 4), &stru_14014A920, 0, 0, 1u, &v42, &v47, &v48) >= 0 )
    {
      if ( byte_1401688AB || (v14 = 0, v42) )
        v14 = 64;
      Context[112] = v14 | Context[112] & 0x9F | (32 * (v42 & 1)) & 0xBF;
    }
    v47 = sub_14006922C((int)Context + 776, 4, (int)Context + 4736, v13, 64);
    sub_14008DF74(Context);
  }
  if ( (unsigned int)dword_140168178 > 5 && sub_14003F840(v12, 0x400000000000LL) )
  {
    v63 = 16LL;
    v62 = Context + 5064;
    v50 = *((_DWORD *)Context + 518);
    v64 = &v50;
    v51 = *((_DWORD *)Context + 1031);
    v66 = &v51;
    v56 = *((_QWORD *)Context + 613);
    v68 = &v56;
    v52 = (unsigned __int8)Context[4892];
    v70 = &v52;
    v53 = *((_DWORD *)Context + 1244);
    v72 = &v53;
    v43 = byte_1401688B5;
    v74 = &v43;
    v54 = *((_DWORD *)Context + 1428);
    v76 = &v54;
    v55 = dword_140168460;
    v78 = &v55;
    v18 = (Context[112] & 0x40) != 0;
    v65 = 4LL;
    v44 = v18;
    v80 = &v44;
    v45 = byte_140168449;
    v82 = &v45;
    v67 = 4LL;
    v69 = 8LL;
    v71 = 4LL;
    v73 = 4LL;
    v75 = 1LL;
    v77 = 4LL;
    v79 = 4LL;
    v81 = 1LL;
    v83 = 1LL;
    sub_140037A5C(v15, (unsigned __int8 *)dword_140155E6D, v16, v17, 0xDu, &v61);
  }
  if ( (byte_1401694F6 & 4) != 0 )
    sub_1400567F4(
      (unsigned __int8)byte_1401688B5,
      ((unsigned __int8)Context[112] >> 5) & 1,
      ((unsigned __int8)Context[112] >> 6) & 1,
      (__int64)(Context + 5064),
      *((_DWORD *)Context + 14),
      *((const wchar_t **)Context + 591),
      *((const wchar_t **)Context + 590),
      *((_DWORD *)Context + 98),
      *((_QWORD *)Context + 13),
      byte_1401688B5,
      *((_DWORD *)Context + 1428),
      v41,
      (Context[112] & 0x40) != 0,
      byte_140168449,
      (Context[112] & 0x20) != 0);
  *((_DWORD *)Context + 502) = 64;
  sub_140055A00((__int64)(Context + 2008));
  if ( !_interlockedbittestandset((volatile signed __int32 *)Context + 1502, 0) )
    *((_DWORD *)Context + 1503) = dword_1401688B0;
  sub_140078064(*((PDEVICE_OBJECT *)Context + 1));
  sub_140014048(*((PDEVICE_OBJECT *)Context + 1), (_QWORD *)Context + 672);
  if ( !(unsigned int)sub_1400567A0() && (*(_DWORD *)(v11 + 184) & 0x20000) != 0 )
    sub_14017AB2C(Context);
  v10 = sub_140012624((__int64)Context, v11, v19);
  if ( v10 < 0 )
    goto LABEL_87;
  if ( Context[110] < 0 )
  {
    v34 = KfRaiseIrql(2u);
    sub_140066768(Context);
    KeLowerIrql(v34);
  }
  else
  {
    v20 = *((_QWORD *)Context + 671);
    if ( v20 )
    {
      if ( *((_QWORD *)Context + 620) )
      {
        v49 = 0;
        v21 = *(int (__fastcall **)(_QWORD, __int64, int *))(v20 + 40);
        if ( v21 )
        {
          if ( v21(*(_QWORD *)(v20 + 8), 1LL, &v49) >= 0 && (unsigned int)(v49 - 4) <= 1 )
          {
            *(_DWORD *)(*((_QWORD *)Context + 620) + 20LL) |= 0x80u;
            WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)Context + 1));
            *((_QWORD *)Context + 710) = WorkItem;
            if ( !WorkItem )
            {
              *((_DWORD *)Context + 1547) = 12;
              v10 = -1073741670;
              goto LABEL_87;
            }
          }
        }
      }
    }
    v10 = DoScreenSave((__int64)Context);
    if ( v10 >= 0 )
    {
      if ( byte_140168DAA )
      {
        v25 = (_QWORD *)*((_QWORD *)Context + 620);
        if ( v25 )
        {
          v26 = (int *)v25[1];
          v27 = *v26;
          if ( *v26 == 1 )
          {
            v4 = (__int64)(v26 + 6);
          }
          else if ( v27 == 2 || v27 == 3 )
          {
            v4 = (__int64)(v26 + 8);
          }
          if ( (byte_1401694F2 & 0x10) != 0 )
          {
            LODWORD(v40) = ((unsigned __int8)Context[110] >> 6) & 1;
            LODWORD(Type) = *(_DWORD *)v4;
            LODWORD(RequiredSize) = *((_DWORD *)Context + 1244);
            LODWORD(Data) = ((unsigned __int8)Context[107] >> 4) & 1;
            Size[0] = *((_DWORD *)Context + 14);
            sub_140056BCC((unsigned int)Data, v23, v24, *v25, *(_QWORD *)Size, Data, RequiredSize, Type, v40);
          }
        }
      }
      sub_14003B050((__int64)Context);
      sub_140055518((__int64)Context);
      if ( sub_140056088((__int64)Context) )
        sub_14005DFB0(v28);
      sub_140055D14((__int64)Context);
      if ( (unsigned int)sub_1400566F8()
        && (Context[113] & 1) == 0
        && *((_DWORD *)Context + 1069) == 17
        && (Context[112] & 0x20) == 0 )
      {
        sub_1401A8440(Context);
      }
      if ( byte_1401688AA != 1 || !sub_140020090((__int64)(Context + 376), 12) )
        goto LABEL_80;
      v29 = (void **)(Context + 4968);
      v31 = PoRegisterPowerSettingCallback(
              *((PDEVICE_OBJECT *)Context + 1),
              &SettingGuid,
              (PPOWER_SETTING_CALLBACK)Callback,
              Context,
              (PVOID *)Context + 621);
      if ( v31 < 0 )
      {
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
          && (HIDWORD(off_140168120->Timer) & 2) != 0
          && BYTE1(off_140168120->Timer) >= 4u )
        {
          sub_140067FD4(off_140168120->AttachedDevice, 18LL, &unk_14014A2D8, Context, v31);
        }
      }
      else
      {
        LOBYTE(v30) = 1;
        v32 = PoRegisterCoalescingCallback(sub_140038CC0, v30, Context + 4984, Context);
        if ( v32 >= 0 )
        {
          Context[108] &= 0xFCu;
          v57 = 1;
          v58 = 16;
          v59 = sub_140038E34((__int64)Context);
          v60 = sub_140038E58(v59);
          sub_1400296E0((__int64)(Context + 376));
          goto LABEL_77;
        }
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
          && (HIDWORD(off_140168120->Timer) & 2) != 0
          && BYTE1(off_140168120->Timer) >= 4u )
        {
          sub_140067FD4(off_140168120->AttachedDevice, 17LL, &unk_14014A2D8, Context, v32);
        }
        v33 = *v29;
        *((_QWORD *)Context + 623) = 0LL;
        PoUnregisterPowerSettingCallback(v33);
      }
      *v29 = 0LL;
LABEL_77:
      v10 = PoRegisterPowerSettingCallback(
              *((PDEVICE_OBJECT *)Context + 1),
              &stru_14014A188,
              (PPOWER_SETTING_CALLBACK)Callback,
              Context,
              (PVOID *)Context + 755);
      if ( v10 < 0 )
      {
        *((_QWORD *)Context + 755) = 0LL;
        v10 = 0;
      }
      else
      {
        Context[111] &= ~8u;
      }
LABEL_80:
      if ( sub_140020090((__int64)(Context + 376), 14) )
      {
        PoRegisterPowerSettingCallback(
          *((PDEVICE_OBJECT *)Context + 1),
          &stru_14014A5E0,
          (PPOWER_SETTING_CALLBACK)Callback,
          Context,
          (PVOID *)Context + 624);
        v10 = IoRegisterDeviceInterface(
                *((PDEVICE_OBJECT *)Context + 4),
                &stru_14014A5F0,
                0LL,
                (PUNICODE_STRING)(Context + 5000));
        if ( v10 >= 0 )
        {
          Context[108] |= 0x10u;
          IoSetDeviceInterfaceState((PUNICODE_STRING)(Context + 5000), 1u);
        }
      }
      if ( !*((_QWORD *)Context + 620) && Context[4370] )
        sub_14005E048((__int64)Context);
    }
  }
LABEL_87:
  Context[110] &= ~0x80u;
  v35 = *((_QWORD *)Context + 620);
  if ( v35 && (*(_DWORD *)(v35 + 20) & 4) != 0 )
  {
    sub_140021110((__int64)Context, 0LL, 0LL);
    *(_DWORD *)(*((_QWORD *)Context + 620) + 20LL) &= ~4u;
  }
  *((_QWORD *)Context + 707) = 0LL;
  Context[111] &= ~0x80u;
  *((_DWORD *)Context + 1416) = 0;
  *((_QWORD *)Context + 760) = 0LL;
  *((_QWORD *)Context + 761) = 0LL;
  *((_QWORD *)Context + 762) = 0LL;
  if ( v10 < 0 )
    _InterlockedExchange((volatile __int32 *)Context + 22, 2);
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 2) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    LODWORD(Data) = v10;
    sub_1400556F8((__int64)off_140168120->AttachedDevice, 0x13u, (__int64)&unk_14014A2D8, Context, a2, Data);
  }
  if ( (Context[111] & 0x20) != 0 )
    KeSetEvent((PRKEVENT)(Context + 6104), 0, 0);
  return (unsigned int)v10;
}
