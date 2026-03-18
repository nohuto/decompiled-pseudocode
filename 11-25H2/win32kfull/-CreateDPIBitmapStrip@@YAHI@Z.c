/*
 * XREFs of ?CreateDPIBitmapStrip@@YAHI@Z @ 0x140054630
 * Callers:
 *     CreateBitmapStrip @ 0x1400C0830 (CreateBitmapStrip.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140192EA0 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     DrawFrameControl @ 0x140054934 (DrawFrameControl.c)
 *     FillRect @ 0x1400557E0 (FillRect.c)
 *     GreCreateCompatibleBitmapEx @ 0x14007C0C0 (GreCreateCompatibleBitmapEx.c)
 *     BitBltSysBmp @ 0x14019276C (BitBltSysBmp.c)
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z @ 0x140192AB4 (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z.c)
 */

__int64 __fastcall CreateDPIBitmapStrip(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _tagOEMBITMAPSET *v5; // rsi
  unsigned int v6; // ebp
  HDC v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int16 *v15; // rsi
  __int16 *v16; // r14
  __int64 v17; // r13
  LONG v18; // edi
  LONG v19; // r12d
  int v20; // r8d
  __int16 v21; // bx
  LONG v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  HBRUSH v26; // r8
  int v27; // r12d
  int v28; // ebx
  int v29; // edi
  int DpiDependentMetric; // eax
  __int64 v31; // rcx
  RECT v32; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v33[16]; // [rsp+40h] [rbp-38h] BYREF

  v2 = a1;
  v32 = 0LL;
  v5 = (struct _tagOEMBITMAPSET *)(W32GetUserSessionState(a1, a2) + 760LL * (unsigned int)a1 + 43288);
  if ( v2 )
  {
    v6 = 24 * (v2 + 3);
  }
  else
  {
    v4 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19872);
    v6 = *(unsigned __int16 *)(v4 + 6998);
  }
  v7 = *(HDC *)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 56968) + 72LL);
  EnsureOemBitmapInfoForDpiSlot(v5, v6);
  UserSessionState = W32GetUserSessionState(v9, v8);
  result = GreCreateCompatibleBitmapEx(*(HDC *)(*(_QWORD *)(UserSessionState + 56968) + 64LL), 0LL, 0LL);
  v12 = result;
  if ( result )
  {
    GreSetBitmapOwner(result, 0LL);
    GreSelectBitmap(v7, v12);
    if ( *(_QWORD *)v5 )
      GreDeleteObject(*(_QWORD *)v5);
    *(_QWORD *)v5 = v12;
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v33);
    v15 = (__int16 *)((char *)v5 + 16);
    v16 = (__int16 *)&unk_140350CE2;
    v17 = 93LL;
    do
    {
      if ( v15[2] )
      {
        v18 = *v15;
        v19 = v15[1];
        v20 = (unsigned __int16)*(v16 - 1);
        v21 = *v16;
        v32.right = v18 + v15[2];
        v22 = v19 + v15[3];
        v32.left = v18;
        v32.top = v19;
        v32.bottom = v22;
        if ( v20 == 0xFFFF )
        {
          if ( (v21 & 1) != 0 )
          {
            if ( *(_DWORD *)(W32GetUserSessionState(v14, v13) + 43264)
              || (v24 = *(_DWORD *)(W32GetUserSessionState(v24, v23) + 66804) & 0x80000010, (_DWORD)v24 != -2147483632) )
            {
              v31 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 19872);
              if ( (v21 & 0x100) != 0 )
                v26 = *(HBRUSH *)(v31 + 4720);
              else
                v26 = *(HBRUSH *)(v31 + 4712);
            }
            else
            {
              v25 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 19872);
              if ( (v21 & 0x100) != 0 )
                v26 = *(HBRUSH *)(v25 + 4920);
              else
                v26 = *(HBRUSH *)(v25 + 4912);
            }
            FillRect(v7, &v32, v26);
            v27 = v19 + 2;
            BitBltSysBmp(v7, v18 + 2, v27, 0);
            v28 = GetDpiDependentMetric(12, v6) + v18;
            BitBltSysBmp(v7, v28, v27, 0);
            v29 = v28 + GetDpiDependentMetric(12, v6);
            BitBltSysBmp(v7, v29, v27, 0);
            DpiDependentMetric = GetDpiDependentMetric(12, v6);
            BitBltSysBmp(v7, v29 + DpiDependentMetric, v27, 0);
          }
        }
        else
        {
          DrawFrameControl(v7);
        }
      }
      v15 += 4;
      v16 += 2;
      --v17;
    }
    while ( v17 );
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v33);
    return 1LL;
  }
  return result;
}
