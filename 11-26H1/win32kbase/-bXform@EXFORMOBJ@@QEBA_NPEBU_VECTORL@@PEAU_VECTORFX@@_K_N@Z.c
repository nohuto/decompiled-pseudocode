/*
 * XREFs of ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU_VECTORFX@@_K_N@Z @ 0x1401F17C0
 * Callers:
 *     ?bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x140149598 (-bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     bCvtVts @ 0x14013C958 (bCvtVts.c)
 */

bool __fastcall EXFORMOBJ::bXform(
        EXFORMOBJ *this,
        const struct _VECTORL *a2,
        struct _VECTORFX *a3,
        __int64 a4,
        char a5)
{
  const struct _VECTORL *v9; // r8
  __int64 v10; // rdi
  int v11; // edx
  int v13; // ebx

  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 2) != 0 )
  {
    v9 = (const struct _VECTORL *)((char *)a2 + 8 * a4);
    if ( a2 >= v9 )
    {
      return 1;
    }
    else
    {
      v10 = a3 - a2;
      while ( (unsigned int)(*(_DWORD *)a2 + 134217726) <= 0xFFFFFFC )
      {
        v11 = *((_DWORD *)a2 + 1);
        if ( (unsigned int)(v11 + 134217726) > 0xFFFFFFC )
          break;
        *(_DWORD *)((char *)a2 + v10) = 16 * *(_DWORD *)a2;
        *(_DWORD *)((char *)a2 + v10 + 4) = 16 * v11;
        a2 = (const struct _VECTORL *)((char *)a2 + 8);
        if ( a2 >= v9 )
          return 1;
      }
      EngSetLastError(0x216u);
      return 0;
    }
  }
  else
  {
    v13 = bCvtVts(*(_QWORD *)this, (int *)a2, (int *)a3, a4, a5);
    if ( !v13 )
      EngSetLastError(0x216u);
    return v13 != 0;
  }
}
