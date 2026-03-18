/*
 * XREFs of DrvUniformSpaceToPixelSpacePoint @ 0x14010F5A0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x14010DA60 (PtInRect.c)
 */

__int64 __fastcall DrvUniformSpaceToPixelSpacePoint(_DWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // ebp
  _DWORD *v11; // rsi
  int v12; // r8d
  __int64 v13; // r9
  int v14; // r10d
  int v15; // r11d
  float v16; // xmm3_4
  unsigned __int64 v17; // [rsp+50h] [rbp+18h]

  v5 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3) + 56968) + 16LL);
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v7) + 88) + 1248LL) && v6 && (*(_DWORD *)(v6 + 16) & 2) != 0 )
  {
    v9 = 0;
    v10 = *(_DWORD *)(v6 + 20);
    LODWORD(v17) = *a1;
    HIDWORD(v17) = *a2;
    while ( v9 < v10 )
    {
      v11 = (_DWORD *)(56LL * v9 + v6);
      if ( PtInRect(v11 + 19, v17) )
      {
        v5 = 1;
        v16 = (float)((float)((float)(*(_DWORD *)(v13 + v6 + 68) - *(_DWORD *)(v13 + v6 + 60))
                            / (float)(v11[22] - v11[20]))
                    * (float)(v14 - v11[20]))
            + 0.5;
        *a1 = *(_DWORD *)(v13 + v6 + 56)
            + (int)(float)((float)((float)((float)(*(_DWORD *)(v13 + v6 + 64) - *(_DWORD *)(v13 + v6 + 56))
                                         / (float)(v11[21] - v11[19]))
                                 * (float)(v15 - v11[19]))
                         + 0.5);
        *a2 = *(_DWORD *)(v13 + v6 + 60) + (int)v16;
        return v5;
      }
      v9 = v12 + 1;
    }
  }
  return v5;
}
