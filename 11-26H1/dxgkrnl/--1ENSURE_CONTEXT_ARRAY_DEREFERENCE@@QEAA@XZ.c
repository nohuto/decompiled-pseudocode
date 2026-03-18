/*
 * XREFs of ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x140017500
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140294050 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
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

void __fastcall ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE(
        ENSURE_CONTEXT_ARRAY_DEREFERENCE *this)
{
  __int64 i; // r14
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rax
  struct DXGADAPTER *v6; // rdx
  const char *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  _BYTE v12[8]; // [rsp+28h] [rbp-91h] BYREF
  __int64 v13; // [rsp+30h] [rbp-89h]
  char v14; // [rsp+38h] [rbp-81h]
  _BYTE v15[16]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v16[8]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v17[64]; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v18[64]; // [rsp+98h] [rbp-21h] BYREF
  __int64 v19; // [rsp+D8h] [rbp+1Fh]
  char v20; // [rsp+E0h] [rbp+27h]

  if ( *(_QWORD *)this )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 2); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)this + 8 * i);
      if ( v3 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v4 = *(_QWORD *)(v3 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v15,
          (struct DXGDEVICE *)v4);
        v5 = *(_QWORD *)(v3 + 16);
        v14 = 0;
        v13 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
        COREACCESS::COREACCESS((COREACCESS *)v17, *(struct DXGADAPTER *const *)(*(_QWORD *)(v4 + 16) + 16LL));
        v6 = *(struct DXGADAPTER **)(v4 + 1896);
        if ( !v6 )
          v6 = *(struct DXGADAPTER **)(*(_QWORD *)(v4 + 16) + 16LL);
        COREACCESS::COREACCESS((COREACCESS *)v18, v6);
        v8 = *(_QWORD *)(v4 + 16);
        v9 = *(_QWORD *)(v4 + 1896);
        v19 = v4;
        if ( v9 == *(_QWORD *)(v8 + 16) || (v20 = 1, !v9) )
          v20 = 0;
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v16, v7);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL) + 200LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v4, (struct DXGCONTEXT *)v3, (struct COREDEVICEACCESS *)v16);
        COREACCESS::~COREACCESS((COREACCESS *)v18, v10);
        COREACCESS::~COREACCESS((COREACCESS *)v17, v11);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v15);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
      }
    }
  }
}
