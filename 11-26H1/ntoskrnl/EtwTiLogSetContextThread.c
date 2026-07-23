/*
 * XREFs of EtwTiLogSetContextThread @ 0x140A84C80
 * Callers:
 *     PspSetContextThreadInternal @ 0x1409E8B30 (PspSetContextThreadInternal.c)
 *     PspWow64SetContextThread @ 0x140B81920 (PspWow64SetContextThread.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwProviderEnabled @ 0x140257D70 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x140259590 (EtwpTiFillProcessIdentity.c)
 *     EtwpTiVadQueryEventWrite @ 0x14025A2AC (EtwpTiVadQueryEventWrite.c)
 *     EtwpTiFillThreadIdentity @ 0x14049BCE8 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpTiParseContextRecord @ 0x140A85118 (EtwpTiParseContextRecord.c)
 */

char __fastcall EtwTiLogSetContextThread(char a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r14
  __int64 Process; // r15
  const EVENT_DESCRIPTOR *EventDescriptor; // r12
  int v11; // eax
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  int v15; // r9d
  int v16; // eax
  int v17; // r8d
  int v18; // ebx
  int v19; // edi
  struct _EVENT_DATA_DESCRIPTOR *v20; // r15
  BOOLEAN v21; // al
  __int64 v22; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v23; // rcx
  ULONG *p_Size; // r9
  struct _EVENT_DATA_DESCRIPTOR *v25; // r13
  _DWORD *v26; // rdx
  __int16 v27; // ax
  char v28; // dl
  _QWORD *p_Ptr; // rax
  ULONG *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned int v42; // ebx
  char v43; // al
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int16 v55; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR *v56; // [rsp+48h] [rbp-B8h]
  ULONG *v57; // [rsp+50h] [rbp-B0h]
  _DWORD *v58; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v59; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v60; // [rsp+68h] [rbp-98h] BYREF
  __int64 v61; // [rsp+70h] [rbp-90h] BYREF
  char v62; // [rsp+78h] [rbp-88h] BYREF
  char v63; // [rsp+80h] [rbp-80h] BYREF
  char v64; // [rsp+88h] [rbp-78h] BYREF
  char v65; // [rsp+90h] [rbp-70h] BYREF
  char v66; // [rsp+98h] [rbp-68h] BYREF
  char v67; // [rsp+A0h] [rbp-60h] BYREF
  char v68; // [rsp+A8h] [rbp-58h] BYREF
  char v69; // [rsp+B0h] [rbp-50h] BYREF
  char v70; // [rsp+B8h] [rbp-48h] BYREF
  char v71; // [rsp+C0h] [rbp-40h] BYREF
  char v72; // [rsp+C8h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[38]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v74; // [rsp+398h] [rbp+298h] BYREF

  v74 = a4;
  LOBYTE(CurrentThread) = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xC000uLL);
  if ( (_BYTE)CurrentThread )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = *(_QWORD *)(a2 + 544);
    Process = (__int64)CurrentThread->ApcState.Process;
    if ( Process != v8 )
    {
      EventDescriptor = (const EVENT_DESCRIPTOR *)THREATINT_SETTHREADCONTEXT_REMOTE_KERNEL_CALLER;
      if ( a1 )
        EventDescriptor = &THREATINT_SETTHREADCONTEXT_REMOTE;
      LOBYTE(CurrentThread) = EtwEventEnabled(EtwThreatIntProvRegHandle, EventDescriptor);
      if ( (_BYTE)CurrentThread )
      {
        v11 = EtwpTiFillProcessIdentity(UserData, Process, &v59);
        v12 = EtwpTiFillThreadIdentity(&UserData[v11].Ptr, (__int64)KeGetCurrentThread());
        v14 = EtwpTiFillProcessIdentity(&UserData[v12 + v13].Ptr, v8, &v60);
        v16 = EtwpTiFillThreadIdentity(&UserData[v14 + v15].Ptr, a2);
        v18 = v16 + v17;
        v19 = v16 + v17 + 1;
        v20 = &UserData[v16 + v17];
        v21 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x4000000uLL);
        v22 = (unsigned int)(v18 + 2);
        v20->Reserved = 0;
        v23 = &UserData[v22];
        p_Size = &UserData[v22].Size;
        v56 = &UserData[v22];
        v25 = &UserData[v19];
        v57 = &UserData[v22].Size;
        v26 = (ULONG *)((char *)&UserData[0].Reserved + v22 * 16);
        v58 = v26;
        if ( v21 )
        {
          v27 = EtwpTiParseContextRecord(&v61, v74, a3);
          v20->Size = 4;
          v28 = v27;
          v55 = v27;
          v20->Ptr = (ULONGLONG)&v74;
          v25->Ptr = (ULONGLONG)&v55;
          p_Ptr = &v56->Ptr;
          *(_QWORD *)&v25->Size = 2LL;
          *p_Ptr = &v61;
          v30 = v57;
          v31 = (unsigned int)(v19 + 2);
          *(_QWORD *)&UserData[v31].Size = 8LL;
          *v30 = 8;
          *v58 = 0;
          UserData[v31].Ptr = (ULONGLONG)&v62;
          v32 = (unsigned int)(v19 + 3);
          UserData[v32].Ptr = (ULONGLONG)&v63;
          *(_QWORD *)&UserData[v32].Size = 8LL;
          v33 = (unsigned int)(v19 + 4);
          UserData[v33].Ptr = (ULONGLONG)&v64;
          *(_QWORD *)&UserData[v33].Size = 8LL;
          v34 = (unsigned int)(v19 + 5);
          UserData[v34].Ptr = (ULONGLONG)&v65;
          *(_QWORD *)&UserData[v34].Size = 8LL;
          v35 = (unsigned int)(v19 + 6);
          UserData[v35].Ptr = (ULONGLONG)&v66;
          *(_QWORD *)&UserData[v35].Size = 8LL;
          v36 = (unsigned int)(v19 + 7);
          UserData[v36].Ptr = (ULONGLONG)&v67;
          *(_QWORD *)&UserData[v36].Size = 8LL;
          v37 = (unsigned int)(v19 + 8);
          UserData[v37].Ptr = (ULONGLONG)&v68;
          *(_QWORD *)&UserData[v37].Size = 8LL;
          v38 = (unsigned int)(v19 + 9);
          UserData[v38].Ptr = (ULONGLONG)&v69;
          *(_QWORD *)&UserData[v38].Size = 8LL;
          v39 = (unsigned int)(v19 + 10);
          UserData[v39].Ptr = (ULONGLONG)&v70;
          *(_QWORD *)&UserData[v39].Size = 8LL;
          v40 = (unsigned int)(v19 + 11);
          UserData[v40].Ptr = (ULONGLONG)&v71;
          *(_QWORD *)&UserData[v40].Size = 8LL;
          v41 = (unsigned int)(v19 + 12);
          v42 = v19 + 13;
          UserData[v41].Ptr = (ULONGLONG)&v72;
          *(_QWORD *)&UserData[v41].Size = 8LL;
          if ( (v28 & 1) != 0 && EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x8000000uLL) )
          {
            v43 = 1;
LABEL_13:
            LOBYTE(CurrentThread) = EtwpTiVadQueryEventWrite(UserData, 38, v42, v8, &v61, 1u, EventDescriptor, v43);
            return (char)CurrentThread;
          }
        }
        else
        {
          v20->Size = 2;
          v20->Ptr = (ULONGLONG)&qword_140019CF8;
          v23->Ptr = (ULONGLONG)&qword_140019CF8;
          v44 = (unsigned int)(v18 + 3);
          v55 = 0;
          v25->Ptr = (ULONGLONG)&qword_140019CF8;
          *(_QWORD *)&UserData[v19].Size = 8LL;
          *p_Size = 8;
          UserData[v44].Ptr = (ULONGLONG)&qword_140019CF8;
          *(_QWORD *)&UserData[v44].Size = 8LL;
          v45 = (unsigned int)(v18 + 4);
          *v26 = 0;
          UserData[v45].Ptr = (ULONGLONG)&qword_140019CF8;
          *(_QWORD *)&UserData[v45].Size = 8LL;
          v46 = (unsigned int)(v18 + 5);
          UserData[v46].Ptr = (ULONGLONG)&qword_140019CF8;
          *(_QWORD *)&UserData[v46].Size = 8LL;
          v47 = (unsigned int)(v18 + 6);
          UserData[v47].Ptr = (ULONGLONG)&qword_140019CF8;
          *(_QWORD *)&UserData[v47].Size = 8LL;
          v48 = (unsigned int)(v18 + 7);
          UserData[v48].Ptr = (ULONGLONG)&qword_140019CF8;
          *(_QWORD *)&UserData[v48].Size = 8LL;
          v49 = (unsigned int)(v18 + 8);
          UserData[v49].Ptr = (ULONGLONG)&qword_140019CF8;
          *(_QWORD *)&UserData[v49].Size = 8LL;
          v50 = (unsigned int)(v18 + 9);
          UserData[v50].Ptr = (ULONGLONG)&qword_140019CF8;
          *(_QWORD *)&UserData[v50].Size = 8LL;
          v51 = (unsigned int)(v18 + 10);
          UserData[v51].Ptr = (ULONGLONG)&qword_140019CF8;
          *(_QWORD *)&UserData[v51].Size = 8LL;
          v52 = (unsigned int)(v18 + 11);
          UserData[v52].Ptr = (ULONGLONG)&qword_140019CF8;
          *(_QWORD *)&UserData[v52].Size = 8LL;
          v53 = (unsigned int)(v18 + 12);
          v42 = v18 + 13;
          UserData[v53].Ptr = (ULONGLONG)&qword_140019CF8;
          *(_QWORD *)&UserData[v53].Size = 8LL;
        }
        v43 = 0;
        goto LABEL_13;
      }
    }
  }
  return (char)CurrentThread;
}
