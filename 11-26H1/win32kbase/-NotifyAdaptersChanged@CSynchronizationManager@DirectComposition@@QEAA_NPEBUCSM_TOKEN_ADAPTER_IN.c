/*
 * XREFs of ?NotifyAdaptersChanged@CSynchronizationManager@DirectComposition@@QEAA_NPEBUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1401636E8
 * Callers:
 *     DCompositionNotifyAdaptersChanged @ 0x140163690 (DCompositionNotifyAdaptersChanged.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

char __fastcall DirectComposition::CSynchronizationManager::NotifyAdaptersChanged(
        DirectComposition::CSynchronizationManager *this,
        const struct CSM_TOKEN_ADAPTER_INFO *a2,
        unsigned int a3)
{
  char v4; // bl
  _QWORD *v7; // rax
  __int64 v8; // rdx
  char v9; // al
  __int64 v11; // r8
  __int64 i; // r9
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)this);
  RestartKey = 0LL;
  while ( 1 )
  {
    v7 = RtlEnumerateGenericTableWithoutSplaying(*((PRTL_GENERIC_TABLE *)this + 1), &RestartKey);
    if ( !v7 )
      break;
    v8 = v7[1];
    if ( !v8 )
      break;
    if ( !*(_DWORD *)(v8 + 16) )
      goto LABEL_5;
    v11 = 0LL;
LABEL_9:
    if ( (unsigned int)v11 < *(_DWORD *)(v8 + 20) )
    {
      for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v8 + 72) + 8 * v11) == *((_QWORD *)a2 + 3 * i) )
        {
          v11 = (unsigned int)(v11 + 1);
          goto LABEL_9;
        }
      }
      *(_DWORD *)(v8 + 16) = 0;
      v9 = 1;
    }
    else
    {
LABEL_5:
      v9 = 0;
    }
    v4 |= v9;
  }
  ExReleaseResourceLite(*(PERESOURCE *)this);
  KeLeaveCriticalRegion();
  return v4;
}
