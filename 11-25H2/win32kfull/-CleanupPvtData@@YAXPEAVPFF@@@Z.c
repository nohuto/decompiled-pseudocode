/*
 * XREFs of ?CleanupPvtData@@YAXPEAVPFF@@@Z @ 0x14030FDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CleanupPvtData(struct PFF *a1)
{
  unsigned int CurrentThreadId; // eax
  __int64 v3; // rcx
  __int64 v4; // r8

  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v3 = *((_QWORD *)a1 + 19);
  v4 = v3;
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 8) & 4) != 0 && *(_DWORD *)(v3 + 12) == CurrentThreadId )
    {
      *((_QWORD *)a1 + 19) = *(_QWORD *)(v3 + 16);
LABEL_10:
      Win32FreePool((void *)v3);
    }
    else
    {
      while ( 1 )
      {
        v3 = *(_QWORD *)(v3 + 16);
        if ( !v3 )
          break;
        if ( (*(_DWORD *)(v3 + 8) & 4) != 0 && *(_DWORD *)(v3 + 12) == CurrentThreadId )
        {
          *(_QWORD *)(v4 + 16) = *(_QWORD *)(v3 + 16);
          goto LABEL_10;
        }
        v4 = v3;
      }
    }
  }
}
