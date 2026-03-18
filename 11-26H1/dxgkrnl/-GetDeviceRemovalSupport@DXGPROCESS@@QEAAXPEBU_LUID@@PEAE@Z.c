/*
 * XREFs of ?GetDeviceRemovalSupport@DXGPROCESS@@QEAAXPEBU_LUID@@PEAE@Z @ 0x1401F6100
 * Callers:
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1401F80B0 (DxgkGetProcessDeviceRemovalSupport.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x140055254 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 */

void __fastcall DXGPROCESS::GetDeviceRemovalSupport(DXGPROCESS *this, const struct _LUID *a2, bool *a3)
{
  char *v6; // rdi
  __int16 v7; // cx
  char *v8; // rax
  _QWORD *v9; // rbx
  __int64 Current; // rax
  __int64 v11; // rsi
  _QWORD v12[2]; // [rsp+50h] [rbp-28h] BYREF

  if ( !DXGFASTMUTEX::IsOwner((DXGPROCESS *)((char *)this + 104)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5624;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsMutexOwner()", 5624LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = (char *)this + 216;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 216, 0LL);
  *((_QWORD *)this + 28) = KeGetCurrentThread();
  v7 = *((_WORD *)this + 280);
  if ( !v7 || (*a3 = v7 == 1, v7 != 1) )
  {
    v8 = (char *)this + 320;
    *a3 = 1;
    v9 = (_QWORD *)*((_QWORD *)this + 40);
    v12[0] = v8;
    while ( 1 )
    {
      v12[1] = v9;
      Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v12);
      if ( !Current )
        break;
      if ( *(_DWORD *)(Current + 464) != 2 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(Current + 16) + 16LL);
        if ( !v11 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5667;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapter != NULL", 5667LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( *(_DWORD *)(v11 + 412) == a2->LowPart && *(_DWORD *)(v11 + 416) == a2->HighPart )
        {
          *a3 = 0;
          break;
        }
      }
      v9 = (_QWORD *)*v9;
    }
  }
  *((_QWORD *)v6 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
}
