/*
 * XREFs of GreGetPaletteEntries @ 0x140185300
 * Callers:
 *     <none>
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1401853D0 (--1EPALOBJ@@QEAA@XZ.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall GreGetPaletteEntries(__int64 a1, __int64 a2, unsigned int a3, void *a4)
{
  __int64 v4; // rsi
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // rbx
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned int)a2;
  LOBYTE(a2) = 8;
  v7 = HmgShareLockCheck(a1, a2);
  v8 = 0;
  v13[0] = v7;
  v9 = v7;
  if ( v7 )
  {
    if ( a4 )
    {
      v10 = *(_DWORD *)(v7 + 28);
      if ( (unsigned int)v4 < v10 )
      {
        v11 = v10 - v4;
        if ( a3 > v11 )
          a3 = v11;
        memmove(a4, (const void *)(*(_QWORD *)(v9 + 112) + 4 * v4), 4LL * a3);
        v8 = a3;
      }
    }
    else
    {
      v8 = *(_DWORD *)(v7 + 28);
    }
    DEC_SHARE_REF_CNT(v9);
    return v8;
  }
  else
  {
    EngSetLastError(6u);
    EPALOBJ::~EPALOBJ((EPALOBJ *)v13);
    return 0LL;
  }
}
