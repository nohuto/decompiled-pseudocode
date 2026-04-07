/*
 * XREFs of ?_LookupAnimationClockIdFromStoryboard@CAnimationScheduler@@AEAAJHPEBU_GUID@@PEAU2@PEAH@Z @ 0x18003F254
 * Callers:
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x18003F114 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationScheduler::_LookupAnimationClockIdFromStoryboard(
        CAnimationScheduler *this,
        int a2,
        const struct _GUID *a3,
        struct _GUID *a4,
        int *a5)
{
  unsigned int v5; // ecx
  unsigned int i; // r8d
  __int64 v10; // rdx
  __int64 v11; // rdx

  v5 = 0;
  *a4 = GUID_NULL;
  if ( a5 )
    *a5 = 1;
  for ( i = 0; ; ++i )
  {
    if ( i >= 0xD )
      return (unsigned int)CoCreateGuid(a4);
    if ( dword_180114C40[10 * i] == a2 )
    {
      v10 = *(_QWORD *)&dword_180114C40[10 * i + 1] - *(_QWORD *)&GUID_NULL.Data1;
      if ( !v10 )
        v10 = *(_QWORD *)&dword_180114C40[10 * i + 3] - *(_QWORD *)GUID_NULL.Data4;
      if ( !v10 )
        break;
      if ( a3 )
      {
        v11 = *(_QWORD *)&dword_180114C40[10 * i + 1] - *(_QWORD *)&a3->Data1;
        if ( !v11 )
          v11 = *(_QWORD *)&dword_180114C40[10 * i + 3] - *(_QWORD *)a3->Data4;
        if ( !v11 )
          break;
      }
    }
  }
  *a4 = *(struct _GUID *)&dword_180114C40[10 * i + 5];
  if ( a5 )
    *a5 = dword_180114C40[10 * i + 9];
  return v5;
}
