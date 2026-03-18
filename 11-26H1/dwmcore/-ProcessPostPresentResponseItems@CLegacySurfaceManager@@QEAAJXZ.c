/*
 * XREFs of ?ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ @ 0x180186840
 * Callers:
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x18022DED0 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessPostPresentResponseItems(CLegacySurfaceManager *this)
{
  int v2; // edi
  unsigned int v3; // esi
  __int64 result; // rax
  __int64 v5; // r14
  int v6; // eax
  int v7; // ebp

  v2 = 0;
  v3 = 0;
  if ( *((_DWORD *)this + 42) )
  {
    do
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * v3);
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
      v7 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x183u, 0LL);
      if ( !v2 || v2 >= 0 && v7 < 0 )
        v2 = v7;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 42) );
    result = (unsigned int)v2;
    *((_DWORD *)this + 42) = 0;
  }
  else
  {
    *((_DWORD *)this + 42) = 0;
    return 0LL;
  }
  return result;
}
