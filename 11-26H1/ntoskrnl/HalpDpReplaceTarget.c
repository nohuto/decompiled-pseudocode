/*
 * XREFs of HalpDpReplaceTarget @ 0x140BF4530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140BF3ED0 (HalpDpOfflineProcessorForReplace.c)
 */

__int64 __fastcall HalpDpReplaceTarget(__int64 a1, __int64 a2)
{
  int v2; // esi
  unsigned int v4; // edi
  int v5; // eax
  int v6; // esi
  unsigned int v7; // edi
  __int64 result; // rax

  v2 = *(_DWORD *)a1;
  v4 = 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
  v5 = *(_DWORD *)(a1 + 48);
  v6 = v2 + 1;
  while ( v5 < v6 )
  {
    if ( (++v4 & dword_140FBB3DC) != 0 || !qword_140FBB3E0 )
      _mm_pause();
    else
      guard_dispatch_icall_no_overrides(v4, a2);
    v5 = *(_DWORD *)(a1 + 48);
  }
  if ( !*(_BYTE *)(a1 + 68) )
    HalpDpOfflineProcessorForReplace(a1);
  v7 = 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 52);
    if ( (int)result >= v6 )
      break;
    if ( (++v7 & dword_140FBB3DC) != 0 || !qword_140FBB3E0 )
      _mm_pause();
    else
      guard_dispatch_icall_no_overrides(v7, a2);
  }
  return result;
}
