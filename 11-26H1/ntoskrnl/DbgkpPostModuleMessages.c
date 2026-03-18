/*
 * XREFs of DbgkpPostModuleMessages @ 0x140B27048
 * Callers:
 *     DbgkpPostFakeProcessCreateMessages @ 0x140985F5C (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkCreateThread @ 0x1409EAD24 (DbgkCreateThread.c)
 * Callees:
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     DbgkPostModuleMessage @ 0x1404C6E8C (DbgkPostModuleMessage.c)
 *     PsGetProcessEnclaveModuleInfo @ 0x1404F3AFC (PsGetProcessEnclaveModuleInfo.c)
 *     PsFreeEnclaveModuleInfo @ 0x1404F3D50 (PsFreeEnclaveModuleInfo.c)
 *     DbgkPostEnclaveModuleMessages @ 0x1405B3CA8 (DbgkPostEnclaveModuleMessages.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     VslSendDebugAttachNotifications @ 0x140792C0C (VslSendDebugAttachNotifications.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

void __fastcall DbgkpPostModuleMessages(__int64 a1, void *a2, struct _KEVENT *a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v7; // rcx
  __int64 ULong64FromUser; // rsi
  unsigned int *v9; // rax
  unsigned int v10; // r14d
  int v11; // r15d
  unsigned int *v12; // rax
  int v13; // ecx
  __int64 v14; // rcx
  int v15; // esi
  char *v16; // r14
  __int64 v17; // r15
  __int16 v18; // ax
  unsigned int *v20; // r14
  unsigned int *v21; // rsi
  unsigned int *v22; // rax
  unsigned int v23; // r14d
  int v24; // r15d
  unsigned int v25; // eax
  unsigned int *v26; // rax
  int v27; // ecx
  int ULongFromUser; // [rsp+38h] [rbp-C0h]
  PVOID P; // [rsp+48h] [rbp-B0h] BYREF
  unsigned int *v30; // [rsp+50h] [rbp-A8h]
  unsigned int *v31; // [rsp+58h] [rbp-A0h]
  void *v32; // [rsp+60h] [rbp-98h]
  unsigned int *v33; // [rsp+68h] [rbp-90h]
  unsigned int *v34; // [rsp+70h] [rbp-88h]
  __int64 v35; // [rsp+78h] [rbp-80h]
  __int64 v36; // [rsp+80h] [rbp-78h]
  __int64 v37; // [rsp+88h] [rbp-70h]
  __int64 v38; // [rsp+90h] [rbp-68h]
  __int64 v39; // [rsp+98h] [rbp-60h]
  __int64 v40; // [rsp+A0h] [rbp-58h]
  __int64 v41; // [rsp+A8h] [rbp-50h]
  __int64 v42; // [rsp+B0h] [rbp-48h]
  int v43; // [rsp+100h] [rbp+8h]
  unsigned __int64 v44; // [rsp+118h] [rbp+20h] BYREF

  P = 0LL;
  LODWORD(v44) = 0;
  if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
  {
    VslSendDebugAttachNotifications(a1, (__int64)a2, (__int64)a3);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 736);
    if ( v7 )
    {
      v30 = (unsigned int *)(RtlReadULong64FromUser((volatile void *)(v7 + 24)) + 16);
      v35 = 1LL;
      ProbeForRead(v30, 1uLL, 1u);
      ULong64FromUser = RtlReadULong64FromUser(v30);
      v9 = v30;
      v33 = v30;
      v10 = 0;
      v11 = 0;
      while ( (unsigned int *)ULong64FromUser != v30 && (unsigned int *)ULong64FromUser != v9 && v10 != -1 )
      {
        if ( v10 > 1 )
        {
          v36 = 1LL;
          ProbeForRead((volatile void *)ULong64FromUser, 1uLL, 1u);
          v32 = (void *)RtlReadULong64FromUser((volatile void *)(ULong64FromUser + 48));
          v37 = 1LL;
          ProbeForRead(v32, 1uLL, 1u);
          v12 = RtlImageNtHeader((unsigned __int64)v32);
          v31 = v12;
          if ( v12 )
          {
            ULongFromUser = RtlReadULongFromUser(v12 + 3);
            v13 = RtlReadULongFromUser(v31 + 4);
            LODWORD(v12) = ULongFromUser;
          }
          else
          {
            v13 = 0;
          }
          DbgkPostModuleMessage((PVOID)a1, a2, v32, (int)v12, v13, a3);
        }
        if ( v10 == v11 )
        {
          v33 = (unsigned int *)ULong64FromUser;
          v11 = 2 * v11 + 2;
        }
        v38 = 1LL;
        ProbeForRead((volatile void *)ULong64FromUser, 1uLL, 1u);
        ULong64FromUser = RtlReadULong64FromUser((volatile void *)ULong64FromUser);
        ++v10;
        v9 = v33;
      }
    }
    if ( (int)PsGetProcessEnclaveModuleInfo(a1, &P, (unsigned int *)&v44, a4) >= 0 )
    {
      v15 = v44;
      if ( (_DWORD)v44 )
      {
        v16 = (char *)P;
        v17 = (unsigned int)v44;
        do
        {
          DbgkPostEnclaveModuleMessages((void *)a1, a2, a3, *(_QWORD *)v16, *((_DWORD *)v16 + 2));
          v16 += 16;
          --v17;
        }
        while ( v17 );
      }
      PsFreeEnclaveModuleInfo((char *)P, v15);
    }
    v14 = *(_QWORD *)(a1 + 784);
    if ( v14 )
    {
      v18 = *(_WORD *)(a1 + 1772);
      if ( v18 == 332 || v18 == 452 )
      {
        v20 = (unsigned int *)((unsigned int)RtlReadULongFromUser((unsigned int *)(*(_QWORD *)v14 + 12LL)) + 12LL);
        v31 = v20;
        v39 = 1LL;
        ProbeForRead(v20, 1uLL, 1u);
        v21 = (unsigned int *)(unsigned int)RtlReadULongFromUser(v20);
        v22 = v20;
        v34 = v20;
        v23 = 0;
        v24 = 0;
        while ( v21 != v31 && v21 != v22 && v23 != -1 )
        {
          if ( v23 > 1 )
          {
            v40 = 1LL;
            ProbeForRead(v21, 1uLL, 1u);
            v25 = RtlReadULongFromUser(v21 + 6);
            v41 = 1LL;
            v44 = v25;
            ProbeForRead((volatile void *)v25, 1uLL, 1u);
            v26 = RtlImageNtHeader(v44);
            v30 = v26;
            if ( v26 )
            {
              v43 = RtlReadULongFromUser(v26 + 3);
              v27 = RtlReadULongFromUser(v30 + 4);
              LODWORD(v26) = v43;
            }
            else
            {
              v27 = 0;
            }
            DbgkPostModuleMessage((PVOID)a1, a2, (void *)v44, (int)v26, v27, a3);
          }
          if ( v23 == v24 )
          {
            v34 = v21;
            v24 = 2 * v24 + 2;
          }
          v42 = 1LL;
          ProbeForRead(v21, 1uLL, 1u);
          v21 = (unsigned int *)(unsigned int)RtlReadULongFromUser(v21);
          ++v23;
          v22 = v34;
        }
      }
    }
  }
}
