/*
 * XREFs of Callback @ 0x140045BD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_1400296E0 @ 0x1400296E0 (sub_1400296E0.c)
 *     sub_140038E08 @ 0x140038E08 (sub_140038E08.c)
 *     sub_140038E34 @ 0x140038E34 (sub_140038E34.c)
 *     sub_140038E58 @ 0x140038E58 (sub_140038E58.c)
 *     sub_14003DD40 @ 0x14003DD40 (sub_14003DD40.c)
 *     sub_1400566F8 @ 0x1400566F8 (sub_1400566F8.c)
 *     sub_140058490 @ 0x140058490 (sub_140058490.c)
 *     sub_140065DF0 @ 0x140065DF0 (sub_140065DF0.c)
 *     sub_140077D58 @ 0x140077D58 (sub_140077D58.c)
 *     sub_1400AEA8C @ 0x1400AEA8C (sub_1400AEA8C.c)
 *     sub_140133728 @ 0x140133728 (sub_140133728.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall Callback(_OWORD *SettingGuid, unsigned int *Value, __int64 ValueLength, _BYTE *Context)
{
  char v5; // r14
  char *v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  char v9; // cl
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  char v14; // r9
  char v15; // al
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  char v20; // r9
  char *v21; // rcx
  unsigned int v22; // esi
  char *v23; // r14
  __int64 v24; // rcx
  int v25; // eax
  char v26; // r15
  char v27; // al
  char v28; // cl
  char v29; // r12
  char v30; // dl
  char v31; // cl
  int v32; // edx
  __int64 v33; // rcx
  int v34; // r8d
  __int128 v36; // xmm0
  unsigned __int64 v37; // [rsp+40h] [rbp-19h] BYREF
  __int128 v38; // [rsp+48h] [rbp-11h]
  unsigned int *v39; // [rsp+58h] [rbp-1h]
  int v40; // [rsp+60h] [rbp+7h]
  int v41; // [rsp+64h] [rbp+Bh]
  int v42; // [rsp+68h] [rbp+Fh]
  int v43; // [rsp+6Ch] [rbp+13h]
  __int64 v44; // [rsp+70h] [rbp+17h]

  v38 = 0uLL;
  v41 = 0;
  v44 = 0LL;
  if ( *SettingGuid != __PAIR128__(0x71FBB6C151A3E79DLL, 0x470FEAA4E1233993LL) )
  {
    if ( *(_QWORD *)SettingGuid == 0x4BC4BB3851DEA550LL && *((_QWORD *)SettingGuid + 1) == 0xC85EBE37CFEA1B99uLL )
    {
      if ( (unsigned int)ValueLength >= 4 && Value )
      {
        v37 = *Value;
        if ( v37 <= 0x64 )
        {
          LOBYTE(ValueLength) = 1;
          sub_140077D58(Context, &v37, ValueLength);
        }
        return 0LL;
      }
      return 3221225485LL;
    }
    if ( *(_QWORD *)SettingGuid != 0x43CEE09B307BCC77LL || *((_QWORD *)SettingGuid + 1) != 0xA704FB6F7546978DuLL )
    {
      v36 = *SettingGuid;
      v39 = Value;
      v40 = ValueLength;
      v38 = v36;
      if ( sub_140020090((__int64)(Context + 376), 5) )
      {
        v21 = Context + 376;
LABEL_56:
        sub_1400296E0((__int64)v21);
        return 0LL;
      }
      return 0LL;
    }
    if ( (_DWORD)ValueLength != 4 || !Value )
      return 3221225485LL;
    v22 = *Value;
    if ( ((Context[111] & 8) != 0) == (*Value != 0) )
      return 0LL;
    v23 = Context + 376;
    if ( !sub_140020090((__int64)(Context + 376), 12) || !sub_140038E08(Context) )
      return 0LL;
    v25 = sub_140038E34(v24);
    v26 = v25;
    v27 = sub_140038E58(v25);
    v28 = Context[111];
    v29 = v27;
    v42 = 1;
    v30 = v28 & 8;
    v43 = 16;
    if ( v22 )
    {
      if ( v30 )
        goto LABEL_43;
      v31 = v28 | 8;
    }
    else
    {
      if ( !v30 )
        goto LABEL_43;
      v31 = v28 & 0xF7;
    }
    Context[111] = v31;
    LODWORD(v44) = sub_140038E34((__int64)Context);
    HIDWORD(v44) = sub_140038E58(v44);
LABEL_43:
    if ( byte_1401688BD && (qword_140168458 & 0x100) != 0 )
      sub_140065DF0(
        (_DWORD)Context,
        52,
        v44,
        HIDWORD(v44),
        *((unsigned int *)Context + 1507),
        *((unsigned int *)Context + 1244));
    if ( (unsigned int)sub_1400566F8() )
    {
      v33 = *((_QWORD *)Context + 778);
      if ( v33 )
        sub_140133728();
    }
    if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
      sub_140058490(v33, v32, v34, *((_DWORD *)Context + 14), v26, v29, v44, SBYTE4(v44));
    v21 = v23;
    goto LABEL_56;
  }
  if ( (_DWORD)ValueLength != 4 || !Value )
    return 3221225485LL;
  v5 = *(_BYTE *)Value;
  v6 = Context + 376;
  if ( !sub_140020090((__int64)(Context + 376), 12) || !sub_140038E08(Context) )
    return 0LL;
  v8 = sub_140038E34(v7);
  sub_140038E58(v8);
  v42 = 1;
  v43 = 16;
  if ( v5 == 1 )
  {
    v9 = Context[108];
    if ( (v9 & 1) == 0 )
    {
      Context[108] = v9 | 1;
      LODWORD(v44) = sub_140038E34((__int64)Context);
      v10 = sub_140038E58(v44);
      HIDWORD(v44) = v10;
      if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
        sub_140058490(v12, v11, v13, *((_DWORD *)Context + 14), v11, v14, v13, v10);
      sub_1400AEA8C(Context);
LABEL_18:
      if ( byte_1401688BD )
      {
LABEL_21:
        if ( (qword_140168458 & 0x100) != 0 )
          sub_140065DF0(
            (_DWORD)Context,
            51,
            v44,
            HIDWORD(v44),
            *((unsigned int *)Context + 1507),
            *((unsigned int *)Context + 1244));
        v21 = v6;
        goto LABEL_56;
      }
      sub_1400296E0((__int64)v6);
    }
  }
  else if ( !v5 )
  {
    v15 = Context[108];
    if ( (v15 & 1) != 0 )
    {
      Context[108] = v15 & 0xFE;
      LODWORD(v44) = sub_140038E34((__int64)Context);
      v16 = sub_140038E58(v44);
      HIDWORD(v44) = v16;
      if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
        sub_140058490(v18, v17, v19, *((_DWORD *)Context + 14), v17, v20, v19, v16);
      sub_14003DD40((__int64)Context);
      goto LABEL_18;
    }
  }
  if ( byte_1401688BD )
    goto LABEL_21;
  return 0LL;
}
