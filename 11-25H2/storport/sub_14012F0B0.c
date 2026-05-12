/*
 * XREFs of sub_14012F0B0 @ 0x14012F0B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400D12D0 @ 0x1400D12D0 (sub_1400D12D0.c)
 *     sub_1400D1300 @ 0x1400D1300 (sub_1400D1300.c)
 *     sub_1400D8B04 @ 0x1400D8B04 (sub_1400D8B04.c)
 *     sub_14012A71C @ 0x14012A71C (sub_14012A71C.c)
 *     sub_14012B700 @ 0x14012B700 (sub_14012B700.c)
 *     sub_14012BAB0 @ 0x14012BAB0 (sub_14012BAB0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14012F0B0(_OWORD *SettingGuid, unsigned int *Value, ULONG ValueLength, _QWORD *Context)
{
  char v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  _QWORD *v15; // r10
  __int64 v16; // r11
  __int64 v18; // rax
  __int128 v19; // xmm0
  bool v20; // zf
  unsigned __int64 v21; // [rsp+20h] [rbp-40h] BYREF
  __int64 v22; // [rsp+28h] [rbp-38h]
  __int128 v23; // [rsp+30h] [rbp-30h] BYREF
  unsigned int *v24; // [rsp+40h] [rbp-20h]
  ULONG v25; // [rsp+48h] [rbp-18h]
  int v26; // [rsp+4Ch] [rbp-14h]

  v23 = 0uLL;
  v26 = 0;
  v22 = 0LL;
  if ( *(_QWORD *)SettingGuid != 0x470FEAA4E1233993LL || *((_QWORD *)SettingGuid + 1) != 0x71FBB6C151A3E79DLL )
  {
    if ( *(_QWORD *)SettingGuid == 0x4BC4BB3851DEA550LL && *((_QWORD *)SettingGuid + 1) == 0xC85EBE37CFEA1B99uLL )
    {
      if ( ValueLength >= 4 && Value )
      {
        v21 = *Value;
        if ( v21 <= 0x64 )
          sub_14012A71C((__int64)Context, &v21, 1, 1);
        return 0LL;
      }
    }
    else
    {
      if ( *(_QWORD *)SettingGuid != 0x43CEE09B307BCC77LL || *((_QWORD *)SettingGuid + 1) != 0xA704FB6F7546978DuLL )
      {
        v18 = Context[50];
        v19 = *SettingGuid;
        v24 = Value;
        v25 = ValueLength;
        v20 = (*(_DWORD *)(v18 + 184) & 0x40000000) == 0;
        v23 = v19;
        if ( !v20 )
          sub_14012B700((_QWORD *)Context[142], (__int64)&v23);
        return 0LL;
      }
      if ( ValueLength == 4 && Value )
      {
        v11 = *Value;
        if ( ((*(_DWORD *)(Context[20] + 176LL) >> 15) & 1) == (*Value != 0) || !sub_1400D8B04((__int64)Context) )
          return 0LL;
        v21 = 0x1000000001LL;
        if ( v11 )
        {
          if ( !v14 )
          {
            *(_DWORD *)(v16 + 176) = v13 | 0x8000;
            LODWORD(v22) = sub_1400D12D0(v12);
            HIDWORD(v22) = sub_1400D1300(v22);
            ++*(_QWORD *)(*(_QWORD *)(v15[20] + 24LL) + 16LL);
          }
        }
        else if ( v14 )
        {
          *(_DWORD *)(v16 + 176) = v13 & 0xFFFF7FFF;
          LODWORD(v22) = sub_1400D12D0(v12);
          HIDWORD(v22) = sub_1400D1300(v22);
        }
        if ( (*(_DWORD *)(v15[50] + 184LL) & 0x40000000) == 0 )
          return 0LL;
        v10 = v15[142];
        goto LABEL_32;
      }
    }
    return 3221225485LL;
  }
  if ( ValueLength != 4 || !Value )
    return 3221225485LL;
  if ( sub_1400D8B04((__int64)Context) )
  {
    v7 = *(_QWORD *)(v5 + 160);
    v21 = 0x1000000001LL;
    v8 = *(_DWORD *)(v7 + 176);
    if ( v4 )
    {
      if ( (v8 & 0x2000) != 0 )
        return 0LL;
      *(_DWORD *)(v7 + 176) = v8 | 0x2000;
      ++**(_QWORD **)(*(_QWORD *)(v5 + 160) + 24LL);
    }
    else
    {
      if ( (v8 & 0x2000) == 0 )
        return 0LL;
      *(_DWORD *)(v7 + 176) = v8 & 0xFFFFDFFF;
    }
    LODWORD(v22) = sub_1400D12D0(v6);
    HIDWORD(v22) = sub_1400D1300(v22);
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 400) + 184LL) & 0x40000000) != 0 )
    {
      v10 = *(_QWORD *)(v9 + 1136);
LABEL_32:
      sub_14012BAB0(v10, &v21);
    }
  }
  return 0LL;
}
