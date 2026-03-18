/*
 * XREFs of ?ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x140020C18
 * Callers:
 *     NtTokenManagerCreateCompositionTokenHandle @ 0x14001DAE0 (NtTokenManagerCreateCompositionTokenHandle.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionTokenObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        unsigned int *a2,
        struct IDxgkCompositionObject **a3)
{
  struct IDxgkCompositionObject *v3; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // kr00_8
  __int64 Pool2; // rax
  NTSTATUS v8; // ebx
  __int64 v9; // r14
  unsigned int v10; // r12d
  unsigned int v11; // edx
  __int64 v12; // r8
  void *v13; // r10
  PVOID v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // r15
  __int64 v17; // rax
  int v18; // ecx
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  unsigned int v23; // edx
  __int64 v24; // rcx
  PVOID Object; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+10h]
  __int64 v27; // [rsp+B0h] [rbp+18h]

  v3 = (struct DxgkCompositionObject *)((char *)a1 + 32);
  if ( a1 )
  {
    *(_QWORD *)a1 = &SetElement::`vftable';
    *((_QWORD *)a1 + 9) = 0LL;
    *((_DWORD *)a1 + 20) = 0;
    *((_QWORD *)a1 + 11) = 0LL;
    *((_QWORD *)a1 + 12) = 0LL;
    *(_QWORD *)v3 = &CCompositionToken::`vftable'{for `IDxgkCompositionObject'};
    *((_QWORD *)a1 + 5) = &CCompositionToken::`vftable'{for `CTokenBase'};
    *((_QWORD *)a1 + 13) = 0LL;
    *((_DWORD *)a1 + 28) = 0;
    *((_QWORD *)a1 + 15) = 0LL;
    *((_DWORD *)a1 + 32) = 0;
  }
  *a3 = v3;
  *((_DWORD *)a1 + 16) = 0;
  v6 = a2[3];
  v5 = 32 * v6;
  Object = 0LL;
  if ( !is_mul_ok(v6, 0x20uLL) )
  {
    v8 = -1073741675;
    goto LABEL_30;
  }
  if ( !v5 )
  {
    v5 = 1LL;
    goto LABEL_6;
  }
  if ( v5 <= 0x7FFFFFFF )
  {
LABEL_6:
    Pool2 = ExAllocatePool2(256LL, v5, 1650675028LL);
    goto LABEL_7;
  }
  Pool2 = 0LL;
LABEL_7:
  *((_QWORD *)v3 + 9) = Pool2;
  *((_DWORD *)v3 + 20) = 0;
  v8 = Pool2 == 0 ? 0xC0000017 : 0;
  if ( !Pool2 )
  {
LABEL_30:
    (*(void (__fastcall **)(char *))(*((_QWORD *)v3 + 1) + 56LL))((char *)v3 + 8);
    return (unsigned int)v8;
  }
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  while ( 2 )
  {
    if ( v10 < a2[2] )
    {
      v11 = 0;
      v12 = *((unsigned int *)v3 + 20);
      v27 = *(_QWORD *)a2;
      v13 = *(void **)(v27 + 24LL * v10);
      v26 = 3LL * v10;
      while ( v11 < (unsigned int)v12 )
      {
        if ( v13 == *(void **)(*((_QWORD *)v3 + 9) + 32LL * v11) )
        {
          v9 = *((_QWORD *)v3 + 9) + 32LL * v11;
          goto LABEL_15;
        }
        ++v11;
      }
      if ( v11 != (_DWORD)v12 )
      {
LABEL_15:
        if ( v8 >= 0 )
          v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v9 + 24) + 40LL))(
                 *(_QWORD *)(v9 + 24),
                 v27 + 8 * v26 + 8);
        goto LABEL_17;
      }
      if ( (unsigned int)v12 >= a2[3] )
        goto LABEL_29;
      v9 = *((_QWORD *)v3 + 9) + 32 * v12;
      Object = 0LL;
      *(_QWORD *)v9 = v13;
      *(_QWORD *)(v9 + 8) = 0LL;
      v8 = ObReferenceObjectByHandle(v13, 2u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
      if ( v8 >= 0 )
      {
        v14 = Object;
        if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) != 1 )
        {
          ObfDereferenceObject(v14);
          v8 = -1073741788;
          goto LABEL_30;
        }
        *(_QWORD *)(v9 + 8) = v14;
        ++*((_DWORD *)v3 + 20);
        v15 = *(_QWORD *)(v9 + 8);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v15 + 48, 0LL);
        v8 = 0;
        *(_QWORD *)(v15 + 56) = PsGetCurrentThreadId();
        if ( !*(_DWORD *)(v15 + 160) )
          goto LABEL_24;
        v16 = *(_QWORD *)(v15 + 144);
        if ( *(_BYTE *)(v16 + 16)
          && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v16 - 24) + 88LL))(v16 - 24) )
        {
          v17 = *(_QWORD *)(v16 - 8);
        }
        else
        {
LABEL_24:
          v8 = -1073741275;
          v17 = 0LL;
        }
        *(_QWORD *)(v9 + 16) = v17;
        CPushLock::ReleaseLock((CPushLock *)(v15 + 48));
        if ( v8 >= 0 )
        {
          if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2650;
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  v21,
                  v20,
                  v22,
                  0LL,
                  2,
                  -1,
                  (__int64)L"m_pGlobal != NULL",
                  2650LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
            }
          }
          v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL) + 40LL))(v9 + 24);
          goto LABEL_15;
        }
      }
LABEL_17:
      ++v10;
      if ( v8 >= 0 )
        continue;
      goto LABEL_30;
    }
    break;
  }
  v18 = *((_DWORD *)v3 + 20);
  if ( v18 != a2[3] )
  {
LABEL_29:
    v8 = -1073741811;
    goto LABEL_30;
  }
  v23 = 0;
  if ( v18 )
  {
    do
    {
      v24 = v23++;
      *(_QWORD *)(32 * v24 + *((_QWORD *)v3 + 9)) = 0LL;
    }
    while ( v23 < *((_DWORD *)v3 + 20) );
  }
  *((_QWORD *)v3 + 11) = *((_QWORD *)a2 + 2);
  *((_DWORD *)v3 + 24) = *((_DWORD *)v3 + 20);
  return (unsigned int)v8;
}
