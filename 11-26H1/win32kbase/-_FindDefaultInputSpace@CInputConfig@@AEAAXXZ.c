/*
 * XREFs of ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x14008EE48
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x14008DB84 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ModifiableInputSpace@Iter@CInputConfig@@QEAAPEAUCInputSpace@@XZ @ 0x140212054 (-ModifiableInputSpace@Iter@CInputConfig@@QEAAPEAUCInputSpace@@XZ.c)
 */

void __fastcall CInputConfig::_FindDefaultInputSpace(CInputConfig *this, int a2, int a3)
{
  struct CInputSpace *v3; // rbx
  struct CInputSpace *v4; // rsi
  struct CInputSpace *v5; // rdi
  _QWORD ***v6; // rbp
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  PERESOURCE *v10; // r15
  struct _ERESOURCE *v11; // rcx
  _QWORD **v12; // rdx
  _QWORD *v13; // r14
  _QWORD **v14; // rcx
  struct CInputSpace *v15; // rax
  int v16; // ecx
  _QWORD v17[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = *(_QWORD ****)(W32GetUserSessionState((_DWORD)this, a2, a3) + 18680);
  v10 = (PERESOURCE *)(W32GetUserSessionState(v8, v7, v9) + 18688);
  v11 = *v10;
  v17[0] = v10;
  ExEnterCriticalRegionAndAcquireResourceShared(v11);
  v12 = *v6;
  v17[1] = v6;
  v13 = *v12;
  while ( 1 )
  {
    v17[3] = v13;
    v17[2] = v12;
    v14 = 0LL;
    if ( v12 != v6 )
      v14 = v12 + 2;
    if ( !v14 )
      break;
    v15 = CInputConfig::Iter::ModifiableInputSpace((CInputConfig::Iter *)v17);
    v16 = *((_DWORD *)v15 + 2);
    if ( *((_BYTE *)v15 + 1448) )
      v3 = v15;
    if ( (v16 & 1) != 0 )
    {
      v4 = v15;
      *((_DWORD *)v15 + 2) = v16 & 0xFFFFFFFE;
    }
    v12 = (_QWORD **)v13;
    v13 = (_QWORD *)*v13;
    if ( !v5 )
      v5 = v15;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*v10);
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 831LL);
  if ( !v3 )
  {
    if ( v4 )
    {
      v3 = v4;
    }
    else
    {
      v3 = v5;
      if ( !v5 )
        return;
    }
  }
  *((_DWORD *)v3 + 2) |= 1u;
}
