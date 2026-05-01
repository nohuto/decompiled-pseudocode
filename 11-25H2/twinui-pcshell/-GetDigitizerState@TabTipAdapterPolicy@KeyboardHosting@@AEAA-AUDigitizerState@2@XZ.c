/*
 * XREFs of ?GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA?AUDigitizerState@2@XZ @ 0x180473ED4
 * Callers:
 *     ?LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x180474EB0 (-LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UtagPOINTER_DEVICE_INFO@@@1@@Z @ 0x180473A94 (--0-$vector@UtagPOINTER_DEVICE_INFO@@V-$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@QEAA@_KAE.c)
 *     ?_Tidy@?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@AEAAXXZ @ 0x180475F88 (-_Tidy@-$vector@UtagPOINTER_DEVICE_INFO@@V-$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@AEAAX.c)
 */

char *__fastcall KeyboardHosting::TabTipAdapterPolicy::GetDigitizerState(__int64 a1, char *a2)
{
  char v3; // di
  char v4; // si
  __int64 v5; // r8
  const char *v6; // r9
  const char *v7; // r9
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // r10
  char *v11; // rcx
  __int64 v12; // r9
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rax
  char *result; // rax
  _QWORD v25[4]; // [rsp+20h] [rbp-468h] BYREF
  char v26; // [rsp+40h] [rbp-448h] BYREF
  int v27; // [rsp+50h] [rbp-438h]
  wil::details::in1diag3 *retaddr; // [rsp+488h] [rbp+0h]
  unsigned int v29; // [rsp+490h] [rbp+8h] BYREF
  int v30; // [rsp+494h] [rbp+Ch]

  v30 = HIDWORD(a1);
  v29 = 0;
  v3 = 0;
  v4 = 0;
  if ( (unsigned int)GetPointerDevices(&v29, 0LL) && v29 )
  {
    std::vector<tagPOINTER_DEVICE_INFO>::vector<tagPOINTER_DEVICE_INFO>(v25, v29, v5);
    if ( (unsigned int)GetPointerDevices(&v29, v25[0]) )
    {
      v8 = v29;
      v9 = 0LL;
      if ( v29 )
      {
        v10 = v25[0];
        do
        {
          if ( v3 && v4 )
            break;
          v11 = &v26;
          v12 = 8LL;
          v13 = (_OWORD *)(v10 + 1080LL * (unsigned int)v9);
          do
          {
            v14 = v13[1];
            *(_OWORD *)v11 = *v13;
            v15 = v13[2];
            *((_OWORD *)v11 + 1) = v14;
            v16 = v13[3];
            *((_OWORD *)v11 + 2) = v15;
            v17 = v13[4];
            *((_OWORD *)v11 + 3) = v16;
            v18 = v13[5];
            *((_OWORD *)v11 + 4) = v17;
            v19 = v13[6];
            *((_OWORD *)v11 + 5) = v18;
            v20 = v13[7];
            v13 += 8;
            *((_OWORD *)v11 + 6) = v19;
            v11 += 128;
            *((_OWORD *)v11 - 1) = v20;
            --v12;
          }
          while ( v12 );
          v21 = v13[1];
          *(_OWORD *)v11 = *v13;
          v22 = v13[2];
          v23 = *((_QWORD *)v13 + 6);
          *((_OWORD *)v11 + 1) = v21;
          *((_OWORD *)v11 + 2) = v22;
          *((_QWORD *)v11 + 6) = v23;
          if ( (unsigned int)(v27 - 1) <= 1 )
          {
            v3 = 1;
          }
          else if ( v27 == 3 )
          {
            v4 = 1;
          }
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (unsigned int)v9 < v8 );
      }
    }
    else
    {
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x814,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        v7);
    }
    std::vector<tagPOINTER_DEVICE_INFO>::_Tidy(v25, v9);
  }
  else
  {
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x819,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      v6);
  }
  a2[1] = v4;
  result = a2;
  *a2 = v3;
  return result;
}
