/*
 * XREFs of ?Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z @ 0x14020DFE4
 * Callers:
 *     ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z @ 0x14020E290 (-EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?Disable@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x14020DF68 (-Disable@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::Enable(DXGVMBUSCHANNEL *this, char a2)
{
  __int64 v4; // rsi
  _BYTE *v5; // r14
  char *v6; // rbx
  struct _KEVENT *v7; // rcx
  _BYTE *v8; // r15
  __int64 v9; // rcx
  int v10; // eax
  char v11; // bl
  struct _KEVENT *v12; // rcx
  void *v13; // rcx
  NTSTATUS v14; // eax
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+30h] [rbp-48h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  __int64 v19; // [rsp+38h] [rbp-40h]
  __int64 v20; // [rsp+40h] [rbp-38h]
  __int64 v21; // [rsp+40h] [rbp-38h]
  _BYTE v22[16]; // [rsp+50h] [rbp-28h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  LODWORD(v4) = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (DXGVMBUSCHANNEL *)((char *)this + 120), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  if ( !*((_QWORD *)this + 2) )
  {
    v11 = 0;
    goto LABEL_15;
  }
  v5 = (char *)this + 26;
  if ( !*((_BYTE *)this + 26) )
  {
    if ( !*((_BYTE *)this + 24) )
    {
      v6 = (char *)this + 26;
      goto LABEL_7;
    }
    if ( *((_BYTE *)this + 25) )
    {
      v6 = (char *)this + 26;
LABEL_7:
      v7 = (struct _KEVENT *)*((_QWORD *)this + 4);
      v8 = (char *)this + 26;
      if ( v7 )
      {
        KeClearEvent(v7);
        v8 = v6;
      }
      v9 = *((_QWORD *)this + 2);
      *((_BYTE *)this + 24) = 1;
      *v5 = 1;
      v10 = ((__int64 (__fastcall *)(__int64))qword_140168430)(v9);
      v4 = v10;
      if ( v10 < 0 )
      {
        WdLogSingleEntry5(
          2LL,
          v10,
          this,
          *((unsigned __int8 *)this + 24),
          *((unsigned __int8 *)this + 25),
          (unsigned __int8)*v5);
        v20 = (unsigned __int8)*v8;
        v18 = *((unsigned __int8 *)this + 25);
        v16 = *((unsigned __int8 *)this + 24);
        WdLogGlobalForLineNumber = 186;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"VmbChannelEnable failed. Returning 0x%I64x",
          v4,
          (__int64)this,
          v16,
          v18,
          v20);
        *((_BYTE *)this + 24) = 0;
        *v8 = 0;
      }
      else if ( *((_BYTE *)this + 27) )
      {
        ((void (__fastcall *)(_QWORD))qword_1401684E0)(*((_QWORD *)this + 2));
      }
    }
  }
  v11 = a2 & *((_BYTE *)this + 24);
LABEL_15:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v22);
  if ( v11 )
  {
    v12 = (struct _KEVENT *)*((_QWORD *)this + 4);
    if ( v12 )
    {
      if ( !KeReadStateEvent(v12) )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 204;
        Timeout.QuadPart = (-(__int64)((_BYTE)KdDebuggerEnabled != 0) & 0xFFFFFFFF56207380uLL) - 150000000;
        v13 = (void *)*((_QWORD *)this + 4);
        *((_QWORD *)this + 5) = KeGetCurrentThread();
        v14 = KeWaitForSingleObject(v13, Executive, 0, 0, &Timeout);
        v4 = v14;
        *((_QWORD *)this + 5) = 0LL;
        if ( v14 )
        {
          WdLogSingleEntry5(
            1LL,
            v14,
            this,
            *((unsigned __int8 *)this + 24),
            *((unsigned __int8 *)this + 25),
            *((unsigned __int8 *)this + 26));
          v21 = *((unsigned __int8 *)this + 26);
          v19 = *((unsigned __int8 *)this + 25);
          v17 = *((unsigned __int8 *)this + 24);
          WdLogGlobalForLineNumber = 225;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Failed on waiting for VM bus channel to start: 0x%I64x",
            v4,
            (__int64)this,
            v17,
            v19,
            v21);
          LODWORD(v4) = -1073741823;
LABEL_21:
          DXGVMBUSCHANNEL::Disable(this);
          return (unsigned int)v4;
        }
      }
    }
  }
  if ( (int)v4 < 0 )
    goto LABEL_21;
  return (unsigned int)v4;
}
