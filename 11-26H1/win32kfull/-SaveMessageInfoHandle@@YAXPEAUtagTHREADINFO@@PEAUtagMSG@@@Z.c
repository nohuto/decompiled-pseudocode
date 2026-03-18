/*
 * XREFs of ?SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x140028500
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?FlushPostedRawInputAndUnlinkThisOne@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x140028738 (-FlushPostedRawInputAndUnlinkThisOne@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 *     ?FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x140028818 (-FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14003ACCC (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall SaveMessageInfoHandle(struct tagTHREADINFO *a1, struct tagMSG *a2)
{
  int v2; // eax
  struct tagMSG *v3; // rbx
  int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 *v15; // r14
  __int64 v16; // rbx
  __int64 *i; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx

  v2 = *((_DWORD *)a2 + 2);
  v3 = a2;
  if ( v2 == 255 )
  {
    if ( *((_QWORD *)a2 + 2) < 2uLL )
    {
      v6 = *((_QWORD *)a2 + 3);
      PsGetCurrentThreadWin32Thread(a1);
      v10 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19904);
      if ( (unsigned __int64)(unsigned __int16)v6 < *(_QWORD *)(v10 + 8) )
      {
        UserSessionState = W32GetUserSessionState(v10, v9);
        v14 = *(_DWORD *)(W32GetUserSessionState(v13, v12) + 19928) * (unsigned int)(unsigned __int16)v6
            + *(_QWORD *)(UserSessionState + 19920);
        v15 = (__int64 *)HMPkheFromPhe(v14);
        LOWORD(v6) = WORD1(v6) & 0x7FFF;
        if ( ((WORD1(v6) & 0x7FFF) == *(_WORD *)(v14 + 26)
           || (_WORD)v6 == 0x7FFF
           || !(_WORD)v6 && PsGetCurrentProcessWow64Process())
          && (*(_BYTE *)(v14 + 25) & 1) == 0
          && *(_BYTE *)(v14 + 24) == 18 )
        {
          v16 = *v15;
          if ( *v15 )
          {
            if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline() )
            {
              FlushPostedRawInput(a1);
              for ( i = (__int64 *)((char *)a1 + 1168); ; i = (__int64 *)(v18 + 32) )
              {
                v18 = *i;
                if ( !*i )
                {
                  v16 = 0LL;
                  goto LABEL_21;
                }
                if ( v18 == v16 )
                  break;
              }
              *i = *(_QWORD *)(v16 + 32);
              *(_QWORD *)(v16 + 32) = 0LL;
              if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline() )
                *(_DWORD *)(v16 + 48) |= 1u;
LABEL_21:
              *((_QWORD *)a1 + 142) = v16;
            }
            else
            {
              *((_QWORD *)a1 + 142) = FlushPostedRawInputAndUnlinkThisOne(a1, (struct tagHIDDATA *)v16, 0LL);
            }
          }
        }
      }
    }
  }
  else if ( v2 == 576 && (v19 = *((_QWORD *)a2 + 3), LOBYTE(a2) = 20, HMValidateHandleWithDescriptor(v19, a2)) )
  {
    *((_QWORD *)a1 + 149) = *((_QWORD *)v3 + 3);
  }
  else
  {
    v5 = *((_DWORD *)v3 + 2);
    if ( v5 == 283 || v5 == 281 )
    {
      LOBYTE(a2) = 21;
      if ( HMValidateHandleWithDescriptor(*((_QWORD *)v3 + 3), a2) )
        *((_QWORD *)a1 + 150) = *((_QWORD *)v3 + 3);
    }
  }
}
