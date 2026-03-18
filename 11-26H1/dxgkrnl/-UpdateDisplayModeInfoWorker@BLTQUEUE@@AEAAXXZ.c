/*
 * XREFs of ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x14009B4C0
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14009A6DC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x14003CDA8 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x14003D0D0 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline @ 0x14004B5C4 (Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?StopVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x140192B40 (-StopVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x140283D74 (-StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1404460AC (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 */

void __fastcall BLTQUEUE::UpdateDisplayModeInfoWorker(BLTQUEUE *this)
{
  struct _KMUTANT *v2; // rdi
  LARGE_INTEGER v3; // rax
  __int64 v4; // rcx
  LONGLONG v5; // rdx
  __int64 v6; // rcx
  LARGE_INTEGER v7; // rax
  int v8; // r9d
  unsigned int v9; // r8d
  __int64 v10; // rdx
  int v11; // r9d
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _BYTE v16[24]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v17[64]; // [rsp+48h] [rbp-40h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+8h] BYREF

  v2 = (struct _KMUTANT *)((char *)this + 600);
  if ( (unsigned int)((__int64 (*)(void))Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline)() )
  {
    KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
    *((_QWORD *)this + 48) = *((_QWORD *)this + 86);
    KeReleaseMutex(v2, 0);
  }
  else
  {
    *((_QWORD *)this + 48) = *((_QWORD *)this + 86);
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, (struct _KTHREAD **)this + 53, 0);
  DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v16);
  if ( (unsigned int)((__int64 (*)(void))Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline)()
    && (unsigned int)Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline() )
  {
    DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v17, (KSPIN_LOCK *)this + 57, 1);
    PerformanceFrequency.QuadPart = 0LL;
    v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v4 = *((unsigned int *)this + 96);
    *((LARGE_INTEGER *)this + 61) = v3;
    *((_QWORD *)this + 62) = PerformanceFrequency.QuadPart * *((unsigned int *)this + 97) / v4;
    DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v17);
  }
  else
  {
    PerformanceFrequency.QuadPart = 0LL;
    v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v6 = *((unsigned int *)this + 96);
    *((LARGE_INTEGER *)this + 61) = v7;
    v5 = PerformanceFrequency.QuadPart * *((unsigned int *)this + 97) % v6;
    *((_QWORD *)this + 62) = PerformanceFrequency.QuadPart * *((unsigned int *)this + 97) / v6;
  }
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline(v6, v5) )
  {
    KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
    v8 = *((_DWORD *)this + 174);
    v9 = 40 * v8 / 0x3E8u;
    *((_DWORD *)this + 126) = v9;
    *((_DWORD *)this + 127) = v9 + v8;
    *((_DWORD *)this + 128) = v8 + v9 + 5 * v8 / 0x3E8u;
    KeReleaseMutex(v2, 0);
  }
  else
  {
    v11 = *((_DWORD *)this + 174);
    v12 = 40 * v11 / 0x3E8u;
    *((_DWORD *)this + 126) = v12;
    *((_DWORD *)this + 127) = v12 + v11;
    v10 = v11 + v12 + 5 * v11 / 0x3E8u;
    *((_DWORD *)this + 128) = v10;
  }
  if ( *(_QWORD *)this )
  {
    v10 = 4024LL * *((unsigned int *)this + 64);
    *((_DWORD *)this + 65) = *(_DWORD *)(v10 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 88LL) + 128LL) + 1072);
  }
  if ( (*((_DWORD *)this + 268) & 2) != 0 && *((_DWORD *)this + 34) != 1 )
  {
    LOBYTE(v10) = 1;
    BLTQUEUE::StopVSync(this, v10, 4LL);
    LOBYTE(v13) = 1;
    BLTQUEUE::StartVSync(this, v13, 4LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline(v15, v14) )
  {
    KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
    *((_DWORD *)this + 169) &= ~4u;
    KeReleaseMutex(v2, 0);
  }
  else
  {
    *((_BYTE *)this + 658) = 0;
  }
  BLTQUEUE::FinishCommand(this, 0);
}
