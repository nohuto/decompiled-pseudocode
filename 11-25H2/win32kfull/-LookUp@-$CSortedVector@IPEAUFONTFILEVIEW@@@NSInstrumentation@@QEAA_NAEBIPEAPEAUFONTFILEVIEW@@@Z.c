/*
 * XREFs of ?LookUp@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z @ 0x1400B1E6C
 * Callers:
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B1D68 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z @ 0x1400B58A4 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z.c)
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1401E24AC (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140203EF8 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140332708 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::LookUp(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  int i; // eax
  unsigned __int64 v7; // r8
  __int64 v8; // r11
  unsigned __int64 v9; // rcx
  unsigned int v10; // esi
  unsigned __int64 v11; // rdx
  __int64 v13; // rdx

  _InterlockedAdd((volatile signed __int32 *)(a1 + 24), 1u);
  for ( i = *(_DWORD *)(a1 + 28); i; i = *(_DWORD *)(a1 + 28) )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(a1 + 24)) <= 0
      && *(_DWORD *)(a1 + 28)
      && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), 1, 0) == -1 )
    {
      _InterlockedExchange((volatile __int32 *)(a1 + 16), 1);
      KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(a1, 0LL);
    ExReleasePushLockSharedEx(a1, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedAdd((volatile signed __int32 *)(a1 + 24), 1u);
  }
  v7 = *(_QWORD *)(a1 + 40);
  if ( !v7 )
    goto LABEL_29;
  v8 = *(_QWORD *)(a1 + 48);
  v9 = 0LL;
  v10 = *a2;
  v11 = *(_QWORD *)(a1 + 40);
  do
  {
    if ( *(_DWORD *)(v8 + 16 * ((v11 >> 1) + v9)) < v10 )
    {
      v9 += (v11 >> 1) + 1;
      v11 += -1LL - (v11 >> 1);
    }
    else
    {
      v11 >>= 1;
    }
  }
  while ( v11 );
  if ( v9 < v7 && (v13 = v8 + 16 * v9, *(_DWORD *)v13 == v10) && v13 )
  {
    *a3 = *(_QWORD *)(v13 + 8);
    if ( _InterlockedDecrement((volatile signed __int32 *)(a1 + 24)) <= 0
      && *(_DWORD *)(a1 + 28)
      && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), 1, 0) == -1 )
    {
      _InterlockedExchange((volatile __int32 *)(a1 + 16), 1);
      KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
    }
    return 1;
  }
  else
  {
LABEL_29:
    if ( _InterlockedDecrement((volatile signed __int32 *)(a1 + 24)) <= 0
      && *(_DWORD *)(a1 + 28)
      && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), 1, 0) == -1 )
    {
      _InterlockedExchange((volatile __int32 *)(a1 + 16), 1);
      KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
    }
    return 0;
  }
}
