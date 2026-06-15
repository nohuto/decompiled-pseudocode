/*
 * XREFs of ?GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z @ 0x18001C0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x180070B68 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMeterSoftware::GetChannelsPeakValues(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        float *a3)
{
  __int64 v3; // rdi
  float *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // r14
  int v7; // ebx
  ULONG_PTR SpinCount; // rcx
  int v9; // eax
  __int64 v10; // rcx
  _BYTE *v11; // rax
  float v12; // xmm0_4
  _BYTE v14[128]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = a2;
  v4 = a3;
  if ( !a3 )
  {
    v7 = -2147467261;
LABEL_18:
    AudSrvTraceLoggingErrorHelper("CMeterSoftware::GetChannelsPeakValues", 711, v7);
    return (unsigned int)v7;
  }
  if ( a2 != LODWORD(this->LockSemaphore) )
  {
    v7 = -2147024809;
    goto LABEL_18;
  }
  v6 = this + 1;
  v7 = 0;
  EnterCriticalSection(this + 1);
  SpinCount = this->SpinCount;
  if ( SpinCount && LODWORD(this->LockSemaphore) <= 0x20 )
  {
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _BYTE *, _QWORD))(*(_QWORD *)SpinCount + 24LL))(
           SpinCount,
           v14,
           (unsigned int)v3);
    v7 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -2147417848 || v9 == -2147023174 || v9 == -2147023179 )
      {
        if ( (_DWORD)v3 )
          memset_0(v4, 0, 4 * v3);
        ATL::CComPtrBase<IPart>::Release(&this->SpinCount);
        v7 = 0;
      }
    }
    else if ( (_DWORD)v3 )
    {
      v10 = (unsigned int)v3;
      v11 = (_BYTE *)(v14 - (_BYTE *)v4);
      do
      {
        v12 = fminf(*(float *)((char *)v4 + (_QWORD)v11), 1.0);
        if ( v12 <= 0.0 )
          v12 = 0.0;
        *v4++ = v12;
        --v10;
      }
      while ( v10 );
    }
  }
  else if ( (_DWORD)v3 )
  {
    memset_0(v4, 0, 4 * v3);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  if ( v7 < 0 )
    goto LABEL_18;
  return (unsigned int)v7;
}
