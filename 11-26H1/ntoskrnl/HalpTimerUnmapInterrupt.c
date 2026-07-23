/*
 * XREFs of HalpTimerUnmapInterrupt @ 0x1405854D0
 * Callers:
 *     HalpTimerInitializeClock @ 0x14058396C (HalpTimerInitializeClock.c)
 *     HalpTimerConfigureInterrupt @ 0x140583F1C (HalpTimerConfigureInterrupt.c)
 *     HalpTimerTestHypervisorTimer @ 0x14058702C (HalpTimerTestHypervisorTimer.c)
 * Callees:
 *     HalpInterruptApplyOverrides @ 0x140433248 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x14043349C (HalpInterruptGsiToLine.c)
 *     HalpInterruptLineToGsi @ 0x140435864 (HalpInterruptLineToGsi.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpInterruptUnmap @ 0x140783D18 (HalpInterruptUnmap.c)
 */

void __fastcall HalpTimerUnmapInterrupt(__int64 a1, int a2, int a3, char a4)
{
  int v4; // edi
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // eax
  int v12[4]; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v13[3]; // [rsp+40h] [rbp-39h] BYREF
  int v14; // [rsp+4Ch] [rbp-2Dh] BYREF
  int v15[6]; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v16; // [rsp+68h] [rbp-11h]
  int v17; // [rsp+6Ch] [rbp-Dh]
  int v18; // [rsp+70h] [rbp-9h]
  int v19; // [rsp+74h] [rbp-5h]
  _DWORD v20[10]; // [rsp+78h] [rbp-1h] BYREF

  v4 = *(_DWORD *)(a1 + 184);
  *(_QWORD *)v12 = 0LL;
  if ( (v4 & 0x40) != 0 )
  {
    v9 = v4 & 0xFFFFFFBF;
    *(_DWORD *)(a1 + 184) = v9;
    memset_0(v13, 0, 0x58uLL);
    v13[1] = a2;
    v16 = v16 & 0xC0000000 | a3 & 0x3FFFFFFF | 0x40000000;
    if ( a4 || (v9 & 0x10) != 0 )
    {
      v17 = *(_DWORD *)(a1 + 236);
      v18 = *(_DWORD *)(a1 + 232);
      v19 = *(_DWORD *)(a1 + 240);
      v13[0] = 3;
      v15[0] = 1;
      v14 = 0;
LABEL_15:
      HalpInterruptUnmap(
        **(_DWORD **)(a1 + 288),
        *(_DWORD *)(*(_QWORD *)(a1 + 288) + 4LL),
        *(_QWORD *)(a1 + 288) + 8,
        0,
        (__int64)v13,
        1);
      return;
    }
    v10 = *(_DWORD *)(a1 + 224);
    if ( (v10 & 0x200) != 0 )
    {
      if ( (int)HalpInterruptGsiToLine(*(unsigned int *)(a1 + 88), v12) < 0 )
        return;
    }
    else if ( (v10 & 0x100) != 0 )
    {
      v11 = *(_DWORD *)(a1 + 84);
      if ( v11 >= 8 )
      {
        v12[0] = 45057;
        v11 -= 8;
      }
      else
      {
        v12[0] = 45056;
      }
      v12[1] = v11;
    }
    v15[0] = *(_DWORD *)(a1 + 96);
    v14 = *(_DWORD *)(a1 + 92);
    v13[0] = 0;
    HalpInterruptApplyOverrides(v12, &v14, v15);
    if ( (int)HalpInterruptLineToGsi(v12, v20) >= 0 )
      goto LABEL_15;
  }
}
