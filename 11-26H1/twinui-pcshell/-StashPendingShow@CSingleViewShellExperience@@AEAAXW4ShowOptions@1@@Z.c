/*
 * XREFs of ?StashPendingShow@CSingleViewShellExperience@@AEAAXW4ShowOptions@1@@Z @ 0x18001EED4
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18002050C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800207AC (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSingleViewShellExperience::StashPendingShow(__int64 a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)(a1 + 64) = 1LL;
  if ( (a2 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 68) = 1;
    result = 1LL;
  }
  if ( (a2 & 2) != 0 )
  {
    result = (unsigned int)result | 2;
    *(_DWORD *)(a1 + 68) = result;
  }
  if ( (a2 & 4) != 0 )
  {
    result = (unsigned int)result | 4;
    *(_DWORD *)(a1 + 68) = result;
  }
  if ( (a2 & 8) != 0 )
  {
    result = (unsigned int)result | 8;
    *(_DWORD *)(a1 + 68) = result;
  }
  return result;
}
