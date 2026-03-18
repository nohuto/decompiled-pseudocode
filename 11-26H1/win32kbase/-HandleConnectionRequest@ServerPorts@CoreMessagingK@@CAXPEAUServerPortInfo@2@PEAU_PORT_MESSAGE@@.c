/*
 * XREFs of ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1400DA424
 * Callers:
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1400D92B4 (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1400D9748 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 *     ?TraceConnectionRequest@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@EJII@Z @ 0x1400DA5CC (-TraceConnectionRequest@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@EJII@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CoreMessagingK::ServerPorts::HandleConnectionRequest(
        struct CoreMessagingK::ServerPortInfo *a1,
        struct _PORT_MESSAGE *a2)
{
  unsigned int DoNotUseThisField_low; // r15d
  unsigned __int8 v3; // di
  unsigned int v4; // r12d
  __int64 v5; // rbx
  bool v6; // zf
  __int64 v9; // rdx
  int v10; // r14d
  __int64 Pool2; // rax
  unsigned __int8 v12; // [rsp+40h] [rbp-69h]
  _DWORD v13[2]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v14; // [rsp+58h] [rbp-51h]
  __int64 v15; // [rsp+60h] [rbp-49h]
  int v16; // [rsp+68h] [rbp-41h]
  int v17; // [rsp+6Ch] [rbp-3Dh]
  __int128 v18; // [rsp+70h] [rbp-39h]
  _QWORD v19[10]; // [rsp+80h] [rbp-29h] BYREF

  DoNotUseThisField_low = LODWORD(a2->DoNotUseThisField);
  v3 = 0;
  v4 = *((_DWORD *)&a2->DoNotUseThisField + 2);
  v5 = 0LL;
  v6 = a2->u1.s1.DataLength == 24;
  v13[1] = 0;
  v17 = 0;
  if ( v6 )
  {
    Pool2 = ExAllocatePool2(256LL, 32LL, 1229147459LL);
    if ( Pool2 )
    {
      v5 = Pool2;
      v3 = 1;
      *(_DWORD *)(Pool2 + 16) = 1;
    }
  }
  v13[0] = 48;
  v14 = 0LL;
  v16 = 512;
  v15 = 0LL;
  v18 = 0LL;
  memset(v19, 0, 0x48uLL);
  v9 = *((_QWORD *)a1 + 1);
  v12 = v3;
  LODWORD(v19[0]) = 0x100000;
  v19[2] = 0xFFFFLL;
  v10 = ZwAlpcAcceptConnectPort(v5 & -(__int64)(v3 != 0), v9, 0LL, v13, v19, v5 & -(__int64)(v3 != 0), a2, 0LL, v12);
  if ( v10 >= 0 && v3 )
  {
    *(_DWORD *)(v5 + 8) = DoNotUseThisField_low;
    *(_DWORD *)(v5 + 12) = v4;
    *(_QWORD *)(v5 + 24) = *((_QWORD *)a1 + 5);
    *((_QWORD *)a1 + 5) = v5;
  }
  else if ( v5 )
  {
    CoreMessagingK::ClientPortInfo::Release((CoreMessagingK::ClientPortInfo *)v5);
  }
  CoreMessagingK::Log::TraceConnectionRequest(a1, v3, v10, DoNotUseThisField_low, v4);
}
