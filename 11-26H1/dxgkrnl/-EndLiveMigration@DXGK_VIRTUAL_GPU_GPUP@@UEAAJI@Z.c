/*
 * XREFs of ?EndLiveMigration@DXGK_VIRTUAL_GPU_GPUP@@UEAAJI@Z @ 0x1403FA8C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DdiStopDirtyTracking@ADAPTER_RENDER@@QEAAJQEAX@Z @ 0x1401B2DC0 (-DdiStopDirtyTracking@ADAPTER_RENDER@@QEAAJQEAX@Z.c)
 *     ?DdiEndLiveMigration@ADAPTER_RENDER@@QEAAJI@Z @ 0x1403FAA44 (-DdiEndLiveMigration@ADAPTER_RENDER@@QEAAJI@Z.c)
 *     ?DestroyLiveMigrationState@DXGK_VIRTUAL_GPU_GPUP@@QEAAXXZ @ 0x1403FACB0 (-DestroyLiveMigrationState@DXGK_VIRTUAL_GPU_GPUP@@QEAAXXZ.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::EndLiveMigration(DXGK_VIRTUAL_GPU_GPUP *this, unsigned int a2)
{
  unsigned int v4; // esi
  int v5; // eax
  __int64 v6; // rbx
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rbx

  v4 = 0;
  if ( *((_DWORD *)this + 42) )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 5168LL) & 2;
    do
    {
      if ( !v8 )
      {
        v9 = *((_QWORD *)this + 23);
        v10 = 112LL * v4;
        if ( *(_DWORD *)(v10 + v9 + 104) )
        {
          if ( *(_DWORD *)(v10 + v9 + 88) )
          {
            v11 = ADAPTER_RENDER::DdiStopDirtyTracking(*((ADAPTER_RENDER **)this + 1), *(void *const *)(v10 + v9 + 96));
            *(_DWORD *)(*((_QWORD *)this + 23) + v10 + 88) = 0;
            if ( v11 < 0 )
            {
              v12 = v11;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 1020;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"DxgkDdiStopDirtyTracking failed. Status: 0x%I64x",
                v12,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
        }
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 42) );
  }
  if ( *((_BYTE *)this + 334) )
  {
    v5 = ADAPTER_RENDER::DdiEndLiveMigration(*((ADAPTER_RENDER **)this + 1), a2);
    if ( v5 < 0 )
    {
      v6 = v5;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1031;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DdiEndLiveMigration failed. Status: 0x%I64x",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *((_BYTE *)this + 334) = 0;
  }
  DXGK_VIRTUAL_GPU_GPUP::DestroyLiveMigrationState(this);
  return 0LL;
}
