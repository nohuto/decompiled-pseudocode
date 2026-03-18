/*
 * XREFs of ??1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ @ 0x140017E28
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A62FC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE(ENSURE_CONTEXT_DEREFERENCE *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rax
  struct DXGADAPTER *v4; // rdx
  const char *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  _BYTE v10[16]; // [rsp+20h] [rbp-89h] BYREF
  _BYTE v11[8]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v12; // [rsp+38h] [rbp-71h]
  char v13; // [rsp+40h] [rbp-69h]
  _BYTE v14[8]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v15[64]; // [rsp+58h] [rbp-51h] BYREF
  _BYTE v16[64]; // [rsp+98h] [rbp-11h] BYREF
  __int64 v17; // [rsp+D8h] [rbp+2Fh]
  char v18; // [rsp+E0h] [rbp+37h]

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this && _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v2 = *(_QWORD *)(v1 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v10,
      (struct DXGDEVICE *)v2);
    v3 = *(_QWORD *)(v1 + 16);
    v13 = 0;
    v12 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
    COREACCESS::COREACCESS((COREACCESS *)v15, *(struct DXGADAPTER *const *)(*(_QWORD *)(v2 + 16) + 16LL));
    v4 = *(struct DXGADAPTER **)(v2 + 1896);
    if ( !v4 )
      v4 = *(struct DXGADAPTER **)(*(_QWORD *)(v2 + 16) + 16LL);
    COREACCESS::COREACCESS((COREACCESS *)v16, v4);
    v6 = *(_QWORD *)(v2 + 16);
    v7 = *(_QWORD *)(v2 + 1896);
    v17 = v2;
    if ( v7 == *(_QWORD *)(v6 + 16) || (v18 = 1, !v7) )
      v18 = 0;
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v14, v5);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v2, (struct DXGCONTEXT *)v1, (struct COREDEVICEACCESS *)v14);
    COREACCESS::~COREACCESS((COREACCESS *)v16, v8);
    COREACCESS::~COREACCESS((COREACCESS *)v15, v9);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v10);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v2 + 16), (struct DXGDEVICE *)v2);
  }
}
