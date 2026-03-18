/*
 * XREFs of ?FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x140202B30
 * Callers:
 *     ?CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1402026B0 (-CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z @ 0x140202DA4 (-FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

void __fastcall DXGSESSIONDATA::FinishPnPTransitionOnSession(DXGSESSIONDATA *this, struct _PNP_TRANS_TOKEN *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // edx
  DXGSESSIONDATA *v5; // rsi
  char v6; // bp
  __int64 v7; // r8
  unsigned int v8; // ebx
  char v9; // r15
  __int64 CurrentProcess; // rax
  int updated; // eax
  __int64 v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned int v17; // edi
  char v18; // dl
  unsigned int v19; // [rsp+50h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-60h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)this + 4694);
  v5 = this;
  v6 = 1;
  if ( v4 )
  {
    v7 = *((_QWORD *)this + 2348);
    do
    {
      this = *(DXGSESSIONDATA **)(32LL * v3 + v7 + 8);
      if ( this )
      {
        if ( this == a2 )
          break;
        v6 = 0;
      }
      ++v3;
    }
    while ( v3 < v4 );
  }
  if ( *((_QWORD *)v5 + 2317) )
  {
    v8 = *(_DWORD *)v5;
    memset(&ApcState, 0, sizeof(ApcState));
    v9 = 0;
    CurrentProcess = PsGetCurrentProcess(this);
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != v8 )
    {
      v9 = 1;
      KeStackAttachProcess(*((PRKPROCESS *)v5 + 2332), &ApcState);
    }
    _InterlockedIncrement(*((volatile signed __int32 **)v5 + 2317));
    if ( v9 )
      KeUnstackDetachProcess(&ApcState);
  }
  if ( *((_BYTE *)a2 + 73) )
  {
    v19 = *(_DWORD *)v5;
    updated = ZwUpdateWnfStateData(&WNF_DX_REMOTE_ADAPTER_START, (char *)a2 + 56, 16LL);
    if ( updated < 0 )
    {
      v12 = updated;
      WdLogSingleEntry2(2LL, v19, updated);
      WdLogGlobalForLineNumber = 4690;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to send Remote Adapter Start WNF in session 0x%I64x, (Status=0x%I64x)",
        v19,
        v12,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( v3 < *((_DWORD *)v5 + 4694) )
  {
    v13 = 32LL * v3;
    *(_QWORD *)(v13 + *((_QWORD *)v5 + 2348) + 8) = 0LL;
    v14 = (_QWORD *)(v13 + *((_QWORD *)v5 + 2348) + 16LL);
    v15 = *v14;
    if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v16 = (_QWORD *)v14[1], (_QWORD *)*v16 != v14) )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    --*((_DWORD *)a2 + 1);
    if ( *((_QWORD *)v5 + 2346) )
    {
      v17 = v3 + 1;
      if ( v6 )
      {
        while ( 1 )
        {
          v18 = 0;
          if ( v17 >= *((_DWORD *)v5 + 4694) )
            break;
          if ( !*(_QWORD *)(32LL * v17 + *((_QWORD *)v5 + 2348) + 8) )
            v18 = v6;
          ++v17;
          v6 = v18;
          if ( !v18 )
            return;
        }
        KeSetEvent(*((PRKEVENT *)v5 + 2346), 0, 0);
      }
    }
  }
}
