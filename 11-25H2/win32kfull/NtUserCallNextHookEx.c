/*
 * XREFs of NtUserCallNextHookEx @ 0x1400C3A30
 * Callers:
 *     <none>
 * Callees:
 *     ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x1400C3674 (-NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z @ 0x1400C3928 (-NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x1400C39A0 (-NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z.c)
 *     ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x1400C40C8 (-NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z.c)
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x1400C4B00 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KREAUtagCBT_CREATEWNDW@@H@Z @ 0x140293450 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KREAUtagCBT_CREATEWNDW@@H@Z.c)
 *     ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1402936A8 (-NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z.c)
 *     ?NtUserfnHkINLPMSG@@YA_JHK_KREAUtagMSG@@@Z @ 0x1402937C8 (-NtUserfnHkINLPMSG@@YA_JHK_KREAUtagMSG@@@Z.c)
 *     ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x1402938C0 (-NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserCallNextHookEx(unsigned int a1, unsigned __int64 a2, struct tagMOUSEHOOKSTRUCTEX *a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rax
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  struct tagRECT *v21; // r8
  unsigned __int64 v22; // rdx
  unsigned int v23; // ecx

  EnterCrit(0LL, 0LL);
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v9, v8);
  v12 = 0LL;
  if ( CurrentThreadNonPaged )
    v13 = *CurrentThreadNonPaged;
  else
    v13 = 0LL;
  v14 = *(_QWORD *)(v13 + 728);
  if ( v14 )
  {
    v14 = *(unsigned int *)(v14 + 48);
    if ( (int)v14 > 7 )
    {
      v18 = v14 - 9;
      if ( !v18 )
      {
        v16 = NtUserfnHkINLPDEBUGHOOKSTRUCT(a1, a2, a3);
        goto LABEL_10;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        v21 = (struct tagRECT *)a3;
        v22 = a2;
        if ( a1 != 5 )
          goto LABEL_33;
        v23 = 5;
        goto LABEL_35;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        v14 = (unsigned int)(v20 - 2);
        if ( (_DWORD)v14 )
        {
          if ( (_DWORD)v14 != 1 )
            goto LABEL_11;
          v16 = NtUserfnHkINLPMSLLHOOKSTRUCT(a1, a2, a3);
        }
        else
        {
          v16 = NtUserfnHkINLPKBDLLHOOKSTRUCT(a1, a2, a3);
        }
        goto LABEL_10;
      }
    }
    else
    {
      switch ( (_DWORD)v14 )
      {
        case 7:
          goto LABEL_23;
        case 3:
LABEL_7:
          v15 = (__int64 *)W32GetCurrentThreadNonPaged(v14, v11);
          if ( v15 )
            v12 = *v15;
          v16 = NtUserfnHkINLPMSG(*(_DWORD *)(*(_QWORD *)(v12 + 728) + 48LL), a1, a2, a3);
          goto LABEL_10;
        case 5:
          if ( a1 )
          {
            switch ( a1 )
            {
              case 3u:
                v16 = NtUserfnHkINLPCBTCREATESTRUCT(3u, a2, a3, a4);
                goto LABEL_10;
              case 5u:
                v16 = NtUserfnHkINLPCBTACTIVATESTRUCT(5, a2, a3);
                goto LABEL_10;
              case 6u:
LABEL_23:
                v16 = NtUserfnHkINLPMOUSEHOOKSTRUCTEX(a1, a2, a3);
LABEL_10:
                v12 = v16;
                goto LABEL_11;
            }
            goto LABEL_32;
          }
          v21 = (struct tagRECT *)a3;
          v22 = a2;
          v23 = 0;
LABEL_35:
          v16 = NtUserfnHkINLPRECT(v23, v22, v21);
          goto LABEL_10;
        case 0xFFFFFFFF:
          goto LABEL_7;
      }
      if ( (_DWORD)v14 != 2 )
      {
        if ( (_DWORD)v14 != 6 )
          goto LABEL_11;
        goto LABEL_7;
      }
    }
LABEL_32:
    v21 = (struct tagRECT *)a3;
    v22 = a2;
LABEL_33:
    v16 = xxxCallNextHookEx(a1, v22, (__int64)v21);
    goto LABEL_10;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v14);
  return v12;
}
