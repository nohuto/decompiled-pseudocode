/*
 * XREFs of MulProcessChildRedirectionDfbSurfaces @ 0x140334210
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x14009A8F4 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall MulProcessChildRedirectionDfbSurfaces(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _BYTE v13[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v13);
  LOBYTE(v2) = 5;
  v14 = HmgShareLock(a1, v2, v3, v4);
  v5 = 1;
  v6 = 0LL;
  v7 = *(__int64 **)(v14 + 24);
  v8 = *v7;
  while ( (unsigned int)v6 < *(_DWORD *)(v8 + 16) )
  {
    v9 = *(_QWORD *)(v7[1] + 8 * v6);
    v10 = *(_DWORD *)(v9 + 92);
    v11 = v9 - 24;
    if ( (v10 & 1) != 0 && !pProcessDfbSurfacesInternal(v11, 1LL) )
    {
      v5 = 0;
      break;
    }
    v6 = (unsigned int)(v6 + 1);
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v13);
  return v5;
}
