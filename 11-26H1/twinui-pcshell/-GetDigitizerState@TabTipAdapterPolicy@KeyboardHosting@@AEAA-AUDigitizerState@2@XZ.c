/*
 * XREFs of ?GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA?AUDigitizerState@2@XZ @ 0x180482FDC
 * Callers:
 *     ?LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x180484170 (-LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Construct_n@$$V@?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@AEAAX_K@Z @ 0x1804826B0 (--$_Construct_n@$$V@-$vector@UtagPOINTER_DEVICE_INFO@@V-$allocator@UtagPOINTER_DEVICE_INFO@@@std.c)
 *     ?_Tidy@?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@AEAAXXZ @ 0x1804858AC (-_Tidy@-$vector@UtagPOINTER_DEVICE_INFO@@V-$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@AEAAX.c)
 */

char *__fastcall KeyboardHosting::TabTipAdapterPolicy::GetDigitizerState(__int64 a1, char *a2)
{
  char v3; // di
  char v4; // si
  const char *v5; // r9
  const char *v6; // r9
  unsigned int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // r10
  char *v10; // rcx
  __int64 v11; // r9
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rax
  char *result; // rax
  _QWORD v24[5]; // [rsp+20h] [rbp-E8h] BYREF
  char v25; // [rsp+48h] [rbp-C0h] BYREF
  int v26; // [rsp+58h] [rbp-B0h]
  wil::details::in1diag3 *retaddr; // [rsp+490h] [rbp+388h]
  unsigned int v28; // [rsp+498h] [rbp+390h] BYREF
  int v29; // [rsp+49Ch] [rbp+394h]

  v29 = HIDWORD(a1);
  v28 = 0;
  v3 = 0;
  v4 = 0;
  if ( (unsigned int)GetPointerDevices(&v28, 0LL) && v28 )
  {
    memset(&v24[1], 0, 24);
    std::vector<tagPOINTER_DEVICE_INFO>::_Construct_n<>(&v24[1], v28);
    if ( (unsigned int)GetPointerDevices(&v28, v24[1]) )
    {
      v7 = v28;
      v8 = 0LL;
      if ( v28 )
      {
        v9 = v24[1];
        do
        {
          if ( v3 && v4 )
            break;
          v10 = &v25;
          v11 = 8LL;
          v12 = (_OWORD *)(v9 + 1080LL * (unsigned int)v8);
          do
          {
            v13 = v12[1];
            *(_OWORD *)v10 = *v12;
            v14 = v12[2];
            *((_OWORD *)v10 + 1) = v13;
            v15 = v12[3];
            *((_OWORD *)v10 + 2) = v14;
            v16 = v12[4];
            *((_OWORD *)v10 + 3) = v15;
            v17 = v12[5];
            *((_OWORD *)v10 + 4) = v16;
            v18 = v12[6];
            *((_OWORD *)v10 + 5) = v17;
            v19 = v12[7];
            v12 += 8;
            *((_OWORD *)v10 + 6) = v18;
            v10 += 128;
            *((_OWORD *)v10 - 1) = v19;
            --v11;
          }
          while ( v11 );
          v20 = v12[1];
          *(_OWORD *)v10 = *v12;
          v21 = v12[2];
          v22 = *((_QWORD *)v12 + 6);
          *((_OWORD *)v10 + 1) = v20;
          *((_OWORD *)v10 + 2) = v21;
          *((_QWORD *)v10 + 6) = v22;
          if ( (unsigned int)(v26 - 1) <= 1 )
          {
            v3 = 1;
          }
          else if ( v26 == 3 )
          {
            v4 = 1;
          }
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (unsigned int)v8 < v7 );
      }
    }
    else
    {
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x9BC,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        v6);
    }
    std::vector<tagPOINTER_DEVICE_INFO>::_Tidy(&v24[1], v8);
  }
  else
  {
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x9C1,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      v5);
  }
  *a2 = v3;
  result = a2;
  a2[1] = v4;
  return result;
}
