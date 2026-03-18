/*
 * XREFs of ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x140244704
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1400872B4 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x140088A18 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x14008982C (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x140225CB8 (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall _TTUpdateBestTarget(
        struct tagPNTRWINDOWHITTTESTARGS *a1,
        struct tagWND *a2,
        int a3,
        const struct tagPOINT *a4,
        struct tagRECT *a5,
        int a6,
        struct tagRECT *a7,
        __int16 a8)
{
  struct tagRECT *v9; // rax
  struct tagRECT *v10; // rdi
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  const struct _D3DMATRIX *v17; // rcx

  *((_QWORD *)a1 + 7) = *(_QWORD *)a2;
  v9 = a5;
  *((_DWORD *)a1 + 16) = a3;
  if ( !a5 )
    v9 = (struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL);
  v10 = (struct tagRECT *)((char *)a1 + 68);
  *(struct tagRECT *)((char *)a1 + 68) = *v9;
  if ( a4 )
    *((struct tagPOINT *)a1 + 6) = *a4;
  v11 = *((_DWORD *)a1 + 44);
  v12 = v11 & 0xFFFFFFFE;
  v13 = v11 | 1;
  if ( !a6 )
    v13 = v12;
  v14 = v13;
  v15 = v13 | 2;
  v16 = v14 & 0xFFFFFFFD;
  if ( a8 != 3 )
    v15 = v16;
  *((_DWORD *)a1 + 44) = v15;
  if ( (*((_DWORD *)a2 + 95) & 0x40000000) == 0
    && !(unsigned int)IntersectRect(v10, &v10->left, &a7->left)
    && !gbIgnoreStressedOutStuff )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2230LL);
  }
  if ( *((_DWORD *)a1 + 21) )
  {
    v17 = (const struct _D3DMATRIX *)*((_QWORD *)a1 + 12);
    if ( v17 )
    {
      *((_DWORD *)a1 + 12) = (int)(float)((float)*((int *)a1 + 12) * v17->_11);
      *((_DWORD *)a1 + 13) = (int)(float)((float)*((int *)a1 + 13) * v17->_22);
      TransformRect(v17, v10, 0);
    }
  }
}
