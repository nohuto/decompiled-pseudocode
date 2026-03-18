/*
 * XREFs of ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x14003A7E0
 * Callers:
 *     ?Discard@CCompositionToken@@UEAAXXZ @ 0x14003A5A0 (-Discard@CCompositionToken@@UEAAXXZ.c)
 *     ?InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x14003A6B0 (-InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 * Callees:
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x14003AFA8 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionToken::UpdateDirtyRegions(CCompositionToken *this)
{
  int v1; // edi
  unsigned int i; // r14d
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rbx
  int v9; // esi
  _QWORD *j; // rax
  unsigned __int64 v11; // r15
  char v12; // al
  __int64 v13; // rbx
  HANDLE CurrentThreadId; // rax
  __int64 v15; // rcx

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    v4 = *((_QWORD *)this + 9);
    v5 = 32LL * i;
    v6 = *(_QWORD *)(v5 + v4 + 24);
    v7 = *(_QWORD *)(v5 + v4 + 8);
    if ( v6 )
    {
      v8 = *(_QWORD *)(v5 + v4 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v7 + 48, 0LL);
      *(_QWORD *)(v7 + 56) = PsGetCurrentThreadId();
      v9 = -1073741275;
      if ( *(_DWORD *)(v7 + 160) )
      {
        for ( j = *(_QWORD **)(v7 + 144); j != (_QWORD *)(v7 + 144); j = (_QWORD *)*j )
        {
          v11 = (unsigned __int64)(j - 3);
          if ( *(j - 1) == v8 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*(_QWORD *)v11 + 88LL))(j - 3) )
            {
              v12 = -(*(char (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 88LL))(v11);
              v13 = v11 & -(__int64)(v12 != 0);
              if ( *(_DWORD *)(v13 + 0x18C) == -1 )
                *(_DWORD *)((v11 & -(__int64)(v12 != 0)) + 0x18C) = 0;
              *(_DWORD *)((v11 & -(__int64)(v12 != 0)) + 0x30) = 1;
              if ( *(_DWORD *)((v11 & -(__int64)(v12 != 0)) + 0x130) )
              {
                CCompositionBuffer::AddScrollAsDirty(
                  (CCompositionBuffer *)(v11 & -(__int64)(v12 != 0)),
                  (const struct ScrollOptimization *)(v13 + 304));
                *(_DWORD *)(v13 + 304) = 0;
                *(_BYTE *)(v13 + 43) = 1;
              }
              if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6) )
              {
                (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v13 + 296) + 48LL))(
                  *(_QWORD *)(v13 + 296),
                  v6,
                  2LL);
                *(_BYTE *)(v13 + 43) = 1;
              }
              v9 = 0;
            }
            else
            {
              v9 = -1073741811;
            }
            break;
          }
        }
      }
      CurrentThreadId = PsGetCurrentThreadId();
      v15 = v7 + 48;
      if ( CurrentThreadId == *(HANDLE *)(v7 + 56) )
      {
        *(_QWORD *)(v7 + 56) = 0LL;
        ExReleasePushLockExclusiveEx(v15, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v15, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v1 >= 0 && v9 < 0 )
        v1 = v9;
    }
  }
  return (unsigned int)v1;
}
