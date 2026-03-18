/*
 * XREFs of NtDCompositionGetFrameSurfaceUpdates @ 0x1400A2A90
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1400A3000 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionGetFrameSurfaceUpdates(void *Src, void *a2, void *a3)
{
  __int64 v5; // r15
  signed int v6; // ebx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _ERESOURCE *v16; // rbx
  __int64 DCompSessionState; // rbx
  struct _ERESOURCE *v18; // r14
  __int64 v19; // rcx
  unsigned __int64 v21; // [rsp+38h] [rbp-60h] BYREF
  __int64 v22; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+48h] [rbp-50h]
  _QWORD v24[9]; // [rsp+50h] [rbp-48h] BYREF
  int Srca; // [rsp+A0h] [rbp+8h] BYREF
  void *v26; // [rsp+A8h] [rbp+10h]
  void *v27; // [rsp+B0h] [rbp+18h]
  int v28; // [rsp+B8h] [rbp+20h] BYREF

  v27 = a3;
  v26 = a2;
  Srca = 0;
  v28 = 0;
  v5 = 0LL;
  v23 = 0LL;
  if ( Src )
  {
    v22 = 0LL;
    RtlCopyFromUser(&v22, Src, 8uLL);
    v5 = v22;
    v23 = v22;
    v6 = v22 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD *)(W32GetUserSessionState((_DWORD)Src, (_DWORD)a2, (_DWORD)a3) + 70544);
    if ( PsGetCurrentProcess(v8) == v7 )
    {
      KeEnterCriticalRegion();
      v9 = 0LL;
      v10 = 0LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( CurrentProcessWin32Process )
      {
        v14 = -*(_QWORD *)CurrentProcessWin32Process;
        v13 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        v15 = v13 & CurrentProcessWin32Process;
        if ( v15 )
          v10 = *(_QWORD *)(v15 + 256);
      }
      if ( v10 )
      {
        v16 = *(struct _ERESOURCE **)(v10 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v16, 1u);
        v9 = *(_QWORD *)(v10 + 24);
        if ( v9 )
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        ExReleaseResourceLite(*(PERESOURCE *)(v10 + 32));
        KeLeaveCriticalRegion();
      }
      if ( v9 )
        goto LABEL_18;
      DCompSessionState = W32GetDCompSessionState(v14);
      v18 = *(struct _ERESOURCE **)(DCompSessionState + 32);
      if ( v18 )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v18, 1u);
        v9 = *(_QWORD *)(DCompSessionState + 16);
        if ( v9 )
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        ExReleaseResourceLite(*(PERESOURCE *)(DCompSessionState + 32));
        KeLeaveCriticalRegion();
      }
      if ( v9 )
      {
LABEL_18:
        v22 = 0LL;
        v6 = -1073741275;
        v19 = *(_QWORD *)(v9 + 192);
        if ( v19 )
          v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v19 + 32LL))(v19, v5, &v22);
        if ( v6 >= 0 )
        {
          v24[0] = 0LL;
          v21 = 0LL;
          v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, unsigned __int64 *))(**(_QWORD **)(v9 + 296) + 64LL))(
                 *(_QWORD *)(v9 + 296),
                 v24,
                 &v21);
          if ( v6 >= 0 )
            v28 = (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, unsigned __int64, int *))(*(_QWORD *)v22 + 48LL))(
                    v22,
                    v24[0],
                    v21 / 0x178,
                    &Srca);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'((PVOID)v9, v13);
      }
      else
      {
        v6 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v6 = -1073741790;
    }
  }
  RtlCopyToUser(a2, &Srca, 4uLL);
  RtlCopyToUser(a3, &v28, 4uLL);
  return (unsigned int)v6;
}
