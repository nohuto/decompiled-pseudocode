/*
 * XREFs of ?AdvanceFrame@CGlobalSurfaceManager@@UEAAJ_N@Z @ 0x180079110
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x1800792F0 (-OpenDxBltEvent@@YAJ_KPEAPEAX@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x18007962C (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalSurfaceManager::AdvanceFrame(CGlobalSurfaceManager *this, char a2)
{
  char *v3; // rcx
  __int64 v4; // rsi
  _QWORD *i; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  int v8; // esi
  _DWORD *v9; // rbx
  __int64 v10; // r14
  __int64 result; // rax
  _QWORD *v12; // rcx
  __int64 v13; // r15
  int v14; // eax
  int v15; // ebp
  __int64 v16; // rax
  HANDLE hEvent; // [rsp+50h] [rbp+8h] BYREF

  v3 = (char *)this + 152;
  if ( *((_QWORD *)v3 + 26) )
  {
    if ( ++*((_DWORD *)v3 + 54) <= 8u )
    {
      if ( !a2 )
        goto LABEL_2;
    }
    else
    {
      ++*((_DWORD *)v3 + 56);
    }
    CLegacySurfaceManager::ReleaseCaptureBitsResponse((CLegacySurfaceManager *)v3);
  }
LABEL_2:
  v4 = 0LL;
  for ( i = (_QWORD *)((char *)this + 328); (unsigned int)v4 < *((_DWORD *)this + 88); v4 = (unsigned int)(v4 + 1) )
  {
    v12 = (_QWORD *)*i;
    hEvent = 0LL;
    if ( (int)OpenDxBltEvent(v12[v4], &hEvent) >= 0 )
    {
      SetEvent(hEvent);
      CloseHandle(hEvent);
    }
  }
  v6 = (_QWORD *)*i;
  *((_DWORD *)this + 88) = 0;
  if ( v6 != *((_QWORD **)this + 42) )
  {
    operator delete(v6);
    *((_QWORD *)this + 41) = *((_QWORD *)this + 42);
    *((_DWORD *)this + 87) = *((_DWORD *)this + 86);
  }
  v7 = *(_QWORD *)(*((_QWORD *)g_pComposition + 708) + 24LL);
  if ( v7 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 56LL))(v16);
  }
  v8 = 0;
  v9 = (_DWORD *)((char *)this + 320);
  v10 = 0LL;
  if ( *((_DWORD *)this + 80) )
  {
    do
    {
      v13 = *(_QWORD *)(*((_QWORD *)this + 37) + 8 * v10);
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13);
      v15 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x183u, 0LL);
      if ( !v8 || v8 >= 0 && v15 < 0 )
        v8 = v15;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < *v9 );
    v9 = (_DWORD *)((char *)this + 320);
  }
  result = (unsigned int)v8;
  *v9 = 0;
  return result;
}
